#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
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
  sym_num = 7,
  sym_unum = 8,
  anon_sym_NaN = 9,
  aux_sym_f64_token1 = 10,
  anon_sym_inf = 11,
  anon_sym_DASHinf = 12,
  sym_ident = 13,
  sym_string = 14,
  sym_source_file = 15,
  sym_lparen = 16,
  sym_rparen = 17,
  sym_expr = 18,
  sym_literal = 19,
  sym_callexpr = 20,
  sym_f64 = 21,
  sym_symstring = 22,
  aux_sym_list_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_set_DASHoption] = "set-option",
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
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_set_DASHoption] = anon_sym_set_DASHoption,
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
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
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
  [aux_sym_list_repeat1] = {
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
      if (eof) ADVANCE(53);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == ';') SKIP(52)
      if (lookahead == 'N') ADVANCE(211);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 's') ADVANCE(212);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == ';') SKIP(8)
      if (lookahead == 'N') ADVANCE(211);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 's') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == ';') SKIP(8)
      if (lookahead == 'N') ADVANCE(211);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 's') ADVANCE(212);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == ';') SKIP(34)
      if (lookahead == 'N') ADVANCE(211);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == ';') SKIP(34)
      if (lookahead == 'N') ADVANCE(211);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == ';') SKIP(30)
      if (lookahead == 'N') ADVANCE(211);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == ';') SKIP(30)
      if (lookahead == 'N') ADVANCE(211);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == ';') SKIP(8)
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (lookahead != 0) SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == ';') SKIP(8)
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (lookahead != 0) SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == ';') SKIP(8)
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (lookahead != 0) SKIP(8)
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(231);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == ';') SKIP(30)
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0) SKIP(30)
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == ';') SKIP(34)
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      if (lookahead != 0) SKIP(34)
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == ';') SKIP(8)
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (lookahead != 0) SKIP(8)
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == ';') SKIP(30)
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0) SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == ';') SKIP(30)
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0) SKIP(30)
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == ';') SKIP(30)
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0) SKIP(30)
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == ';') SKIP(34)
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      if (lookahead != 0) SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == ';') SKIP(34)
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      if (lookahead != 0) SKIP(34)
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == ';') SKIP(34)
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      if (lookahead != 0) SKIP(34)
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 46:
      if (lookahead == ';') SKIP(47)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(46)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 47:
      if (lookahead == ';') SKIP(47)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(47)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(46)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      if (lookahead != 0) SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == ';') SKIP(47)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 51:
      if (eof) ADVANCE(53);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == ';') SKIP(52)
      if (lookahead == 'N') ADVANCE(211);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 's') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == ';') SKIP(52)
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (lookahead != 0) SKIP(52)
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '^') ADVANCE(171);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(170);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '^') ADVANCE(178);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(177);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '^') ADVANCE(178);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(177);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '.') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '^') ADVANCE(171);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(170);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '^') ADVANCE(178);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(177);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '^') ADVANCE(171);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(170);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '^') ADVANCE(178);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(177);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (lookahead == '"') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '^') ADVANCE(171);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(170);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '^') ADVANCE(178);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(177);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(143);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(147);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(145);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 's') ADVANCE(135);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == 'a') ADVANCE(148);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(161);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(123);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(130);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(158);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(151);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(87);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(152);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(159);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(155);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == 'p') ADVANCE(160);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == 't') ADVANCE(153);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == 't') ADVANCE(163);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '_') ADVANCE(162);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '+') ADVANCE(167);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '^') ADVANCE(171);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(170);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(171);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '^') ADVANCE(171);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(170);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '^') ADVANCE(171);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(170);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '^') ADVANCE(171);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(169);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '^') ADVANCE(171);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(170);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '^') ADVANCE(171);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(170);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '+') ADVANCE(174);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '^') ADVANCE(178);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(177);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(178);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '^') ADVANCE(178);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(177);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '^') ADVANCE(178);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(177);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '^') ADVANCE(178);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(176);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '^') ADVANCE(178);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(177);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == 'N') ADVANCE(113);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '^') ADVANCE(178);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(177);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '+') ADVANCE(181);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(114);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(201);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(115);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '+') ADVANCE(204);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(116);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '^') ADVANCE(208);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == 'N') ADVANCE(117);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == 'a') ADVANCE(210);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == 'e') ADVANCE(223);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == 'f') ADVANCE(129);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == 'f') ADVANCE(131);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(220);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(213);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(89);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(214);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(221);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(217);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(222);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == 't') ADVANCE(215);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == 't') ADVANCE(225);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '^') ADVANCE(224);
      if (lookahead == '_') ADVANCE(224);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0) ADVANCE(42);
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
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 48},
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
    [aux_sym_list_repeat1] = STATE(3),
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
    [aux_sym_list_repeat1] = STATE(6),
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
    [aux_sym_list_repeat1] = STATE(5),
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
    [aux_sym_list_repeat1] = STATE(6),
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
    [aux_sym_list_repeat1] = STATE(6),
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
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(10),
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
