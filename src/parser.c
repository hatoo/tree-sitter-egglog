#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RPAREN = 3,
  anon_sym_RBRACK = 4,
  anon_sym_COMMA = 5,
  anon_sym_set_DASHoption = 6,
  anon_sym_datatype = 7,
  anon_sym_sort = 8,
  anon_sym_COLONcost = 9,
  anon_sym_set = 10,
  anon_sym_delete = 11,
  anon_sym_union = 12,
  anon_sym_panic = 13,
  anon_sym_extract = 14,
  sym_num = 15,
  sym_unum = 16,
  anon_sym_NaN = 17,
  aux_sym_f64_token1 = 18,
  anon_sym_inf = 19,
  anon_sym_DASHinf = 20,
  sym_ident = 21,
  sym_string = 22,
  sym_source_file = 23,
  sym_lparen = 24,
  sym_rparen = 25,
  sym_expr = 26,
  sym_literal = 27,
  sym_callexpr = 28,
  sym_f64 = 29,
  sym_symstring = 30,
  aux_sym_command_repeat2 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_set_DASHoption] = "set-option",
  [anon_sym_datatype] = "datatype",
  [anon_sym_sort] = "sort",
  [anon_sym_COLONcost] = ":cost",
  [anon_sym_set] = "set",
  [anon_sym_delete] = "delete",
  [anon_sym_union] = "union",
  [anon_sym_panic] = "panic",
  [anon_sym_extract] = "extract",
  [sym_num] = "num",
  [sym_unum] = "unum",
  [anon_sym_NaN] = "NaN",
  [aux_sym_f64_token1] = "f64_token1",
  [anon_sym_inf] = "inf",
  [anon_sym_DASHinf] = "-inf",
  [sym_ident] = "ident",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym_lparen] = "lparen",
  [sym_rparen] = "rparen",
  [sym_expr] = "expr",
  [sym_literal] = "literal",
  [sym_callexpr] = "callexpr",
  [sym_f64] = "f64",
  [sym_symstring] = "symstring",
  [aux_sym_command_repeat2] = "command_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_set_DASHoption] = anon_sym_set_DASHoption,
  [anon_sym_datatype] = anon_sym_datatype,
  [anon_sym_sort] = anon_sym_sort,
  [anon_sym_COLONcost] = anon_sym_COLONcost,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_panic] = anon_sym_panic,
  [anon_sym_extract] = anon_sym_extract,
  [sym_num] = sym_num,
  [sym_unum] = sym_unum,
  [anon_sym_NaN] = anon_sym_NaN,
  [aux_sym_f64_token1] = aux_sym_f64_token1,
  [anon_sym_inf] = anon_sym_inf,
  [anon_sym_DASHinf] = anon_sym_DASHinf,
  [sym_ident] = sym_ident,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym_lparen] = sym_lparen,
  [sym_rparen] = sym_rparen,
  [sym_expr] = sym_expr,
  [sym_literal] = sym_literal,
  [sym_callexpr] = sym_callexpr,
  [sym_f64] = sym_f64,
  [sym_symstring] = sym_symstring,
  [aux_sym_command_repeat2] = aux_sym_command_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHoption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datatype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONcost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_panic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extract] = {
    .visible = true,
    .named = false,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [sym_unum] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NaN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_f64_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_inf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHinf] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_lparen] = {
    .visible = true,
    .named = true,
  },
  [sym_rparen] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_callexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_f64] = {
    .visible = true,
    .named = true,
  },
  [sym_symstring] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_command_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 10,
  [15] = 7,
  [16] = 16,
  [17] = 8,
  [18] = 9,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 11,
  [23] = 12,
  [24] = 13,
  [25] = 20,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ';') SKIP(62)
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(338);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead == 's') ADVANCE(346);
      if (lookahead == 'u') ADVANCE(355);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ';') SKIP(9)
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(338);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead == 's') ADVANCE(346);
      if (lookahead == 'u') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ';') SKIP(9)
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(338);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead == 's') ADVANCE(346);
      if (lookahead == 'u') ADVANCE(355);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == ';') SKIP(39)
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == ';') SKIP(39)
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == ';') SKIP(35)
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == ';') SKIP(35)
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') SKIP(9)
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) SKIP(9)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') SKIP(9)
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') SKIP(9)
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') SKIP(9)
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) SKIP(9)
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(383);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == ';') SKIP(35)
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0) SKIP(35)
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == ';') SKIP(39)
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (lookahead != 0) SKIP(39)
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(220);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(220);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(220);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(220);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(220);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(220);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') SKIP(9)
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) SKIP(9)
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == ';') SKIP(35)
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0) SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == ';') SKIP(35)
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0) SKIP(35)
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(385);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == ';') SKIP(35)
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0) SKIP(35)
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == ';') SKIP(39)
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (lookahead != 0) SKIP(39)
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == ';') SKIP(39)
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (lookahead != 0) SKIP(39)
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == ';') SKIP(39)
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (lookahead != 0) SKIP(39)
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 52:
      if (lookahead == ';') SKIP(53)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(54)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(52)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 53:
      if (lookahead == ';') SKIP(53)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(53)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(52)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0) SKIP(53)
      END_STATE();
    case 54:
      if (lookahead == ';') SKIP(53)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 61:
      if (eof) ADVANCE(63);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ';') SKIP(62)
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(338);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead == 's') ADVANCE(346);
      if (lookahead == 'u') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(61)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') SKIP(62)
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(61)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) SKIP(62)
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '^') ADVANCE(268);
      if (lookahead == '_') ADVANCE(268);
      if (lookahead == 'i') ADVANCE(267);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == 'i') ADVANCE(274);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '^') ADVANCE(327);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '^') ADVANCE(334);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == 'i') ADVANCE(274);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '^') ADVANCE(334);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_datatype);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == 'x') ADVANCE(203);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_datatype);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_datatype);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == 'x') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_datatype);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLONcost);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COLONcost);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLONcost);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COLONcost);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == 'x') ADVANCE(203);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == 'x') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_panic);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_panic);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_panic);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_panic);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '^') ADVANCE(268);
      if (lookahead == '_') ADVANCE(268);
      if (lookahead == 'i') ADVANCE(267);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == 'i') ADVANCE(274);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '^') ADVANCE(327);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '^') ADVANCE(334);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '^') ADVANCE(268);
      if (lookahead == '_') ADVANCE(268);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'i') ADVANCE(267);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(274);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '^') ADVANCE(327);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '^') ADVANCE(334);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (lookahead == '"') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '^') ADVANCE(268);
      if (lookahead == '_') ADVANCE(268);
      if (lookahead == 'i') ADVANCE(267);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == 'i') ADVANCE(274);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '^') ADVANCE(327);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '^') ADVANCE(334);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == '+') ADVANCE(175);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == 'x') ADVANCE(203);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == 'x') ADVANCE(203);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == 'x') ADVANCE(203);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == 'x') ADVANCE(203);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == 'x') ADVANCE(203);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == 'y') ADVANCE(210);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(182);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(178);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(152);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(192);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == 'N') ADVANCE(153);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(219);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(236);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(226);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(242);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(252);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'c') ADVANCE(125);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'c') ADVANCE(253);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(117);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(101);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(249);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(255);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'f') ADVANCE(165);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'f') ADVANCE(172);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(244);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(225);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(245);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(230);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(231);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(233);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(121);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(97);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(232);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(234);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(247);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(239);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(240);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'p') ADVANCE(228);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'p') ADVANCE(257);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(222);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(251);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 't') ADVANCE(113);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 't') ADVANCE(105);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 't') ADVANCE(259);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 't') ADVANCE(129);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 't') ADVANCE(248);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 't') ADVANCE(227);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 't') ADVANCE(224);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 't') ADVANCE(235);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'x') ADVANCE(254);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'y') ADVANCE(246);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(260);
      if (lookahead == '_') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '+') ADVANCE(264);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '^') ADVANCE(268);
      if (lookahead == '_') ADVANCE(268);
      if (lookahead == 'i') ADVANCE(267);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(268);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '^') ADVANCE(268);
      if (lookahead == '_') ADVANCE(268);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'i') ADVANCE(267);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '^') ADVANCE(268);
      if (lookahead == '_') ADVANCE(268);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(267);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '^') ADVANCE(268);
      if (lookahead == '_') ADVANCE(268);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(266);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == 'N') ADVANCE(265);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '^') ADVANCE(268);
      if (lookahead == '_') ADVANCE(268);
      if (lookahead == 'i') ADVANCE(267);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == 'N') ADVANCE(154);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '^') ADVANCE(268);
      if (lookahead == '_') ADVANCE(268);
      if (lookahead == 'i') ADVANCE(267);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '+') ADVANCE(271);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == 'i') ADVANCE(274);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(275);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(274);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(274);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'n') ADVANCE(273);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == 'i') ADVANCE(274);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == 'N') ADVANCE(155);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '^') ADVANCE(275);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == 'i') ADVANCE(274);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '+') ADVANCE(278);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == 'x') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == 'x') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(315);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(312);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(283);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(303);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(280);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == 'x') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == 'x') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == 'x') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == 'y') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(285);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(156);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(311);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '+') ADVANCE(323);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '^') ADVANCE(327);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(327);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '^') ADVANCE(327);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '^') ADVANCE(327);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '^') ADVANCE(327);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '^') ADVANCE(327);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(157);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '^') ADVANCE(327);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '+') ADVANCE(330);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '^') ADVANCE(334);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(334);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '^') ADVANCE(334);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '^') ADVANCE(334);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '^') ADVANCE(334);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'n') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '^') ADVANCE(334);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(158);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '^') ADVANCE(334);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == 'N') ADVANCE(159);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'a') ADVANCE(336);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(353);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'a') ADVANCE(343);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'a') ADVANCE(359);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'a') ADVANCE(369);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(127);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(370);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'e') ADVANCE(119);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'e') ADVANCE(103);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == 'o') ADVANCE(366);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'e') ADVANCE(372);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'f') ADVANCE(171);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'f') ADVANCE(173);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'i') ADVANCE(361);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'i') ADVANCE(342);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'i') ADVANCE(362);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(347);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'n') ADVANCE(348);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'n') ADVANCE(350);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'n') ADVANCE(123);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'n') ADVANCE(99);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'n') ADVANCE(349);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'n') ADVANCE(351);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'o') ADVANCE(364);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'o') ADVANCE(356);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'o') ADVANCE(357);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'p') ADVANCE(345);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'p') ADVANCE(374);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'r') ADVANCE(339);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'r') ADVANCE(368);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 't') ADVANCE(115);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 't') ADVANCE(107);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 't') ADVANCE(376);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 't') ADVANCE(131);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 't') ADVANCE(365);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 't') ADVANCE(344);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 't') ADVANCE(341);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 't') ADVANCE(352);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'x') ADVANCE(371);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == 'y') ADVANCE(363);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(377);
      if (lookahead == '_') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 54},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 54},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_set_DASHoption] = ACTIONS(1),
    [anon_sym_datatype] = ACTIONS(1),
    [anon_sym_sort] = ACTIONS(1),
    [anon_sym_COLONcost] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_panic] = ACTIONS(1),
    [anon_sym_extract] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [sym_unum] = ACTIONS(1),
    [anon_sym_NaN] = ACTIONS(1),
    [aux_sym_f64_token1] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [anon_sym_DASHinf] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym_lparen] = STATE(20),
    [sym_expr] = STATE(19),
    [sym_literal] = STATE(22),
    [sym_callexpr] = STATE(22),
    [sym_f64] = STATE(24),
    [sym_symstring] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(3),
    [sym_num] = ACTIONS(5),
    [anon_sym_NaN] = ACTIONS(7),
    [aux_sym_f64_token1] = ACTIONS(7),
    [anon_sym_inf] = ACTIONS(7),
    [anon_sym_DASHinf] = ACTIONS(7),
    [sym_ident] = ACTIONS(9),
    [sym_string] = ACTIONS(11),
  },
  [2] = {
    [sym_lparen] = STATE(25),
    [sym_rparen] = STATE(8),
    [sym_expr] = STATE(3),
    [sym_literal] = STATE(11),
    [sym_callexpr] = STATE(11),
    [sym_f64] = STATE(13),
    [sym_symstring] = STATE(13),
    [aux_sym_command_repeat2] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [sym_num] = ACTIONS(15),
    [anon_sym_NaN] = ACTIONS(17),
    [aux_sym_f64_token1] = ACTIONS(17),
    [anon_sym_inf] = ACTIONS(17),
    [anon_sym_DASHinf] = ACTIONS(17),
    [sym_ident] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
  },
  [3] = {
    [sym_lparen] = STATE(25),
    [sym_rparen] = STATE(7),
    [sym_expr] = STATE(6),
    [sym_literal] = STATE(11),
    [sym_callexpr] = STATE(11),
    [sym_f64] = STATE(13),
    [sym_symstring] = STATE(13),
    [aux_sym_command_repeat2] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [sym_num] = ACTIONS(15),
    [anon_sym_NaN] = ACTIONS(17),
    [aux_sym_f64_token1] = ACTIONS(17),
    [anon_sym_inf] = ACTIONS(17),
    [anon_sym_DASHinf] = ACTIONS(17),
    [sym_ident] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
  },
  [4] = {
    [sym_lparen] = STATE(25),
    [sym_rparen] = STATE(17),
    [sym_expr] = STATE(5),
    [sym_literal] = STATE(11),
    [sym_callexpr] = STATE(11),
    [sym_f64] = STATE(13),
    [sym_symstring] = STATE(13),
    [aux_sym_command_repeat2] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(23),
    [sym_num] = ACTIONS(15),
    [anon_sym_NaN] = ACTIONS(17),
    [aux_sym_f64_token1] = ACTIONS(17),
    [anon_sym_inf] = ACTIONS(17),
    [anon_sym_DASHinf] = ACTIONS(17),
    [sym_ident] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
  },
  [5] = {
    [sym_lparen] = STATE(25),
    [sym_rparen] = STATE(15),
    [sym_expr] = STATE(6),
    [sym_literal] = STATE(11),
    [sym_callexpr] = STATE(11),
    [sym_f64] = STATE(13),
    [sym_symstring] = STATE(13),
    [aux_sym_command_repeat2] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(23),
    [sym_num] = ACTIONS(15),
    [anon_sym_NaN] = ACTIONS(17),
    [aux_sym_f64_token1] = ACTIONS(17),
    [anon_sym_inf] = ACTIONS(17),
    [anon_sym_DASHinf] = ACTIONS(17),
    [sym_ident] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
  },
  [6] = {
    [sym_lparen] = STATE(25),
    [sym_expr] = STATE(6),
    [sym_literal] = STATE(11),
    [sym_callexpr] = STATE(11),
    [sym_f64] = STATE(13),
    [sym_symstring] = STATE(13),
    [aux_sym_command_repeat2] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(28),
    [anon_sym_RBRACK] = ACTIONS(28),
    [sym_num] = ACTIONS(30),
    [anon_sym_NaN] = ACTIONS(33),
    [aux_sym_f64_token1] = ACTIONS(33),
    [anon_sym_inf] = ACTIONS(33),
    [anon_sym_DASHinf] = ACTIONS(33),
    [sym_ident] = ACTIONS(36),
    [sym_string] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(42), 11,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      aux_sym_f64_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
      sym_string,
  [14] = 1,
    ACTIONS(44), 11,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      aux_sym_f64_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
      sym_string,
  [28] = 1,
    ACTIONS(46), 11,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      aux_sym_f64_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
      sym_string,
  [42] = 1,
    ACTIONS(48), 11,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      aux_sym_f64_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
      sym_string,
  [56] = 1,
    ACTIONS(50), 11,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      aux_sym_f64_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
      sym_string,
  [70] = 1,
    ACTIONS(52), 11,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      aux_sym_f64_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
      sym_string,
  [84] = 1,
    ACTIONS(54), 11,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      aux_sym_f64_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
      sym_string,
  [98] = 1,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
  [102] = 1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
  [106] = 1,
    ACTIONS(60), 1,
      sym_ident,
  [110] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [114] = 1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
  [118] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [122] = 1,
    ACTIONS(68), 1,
      sym_ident,
  [126] = 1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
  [130] = 1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
  [134] = 1,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
  [138] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [142] = 1,
    ACTIONS(78), 1,
      sym_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 14,
  [SMALL_STATE(9)] = 28,
  [SMALL_STATE(10)] = 42,
  [SMALL_STATE(11)] = 56,
  [SMALL_STATE(12)] = 70,
  [SMALL_STATE(13)] = 84,
  [SMALL_STATE(14)] = 98,
  [SMALL_STATE(15)] = 102,
  [SMALL_STATE(16)] = 106,
  [SMALL_STATE(17)] = 110,
  [SMALL_STATE(18)] = 114,
  [SMALL_STATE(19)] = 118,
  [SMALL_STATE(20)] = 122,
  [SMALL_STATE(21)] = 126,
  [SMALL_STATE(22)] = 130,
  [SMALL_STATE(23)] = 134,
  [SMALL_STATE(24)] = 138,
  [SMALL_STATE(25)] = 142,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(16),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(13),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(12),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(11),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(10),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 4),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rparen, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symstring, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f64, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symstring, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lparen, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rparen, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [70] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f64, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_egglog(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
