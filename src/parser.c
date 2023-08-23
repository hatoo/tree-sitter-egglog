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
#define STATE_COUNT 311
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_LPAREN = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RPAREN = 5,
  anon_sym_RBRACK = 6,
  anon_sym_COMMA = 7,
  anon_sym_set_DASHoption = 8,
  anon_sym_datatype = 9,
  anon_sym_sort = 10,
  anon_sym_function = 11,
  anon_sym_COLONunextractable = 12,
  anon_sym_COLONon_merge = 13,
  anon_sym_COLONmerge = 14,
  anon_sym_declare = 15,
  anon_sym_relation = 16,
  anon_sym_ruleset = 17,
  anon_sym_rule = 18,
  anon_sym_COLONruleset = 19,
  anon_sym_COLONname = 20,
  anon_sym_rewrite = 21,
  anon_sym_COLONwhen = 22,
  anon_sym_birewrite = 23,
  anon_sym_let = 24,
  anon_sym_run = 25,
  anon_sym_COLONuntil = 26,
  anon_sym_simplify = 27,
  anon_sym_add_DASHruleset = 28,
  anon_sym_calc = 29,
  anon_sym_query_DASHextract = 30,
  anon_sym_COLONvariants = 31,
  anon_sym_check = 32,
  anon_sym_check_DASHproof = 33,
  anon_sym_run_DASHschedule = 34,
  anon_sym_push = 35,
  anon_sym_pop = 36,
  anon_sym_print_DASHtable = 37,
  anon_sym_print_DASHsize = 38,
  anon_sym_input = 39,
  anon_sym_output = 40,
  anon_sym_fail = 41,
  anon_sym_include = 42,
  anon_sym_saturate = 43,
  anon_sym_seq = 44,
  anon_sym_repeat = 45,
  anon_sym_COLONcost = 46,
  anon_sym_set = 47,
  anon_sym_delete = 48,
  anon_sym_union = 49,
  anon_sym_panic = 50,
  anon_sym_extract = 51,
  anon_sym_EQ = 52,
  sym_num = 53,
  sym_unum = 54,
  anon_sym_NaN = 55,
  aux_sym_f64_token1 = 56,
  anon_sym_inf = 57,
  anon_sym_DASHinf = 58,
  sym_ident = 59,
  anon_sym_DQUOTE = 60,
  aux_sym_string_token1 = 61,
  sym_source_file = 62,
  sym_comment = 63,
  sym_lparen = 64,
  sym_rparen = 65,
  sym_command = 66,
  sym_schedule = 67,
  sym_cost = 68,
  sym_nonletaction = 69,
  sym_action = 70,
  sym_fact = 71,
  sym_schema = 72,
  sym_expr = 73,
  sym_literal = 74,
  sym_callexpr = 75,
  sym_variant = 76,
  sym_type = 77,
  sym_identsort = 78,
  sym_f64 = 79,
  sym_symstring = 80,
  sym_string = 81,
  aux_sym_source_file_repeat1 = 82,
  aux_sym_command_repeat1 = 83,
  aux_sym_command_repeat2 = 84,
  aux_sym_command_repeat3 = 85,
  aux_sym_command_repeat4 = 86,
  aux_sym_command_repeat5 = 87,
  aux_sym_command_repeat6 = 88,
  aux_sym_command_repeat7 = 89,
  aux_sym_string_repeat1 = 90,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_set_DASHoption] = "set-option",
  [anon_sym_datatype] = "datatype",
  [anon_sym_sort] = "sort",
  [anon_sym_function] = "function",
  [anon_sym_COLONunextractable] = ":unextractable",
  [anon_sym_COLONon_merge] = ":on_merge",
  [anon_sym_COLONmerge] = ":merge",
  [anon_sym_declare] = "declare",
  [anon_sym_relation] = "relation",
  [anon_sym_ruleset] = "ruleset",
  [anon_sym_rule] = "rule",
  [anon_sym_COLONruleset] = ":ruleset",
  [anon_sym_COLONname] = ":name",
  [anon_sym_rewrite] = "rewrite",
  [anon_sym_COLONwhen] = ":when",
  [anon_sym_birewrite] = "birewrite",
  [anon_sym_let] = "let",
  [anon_sym_run] = "run",
  [anon_sym_COLONuntil] = ":until",
  [anon_sym_simplify] = "simplify",
  [anon_sym_add_DASHruleset] = "add-ruleset",
  [anon_sym_calc] = "calc",
  [anon_sym_query_DASHextract] = "query-extract",
  [anon_sym_COLONvariants] = ":variants",
  [anon_sym_check] = "check",
  [anon_sym_check_DASHproof] = "check-proof",
  [anon_sym_run_DASHschedule] = "run-schedule",
  [anon_sym_push] = "push",
  [anon_sym_pop] = "pop",
  [anon_sym_print_DASHtable] = "print-table",
  [anon_sym_print_DASHsize] = "print-size",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_fail] = "fail",
  [anon_sym_include] = "include",
  [anon_sym_saturate] = "saturate",
  [anon_sym_seq] = "seq",
  [anon_sym_repeat] = "repeat",
  [anon_sym_COLONcost] = ":cost",
  [anon_sym_set] = "set",
  [anon_sym_delete] = "delete",
  [anon_sym_union] = "union",
  [anon_sym_panic] = "panic",
  [anon_sym_extract] = "extract",
  [anon_sym_EQ] = "=",
  [sym_num] = "num",
  [sym_unum] = "unum",
  [anon_sym_NaN] = "NaN",
  [aux_sym_f64_token1] = "f64_token1",
  [anon_sym_inf] = "inf",
  [anon_sym_DASHinf] = "-inf",
  [sym_ident] = "ident",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_content",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_lparen] = "lparen",
  [sym_rparen] = "rparen",
  [sym_command] = "command",
  [sym_schedule] = "schedule",
  [sym_cost] = "cost",
  [sym_nonletaction] = "nonletaction",
  [sym_action] = "action",
  [sym_fact] = "fact",
  [sym_schema] = "schema",
  [sym_expr] = "expr",
  [sym_literal] = "literal",
  [sym_callexpr] = "callexpr",
  [sym_variant] = "variant",
  [sym_type] = "type",
  [sym_identsort] = "identsort",
  [sym_f64] = "f64",
  [sym_symstring] = "symstring",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
  [aux_sym_command_repeat3] = "command_repeat3",
  [aux_sym_command_repeat4] = "command_repeat4",
  [aux_sym_command_repeat5] = "command_repeat5",
  [aux_sym_command_repeat6] = "command_repeat6",
  [aux_sym_command_repeat7] = "command_repeat7",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_set_DASHoption] = anon_sym_set_DASHoption,
  [anon_sym_datatype] = anon_sym_datatype,
  [anon_sym_sort] = anon_sym_sort,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_COLONunextractable] = anon_sym_COLONunextractable,
  [anon_sym_COLONon_merge] = anon_sym_COLONon_merge,
  [anon_sym_COLONmerge] = anon_sym_COLONmerge,
  [anon_sym_declare] = anon_sym_declare,
  [anon_sym_relation] = anon_sym_relation,
  [anon_sym_ruleset] = anon_sym_ruleset,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_COLONruleset] = anon_sym_COLONruleset,
  [anon_sym_COLONname] = anon_sym_COLONname,
  [anon_sym_rewrite] = anon_sym_rewrite,
  [anon_sym_COLONwhen] = anon_sym_COLONwhen,
  [anon_sym_birewrite] = anon_sym_birewrite,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_run] = anon_sym_run,
  [anon_sym_COLONuntil] = anon_sym_COLONuntil,
  [anon_sym_simplify] = anon_sym_simplify,
  [anon_sym_add_DASHruleset] = anon_sym_add_DASHruleset,
  [anon_sym_calc] = anon_sym_calc,
  [anon_sym_query_DASHextract] = anon_sym_query_DASHextract,
  [anon_sym_COLONvariants] = anon_sym_COLONvariants,
  [anon_sym_check] = anon_sym_check,
  [anon_sym_check_DASHproof] = anon_sym_check_DASHproof,
  [anon_sym_run_DASHschedule] = anon_sym_run_DASHschedule,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_print_DASHtable] = anon_sym_print_DASHtable,
  [anon_sym_print_DASHsize] = anon_sym_print_DASHsize,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_fail] = anon_sym_fail,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_saturate] = anon_sym_saturate,
  [anon_sym_seq] = anon_sym_seq,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_COLONcost] = anon_sym_COLONcost,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_panic] = anon_sym_panic,
  [anon_sym_extract] = anon_sym_extract,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_num] = sym_num,
  [sym_unum] = sym_unum,
  [anon_sym_NaN] = anon_sym_NaN,
  [aux_sym_f64_token1] = aux_sym_f64_token1,
  [anon_sym_inf] = anon_sym_inf,
  [anon_sym_DASHinf] = anon_sym_DASHinf,
  [sym_ident] = sym_ident,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_lparen] = sym_lparen,
  [sym_rparen] = sym_rparen,
  [sym_command] = sym_command,
  [sym_schedule] = sym_schedule,
  [sym_cost] = sym_cost,
  [sym_nonletaction] = sym_nonletaction,
  [sym_action] = sym_action,
  [sym_fact] = sym_fact,
  [sym_schema] = sym_schema,
  [sym_expr] = sym_expr,
  [sym_literal] = sym_literal,
  [sym_callexpr] = sym_callexpr,
  [sym_variant] = sym_variant,
  [sym_type] = sym_type,
  [sym_identsort] = sym_identsort,
  [sym_f64] = sym_f64,
  [sym_symstring] = sym_symstring,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_command_repeat2] = aux_sym_command_repeat2,
  [aux_sym_command_repeat3] = aux_sym_command_repeat3,
  [aux_sym_command_repeat4] = aux_sym_command_repeat4,
  [aux_sym_command_repeat5] = aux_sym_command_repeat5,
  [aux_sym_command_repeat6] = aux_sym_command_repeat6,
  [aux_sym_command_repeat7] = aux_sym_command_repeat7,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONunextractable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONon_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONmerge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ruleset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONruleset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rewrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONwhen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_birewrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONuntil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_simplify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_DASHruleset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query_DASHextract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONvariants] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check_DASHproof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run_DASHschedule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print_DASHtable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fail] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_saturate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
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
  [anon_sym_EQ] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_schedule] = {
    .visible = true,
    .named = true,
  },
  [sym_cost] = {
    .visible = true,
    .named = true,
  },
  [sym_nonletaction] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_schema] = {
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
  [sym_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_identsort] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 8,
  [12] = 9,
  [13] = 6,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 16,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 26,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 24,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 26,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 38,
  [48] = 45,
  [49] = 42,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 66,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 3,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 73,
  [94] = 94,
  [95] = 72,
  [96] = 96,
  [97] = 78,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 3,
  [102] = 79,
  [103] = 103,
  [104] = 99,
  [105] = 100,
  [106] = 72,
  [107] = 69,
  [108] = 98,
  [109] = 109,
  [110] = 110,
  [111] = 70,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 74,
  [116] = 113,
  [117] = 77,
  [118] = 76,
  [119] = 119,
  [120] = 75,
  [121] = 3,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 73,
  [133] = 78,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 72,
  [157] = 157,
  [158] = 153,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 114,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 119,
  [177] = 177,
  [178] = 92,
  [179] = 109,
  [180] = 180,
  [181] = 110,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 184,
  [194] = 70,
  [195] = 195,
  [196] = 69,
  [197] = 77,
  [198] = 76,
  [199] = 75,
  [200] = 74,
  [201] = 201,
  [202] = 202,
  [203] = 186,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 146,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 220,
  [231] = 223,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 3,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 220,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 223,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 80,
  [263] = 263,
  [264] = 264,
  [265] = 263,
  [266] = 266,
  [267] = 267,
  [268] = 68,
  [269] = 3,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 3,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 288,
  [291] = 291,
  [292] = 72,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 288,
  [308] = 308,
  [309] = 285,
  [310] = 310,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(229);
      if (lookahead == '"') ADVANCE(489);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ',') ADVANCE(240);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(230);
      if (lookahead == '=') ADVANCE(316);
      if (lookahead == 'N') ADVANCE(20);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == ']') ADVANCE(238);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'q') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(489);
      if (lookahead == ';') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(491);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(489);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == '-') ADVANCE(487);
      if (lookahead == ';') ADVANCE(230);
      if (lookahead == 'N') ADVANCE(332);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == ']') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(489);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == '-') ADVANCE(487);
      if (lookahead == ':') ADVANCE(218);
      if (lookahead == ';') ADVANCE(230);
      if (lookahead == 'N') ADVANCE(332);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(489);
      if (lookahead == ';') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ';') ADVANCE(230);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == ']') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ';') ADVANCE(230);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == ']') ADVANCE(239);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ';') ADVANCE(230);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == 'b') ADVANCE(384);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'd') ADVANCE(330);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'f') ADVANCE(333);
      if (lookahead == 'i') ADVANCE(409);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead == 'p') ADVANCE(336);
      if (lookahead == 'q') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead == 'u') ADVANCE(416);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ';') ADVANCE(230);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == 'd') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(337);
      if (lookahead == 'u') ADVANCE(416);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ';') ADVANCE(230);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(237);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(230);
      if (lookahead == ']') ADVANCE(239);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 11:
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(173);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(91);
      END_STATE();
    case 16:
      if (lookahead == ';') ADVANCE(230);
      if (lookahead == '=') ADVANCE(317);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 17:
      if (lookahead == ';') ADVANCE(230);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 18:
      if (lookahead == 'N') ADVANCE(320);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(130);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(123);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead == 'v') ADVANCE(26);
      if (lookahead == 'w') ADVANCE(98);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(326);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(283);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(223);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(287);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 114:
      if (lookahead == 'k') ADVANCE(281);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(166);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 158:
      if (lookahead == 'q') ADVANCE(304);
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 218:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 219:
      if (lookahead == 'w') ADVANCE(172);
      END_STATE();
    case 220:
      if (lookahead == 'x') ADVANCE(197);
      END_STATE();
    case 221:
      if (lookahead == 'x') ADVANCE(205);
      END_STATE();
    case 222:
      if (lookahead == 'x') ADVANCE(208);
      END_STATE();
    case 223:
      if (lookahead == 'y') ADVANCE(272);
      END_STATE();
    case 224:
      if (lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 225:
      if (lookahead == 'y') ADVANCE(156);
      END_STATE();
    case 226:
      if (lookahead == 'z') ADVANCE(71);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_datatype);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_COLONunextractable);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COLONon_merge);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COLONmerge);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_relation);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_ruleset);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_ruleset);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 's') ADVANCE(375);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_COLONruleset);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_COLONname);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_COLONwhen);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_birewrite);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_birewrite);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(176);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_COLONuntil);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_add_DASHruleset);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_add_DASHruleset);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_calc);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COLONvariants);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(155);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(429);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_print_DASHtable);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_print_DASHtable);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_fail);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_fail);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_saturate);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_COLONcost);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_panic);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_panic);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_extract);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_unum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_NaN);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == 'N') ADVANCE(321);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead == 'h') ADVANCE(367);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(345);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(341);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(328);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'u') ADVANCE(414);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(457);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(440);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(418);
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 'u') ADVANCE(443);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(418);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(349);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(350);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(465);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'b') ADVANCE(404);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'c') ADVANCE(277);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'c') ADVANCE(396);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'c') ADVANCE(313);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'c') ADVANCE(399);
      if (lookahead == 'l') ADVANCE(374);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'c') ADVANCE(383);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'c') ADVANCE(400);
      if (lookahead == 'p') ADVANCE(472);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'c') ADVANCE(464);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'c') ADVANCE(452);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'c') ADVANCE(455);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'd') ADVANCE(352);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'd') ADVANCE(485);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'd') ADVANCE(360);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'd') ADVANCE(474);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead == 'u') ADVANCE(401);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(475);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(257);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(309);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(252);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(302);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(262);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(243);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(265);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(294);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(292);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(286);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(343);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(448);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(446);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(354);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(433);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == 'o') ADVANCE(439);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(406);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(461);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(453);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(454);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(477);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'f') ADVANCE(284);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'f') ADVANCE(325);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'f') ADVANCE(327);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'f') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'h') ADVANCE(288);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'h') ADVANCE(370);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(436);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(423);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(381);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(481);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(398);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(419);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(344);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(462);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(463);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(424);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(425);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(426);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'k') ADVANCE(282);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(342);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(300);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(335);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(468);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(357);
      if (lookahead == 'n') ADVANCE(269);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(386);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(369);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(365);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(366);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(374);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(340);
      if (lookahead == 'w') ADVANCE(438);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(428);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(347);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(311);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(247);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(254);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(241);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(348);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(379);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(385);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(380);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(390);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(460);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(378);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(432);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(420);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(410);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(411);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(412);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(413);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(290);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(402);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(435);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(362);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(473);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(466);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(479);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(338);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(422);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(356);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(471);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(391);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(449);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(359);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(392);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(339);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 's') ADVANCE(382);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 's') ADVANCE(346);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 't') ADVANCE(331);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 's') ADVANCE(376);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(334);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(267);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(245);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(296);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(298);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(315);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(256);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(275);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(279);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(431);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(480);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(484);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(434);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(483);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(358);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(361);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(363);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(393);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(394);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(395);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 't') ADVANCE(442);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'u') ADVANCE(353);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'u') ADVANCE(371);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'u') ADVANCE(456);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'u') ADVANCE(403);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'u') ADVANCE(450);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'u') ADVANCE(451);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'u') ADVANCE(405);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'w') ADVANCE(441);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'x') ADVANCE(459);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'x') ADVANCE(467);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'y') ADVANCE(273);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'y') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'y') ADVANCE(430);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (lookahead == 'z') ADVANCE(364);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'y')) ADVANCE(482);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(437);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '^') ADVANCE(482);
      if (lookahead == '_') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ';') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(491);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(491);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 17},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 16},
  [264] = {.lex_state = 17},
  [265] = {.lex_state = 16},
  [266] = {.lex_state = 17},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 16},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 17},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 17},
  [276] = {.lex_state = 7},
  [277] = {.lex_state = 17},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 17},
  [280] = {.lex_state = 17},
  [281] = {.lex_state = 17},
  [282] = {.lex_state = 17},
  [283] = {.lex_state = 17},
  [284] = {.lex_state = 17},
  [285] = {.lex_state = 7},
  [286] = {.lex_state = 17},
  [287] = {.lex_state = 17},
  [288] = {.lex_state = 17},
  [289] = {.lex_state = 17},
  [290] = {.lex_state = 17},
  [291] = {.lex_state = 7},
  [292] = {.lex_state = 17},
  [293] = {.lex_state = 17},
  [294] = {.lex_state = 17},
  [295] = {.lex_state = 17},
  [296] = {.lex_state = 17},
  [297] = {.lex_state = 17},
  [298] = {.lex_state = 17},
  [299] = {.lex_state = 17},
  [300] = {.lex_state = 17},
  [301] = {.lex_state = 17},
  [302] = {.lex_state = 17},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 17},
  [305] = {.lex_state = 7},
  [306] = {.lex_state = 232},
  [307] = {.lex_state = 17},
  [308] = {.lex_state = 17},
  [309] = {.lex_state = 7},
  [310] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_datatype] = ACTIONS(1),
    [anon_sym_sort] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_COLONunextractable] = ACTIONS(1),
    [anon_sym_COLONon_merge] = ACTIONS(1),
    [anon_sym_COLONmerge] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_relation] = ACTIONS(1),
    [anon_sym_ruleset] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_COLONruleset] = ACTIONS(1),
    [anon_sym_COLONname] = ACTIONS(1),
    [anon_sym_rewrite] = ACTIONS(1),
    [anon_sym_COLONwhen] = ACTIONS(1),
    [anon_sym_birewrite] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [anon_sym_COLONuntil] = ACTIONS(1),
    [anon_sym_simplify] = ACTIONS(1),
    [anon_sym_add_DASHruleset] = ACTIONS(1),
    [anon_sym_calc] = ACTIONS(1),
    [anon_sym_query_DASHextract] = ACTIONS(1),
    [anon_sym_COLONvariants] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_check_DASHproof] = ACTIONS(1),
    [anon_sym_run_DASHschedule] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_print_DASHtable] = ACTIONS(1),
    [anon_sym_print_DASHsize] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_fail] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_saturate] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_COLONcost] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_panic] = ACTIONS(1),
    [anon_sym_extract] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [sym_unum] = ACTIONS(1),
    [anon_sym_NaN] = ACTIONS(1),
    [aux_sym_f64_token1] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [anon_sym_DASHinf] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(303),
    [sym_comment] = STATE(1),
    [sym_lparen] = STATE(2),
    [sym_command] = STATE(225),
    [sym_nonletaction] = STATE(157),
    [sym_callexpr] = STATE(180),
    [aux_sym_source_file_repeat1] = STATE(123),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 32,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_datatype,
    ACTIONS(17), 1,
      anon_sym_sort,
    ACTIONS(19), 1,
      anon_sym_function,
    ACTIONS(21), 1,
      anon_sym_declare,
    ACTIONS(23), 1,
      anon_sym_relation,
    ACTIONS(27), 1,
      anon_sym_rule,
    ACTIONS(31), 1,
      anon_sym_run,
    ACTIONS(33), 1,
      anon_sym_simplify,
    ACTIONS(35), 1,
      anon_sym_calc,
    ACTIONS(37), 1,
      anon_sym_query_DASHextract,
    ACTIONS(39), 1,
      anon_sym_check,
    ACTIONS(41), 1,
      anon_sym_check_DASHproof,
    ACTIONS(43), 1,
      anon_sym_run_DASHschedule,
    ACTIONS(47), 1,
      anon_sym_print_DASHtable,
    ACTIONS(49), 1,
      anon_sym_input,
    ACTIONS(51), 1,
      anon_sym_output,
    ACTIONS(53), 1,
      anon_sym_fail,
    ACTIONS(55), 1,
      anon_sym_include,
    ACTIONS(57), 1,
      anon_sym_delete,
    ACTIONS(59), 1,
      anon_sym_union,
    ACTIONS(61), 1,
      anon_sym_panic,
    ACTIONS(63), 1,
      anon_sym_extract,
    ACTIONS(65), 1,
      sym_ident,
    STATE(2), 1,
      sym_comment,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(13), 2,
      anon_sym_set_DASHoption,
      anon_sym_let,
    ACTIONS(29), 2,
      anon_sym_rewrite,
      anon_sym_birewrite,
    ACTIONS(45), 2,
      anon_sym_push,
      anon_sym_pop,
    ACTIONS(25), 3,
      anon_sym_ruleset,
      anon_sym_add_DASHruleset,
      anon_sym_print_DASHsize,
  [102] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_comment,
    ACTIONS(69), 33,
      anon_sym_LBRACK,
      anon_sym_set_DASHoption,
      anon_sym_datatype,
      anon_sym_sort,
      anon_sym_function,
      anon_sym_declare,
      anon_sym_relation,
      anon_sym_ruleset,
      anon_sym_rule,
      anon_sym_rewrite,
      anon_sym_birewrite,
      anon_sym_let,
      anon_sym_run,
      anon_sym_simplify,
      anon_sym_add_DASHruleset,
      anon_sym_calc,
      anon_sym_query_DASHextract,
      anon_sym_check,
      anon_sym_check_DASHproof,
      anon_sym_run_DASHschedule,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_print_DASHtable,
      anon_sym_print_DASHsize,
      anon_sym_input,
      anon_sym_output,
      anon_sym_fail,
      anon_sym_include,
      anon_sym_delete,
      anon_sym_union,
      anon_sym_panic,
      anon_sym_extract,
      sym_ident,
  [147] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_command_repeat5,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(170), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [209] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_command_repeat5,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(167), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [271] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_command_repeat5,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(176), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [333] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_command_repeat5,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(175), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [395] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_command_repeat5,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(110), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [457] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_command_repeat5,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(110), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [519] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      aux_sym_command_repeat5,
    STATE(10), 1,
      sym_comment,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(174), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [581] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_command_repeat5,
    STATE(11), 1,
      sym_comment,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(181), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [643] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_command_repeat5,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(181), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [705] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_command_repeat5,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(119), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [767] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_command_repeat5,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(201), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [829] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_command_repeat5,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(163), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [891] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym_command_repeat5,
    STATE(16), 1,
      sym_comment,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(179), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [953] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_command_repeat5,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(246), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1015] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      aux_sym_command_repeat5,
    STATE(18), 1,
      sym_comment,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(163), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1077] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym_command_repeat5,
    STATE(19), 1,
      sym_comment,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(109), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1139] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_command_repeat5,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(210), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1201] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_command_repeat5,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(249), 1,
      sym_rparen,
    STATE(265), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1263] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_command_repeat2,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(163), 1,
      sym_rparen,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1322] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_command_repeat2,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(251), 1,
      sym_rparen,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1381] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_command_repeat2,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(93), 1,
      sym_rparen,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1440] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_command_repeat2,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(132), 1,
      sym_rparen,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1499] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_command_repeat2,
    STATE(77), 1,
      sym_string,
    STATE(78), 1,
      sym_rparen,
    STATE(79), 1,
      sym_expr,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1558] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      aux_sym_command_repeat2,
    STATE(27), 1,
      sym_comment,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(97), 1,
      sym_rparen,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1617] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_command_repeat2,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(247), 1,
      sym_rparen,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1676] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_command_repeat2,
    STATE(58), 1,
      sym_rparen,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1735] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_command_repeat2,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(238), 1,
      sym_rparen,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1794] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      aux_sym_command_repeat2,
    STATE(31), 1,
      sym_comment,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(253), 1,
      sym_rparen,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1853] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_command_repeat2,
    STATE(73), 1,
      sym_rparen,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1912] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      aux_sym_command_repeat2,
    STATE(33), 1,
      sym_comment,
    STATE(55), 1,
      sym_rparen,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1971] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_command_repeat2,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(170), 1,
      sym_rparen,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2030] = 17,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    ACTIONS(115), 1,
      sym_num,
    ACTIONS(121), 1,
      aux_sym_f64_token1,
    ACTIONS(124), 1,
      sym_ident,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_fact,
    STATE(77), 1,
      sym_string,
    STATE(80), 1,
      sym_expr,
    STATE(265), 1,
      sym_lparen,
    STATE(35), 2,
      sym_comment,
      aux_sym_command_repeat5,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(118), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2087] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_command_repeat2,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(175), 1,
      sym_rparen,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2146] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      aux_sym_command_repeat2,
    STATE(37), 1,
      sym_comment,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(133), 1,
      sym_rparen,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2205] = 16,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    ACTIONS(140), 1,
      sym_num,
    ACTIONS(146), 1,
      aux_sym_f64_token1,
    ACTIONS(149), 1,
      sym_ident,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(307), 1,
      sym_lparen,
    STATE(38), 2,
      sym_comment,
      aux_sym_command_repeat2,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(143), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2259] = 17,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_comment,
    STATE(162), 1,
      sym_rparen,
    STATE(197), 1,
      sym_string,
    STATE(232), 1,
      sym_expr,
    STATE(290), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2315] = 16,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_COLONvariants,
    STATE(40), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(248), 1,
      sym_fact,
    STATE(262), 1,
      sym_expr,
    STATE(263), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2368] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      aux_sym_command_repeat2,
    STATE(41), 1,
      sym_comment,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2418] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      sym_num,
    ACTIONS(171), 1,
      aux_sym_f64_token1,
    ACTIONS(173), 1,
      sym_ident,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_command_repeat2,
    STATE(102), 1,
      sym_expr,
    STATE(117), 1,
      sym_string,
    STATE(288), 1,
      sym_lparen,
    STATE(115), 2,
      sym_f64,
      sym_symstring,
    STATE(118), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(169), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2468] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(224), 1,
      sym_fact,
    STATE(262), 1,
      sym_expr,
    STATE(263), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2518] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      aux_sym_command_repeat2,
    STATE(44), 1,
      sym_comment,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2568] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_command_repeat2,
    STATE(67), 1,
      sym_expr,
    STATE(77), 1,
      sym_string,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2618] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      aux_sym_command_repeat2,
    STATE(46), 1,
      sym_comment,
    STATE(77), 1,
      sym_string,
    STATE(79), 1,
      sym_expr,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2668] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      sym_num,
    ACTIONS(183), 1,
      aux_sym_f64_token1,
    ACTIONS(186), 1,
      sym_ident,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      sym_expr,
    STATE(117), 1,
      sym_string,
    STATE(288), 1,
      sym_lparen,
    STATE(47), 2,
      sym_comment,
      aux_sym_command_repeat2,
    STATE(115), 2,
      sym_f64,
      sym_symstring,
    STATE(118), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(180), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2716] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      aux_sym_command_repeat2,
    STATE(48), 1,
      sym_comment,
    STATE(66), 1,
      sym_expr,
    STATE(77), 1,
      sym_string,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2766] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      sym_num,
    ACTIONS(171), 1,
      aux_sym_f64_token1,
    ACTIONS(173), 1,
      sym_ident,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_command_repeat2,
    STATE(49), 1,
      sym_comment,
    STATE(102), 1,
      sym_expr,
    STATE(117), 1,
      sym_string,
    STATE(288), 1,
      sym_lparen,
    STATE(115), 2,
      sym_f64,
      sym_symstring,
    STATE(118), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(169), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2816] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(217), 1,
      sym_expr,
    STATE(290), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2863] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(239), 1,
      sym_expr,
    STATE(290), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2910] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(226), 1,
      sym_expr,
    STATE(290), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2957] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      sym_num,
    ACTIONS(171), 1,
      aux_sym_f64_token1,
    ACTIONS(173), 1,
      sym_ident,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_comment,
    STATE(59), 1,
      sym_expr,
    STATE(117), 1,
      sym_string,
    STATE(288), 1,
      sym_lparen,
    STATE(115), 2,
      sym_f64,
      sym_symstring,
    STATE(118), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(169), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3004] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(235), 1,
      sym_expr,
    STATE(290), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3051] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(247), 1,
      sym_expr,
    STATE(290), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3098] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(253), 1,
      sym_expr,
    STATE(290), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3145] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(238), 1,
      sym_expr,
    STATE(290), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3192] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(221), 1,
      sym_expr,
    STATE(290), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3239] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_comment,
    STATE(155), 1,
      sym_expr,
    STATE(197), 1,
      sym_string,
    STATE(290), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3286] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(233), 1,
      sym_expr,
    STATE(290), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3333] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      sym_num,
    ACTIONS(171), 1,
      aux_sym_f64_token1,
    ACTIONS(173), 1,
      sym_ident,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_comment,
    STATE(62), 1,
      sym_expr,
    STATE(117), 1,
      sym_string,
    STATE(288), 1,
      sym_lparen,
    STATE(115), 2,
      sym_f64,
      sym_symstring,
    STATE(118), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(169), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3380] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(232), 1,
      sym_expr,
    STATE(290), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3427] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_expr,
    STATE(63), 1,
      sym_comment,
    STATE(77), 1,
      sym_string,
    STATE(307), 1,
      sym_lparen,
    STATE(74), 2,
      sym_f64,
      sym_symstring,
    STATE(76), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3474] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(243), 1,
      sym_expr,
    STATE(290), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3521] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(255), 1,
      sym_expr,
    STATE(290), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3568] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym_comment,
    STATE(268), 1,
      sym_rparen,
    ACTIONS(192), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(194), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3597] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_comment,
    STATE(68), 1,
      sym_rparen,
    ACTIONS(192), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(194), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3626] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      sym_comment,
    ACTIONS(196), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(198), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3648] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(69), 1,
      sym_comment,
    ACTIONS(200), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(202), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3670] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      sym_comment,
    ACTIONS(204), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(206), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3692] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_comment,
    ACTIONS(208), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(210), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3714] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(72), 1,
      sym_comment,
    ACTIONS(212), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(214), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3736] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_comment,
    ACTIONS(216), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(218), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3758] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym_comment,
    ACTIONS(220), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(222), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3780] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(75), 1,
      sym_comment,
    ACTIONS(224), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(226), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3802] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym_comment,
    ACTIONS(228), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(230), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3824] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_comment,
    ACTIONS(232), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(234), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3846] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      sym_comment,
    ACTIONS(236), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(238), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3868] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      sym_comment,
    ACTIONS(192), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(194), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3890] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(80), 1,
      sym_comment,
    ACTIONS(240), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(242), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3912] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      sym_comment,
    ACTIONS(67), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(69), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3934] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(82), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_command_repeat3,
    STATE(112), 1,
      sym_lparen,
    STATE(180), 1,
      sym_callexpr,
    STATE(189), 1,
      sym_action,
    STATE(190), 1,
      sym_nonletaction,
    STATE(211), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3967] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_command_repeat3,
    STATE(112), 1,
      sym_lparen,
    STATE(180), 1,
      sym_callexpr,
    STATE(189), 1,
      sym_action,
    STATE(190), 1,
      sym_nonletaction,
    STATE(206), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4000] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(84), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym_command_repeat3,
    STATE(112), 1,
      sym_lparen,
    STATE(180), 1,
      sym_callexpr,
    STATE(189), 1,
      sym_action,
    STATE(190), 1,
      sym_nonletaction,
    STATE(191), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4033] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      aux_sym_command_repeat3,
    STATE(85), 1,
      sym_comment,
    STATE(112), 1,
      sym_lparen,
    STATE(180), 1,
      sym_callexpr,
    STATE(189), 1,
      sym_action,
    STATE(190), 1,
      sym_nonletaction,
    STATE(216), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4066] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_command_repeat3,
    STATE(112), 1,
      sym_lparen,
    STATE(180), 1,
      sym_callexpr,
    STATE(189), 1,
      sym_action,
    STATE(190), 1,
      sym_nonletaction,
    STATE(211), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4099] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_command_repeat3,
    STATE(112), 1,
      sym_lparen,
    STATE(180), 1,
      sym_callexpr,
    STATE(189), 1,
      sym_action,
    STATE(190), 1,
      sym_nonletaction,
    STATE(216), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4132] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      sym_comment,
    STATE(90), 1,
      aux_sym_command_repeat3,
    STATE(112), 1,
      sym_lparen,
    STATE(168), 1,
      sym_rparen,
    STATE(180), 1,
      sym_callexpr,
    STATE(189), 1,
      sym_action,
    STATE(190), 1,
      sym_nonletaction,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4165] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_command_repeat3,
    STATE(112), 1,
      sym_lparen,
    STATE(154), 1,
      sym_rparen,
    STATE(180), 1,
      sym_callexpr,
    STATE(189), 1,
      sym_action,
    STATE(190), 1,
      sym_nonletaction,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4198] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_command_repeat3,
    STATE(112), 1,
      sym_lparen,
    STATE(154), 1,
      sym_rparen,
    STATE(180), 1,
      sym_callexpr,
    STATE(189), 1,
      sym_action,
    STATE(190), 1,
      sym_nonletaction,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4231] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_command_repeat3,
    STATE(112), 1,
      sym_lparen,
    STATE(177), 1,
      sym_rparen,
    STATE(180), 1,
      sym_callexpr,
    STATE(189), 1,
      sym_action,
    STATE(190), 1,
      sym_nonletaction,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4264] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      sym_comment,
    ACTIONS(246), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(248), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4284] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_comment,
    ACTIONS(216), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(218), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4304] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_lparen,
    STATE(180), 1,
      sym_callexpr,
    STATE(189), 1,
      sym_action,
    STATE(190), 1,
      sym_nonletaction,
    ACTIONS(250), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(253), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(94), 2,
      sym_comment,
      aux_sym_command_repeat3,
  [4332] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(214), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4352] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      sym_ident,
    STATE(96), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_command_repeat7,
    STATE(173), 1,
      sym_schedule,
    STATE(174), 1,
      sym_rparen,
    STATE(184), 1,
      sym_lparen,
  [4386] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(238), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4406] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      sym_ident,
    STATE(98), 1,
      sym_comment,
    STATE(109), 1,
      sym_rparen,
    STATE(116), 1,
      aux_sym_command_repeat7,
    STATE(173), 1,
      sym_schedule,
    STATE(184), 1,
      sym_lparen,
  [4440] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      sym_ident,
    STATE(92), 1,
      sym_rparen,
    STATE(99), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_command_repeat7,
    STATE(173), 1,
      sym_schedule,
    STATE(184), 1,
      sym_lparen,
  [4474] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      sym_ident,
    STATE(100), 1,
      sym_comment,
    STATE(109), 1,
      sym_rparen,
    STATE(130), 1,
      aux_sym_command_repeat7,
    STATE(173), 1,
      sym_schedule,
    STATE(184), 1,
      sym_lparen,
  [4508] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(101), 1,
      sym_comment,
    ACTIONS(67), 9,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_run,
      anon_sym_saturate,
      anon_sym_seq,
      anon_sym_repeat,
      anon_sym_set,
  [4526] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(194), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4546] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      sym_ident,
    STATE(103), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym_command_repeat7,
    STATE(167), 1,
      sym_rparen,
    STATE(173), 1,
      sym_schedule,
    STATE(184), 1,
      sym_lparen,
  [4580] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      sym_ident,
    STATE(104), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym_command_repeat7,
    STATE(173), 1,
      sym_schedule,
    STATE(178), 1,
      sym_rparen,
    STATE(184), 1,
      sym_lparen,
  [4614] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      sym_ident,
    STATE(105), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym_command_repeat7,
    STATE(173), 1,
      sym_schedule,
    STATE(179), 1,
      sym_rparen,
    STATE(184), 1,
      sym_lparen,
  [4648] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(106), 1,
      sym_comment,
    ACTIONS(212), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONmerge,
      anon_sym_COLONruleset,
      anon_sym_COLONname,
      anon_sym_COLONwhen,
  [4666] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(107), 1,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(202), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4686] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      sym_ident,
    STATE(108), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_command_repeat7,
    STATE(173), 1,
      sym_schedule,
    STATE(179), 1,
      sym_rparen,
    STATE(184), 1,
      sym_lparen,
  [4720] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(259), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4740] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      sym_comment,
    ACTIONS(261), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(263), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4760] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      sym_comment,
    ACTIONS(204), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(206), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4780] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_delete,
    ACTIONS(59), 1,
      anon_sym_union,
    ACTIONS(61), 1,
      anon_sym_panic,
    ACTIONS(63), 1,
      anon_sym_extract,
    ACTIONS(65), 1,
      sym_ident,
    ACTIONS(265), 1,
      anon_sym_let,
    STATE(112), 1,
      sym_comment,
    STATE(278), 1,
      sym_lparen,
  [4814] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      sym_ident,
    STATE(113), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym_command_repeat7,
    STATE(173), 1,
      sym_schedule,
    STATE(181), 1,
      sym_rparen,
    STATE(184), 1,
      sym_lparen,
  [4848] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(269), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4868] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(115), 1,
      sym_comment,
    ACTIONS(220), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(222), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4888] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      sym_ident,
    STATE(110), 1,
      sym_rparen,
    STATE(116), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym_command_repeat7,
    STATE(173), 1,
      sym_schedule,
    STATE(184), 1,
      sym_lparen,
  [4922] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(117), 1,
      sym_comment,
    ACTIONS(232), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(234), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4942] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(118), 1,
      sym_comment,
    ACTIONS(228), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(230), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4962] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(119), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(273), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4982] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(120), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(226), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [5002] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_comment,
    ACTIONS(69), 7,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_delete,
      anon_sym_union,
      anon_sym_panic,
      anon_sym_extract,
      sym_ident,
  [5021] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_rparen,
    STATE(122), 1,
      sym_comment,
    STATE(135), 1,
      aux_sym_command_repeat6,
    STATE(215), 1,
      sym_identsort,
    STATE(289), 1,
      sym_lparen,
    ACTIONS(93), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5048] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_lparen,
    STATE(123), 1,
      sym_comment,
    STATE(129), 1,
      aux_sym_source_file_repeat1,
    STATE(157), 1,
      sym_nonletaction,
    STATE(180), 1,
      sym_callexpr,
    STATE(225), 1,
      sym_command,
    ACTIONS(7), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5077] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_rparen,
    STATE(122), 1,
      aux_sym_command_repeat6,
    STATE(124), 1,
      sym_comment,
    STATE(215), 1,
      sym_identsort,
    STATE(289), 1,
      sym_lparen,
    ACTIONS(93), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5104] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(277), 1,
      anon_sym_COLONcost,
    ACTIONS(279), 1,
      sym_ident,
    STATE(125), 1,
      sym_comment,
    STATE(138), 1,
      aux_sym_command_repeat4,
    STATE(185), 1,
      sym_rparen,
    STATE(207), 1,
      sym_type,
    STATE(219), 1,
      sym_cost,
  [5135] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(277), 1,
      anon_sym_COLONcost,
    ACTIONS(281), 1,
      anon_sym_COLONunextractable,
    ACTIONS(283), 1,
      anon_sym_COLONon_merge,
    ACTIONS(285), 1,
      anon_sym_COLONmerge,
    STATE(126), 1,
      sym_comment,
    STATE(141), 1,
      sym_cost,
    STATE(175), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5164] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(127), 1,
      sym_comment,
    STATE(131), 1,
      aux_sym_command_repeat1,
    STATE(167), 1,
      sym_rparen,
    STATE(202), 1,
      sym_variant,
    STATE(284), 1,
      sym_lparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5191] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(277), 1,
      anon_sym_COLONcost,
    ACTIONS(279), 1,
      sym_ident,
    STATE(125), 1,
      aux_sym_command_repeat4,
    STATE(128), 1,
      sym_comment,
    STATE(182), 1,
      sym_rparen,
    STATE(207), 1,
      sym_type,
    STATE(252), 1,
      sym_cost,
  [5222] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_lparen,
    STATE(157), 1,
      sym_nonletaction,
    STATE(180), 1,
      sym_callexpr,
    STATE(225), 1,
      sym_command,
    ACTIONS(289), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(129), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [5249] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    ACTIONS(302), 1,
      sym_ident,
    STATE(173), 1,
      sym_schedule,
    STATE(184), 1,
      sym_lparen,
    STATE(130), 2,
      sym_comment,
      aux_sym_command_repeat7,
  [5278] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(131), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym_command_repeat1,
    STATE(175), 1,
      sym_rparen,
    STATE(202), 1,
      sym_variant,
    STATE(284), 1,
      sym_lparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5305] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_comment,
    ACTIONS(216), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [5321] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(133), 1,
      sym_comment,
    ACTIONS(236), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [5337] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      sym_variant,
    STATE(284), 1,
      sym_lparen,
    ACTIONS(305), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(308), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(134), 2,
      sym_comment,
      aux_sym_command_repeat1,
  [5359] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(215), 1,
      sym_identsort,
    STATE(289), 1,
      sym_lparen,
    ACTIONS(310), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(313), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(135), 2,
      sym_comment,
      aux_sym_command_repeat6,
  [5381] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(136), 1,
      sym_comment,
    ACTIONS(315), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONcost,
  [5396] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(2), 1,
      sym_lparen,
    STATE(137), 1,
      sym_comment,
    STATE(157), 1,
      sym_nonletaction,
    STATE(180), 1,
      sym_callexpr,
    STATE(248), 1,
      sym_command,
    ACTIONS(7), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5419] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    ACTIONS(321), 1,
      sym_ident,
    STATE(207), 1,
      sym_type,
    ACTIONS(317), 2,
      anon_sym_RPAREN,
      anon_sym_COLONcost,
    STATE(138), 2,
      sym_comment,
      aux_sym_command_repeat4,
  [5440] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(279), 1,
      sym_ident,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    STATE(139), 1,
      sym_comment,
    STATE(142), 1,
      aux_sym_command_repeat4,
    STATE(207), 1,
      sym_type,
    STATE(264), 1,
      sym_rparen,
  [5465] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(279), 1,
      sym_ident,
    STATE(138), 1,
      aux_sym_command_repeat4,
    STATE(140), 1,
      sym_comment,
    STATE(207), 1,
      sym_type,
    STATE(253), 1,
      sym_rparen,
  [5490] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(328), 1,
      anon_sym_COLONunextractable,
    ACTIONS(330), 1,
      anon_sym_COLONon_merge,
    ACTIONS(332), 1,
      anon_sym_COLONmerge,
    STATE(141), 1,
      sym_comment,
    STATE(163), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5513] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(279), 1,
      sym_ident,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    STATE(138), 1,
      aux_sym_command_repeat4,
    STATE(142), 1,
      sym_comment,
    STATE(207), 1,
      sym_type,
    STATE(266), 1,
      sym_rparen,
  [5538] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(143), 1,
      sym_comment,
    STATE(167), 1,
      sym_rparen,
    STATE(280), 1,
      sym_lparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5559] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(144), 1,
      sym_comment,
    ACTIONS(334), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONcost,
  [5574] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(279), 1,
      sym_ident,
    STATE(140), 1,
      aux_sym_command_repeat4,
    STATE(145), 1,
      sym_comment,
    STATE(207), 1,
      sym_type,
    STATE(224), 1,
      sym_rparen,
  [5599] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(146), 1,
      sym_comment,
    ACTIONS(336), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONcost,
  [5614] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(147), 1,
      sym_comment,
    ACTIONS(338), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5628] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(148), 1,
      sym_comment,
    ACTIONS(340), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5642] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_ident,
    STATE(65), 1,
      sym_schedule,
    STATE(149), 1,
      sym_comment,
    STATE(193), 1,
      sym_lparen,
  [5664] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(150), 1,
      sym_comment,
    ACTIONS(344), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5678] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(151), 1,
      sym_comment,
    ACTIONS(346), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5692] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(330), 1,
      anon_sym_COLONon_merge,
    ACTIONS(332), 1,
      anon_sym_COLONmerge,
    STATE(152), 1,
      sym_comment,
    STATE(163), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5712] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(348), 1,
      anon_sym_COLONuntil,
    ACTIONS(350), 1,
      sym_ident,
    STATE(153), 1,
      sym_comment,
    STATE(178), 1,
      sym_rparen,
  [5734] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(352), 1,
      anon_sym_COLONruleset,
    ACTIONS(354), 1,
      anon_sym_COLONname,
    STATE(154), 1,
      sym_comment,
    STATE(172), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5754] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(356), 1,
      anon_sym_COLONruleset,
    ACTIONS(358), 1,
      anon_sym_COLONwhen,
    STATE(155), 1,
      sym_comment,
    STATE(175), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5774] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(156), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(214), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [5790] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(157), 1,
      sym_comment,
    ACTIONS(360), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5804] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(362), 1,
      anon_sym_COLONuntil,
    ACTIONS(364), 1,
      sym_ident,
    STATE(92), 1,
      sym_rparen,
    STATE(158), 1,
      sym_comment,
  [5826] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      sym_comment,
    ACTIONS(366), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5840] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(160), 1,
      sym_comment,
    ACTIONS(368), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5854] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      sym_comment,
    ACTIONS(370), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5868] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(162), 1,
      sym_comment,
    ACTIONS(372), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5882] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(163), 1,
      sym_comment,
    ACTIONS(374), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5896] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(164), 1,
      sym_comment,
    ACTIONS(376), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5910] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(165), 1,
      sym_comment,
    ACTIONS(378), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
  [5924] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(380), 1,
      anon_sym_COLONon_merge,
    ACTIONS(382), 1,
      anon_sym_COLONmerge,
    STATE(166), 1,
      sym_comment,
    STATE(170), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5944] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(167), 1,
      sym_comment,
    ACTIONS(384), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5958] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(386), 1,
      anon_sym_COLONruleset,
    ACTIONS(388), 1,
      anon_sym_COLONname,
    STATE(168), 1,
      sym_comment,
    STATE(170), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5978] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(169), 1,
      sym_comment,
    ACTIONS(390), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5992] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(170), 1,
      sym_comment,
    ACTIONS(392), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6006] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(171), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(269), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [6022] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(172), 1,
      sym_comment,
    ACTIONS(394), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6036] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(398), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [6052] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(174), 1,
      sym_comment,
    ACTIONS(400), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6066] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(175), 1,
      sym_comment,
    ACTIONS(402), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6080] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(176), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(273), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [6096] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(404), 1,
      anon_sym_COLONruleset,
    ACTIONS(406), 1,
      anon_sym_COLONname,
    STATE(159), 1,
      sym_rparen,
    STATE(177), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6116] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      sym_comment,
    ACTIONS(246), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(248), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [6132] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(179), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(259), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [6148] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(180), 1,
      sym_comment,
    ACTIONS(408), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6162] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(181), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(263), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [6178] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(182), 1,
      sym_comment,
    ACTIONS(410), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6191] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(406), 1,
      anon_sym_COLONname,
    STATE(159), 1,
      sym_rparen,
    STATE(183), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6208] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(412), 1,
      anon_sym_run,
    ACTIONS(416), 1,
      anon_sym_repeat,
    STATE(184), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [6225] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(185), 1,
      sym_comment,
    ACTIONS(418), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6238] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(420), 1,
      anon_sym_COLONuntil,
    STATE(179), 1,
      sym_rparen,
    STATE(186), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6255] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(422), 1,
      sym_unum,
    STATE(174), 1,
      sym_rparen,
    STATE(187), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6272] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(126), 1,
      sym_schema,
    STATE(139), 1,
      sym_lparen,
    STATE(188), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6289] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(189), 1,
      sym_comment,
    ACTIONS(426), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6302] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(190), 1,
      sym_comment,
    ACTIONS(428), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6315] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(430), 1,
      anon_sym_COLONmerge,
    STATE(172), 1,
      sym_rparen,
    STATE(191), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6332] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(432), 1,
      anon_sym_COLONuntil,
    STATE(167), 1,
      sym_rparen,
    STATE(192), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6349] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(434), 1,
      anon_sym_run,
    ACTIONS(438), 1,
      anon_sym_repeat,
    STATE(193), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [6366] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(194), 1,
      sym_comment,
    ACTIONS(204), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [6379] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(440), 1,
      sym_unum,
    STATE(167), 1,
      sym_rparen,
    STATE(195), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6396] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(196), 1,
      sym_comment,
    ACTIONS(200), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [6409] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      sym_comment,
    ACTIONS(232), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [6422] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(198), 1,
      sym_comment,
    ACTIONS(228), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [6435] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(199), 1,
      sym_comment,
    ACTIONS(224), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [6448] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(200), 1,
      sym_comment,
    ACTIONS(220), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [6461] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(442), 1,
      anon_sym_COLONruleset,
    STATE(172), 1,
      sym_rparen,
    STATE(201), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6478] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      sym_comment,
    ACTIONS(444), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6491] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(446), 1,
      anon_sym_COLONuntil,
    STATE(109), 1,
      sym_rparen,
    STATE(203), 1,
      sym_comment,
    ACTIONS(93), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6508] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(448), 1,
      anon_sym_COLONuntil,
    STATE(175), 1,
      sym_rparen,
    STATE(204), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6525] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(205), 1,
      sym_comment,
    ACTIONS(450), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6538] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(452), 1,
      anon_sym_COLONmerge,
    STATE(151), 1,
      sym_rparen,
    STATE(206), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6555] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(207), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_RPAREN,
      anon_sym_COLONcost,
    ACTIONS(456), 2,
      anon_sym_RBRACK,
      sym_ident,
  [6570] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      sym_comment,
    ACTIONS(458), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6583] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(209), 1,
      sym_comment,
    ACTIONS(460), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6596] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(462), 1,
      anon_sym_COLONruleset,
    STATE(159), 1,
      sym_rparen,
    STATE(210), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6613] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_COLONmerge,
    STATE(159), 1,
      sym_rparen,
    STATE(211), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6630] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(466), 1,
      anon_sym_COLONname,
    STATE(151), 1,
      sym_rparen,
    STATE(212), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6647] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(213), 1,
      sym_comment,
    ACTIONS(336), 2,
      anon_sym_RPAREN,
      anon_sym_COLONcost,
    ACTIONS(468), 2,
      anon_sym_RBRACK,
      sym_ident,
  [6662] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      anon_sym_COLONname,
    STATE(164), 1,
      sym_rparen,
    STATE(214), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6679] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(215), 1,
      sym_comment,
    ACTIONS(472), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6692] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(474), 1,
      anon_sym_COLONmerge,
    STATE(164), 1,
      sym_rparen,
    STATE(216), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6709] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(148), 1,
      sym_rparen,
    STATE(217), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6723] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(162), 1,
      sym_rparen,
    STATE(218), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6737] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(209), 1,
      sym_rparen,
    STATE(219), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6751] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      anon_sym_DQUOTE,
    ACTIONS(480), 1,
      aux_sym_string_token1,
    STATE(220), 1,
      sym_comment,
    STATE(222), 1,
      aux_sym_string_repeat1,
  [6767] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(160), 1,
      sym_rparen,
    STATE(221), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6781] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    ACTIONS(484), 1,
      aux_sym_string_token1,
    STATE(222), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [6795] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(480), 1,
      aux_sym_string_token1,
    ACTIONS(487), 1,
      anon_sym_DQUOTE,
    STATE(220), 1,
      aux_sym_string_repeat1,
    STATE(223), 1,
      sym_comment,
  [6811] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(163), 1,
      sym_rparen,
    STATE(224), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6825] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(225), 1,
      sym_comment,
    ACTIONS(489), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6837] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      sym_rparen,
    STATE(226), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6851] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(84), 1,
      sym_lparen,
    STATE(227), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6865] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(205), 1,
      sym_rparen,
    STATE(228), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6879] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      sym_lparen,
    STATE(229), 1,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6893] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(480), 1,
      aux_sym_string_token1,
    ACTIONS(493), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      aux_sym_string_repeat1,
    STATE(230), 1,
      sym_comment,
  [6909] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(480), 1,
      aux_sym_string_token1,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym_string_repeat1,
    STATE(231), 1,
      sym_comment,
  [6925] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(150), 1,
      sym_rparen,
    STATE(232), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6939] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(164), 1,
      sym_rparen,
    STATE(233), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6953] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(124), 1,
      sym_lparen,
    STATE(234), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6967] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      sym_rparen,
    STATE(235), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6981] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(174), 1,
      sym_rparen,
    STATE(236), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6995] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_RBRACK,
      sym_ident,
  [7009] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(172), 1,
      sym_rparen,
    STATE(238), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7023] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(151), 1,
      sym_rparen,
    STATE(239), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7037] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(240), 1,
      sym_comment,
    STATE(277), 1,
      sym_lparen,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7051] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym_lparen,
    STATE(241), 1,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7065] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(480), 1,
      aux_sym_string_token1,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      aux_sym_string_repeat1,
    STATE(242), 1,
      sym_comment,
  [7081] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      sym_rparen,
    STATE(243), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7095] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(82), 1,
      sym_lparen,
    STATE(244), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7109] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(145), 1,
      sym_lparen,
    STATE(245), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7123] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      sym_lparen,
    STATE(246), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7137] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(169), 1,
      sym_rparen,
    STATE(247), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7151] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(167), 1,
      sym_rparen,
    STATE(248), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7165] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      sym_lparen,
    STATE(249), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7179] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(480), 1,
      aux_sym_string_token1,
    ACTIONS(499), 1,
      anon_sym_DQUOTE,
    STATE(242), 1,
      aux_sym_string_repeat1,
    STATE(250), 1,
      sym_comment,
  [7195] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(147), 1,
      sym_rparen,
    STATE(251), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7209] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(185), 1,
      sym_rparen,
    STATE(252), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7223] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(170), 1,
      sym_rparen,
    STATE(253), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7237] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      sym_lparen,
    STATE(254), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7251] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(175), 1,
      sym_rparen,
    STATE(255), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7265] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      sym_string,
    STATE(256), 1,
      sym_comment,
  [7278] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(218), 1,
      sym_string,
    STATE(257), 1,
      sym_comment,
  [7291] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(233), 1,
      sym_string,
    STATE(258), 1,
      sym_comment,
  [7304] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(255), 1,
      sym_string,
    STATE(259), 1,
      sym_comment,
  [7317] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(226), 1,
      sym_string,
    STATE(260), 1,
      sym_comment,
  [7330] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(501), 1,
      sym_unum,
    ACTIONS(503), 1,
      sym_ident,
    STATE(261), 1,
      sym_comment,
  [7343] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(262), 1,
      sym_comment,
    ACTIONS(240), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7354] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      sym_ident,
    ACTIONS(505), 1,
      anon_sym_EQ,
    STATE(263), 1,
      sym_comment,
  [7367] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(507), 1,
      sym_ident,
    STATE(144), 1,
      sym_type,
    STATE(264), 1,
      sym_comment,
  [7380] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_EQ,
    ACTIONS(511), 1,
      sym_ident,
    STATE(265), 1,
      sym_comment,
  [7393] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(507), 1,
      sym_ident,
    STATE(136), 1,
      sym_type,
    STATE(266), 1,
      sym_comment,
  [7406] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(239), 1,
      sym_string,
    STATE(267), 1,
      sym_comment,
  [7419] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(268), 1,
      sym_comment,
    ACTIONS(196), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7430] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(269), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_EQ,
      sym_ident,
  [7441] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_string,
    STATE(270), 1,
      sym_comment,
  [7454] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(507), 1,
      sym_ident,
    STATE(228), 1,
      sym_type,
    STATE(271), 1,
      sym_comment,
  [7467] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(248), 1,
      sym_string,
    STATE(272), 1,
      sym_comment,
  [7480] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(513), 1,
      anon_sym_DQUOTE,
    ACTIONS(515), 1,
      aux_sym_string_token1,
    STATE(273), 1,
      sym_comment,
  [7493] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(217), 1,
      sym_string,
    STATE(274), 1,
      sym_comment,
  [7506] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      sym_ident,
    STATE(275), 1,
      sym_comment,
  [7516] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(517), 1,
      sym_unum,
    STATE(276), 1,
      sym_comment,
  [7526] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(519), 1,
      sym_ident,
    STATE(277), 1,
      sym_comment,
  [7536] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(521), 1,
      anon_sym_set,
    STATE(278), 1,
      sym_comment,
  [7546] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(440), 1,
      sym_ident,
    STATE(279), 1,
      sym_comment,
  [7556] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(523), 1,
      sym_ident,
    STATE(280), 1,
      sym_comment,
  [7566] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(525), 1,
      sym_ident,
    STATE(281), 1,
      sym_comment,
  [7576] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(527), 1,
      sym_ident,
    STATE(282), 1,
      sym_comment,
  [7586] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(529), 1,
      sym_ident,
    STATE(283), 1,
      sym_comment,
  [7596] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(531), 1,
      sym_ident,
    STATE(284), 1,
      sym_comment,
  [7606] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(533), 1,
      sym_unum,
    STATE(285), 1,
      sym_comment,
  [7616] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(535), 1,
      sym_ident,
    STATE(286), 1,
      sym_comment,
  [7626] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(537), 1,
      sym_ident,
    STATE(287), 1,
      sym_comment,
  [7636] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(539), 1,
      sym_ident,
    STATE(288), 1,
      sym_comment,
  [7646] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(541), 1,
      sym_ident,
    STATE(289), 1,
      sym_comment,
  [7656] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(543), 1,
      sym_ident,
    STATE(290), 1,
      sym_comment,
  [7666] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(545), 1,
      sym_unum,
    STATE(291), 1,
      sym_comment,
  [7676] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(212), 1,
      sym_ident,
    STATE(292), 1,
      sym_comment,
  [7686] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(547), 1,
      sym_ident,
    STATE(293), 1,
      sym_comment,
  [7696] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(549), 1,
      sym_ident,
    STATE(294), 1,
      sym_comment,
  [7706] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(422), 1,
      sym_ident,
    STATE(295), 1,
      sym_comment,
  [7716] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(551), 1,
      sym_ident,
    STATE(296), 1,
      sym_comment,
  [7726] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(553), 1,
      sym_ident,
    STATE(297), 1,
      sym_comment,
  [7736] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(555), 1,
      sym_ident,
    STATE(298), 1,
      sym_comment,
  [7746] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(557), 1,
      sym_ident,
    STATE(299), 1,
      sym_comment,
  [7756] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(559), 1,
      sym_ident,
    STATE(300), 1,
      sym_comment,
  [7766] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(561), 1,
      sym_ident,
    STATE(301), 1,
      sym_comment,
  [7776] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(563), 1,
      sym_ident,
    STATE(302), 1,
      sym_comment,
  [7786] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(565), 1,
      ts_builtin_sym_end,
    STATE(303), 1,
      sym_comment,
  [7796] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(567), 1,
      sym_ident,
    STATE(304), 1,
      sym_comment,
  [7806] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(569), 1,
      sym_unum,
    STATE(305), 1,
      sym_comment,
  [7816] = 3,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(571), 1,
      aux_sym_comment_token1,
    STATE(306), 1,
      sym_comment,
  [7826] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(573), 1,
      sym_ident,
    STATE(307), 1,
      sym_comment,
  [7836] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(575), 1,
      sym_ident,
    STATE(308), 1,
      sym_comment,
  [7846] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(577), 1,
      sym_unum,
    STATE(309), 1,
      sym_comment,
  [7856] = 1,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 102,
  [SMALL_STATE(4)] = 147,
  [SMALL_STATE(5)] = 209,
  [SMALL_STATE(6)] = 271,
  [SMALL_STATE(7)] = 333,
  [SMALL_STATE(8)] = 395,
  [SMALL_STATE(9)] = 457,
  [SMALL_STATE(10)] = 519,
  [SMALL_STATE(11)] = 581,
  [SMALL_STATE(12)] = 643,
  [SMALL_STATE(13)] = 705,
  [SMALL_STATE(14)] = 767,
  [SMALL_STATE(15)] = 829,
  [SMALL_STATE(16)] = 891,
  [SMALL_STATE(17)] = 953,
  [SMALL_STATE(18)] = 1015,
  [SMALL_STATE(19)] = 1077,
  [SMALL_STATE(20)] = 1139,
  [SMALL_STATE(21)] = 1201,
  [SMALL_STATE(22)] = 1263,
  [SMALL_STATE(23)] = 1322,
  [SMALL_STATE(24)] = 1381,
  [SMALL_STATE(25)] = 1440,
  [SMALL_STATE(26)] = 1499,
  [SMALL_STATE(27)] = 1558,
  [SMALL_STATE(28)] = 1617,
  [SMALL_STATE(29)] = 1676,
  [SMALL_STATE(30)] = 1735,
  [SMALL_STATE(31)] = 1794,
  [SMALL_STATE(32)] = 1853,
  [SMALL_STATE(33)] = 1912,
  [SMALL_STATE(34)] = 1971,
  [SMALL_STATE(35)] = 2030,
  [SMALL_STATE(36)] = 2087,
  [SMALL_STATE(37)] = 2146,
  [SMALL_STATE(38)] = 2205,
  [SMALL_STATE(39)] = 2259,
  [SMALL_STATE(40)] = 2315,
  [SMALL_STATE(41)] = 2368,
  [SMALL_STATE(42)] = 2418,
  [SMALL_STATE(43)] = 2468,
  [SMALL_STATE(44)] = 2518,
  [SMALL_STATE(45)] = 2568,
  [SMALL_STATE(46)] = 2618,
  [SMALL_STATE(47)] = 2668,
  [SMALL_STATE(48)] = 2716,
  [SMALL_STATE(49)] = 2766,
  [SMALL_STATE(50)] = 2816,
  [SMALL_STATE(51)] = 2863,
  [SMALL_STATE(52)] = 2910,
  [SMALL_STATE(53)] = 2957,
  [SMALL_STATE(54)] = 3004,
  [SMALL_STATE(55)] = 3051,
  [SMALL_STATE(56)] = 3098,
  [SMALL_STATE(57)] = 3145,
  [SMALL_STATE(58)] = 3192,
  [SMALL_STATE(59)] = 3239,
  [SMALL_STATE(60)] = 3286,
  [SMALL_STATE(61)] = 3333,
  [SMALL_STATE(62)] = 3380,
  [SMALL_STATE(63)] = 3427,
  [SMALL_STATE(64)] = 3474,
  [SMALL_STATE(65)] = 3521,
  [SMALL_STATE(66)] = 3568,
  [SMALL_STATE(67)] = 3597,
  [SMALL_STATE(68)] = 3626,
  [SMALL_STATE(69)] = 3648,
  [SMALL_STATE(70)] = 3670,
  [SMALL_STATE(71)] = 3692,
  [SMALL_STATE(72)] = 3714,
  [SMALL_STATE(73)] = 3736,
  [SMALL_STATE(74)] = 3758,
  [SMALL_STATE(75)] = 3780,
  [SMALL_STATE(76)] = 3802,
  [SMALL_STATE(77)] = 3824,
  [SMALL_STATE(78)] = 3846,
  [SMALL_STATE(79)] = 3868,
  [SMALL_STATE(80)] = 3890,
  [SMALL_STATE(81)] = 3912,
  [SMALL_STATE(82)] = 3934,
  [SMALL_STATE(83)] = 3967,
  [SMALL_STATE(84)] = 4000,
  [SMALL_STATE(85)] = 4033,
  [SMALL_STATE(86)] = 4066,
  [SMALL_STATE(87)] = 4099,
  [SMALL_STATE(88)] = 4132,
  [SMALL_STATE(89)] = 4165,
  [SMALL_STATE(90)] = 4198,
  [SMALL_STATE(91)] = 4231,
  [SMALL_STATE(92)] = 4264,
  [SMALL_STATE(93)] = 4284,
  [SMALL_STATE(94)] = 4304,
  [SMALL_STATE(95)] = 4332,
  [SMALL_STATE(96)] = 4352,
  [SMALL_STATE(97)] = 4386,
  [SMALL_STATE(98)] = 4406,
  [SMALL_STATE(99)] = 4440,
  [SMALL_STATE(100)] = 4474,
  [SMALL_STATE(101)] = 4508,
  [SMALL_STATE(102)] = 4526,
  [SMALL_STATE(103)] = 4546,
  [SMALL_STATE(104)] = 4580,
  [SMALL_STATE(105)] = 4614,
  [SMALL_STATE(106)] = 4648,
  [SMALL_STATE(107)] = 4666,
  [SMALL_STATE(108)] = 4686,
  [SMALL_STATE(109)] = 4720,
  [SMALL_STATE(110)] = 4740,
  [SMALL_STATE(111)] = 4760,
  [SMALL_STATE(112)] = 4780,
  [SMALL_STATE(113)] = 4814,
  [SMALL_STATE(114)] = 4848,
  [SMALL_STATE(115)] = 4868,
  [SMALL_STATE(116)] = 4888,
  [SMALL_STATE(117)] = 4922,
  [SMALL_STATE(118)] = 4942,
  [SMALL_STATE(119)] = 4962,
  [SMALL_STATE(120)] = 4982,
  [SMALL_STATE(121)] = 5002,
  [SMALL_STATE(122)] = 5021,
  [SMALL_STATE(123)] = 5048,
  [SMALL_STATE(124)] = 5077,
  [SMALL_STATE(125)] = 5104,
  [SMALL_STATE(126)] = 5135,
  [SMALL_STATE(127)] = 5164,
  [SMALL_STATE(128)] = 5191,
  [SMALL_STATE(129)] = 5222,
  [SMALL_STATE(130)] = 5249,
  [SMALL_STATE(131)] = 5278,
  [SMALL_STATE(132)] = 5305,
  [SMALL_STATE(133)] = 5321,
  [SMALL_STATE(134)] = 5337,
  [SMALL_STATE(135)] = 5359,
  [SMALL_STATE(136)] = 5381,
  [SMALL_STATE(137)] = 5396,
  [SMALL_STATE(138)] = 5419,
  [SMALL_STATE(139)] = 5440,
  [SMALL_STATE(140)] = 5465,
  [SMALL_STATE(141)] = 5490,
  [SMALL_STATE(142)] = 5513,
  [SMALL_STATE(143)] = 5538,
  [SMALL_STATE(144)] = 5559,
  [SMALL_STATE(145)] = 5574,
  [SMALL_STATE(146)] = 5599,
  [SMALL_STATE(147)] = 5614,
  [SMALL_STATE(148)] = 5628,
  [SMALL_STATE(149)] = 5642,
  [SMALL_STATE(150)] = 5664,
  [SMALL_STATE(151)] = 5678,
  [SMALL_STATE(152)] = 5692,
  [SMALL_STATE(153)] = 5712,
  [SMALL_STATE(154)] = 5734,
  [SMALL_STATE(155)] = 5754,
  [SMALL_STATE(156)] = 5774,
  [SMALL_STATE(157)] = 5790,
  [SMALL_STATE(158)] = 5804,
  [SMALL_STATE(159)] = 5826,
  [SMALL_STATE(160)] = 5840,
  [SMALL_STATE(161)] = 5854,
  [SMALL_STATE(162)] = 5868,
  [SMALL_STATE(163)] = 5882,
  [SMALL_STATE(164)] = 5896,
  [SMALL_STATE(165)] = 5910,
  [SMALL_STATE(166)] = 5924,
  [SMALL_STATE(167)] = 5944,
  [SMALL_STATE(168)] = 5958,
  [SMALL_STATE(169)] = 5978,
  [SMALL_STATE(170)] = 5992,
  [SMALL_STATE(171)] = 6006,
  [SMALL_STATE(172)] = 6022,
  [SMALL_STATE(173)] = 6036,
  [SMALL_STATE(174)] = 6052,
  [SMALL_STATE(175)] = 6066,
  [SMALL_STATE(176)] = 6080,
  [SMALL_STATE(177)] = 6096,
  [SMALL_STATE(178)] = 6116,
  [SMALL_STATE(179)] = 6132,
  [SMALL_STATE(180)] = 6148,
  [SMALL_STATE(181)] = 6162,
  [SMALL_STATE(182)] = 6178,
  [SMALL_STATE(183)] = 6191,
  [SMALL_STATE(184)] = 6208,
  [SMALL_STATE(185)] = 6225,
  [SMALL_STATE(186)] = 6238,
  [SMALL_STATE(187)] = 6255,
  [SMALL_STATE(188)] = 6272,
  [SMALL_STATE(189)] = 6289,
  [SMALL_STATE(190)] = 6302,
  [SMALL_STATE(191)] = 6315,
  [SMALL_STATE(192)] = 6332,
  [SMALL_STATE(193)] = 6349,
  [SMALL_STATE(194)] = 6366,
  [SMALL_STATE(195)] = 6379,
  [SMALL_STATE(196)] = 6396,
  [SMALL_STATE(197)] = 6409,
  [SMALL_STATE(198)] = 6422,
  [SMALL_STATE(199)] = 6435,
  [SMALL_STATE(200)] = 6448,
  [SMALL_STATE(201)] = 6461,
  [SMALL_STATE(202)] = 6478,
  [SMALL_STATE(203)] = 6491,
  [SMALL_STATE(204)] = 6508,
  [SMALL_STATE(205)] = 6525,
  [SMALL_STATE(206)] = 6538,
  [SMALL_STATE(207)] = 6555,
  [SMALL_STATE(208)] = 6570,
  [SMALL_STATE(209)] = 6583,
  [SMALL_STATE(210)] = 6596,
  [SMALL_STATE(211)] = 6613,
  [SMALL_STATE(212)] = 6630,
  [SMALL_STATE(213)] = 6647,
  [SMALL_STATE(214)] = 6662,
  [SMALL_STATE(215)] = 6679,
  [SMALL_STATE(216)] = 6692,
  [SMALL_STATE(217)] = 6709,
  [SMALL_STATE(218)] = 6723,
  [SMALL_STATE(219)] = 6737,
  [SMALL_STATE(220)] = 6751,
  [SMALL_STATE(221)] = 6767,
  [SMALL_STATE(222)] = 6781,
  [SMALL_STATE(223)] = 6795,
  [SMALL_STATE(224)] = 6811,
  [SMALL_STATE(225)] = 6825,
  [SMALL_STATE(226)] = 6837,
  [SMALL_STATE(227)] = 6851,
  [SMALL_STATE(228)] = 6865,
  [SMALL_STATE(229)] = 6879,
  [SMALL_STATE(230)] = 6893,
  [SMALL_STATE(231)] = 6909,
  [SMALL_STATE(232)] = 6925,
  [SMALL_STATE(233)] = 6939,
  [SMALL_STATE(234)] = 6953,
  [SMALL_STATE(235)] = 6967,
  [SMALL_STATE(236)] = 6981,
  [SMALL_STATE(237)] = 6995,
  [SMALL_STATE(238)] = 7009,
  [SMALL_STATE(239)] = 7023,
  [SMALL_STATE(240)] = 7037,
  [SMALL_STATE(241)] = 7051,
  [SMALL_STATE(242)] = 7065,
  [SMALL_STATE(243)] = 7081,
  [SMALL_STATE(244)] = 7095,
  [SMALL_STATE(245)] = 7109,
  [SMALL_STATE(246)] = 7123,
  [SMALL_STATE(247)] = 7137,
  [SMALL_STATE(248)] = 7151,
  [SMALL_STATE(249)] = 7165,
  [SMALL_STATE(250)] = 7179,
  [SMALL_STATE(251)] = 7195,
  [SMALL_STATE(252)] = 7209,
  [SMALL_STATE(253)] = 7223,
  [SMALL_STATE(254)] = 7237,
  [SMALL_STATE(255)] = 7251,
  [SMALL_STATE(256)] = 7265,
  [SMALL_STATE(257)] = 7278,
  [SMALL_STATE(258)] = 7291,
  [SMALL_STATE(259)] = 7304,
  [SMALL_STATE(260)] = 7317,
  [SMALL_STATE(261)] = 7330,
  [SMALL_STATE(262)] = 7343,
  [SMALL_STATE(263)] = 7354,
  [SMALL_STATE(264)] = 7367,
  [SMALL_STATE(265)] = 7380,
  [SMALL_STATE(266)] = 7393,
  [SMALL_STATE(267)] = 7406,
  [SMALL_STATE(268)] = 7419,
  [SMALL_STATE(269)] = 7430,
  [SMALL_STATE(270)] = 7441,
  [SMALL_STATE(271)] = 7454,
  [SMALL_STATE(272)] = 7467,
  [SMALL_STATE(273)] = 7480,
  [SMALL_STATE(274)] = 7493,
  [SMALL_STATE(275)] = 7506,
  [SMALL_STATE(276)] = 7516,
  [SMALL_STATE(277)] = 7526,
  [SMALL_STATE(278)] = 7536,
  [SMALL_STATE(279)] = 7546,
  [SMALL_STATE(280)] = 7556,
  [SMALL_STATE(281)] = 7566,
  [SMALL_STATE(282)] = 7576,
  [SMALL_STATE(283)] = 7586,
  [SMALL_STATE(284)] = 7596,
  [SMALL_STATE(285)] = 7606,
  [SMALL_STATE(286)] = 7616,
  [SMALL_STATE(287)] = 7626,
  [SMALL_STATE(288)] = 7636,
  [SMALL_STATE(289)] = 7646,
  [SMALL_STATE(290)] = 7656,
  [SMALL_STATE(291)] = 7666,
  [SMALL_STATE(292)] = 7676,
  [SMALL_STATE(293)] = 7686,
  [SMALL_STATE(294)] = 7696,
  [SMALL_STATE(295)] = 7706,
  [SMALL_STATE(296)] = 7716,
  [SMALL_STATE(297)] = 7726,
  [SMALL_STATE(298)] = 7736,
  [SMALL_STATE(299)] = 7746,
  [SMALL_STATE(300)] = 7756,
  [SMALL_STATE(301)] = 7766,
  [SMALL_STATE(302)] = 7776,
  [SMALL_STATE(303)] = 7786,
  [SMALL_STATE(304)] = 7796,
  [SMALL_STATE(305)] = 7806,
  [SMALL_STATE(306)] = 7816,
  [SMALL_STATE(307)] = 7826,
  [SMALL_STATE(308)] = 7836,
  [SMALL_STATE(309)] = 7846,
  [SMALL_STATE(310)] = 7856,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lparen, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lparen, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(269),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(269),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(74),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(75),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(75),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(76),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(223),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(275),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(275),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(74),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(75),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(75),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(76),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(223),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(115),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(120),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(120),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(118),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(250),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rparen, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rparen, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f64, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f64, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symstring, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symstring, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 3),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2), SHIFT_REPEAT(121),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 5),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 5),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 6),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 6),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(101),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(101),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(171),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(275),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2), SHIFT_REPEAT(275),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat4, 2),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat4, 2), SHIFT_REPEAT(213),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 6),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 13),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 5),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 11),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 9),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 8),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 12),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 10),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 7),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 7),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 8),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identsort, 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat4, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 5),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(273),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [565] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
