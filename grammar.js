module.exports = grammar({
  name: 'egglog',

  extras: $ => [
    /\s/,
    /;[^\n\r]*[\n\r]*/
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => $.Num,
    _expr: $ => $.Ident,

    LParen: $ => choice("(", "["),
    RParen: $ => choice(")", "]"),

    List: $ => seq($.LParen, repeat($._expr), $.RParen),
    Comma: $ => repeat1(seq($._expr, ",")),

    Command: $ => choice(
    ),

    Num: $ => /(-)?[0-9]+/,
    UNum: $ => /[0-9]+/,
    F64: $ => choice(
      "NaN",
      /(-)?[0-9]+\.[0-9]+(e(\+)?(-)?[0-9]+)?/,
      "inf",
      "-inf"
    ),
    Ident: $ => /(([[a-zA-z_]][\w-]*)|([-+*/?!=<>&|^/%_]))+/,
    SymString: $ => $.String,
    String: $ => /"("[^"]*")+"/
  }
});
