const list = ($, item) => seq($.lparen, repeat(item), $.rparen);

module.exports = grammar({
  name: "egglog",

  extras: ($) => [/\s/, /;[^\n\r]*[\n\r]*/],

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => $.expr,

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
          optional(":merge", $.expr),
          $.rparen
        ),
        seq($.lparen, "declare", $.ident, $.ident, $.rparen)
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

    schema: ($) => seq(list($, $.type), $.type),

    expr: ($) => choice($.literal, $.ident, $.callexpr),

    literal: ($) => choice($.num, $.f64, $.symstring),

    callexpr: ($) => seq($.lparen, $.ident, repeat($.expr), $.rparen),

    exprlist: ($) => seq($.lparen, repeat($.expr), $.rparen),

    variant: ($) => seq($.ident, repeat($.type), optional($.cost), $.rparen),

    type: ($) => choice($.ident),

    num: ($) => /(-)?[0-9]+/,
    unum: ($) => /[0-9]+/,
    f64: ($) =>
      choice("NaN", /(-)?[0-9]+\.[0-9]+(e(\+)?(-)?[0-9]+)?/, "inf", "-inf"),
    ident: ($) => /(([[a-zA-z_]][\w-]*)|([-+*/?!=<>&|^/%_]))+/,
    symstring: ($) => $.string,
    string: ($) => /"("[^"]*")+"/,
  },
});
