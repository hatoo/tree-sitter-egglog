module.exports = grammar({
  name: 'egglog',

  extras: $ => [
    /\s/,
    /;[^\n\r]*[\n\r]*/
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => $.expr,

    lparen: $ => choice("(", "["),
    rparen: $ => choice(")", "]"),

    list: $ => seq($.lparen, repeat($.expr), $.rparen),
    comma: $ => repeat1(seq($.expr, ",")),

    command: $ => choice(
      seq($.lparen, "set-option", $.ident, $.expr, $.rparen),
    ),

    expr: $ => choice($.ident, $.literal, $.callexpr),

    literal : $ => choice($.num, $.f64, $.symstring),

    callexpr: $ => seq($.lparen, $.ident, repeat($.expr), $.rparen),

    num: $ => /(-)?[0-9]+/,
    unum: $ => /[0-9]+/,
    f64: $ => choice(
      "NaN",
      /(-)?[0-9]+\.[0-9]+(e(\+)?(-)?[0-9]+)?/,
      "inf",
      "-inf"
    ),
    ident: $ => /(([[a-zA-z_]][\w-]*)|([-+*/?!=<>&|^/%_]))+/,
    symstring: $ => $.string,
    string: $ => /"("[^"]*")+"/
  }
});
