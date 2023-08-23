const list = ($, item) => seq($.lparen, repeat(item), $.rparen);

module.exports = grammar({
  name: "egglog",

  extras: ($) => [/\s/, /;[^\n\r]*[\n\r]*/],

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($.command),

    lparen: ($) => choice("(", "["),
    rparen: ($) => choice(")", "]"),

    comma: ($) => repeat1(seq($.expr, ",")),

    command: ($) =>
      choice(
        seq($.lparen, "set-option", $.ident, $.expr, $.rparen),
        seq($.lparen, "datatype", $.ident, repeat($.variant), $.rparen),
        seq(
          $.lparen,
          "sort",
          $.ident,
          $.lparen,
          $.ident,
          repeat($.expr),
          $.rparen,
          $.rparen
        ),
        seq($.lparen, "sort", $.ident, $.rparen),
        seq(
          $.lparen,
          "function",
          $.ident,
          $.schema,
          optional($.cost),
          optional(":unextractable"),
          optional(seq(":on_merge", list($, $.action))),
          optional(seq(":merge", $.expr)),
          $.rparen
        ),
        seq($.lparen, "declare", $.ident, $.ident, $.rparen),
        seq($.lparen, "relation", $.ident, list($, $.type), $.rparen),
        seq($.lparen, "ruleset", $.ident, $.rparen),
        seq(
          $.lparen,
          "rule",
          list($, $.fact),
          list($, $.action),
          optional(seq(":ruleset", $.ident)),
          optional(seq(":name", $.string)),
          $.rparen
        ),
        seq(
          $.lparen,
          "rewrite",
          $.expr,
          $.expr,
          optional(seq(":when", list($, $.fact))),
          optional(seq(":ruleset", $.ident)),
          $.rparen
        ),
        seq(
          $.lparen,
          "birewrite",
          $.expr,
          $.expr,
          optional(seq(":when", list($, $.fact))),
          optional(seq(":ruleset", $.ident)),
          $.rparen
        ),
        seq($.lparen, "let", $.ident, $.expr, $.rparen),
        $.nonletaction,
        seq(
          $.lparen,
          "run",
          $.unum,
          optional(seq(":until", repeat($.fact))),
          $.rparen
        ),
        seq(
          $.lparen,
          "run",
          $.ident,
          $.unum,
          optional(seq(":until", repeat($.fact))),
          $.rparen
        ),
        seq($.lparen, "simplify", $.schedule, $.expr, $.rparen),
        seq($.lparen, "add-ruleset", $.ident, $.rparen),
        seq(
          $.lparen,
          "calc",
          $.lparen,
          repeat($.identsort),
          $.rparen,
          repeat1($.expr),
          $.rparen
        ),
        seq(
          $.lparen,
          "query-extract",
          optional(seq(":variants", $.unum)),
          $.fact,
          $.rparen
        ),
        seq($.lparen, "check", repeat($.fact), $.rparen),
        seq($.lparen, "check-proof", $.rparen),
        seq($.lparen, "run-schedule", repeat($.schedule), $.rparen),
        seq($.lparen, "push", optional($.unum), $.rparen),
        seq($.lparen, "pop", optional($.unum), $.rparen),
        seq($.lparen, "print-table", $.ident, optional($.unum), $.rparen),
        seq($.lparen, "print-size", $.ident, $.rparen),
        seq($.lparen, "input", $.ident, $.string, $.rparen),
        seq($.lparen, "output", $.string, repeat1($.expr), $.rparen),
        seq($.lparen, "fail", $.command, $.rparen),
        seq($.lparen, "include", $.string, $.rparen)
      ),

    schedule: ($) =>
      choice(
        seq($.lparen, "saturate", repeat($.schedule), $.rparen),
        seq($.lparen, "seq", repeat($.schedule), $.rparen),
        seq($.lparen, "repeat", $.unum, repeat($.schedule), $.rparen),
        seq($.lparen, "run", optional(seq(":until", repeat($.fact))), $.rparen),
        seq(
          $.lparen,
          "run",
          $.ident,
          optional(seq(":until", repeat($.fact))),
          $.rparen
        ),
        seq($.ident)
      ),

    cost: ($) => seq(":cost", $.unum),

    nonletaction: ($) =>
      choice(
        seq(
          $.lparen,
          $.lparen,
          "set",
          $.ident,
          repeat($.expr),
          $.rparen,
          $.expr,
          $.rparen
        ),
        seq(
          $.lparen,
          "delete",
          $.lparen,
          $.ident,
          repeat($.expr),
          $.rparen,
          $.rparen
        ),
        seq($.lparen, "union", $.expr, $.expr, $.rparen),
        seq($.lparen, "panic", $.string, $.rparen),
        seq($.lparen, "extract", $.expr, $.rparen),
        seq($.lparen, "extract", $.expr, $.expr, $.rparen),
        $.callexpr
      ),

    action: ($) =>
      choice(seq($.lparen, "let", $.ident, $.expr, $.rparen), $.nonletaction),

    name: ($) => seq("[", $.ident, "]"),

    fact: ($) =>
      choice(seq($.lparen, "=", repeat1($.expr), $.expr, $.rparen), $.expr),

    schema: ($) => seq(list($, $.type), $.type),

    expr: ($) => choice($.literal, $.ident, $.callexpr),

    literal: ($) => choice($.num, $.f64, $.symstring),

    callexpr: ($) => seq($.lparen, $.ident, repeat($.expr), $.rparen),

    exprlist: ($) => seq($.lparen, repeat($.expr), $.rparen),

    variant: ($) => seq($.ident, repeat($.type), optional($.cost), $.rparen),

    type: ($) => choice($.ident),

    identsort: ($) => seq($.lparen, $.ident, $.type, $.rparen),
    num: ($) => /(-)?[0-9]+/,
    unum: ($) => /[0-9]+/,
    f64: ($) =>
      choice("NaN", /(-)?[0-9]+\.[0-9]+(e(\+)?(-)?[0-9]+)?/, "inf", "-inf"),
    ident: ($) => /(([[a-zA-z_]][\w-]*)|([-+*/?!=<>&|^/%_]))+/,
    symstring: ($) => $.string,
    string: ($) => /"("[^"]*")+"/,
  },
});
