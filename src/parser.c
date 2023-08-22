#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 4
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RPAREN = 3,
  anon_sym_RBRACK = 4,
  anon_sym_COMMA = 5,
  sym_Num = 6,
  sym_UNum = 7,
  anon_sym_NaN = 8,
  aux_sym_F64_token1 = 9,
  anon_sym_inf = 10,
  anon_sym_DASHinf = 11,
  sym_Ident = 12,
  sym_String = 13,
  sym_source_file = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [sym_Num] = "Num",
  [sym_UNum] = "UNum",
  [anon_sym_NaN] = "NaN",
  [aux_sym_F64_token1] = "F64_token1",
  [anon_sym_inf] = "inf",
  [anon_sym_DASHinf] = "-inf",
  [sym_Ident] = "Ident",
  [sym_String] = "String",
  [sym_source_file] = "source_file",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_Num] = sym_Num,
  [sym_UNum] = sym_UNum,
  [anon_sym_NaN] = anon_sym_NaN,
  [aux_sym_F64_token1] = aux_sym_F64_token1,
  [anon_sym_inf] = anon_sym_inf,
  [anon_sym_DASHinf] = anon_sym_DASHinf,
  [sym_Ident] = sym_Ident,
  [sym_String] = sym_String,
  [sym_source_file] = sym_source_file,
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
  [sym_Num] = {
    .visible = true,
    .named = true,
  },
  [sym_UNum] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NaN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_F64_token1] = {
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
  [sym_Ident] = {
    .visible = true,
    .named = true,
  },
  [sym_String] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == ';') SKIP(29)
      if (lookahead == 'N') ADVANCE(99);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == ';') SKIP(4)
      if (lookahead == 'N') ADVANCE(99);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == ';') SKIP(4)
      if (lookahead == 'N') ADVANCE(99);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == ';') SKIP(4)
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0) SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == ';') SKIP(4)
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0) SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == ';') SKIP(4)
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0) SKIP(4)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(108);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == ';') SKIP(4)
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0) SKIP(4)
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ';') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead != 0) SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ';') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ';') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 28:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == ';') SKIP(29)
      if (lookahead == 'N') ADVANCE(99);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(28)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == ';') SKIP(29)
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(28)
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0) SKIP(29)
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '^') ADVANCE(80);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(79);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == '_') ADVANCE(88);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == '_') ADVANCE(104);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '^') ADVANCE(80);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(79);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == '_') ADVANCE(88);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == '_') ADVANCE(104);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_Num);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_Num);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_Num);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '^') ADVANCE(80);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(79);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_Num);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_Num);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_Num);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_Num);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_Num);
      if (lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_Num);
      if (lookahead == '.') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_Num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '^') ADVANCE(80);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(79);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == '_') ADVANCE(88);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == '_') ADVANCE(104);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_F64_token1);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_F64_token1);
      if (lookahead == '"') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_F64_token1);
      if (lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_F64_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '^') ADVANCE(80);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(79);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == '_') ADVANCE(88);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == '_') ADVANCE(104);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == '_') ADVANCE(88);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == '_') ADVANCE(104);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '^') ADVANCE(80);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(79);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(80);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '^') ADVANCE(80);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(79);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '^') ADVANCE(80);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(79);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '^') ADVANCE(80);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(78);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '^') ADVANCE(80);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(79);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(61);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '^') ADVANCE(80);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(79);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == 'N') ADVANCE(62);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == '_') ADVANCE(88);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(82);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(70);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(73);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(84);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(85);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == '_') ADVANCE(88);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '+') ADVANCE(92);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(63);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (('\\' <= lookahead && lookahead <= '`')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == '_') ADVANCE(104);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == '_') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(98);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == '_') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(72);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == '_') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(74);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == '_') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(100);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == '_') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(101);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == '_') ADVANCE(104);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_Ident);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_String);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_String);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_String);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_Num] = ACTIONS(1),
    [sym_UNum] = ACTIONS(1),
    [anon_sym_NaN] = ACTIONS(1),
    [aux_sym_F64_token1] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [anon_sym_DASHinf] = ACTIONS(1),
    [sym_Ident] = ACTIONS(1),
    [sym_String] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_Num] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
  [4] = 1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 4,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [7] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
