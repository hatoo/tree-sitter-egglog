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
#define STATE_COUNT 319
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  sym_ws = 2,
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
  anon_sym_COLONdefault = 15,
  anon_sym_declare = 16,
  anon_sym_relation = 17,
  anon_sym_ruleset = 18,
  anon_sym_rule = 19,
  anon_sym_COLONruleset = 20,
  anon_sym_COLONname = 21,
  anon_sym_rewrite = 22,
  anon_sym_COLONwhen = 23,
  anon_sym_birewrite = 24,
  anon_sym_let = 25,
  anon_sym_run = 26,
  anon_sym_COLONuntil = 27,
  anon_sym_simplify = 28,
  anon_sym_add_DASHruleset = 29,
  anon_sym_calc = 30,
  anon_sym_query_DASHextract = 31,
  anon_sym_COLONvariants = 32,
  anon_sym_check = 33,
  anon_sym_check_DASHproof = 34,
  anon_sym_run_DASHschedule = 35,
  anon_sym_push = 36,
  anon_sym_pop = 37,
  anon_sym_print_DASHtable = 38,
  anon_sym_print_DASHsize = 39,
  anon_sym_input = 40,
  anon_sym_output = 41,
  anon_sym_fail = 42,
  anon_sym_include = 43,
  anon_sym_saturate = 44,
  anon_sym_seq = 45,
  anon_sym_repeat = 46,
  anon_sym_COLONcost = 47,
  anon_sym_set = 48,
  anon_sym_delete = 49,
  anon_sym_union = 50,
  anon_sym_panic = 51,
  anon_sym_extract = 52,
  anon_sym_EQ = 53,
  sym_num = 54,
  sym_unum = 55,
  anon_sym_NaN = 56,
  aux_sym_f64_token1 = 57,
  anon_sym_inf = 58,
  anon_sym_DASHinf = 59,
  sym_ident = 60,
  anon_sym_DQUOTE = 61,
  aux_sym_string_token1 = 62,
  sym_source_file = 63,
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
  [sym_comment] = "comment",
  [sym_ws] = "ws",
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
  [anon_sym_COLONdefault] = ":default",
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
  [sym_comment] = sym_comment,
  [sym_ws] = sym_ws,
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
  [anon_sym_COLONdefault] = anon_sym_COLONdefault,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_ws] = {
    .visible = true,
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
  [anon_sym_COLONdefault] = {
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
  [9] = 7,
  [10] = 5,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 14,
  [19] = 19,
  [20] = 20,
  [21] = 6,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 24,
  [27] = 27,
  [28] = 25,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 24,
  [34] = 25,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 43,
  [47] = 47,
  [48] = 48,
  [49] = 45,
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
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 75,
  [77] = 3,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
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
  [92] = 79,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 85,
  [103] = 103,
  [104] = 84,
  [105] = 86,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 78,
  [110] = 88,
  [111] = 82,
  [112] = 112,
  [113] = 103,
  [114] = 114,
  [115] = 79,
  [116] = 106,
  [117] = 107,
  [118] = 118,
  [119] = 119,
  [120] = 3,
  [121] = 83,
  [122] = 122,
  [123] = 80,
  [124] = 124,
  [125] = 108,
  [126] = 126,
  [127] = 127,
  [128] = 84,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 3,
  [137] = 137,
  [138] = 138,
  [139] = 82,
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
  [156] = 78,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 79,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 101,
  [169] = 169,
  [170] = 122,
  [171] = 119,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 118,
  [176] = 80,
  [177] = 177,
  [178] = 83,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 100,
  [188] = 88,
  [189] = 86,
  [190] = 190,
  [191] = 85,
  [192] = 192,
  [193] = 193,
  [194] = 165,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 203,
  [206] = 206,
  [207] = 142,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
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
  [224] = 220,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 230,
  [239] = 239,
  [240] = 231,
  [241] = 241,
  [242] = 242,
  [243] = 3,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 230,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 231,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 3,
  [275] = 275,
  [276] = 276,
  [277] = 81,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 87,
  [283] = 283,
  [284] = 278,
  [285] = 285,
  [286] = 286,
  [287] = 79,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 3,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 294,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 294,
  [316] = 316,
  [317] = 301,
  [318] = 318,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '(') ADVANCE(470);
      if (lookahead == ')') ADVANCE(470);
      if (lookahead == ',') ADVANCE(470);
      if (lookahead == '-') ADVANCE(382);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == ';') ADVANCE(470);
      if (lookahead == '=') ADVANCE(470);
      if (lookahead == 'N') ADVANCE(323);
      if (lookahead == '[') ADVANCE(470);
      if (lookahead == ']') ADVANCE(470);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'b') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(324);
      if (lookahead == 'd') ADVANCE(325);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead == 'f') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(403);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(455);
      if (lookahead == 'p') ADVANCE(339);
      if (lookahead == 'q') ADVANCE(459);
      if (lookahead == 'r') ADVANCE(357);
      if (lookahead == 's') ADVANCE(332);
      if (lookahead == 'u') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == ';') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == 'N') ADVANCE(155);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == ']') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == 'N') ADVANCE(155);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == ']') ADVANCE(96);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'b') ADVANCE(207);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(159);
      if (lookahead == 'q') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(239);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(239);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == ']') ADVANCE(96);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '=') ADVANCE(143);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 61:
      if (lookahead == 'q') ADVANCE(135);
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 83:
      if (lookahead == 'v') ADVANCE(18);
      END_STATE();
    case 84:
      if (lookahead == 'x') ADVANCE(79);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 87:
      if (eof) ADVANCE(88);
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == ']') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_datatype);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COLONunextractable);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COLONon_merge);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COLONmerge);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLONdefault);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_relation);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ruleset);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 's') ADVANCE(198);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COLONruleset);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLONname);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLONwhen);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_birewrite);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(267);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COLONuntil);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_add_DASHruleset);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COLONvariants);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_print_DASHtable);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_fail);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_saturate);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COLONcost);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_panic);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_unum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == 'N') ADVANCE(146);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'h') ADVANCE(190);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'e') ADVANCE(168);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(164);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(151);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(237);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(280);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(263);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 'u') ADVANCE(266);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(241);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(172);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(173);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(288);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'b') ADVANCE(227);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(120);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(219);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(141);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 'l') ADVANCE(197);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(206);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(295);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(287);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(275);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(278);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(175);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(308);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(183);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(297);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(224);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(298);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(108);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(139);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(105);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(133);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(111);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(98);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(113);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(129);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(128);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(125);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(166);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(271);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(269);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(177);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(256);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(262);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(229);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(284);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(276);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(277);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(300);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'f') ADVANCE(124);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'f') ADVANCE(149);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'f') ADVANCE(150);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'f') ADVANCE(301);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'h') ADVANCE(126);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'h') ADVANCE(193);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(259);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(246);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(204);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(304);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(221);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(242);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(167);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(285);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(286);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(247);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(248);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(249);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'k') ADVANCE(123);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(165);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(132);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(158);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(291);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(116);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(209);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(192);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(188);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(189);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(197);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'w') ADVANCE(261);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'm') ADVANCE(251);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(170);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(140);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(100);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(106);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(97);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(171);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(202);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(208);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(203);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(213);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(283);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(201);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(255);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(243);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(233);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(234);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(235);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(236);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'p') ADVANCE(127);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'p') ADVANCE(225);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'p') ADVANCE(258);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'p') ADVANCE(185);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'p') ADVANCE(296);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'p') ADVANCE(289);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(302);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(161);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(245);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(179);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(294);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(214);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(272);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(182);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(215);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(162);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 's') ADVANCE(205);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 's') ADVANCE(169);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == 't') ADVANCE(154);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 's') ADVANCE(199);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(157);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(114);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(99);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(130);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(131);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(142);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(107);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(119);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(121);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(254);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(303);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(307);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(257);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(306);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(181);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(184);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(186);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(216);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(217);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(218);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 't') ADVANCE(265);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(176);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(194);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(279);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(226);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(273);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(274);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(228);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'w') ADVANCE(264);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'x') ADVANCE(282);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'x') ADVANCE(290);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'y') ADVANCE(118);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'y') ADVANCE(309);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'y') ADVANCE(253);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == 'z') ADVANCE(187);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'y')) ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '^') ADVANCE(305);
      if (lookahead == '_') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '+') ADVANCE(315);
      if (lookahead == '-') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '.') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'N') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '_') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'h') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == 'u') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'i') ADVANCE(400);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead == 'u') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'b') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead == 'd') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead == 'u') ADVANCE(406);
      if (lookahead == 'v') ADVANCE(330);
      if (lookahead == 'w') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(392);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'p') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'c') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'd') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == 'u') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'g') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'h') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'h') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'h') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(337);
      if (lookahead == 'p') ADVANCE(368);
      if (lookahead == 'w') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'm') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'p') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'p') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'p') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'p') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'q') ADVANCE(470);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 't') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'w') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'x') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'x') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'y') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'y') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'y') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'z') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
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
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 87},
  [90] = {.lex_state = 87},
  [91] = {.lex_state = 87},
  [92] = {.lex_state = 87},
  [93] = {.lex_state = 87},
  [94] = {.lex_state = 87},
  [95] = {.lex_state = 87},
  [96] = {.lex_state = 87},
  [97] = {.lex_state = 87},
  [98] = {.lex_state = 87},
  [99] = {.lex_state = 87},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 87},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 87},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 87},
  [128] = {.lex_state = 87},
  [129] = {.lex_state = 87},
  [130] = {.lex_state = 87},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 87},
  [133] = {.lex_state = 87},
  [134] = {.lex_state = 87},
  [135] = {.lex_state = 87},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 87},
  [140] = {.lex_state = 87},
  [141] = {.lex_state = 87},
  [142] = {.lex_state = 87},
  [143] = {.lex_state = 87},
  [144] = {.lex_state = 87},
  [145] = {.lex_state = 87},
  [146] = {.lex_state = 87},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 87},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 87},
  [154] = {.lex_state = 87},
  [155] = {.lex_state = 87},
  [156] = {.lex_state = 87},
  [157] = {.lex_state = 87},
  [158] = {.lex_state = 87},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 87},
  [161] = {.lex_state = 87},
  [162] = {.lex_state = 87},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 87},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 87},
  [167] = {.lex_state = 87},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 87},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 87},
  [173] = {.lex_state = 87},
  [174] = {.lex_state = 87},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 87},
  [177] = {.lex_state = 87},
  [178] = {.lex_state = 87},
  [179] = {.lex_state = 87},
  [180] = {.lex_state = 87},
  [181] = {.lex_state = 87},
  [182] = {.lex_state = 87},
  [183] = {.lex_state = 87},
  [184] = {.lex_state = 87},
  [185] = {.lex_state = 87},
  [186] = {.lex_state = 87},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 87},
  [189] = {.lex_state = 87},
  [190] = {.lex_state = 87},
  [191] = {.lex_state = 87},
  [192] = {.lex_state = 87},
  [193] = {.lex_state = 87},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 87},
  [196] = {.lex_state = 87},
  [197] = {.lex_state = 87},
  [198] = {.lex_state = 87},
  [199] = {.lex_state = 87},
  [200] = {.lex_state = 87},
  [201] = {.lex_state = 87},
  [202] = {.lex_state = 87},
  [203] = {.lex_state = 87},
  [204] = {.lex_state = 87},
  [205] = {.lex_state = 87},
  [206] = {.lex_state = 87},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 87},
  [209] = {.lex_state = 87},
  [210] = {.lex_state = 87},
  [211] = {.lex_state = 87},
  [212] = {.lex_state = 87},
  [213] = {.lex_state = 87},
  [214] = {.lex_state = 87},
  [215] = {.lex_state = 87},
  [216] = {.lex_state = 87},
  [217] = {.lex_state = 87},
  [218] = {.lex_state = 87},
  [219] = {.lex_state = 87},
  [220] = {.lex_state = 87},
  [221] = {.lex_state = 87},
  [222] = {.lex_state = 87},
  [223] = {.lex_state = 87},
  [224] = {.lex_state = 87},
  [225] = {.lex_state = 87},
  [226] = {.lex_state = 87},
  [227] = {.lex_state = 87},
  [228] = {.lex_state = 87},
  [229] = {.lex_state = 87},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 87},
  [233] = {.lex_state = 87},
  [234] = {.lex_state = 87},
  [235] = {.lex_state = 87},
  [236] = {.lex_state = 87},
  [237] = {.lex_state = 87},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 87},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 87},
  [242] = {.lex_state = 87},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 87},
  [245] = {.lex_state = 87},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 87},
  [248] = {.lex_state = 87},
  [249] = {.lex_state = 87},
  [250] = {.lex_state = 87},
  [251] = {.lex_state = 87},
  [252] = {.lex_state = 87},
  [253] = {.lex_state = 87},
  [254] = {.lex_state = 87},
  [255] = {.lex_state = 87},
  [256] = {.lex_state = 87},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 87},
  [259] = {.lex_state = 87},
  [260] = {.lex_state = 87},
  [261] = {.lex_state = 87},
  [262] = {.lex_state = 87},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 87},
  [265] = {.lex_state = 87},
  [266] = {.lex_state = 87},
  [267] = {.lex_state = 87},
  [268] = {.lex_state = 87},
  [269] = {.lex_state = 12},
  [270] = {.lex_state = 12},
  [271] = {.lex_state = 87},
  [272] = {.lex_state = 87},
  [273] = {.lex_state = 12},
  [274] = {.lex_state = 11},
  [275] = {.lex_state = 87},
  [276] = {.lex_state = 12},
  [277] = {.lex_state = 87},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 87},
  [280] = {.lex_state = 87},
  [281] = {.lex_state = 87},
  [282] = {.lex_state = 87},
  [283] = {.lex_state = 87},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 87},
  [286] = {.lex_state = 87},
  [287] = {.lex_state = 12},
  [288] = {.lex_state = 12},
  [289] = {.lex_state = 12},
  [290] = {.lex_state = 12},
  [291] = {.lex_state = 12},
  [292] = {.lex_state = 12},
  [293] = {.lex_state = 12},
  [294] = {.lex_state = 12},
  [295] = {.lex_state = 12},
  [296] = {.lex_state = 12},
  [297] = {.lex_state = 12},
  [298] = {.lex_state = 12},
  [299] = {.lex_state = 12},
  [300] = {.lex_state = 12},
  [301] = {.lex_state = 87},
  [302] = {.lex_state = 87},
  [303] = {.lex_state = 87},
  [304] = {.lex_state = 12},
  [305] = {.lex_state = 12},
  [306] = {.lex_state = 12},
  [307] = {.lex_state = 12},
  [308] = {.lex_state = 12},
  [309] = {.lex_state = 12},
  [310] = {.lex_state = 12},
  [311] = {.lex_state = 12},
  [312] = {.lex_state = 12},
  [313] = {.lex_state = 12},
  [314] = {.lex_state = 87},
  [315] = {.lex_state = 12},
  [316] = {.lex_state = 12},
  [317] = {.lex_state = 87},
  [318] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
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
    [anon_sym_COLONdefault] = ACTIONS(1),
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
    [aux_sym_string_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(314),
    [sym_lparen] = STATE(2),
    [sym_command] = STATE(135),
    [sym_nonletaction] = STATE(181),
    [sym_callexpr] = STATE(172),
    [aux_sym_source_file_repeat1] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_ws] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_datatype,
    ACTIONS(19), 1,
      anon_sym_sort,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_declare,
    ACTIONS(25), 1,
      anon_sym_relation,
    ACTIONS(29), 1,
      anon_sym_rule,
    ACTIONS(33), 1,
      anon_sym_run,
    ACTIONS(35), 1,
      anon_sym_simplify,
    ACTIONS(37), 1,
      anon_sym_calc,
    ACTIONS(39), 1,
      anon_sym_query_DASHextract,
    ACTIONS(41), 1,
      anon_sym_check,
    ACTIONS(43), 1,
      anon_sym_check_DASHproof,
    ACTIONS(45), 1,
      anon_sym_run_DASHschedule,
    ACTIONS(49), 1,
      anon_sym_print_DASHtable,
    ACTIONS(51), 1,
      anon_sym_input,
    ACTIONS(53), 1,
      anon_sym_output,
    ACTIONS(55), 1,
      anon_sym_fail,
    ACTIONS(57), 1,
      anon_sym_include,
    ACTIONS(59), 1,
      anon_sym_delete,
    ACTIONS(61), 1,
      anon_sym_union,
    ACTIONS(63), 1,
      anon_sym_panic,
    ACTIONS(65), 1,
      anon_sym_extract,
    ACTIONS(67), 1,
      sym_ident,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(15), 2,
      anon_sym_set_DASHoption,
      anon_sym_let,
    ACTIONS(31), 2,
      anon_sym_rewrite,
      anon_sym_birewrite,
    ACTIONS(47), 2,
      anon_sym_push,
      anon_sym_pop,
    ACTIONS(27), 3,
      anon_sym_ruleset,
      anon_sym_add_DASHruleset,
      anon_sym_print_DASHsize,
  [100] = 3,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(71), 33,
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
  [143] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(179), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(29), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [201] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(122), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(29), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [259] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(168), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(29), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [317] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(122), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(21), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [375] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(247), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(29), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [433] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(170), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(6), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [491] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(170), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(29), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [549] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(251), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(8), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [607] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(201), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(15), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [665] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(158), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(29), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [723] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(171), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(10), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [781] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(218), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(29), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [839] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(182), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(13), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [897] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(158), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(4), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [955] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(119), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(5), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1013] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(177), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(29), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1071] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(180), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1129] = 17,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(101), 1,
      sym_rparen,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(29), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1187] = 16,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_rparen,
    STATE(85), 1,
      sym_string,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1242] = 16,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_string,
    STATE(158), 1,
      sym_rparen,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1297] = 16,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_string,
    STATE(139), 1,
      sym_rparen,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1352] = 16,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_rparen,
    STATE(85), 1,
      sym_string,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(26), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1407] = 16,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_rparen,
    STATE(85), 1,
      sym_string,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1462] = 16,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_string,
    STATE(259), 1,
      sym_rparen,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1517] = 16,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_string,
    STATE(104), 1,
      sym_rparen,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1572] = 16,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    ACTIONS(117), 1,
      sym_num,
    ACTIONS(123), 1,
      aux_sym_f64_token1,
    ACTIONS(126), 1,
      sym_ident,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_string,
    STATE(87), 1,
      sym_expr,
    STATE(278), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(29), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(120), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1627] = 16,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_string,
    STATE(265), 1,
      sym_rparen,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1682] = 16,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_string,
    STATE(233), 1,
      sym_rparen,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(27), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1737] = 16,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_string,
    STATE(182), 1,
      sym_rparen,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1792] = 16,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_string,
    STATE(111), 1,
      sym_rparen,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1847] = 16,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_string,
    STATE(128), 1,
      sym_rparen,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(24), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1902] = 16,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(70), 1,
      sym_rparen,
    STATE(85), 1,
      sym_string,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(22), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1957] = 16,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_string,
    STATE(234), 1,
      sym_rparen,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(30), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2012] = 16,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_string,
    STATE(179), 1,
      sym_rparen,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2067] = 15,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    ACTIONS(142), 1,
      sym_num,
    ACTIONS(148), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_string,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(145), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2119] = 16,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym_rparen,
    STATE(191), 1,
      sym_string,
    STATE(266), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2173] = 15,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_COLONvariants,
    STATE(191), 1,
      sym_string,
    STATE(262), 1,
      sym_fact,
    STATE(282), 1,
      sym_expr,
    STATE(284), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2224] = 14,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(254), 1,
      sym_fact,
    STATE(282), 1,
      sym_expr,
    STATE(284), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2272] = 13,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(169), 1,
      sym_num,
    ACTIONS(175), 1,
      aux_sym_f64_token1,
    ACTIONS(178), 1,
      sym_ident,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      sym_string,
    STATE(294), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(42), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(105), 2,
      sym_literal,
      sym_callexpr,
    STATE(110), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(172), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2318] = 14,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      aux_sym_command_repeat2,
    STATE(75), 1,
      sym_expr,
    STATE(85), 1,
      sym_string,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2366] = 13,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_string,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(32), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2412] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      sym_num,
    ACTIONS(188), 1,
      aux_sym_f64_token1,
    ACTIONS(190), 1,
      sym_ident,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      sym_string,
    STATE(294), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(43), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(105), 2,
      sym_literal,
      sym_callexpr,
    STATE(110), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(186), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2458] = 14,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      aux_sym_command_repeat2,
    STATE(76), 1,
      sym_expr,
    STATE(85), 1,
      sym_string,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2506] = 13,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_string,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(23), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2552] = 13,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_string,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(37), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2598] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      sym_num,
    ACTIONS(188), 1,
      aux_sym_f64_token1,
    ACTIONS(190), 1,
      sym_ident,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      sym_string,
    STATE(294), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(46), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(105), 2,
      sym_literal,
      sym_callexpr,
    STATE(110), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(186), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2644] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(202), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2689] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(252), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2734] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(234), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2779] = 13,
    ACTIONS(81), 1,
      sym_num,
    ACTIONS(85), 1,
      aux_sym_f64_token1,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_expr,
    STATE(85), 1,
      sym_string,
    STATE(315), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(86), 2,
      sym_literal,
      sym_callexpr,
    STATE(88), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(83), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2824] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(197), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2869] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      sym_num,
    ACTIONS(188), 1,
      aux_sym_f64_token1,
    ACTIONS(190), 1,
      sym_ident,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_expr,
    STATE(102), 1,
      sym_string,
    STATE(294), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(105), 2,
      sym_literal,
      sym_callexpr,
    STATE(110), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(186), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2914] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(250), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2959] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(256), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3004] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(253), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3049] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(226), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3094] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(212), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3139] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(248), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3184] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(237), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3229] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(204), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3274] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(245), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3319] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(210), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3364] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(239), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3409] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      sym_num,
    ACTIONS(188), 1,
      aux_sym_f64_token1,
    ACTIONS(190), 1,
      sym_ident,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_expr,
    STATE(102), 1,
      sym_string,
    STATE(294), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(105), 2,
      sym_literal,
      sym_callexpr,
    STATE(110), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(186), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3454] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(266), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3499] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(227), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3544] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(259), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3589] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(229), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3634] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(206), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3679] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(225), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3724] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(161), 1,
      aux_sym_f64_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    STATE(265), 1,
      sym_expr,
    STATE(298), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(188), 2,
      sym_f64,
      sym_symstring,
    STATE(189), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(159), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3769] = 6,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(194), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(196), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3796] = 6,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(194), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(196), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3823] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(71), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3843] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(198), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(200), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3863] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(202), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(204), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3883] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(206), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(208), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3903] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(210), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(212), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3923] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(214), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(216), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3943] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(218), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(220), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3963] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(222), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(224), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3983] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(226), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(228), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4003] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(230), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(232), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4023] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(234), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(236), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4043] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(238), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(240), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4063] = 8,
    STATE(126), 1,
      sym_lparen,
    STATE(169), 1,
      sym_rparen,
    STATE(172), 1,
      sym_callexpr,
    STATE(223), 1,
      sym_nonletaction,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(242), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(127), 2,
      sym_action,
      aux_sym_command_repeat3,
  [4092] = 8,
    STATE(126), 1,
      sym_lparen,
    STATE(172), 1,
      sym_callexpr,
    STATE(186), 1,
      sym_rparen,
    STATE(223), 1,
      sym_nonletaction,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(242), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(89), 2,
      sym_action,
      aux_sym_command_repeat3,
  [4121] = 8,
    STATE(126), 1,
      sym_lparen,
    STATE(160), 1,
      sym_rparen,
    STATE(172), 1,
      sym_callexpr,
    STATE(223), 1,
      sym_nonletaction,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(242), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(127), 2,
      sym_action,
      aux_sym_command_repeat3,
  [4150] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(202), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONname,
      anon_sym_COLONwhen,
  [4167] = 8,
    STATE(126), 1,
      sym_lparen,
    STATE(161), 1,
      sym_rparen,
    STATE(172), 1,
      sym_callexpr,
    STATE(223), 1,
      sym_nonletaction,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(242), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(94), 2,
      sym_action,
      aux_sym_command_repeat3,
  [4196] = 8,
    STATE(126), 1,
      sym_lparen,
    STATE(172), 1,
      sym_callexpr,
    STATE(186), 1,
      sym_rparen,
    STATE(223), 1,
      sym_nonletaction,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(242), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(127), 2,
      sym_action,
      aux_sym_command_repeat3,
  [4225] = 8,
    STATE(126), 1,
      sym_lparen,
    STATE(172), 1,
      sym_callexpr,
    STATE(184), 1,
      sym_rparen,
    STATE(223), 1,
      sym_nonletaction,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(242), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(99), 2,
      sym_action,
      aux_sym_command_repeat3,
  [4254] = 8,
    STATE(126), 1,
      sym_lparen,
    STATE(160), 1,
      sym_rparen,
    STATE(172), 1,
      sym_callexpr,
    STATE(223), 1,
      sym_nonletaction,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(242), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(98), 2,
      sym_action,
      aux_sym_command_repeat3,
  [4283] = 8,
    STATE(126), 1,
      sym_lparen,
    STATE(157), 1,
      sym_rparen,
    STATE(172), 1,
      sym_callexpr,
    STATE(223), 1,
      sym_nonletaction,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(242), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(91), 2,
      sym_action,
      aux_sym_command_repeat3,
  [4312] = 8,
    STATE(126), 1,
      sym_lparen,
    STATE(166), 1,
      sym_rparen,
    STATE(172), 1,
      sym_callexpr,
    STATE(223), 1,
      sym_nonletaction,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(242), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(127), 2,
      sym_action,
      aux_sym_command_repeat3,
  [4341] = 8,
    STATE(126), 1,
      sym_lparen,
    STATE(157), 1,
      sym_rparen,
    STATE(172), 1,
      sym_callexpr,
    STATE(223), 1,
      sym_nonletaction,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(242), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(127), 2,
      sym_action,
      aux_sym_command_repeat3,
  [4370] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(244), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(246), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4388] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(248), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(250), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4406] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(226), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(228), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4424] = 9,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(252), 1,
      sym_ident,
    STATE(170), 1,
      sym_rparen,
    STATE(203), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(131), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4454] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(222), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(224), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4472] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(230), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(232), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4490] = 9,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(252), 1,
      sym_ident,
    STATE(171), 1,
      sym_rparen,
    STATE(203), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(103), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4520] = 9,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(252), 1,
      sym_ident,
    STATE(171), 1,
      sym_rparen,
    STATE(203), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(131), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4550] = 9,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(252), 1,
      sym_ident,
    STATE(175), 1,
      sym_rparen,
    STATE(203), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4580] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(198), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(200), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4598] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(238), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(240), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4616] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(214), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(216), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4634] = 9,
    ACTIONS(254), 1,
      anon_sym_COLONunextractable,
    ACTIONS(256), 1,
      anon_sym_COLONon_merge,
    ACTIONS(258), 1,
      anon_sym_COLONmerge,
    ACTIONS(260), 1,
      anon_sym_COLONdefault,
    ACTIONS(262), 1,
      anon_sym_COLONcost,
    STATE(140), 1,
      sym_cost,
    STATE(182), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4664] = 9,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(252), 1,
      sym_ident,
    STATE(122), 1,
      sym_rparen,
    STATE(203), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(131), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4694] = 9,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(252), 1,
      sym_ident,
    STATE(180), 1,
      sym_rparen,
    STATE(203), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(124), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4724] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(202), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(204), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4742] = 9,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(252), 1,
      sym_ident,
    STATE(119), 1,
      sym_rparen,
    STATE(203), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(113), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4772] = 9,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(252), 1,
      sym_ident,
    STATE(119), 1,
      sym_rparen,
    STATE(203), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(131), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4802] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(264), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(266), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4820] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(268), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(270), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4838] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 9,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_run,
      anon_sym_saturate,
      anon_sym_seq,
      anon_sym_repeat,
      anon_sym_set,
  [4854] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(218), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(220), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4872] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(272), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(274), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4890] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(206), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(208), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4908] = 9,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(252), 1,
      sym_ident,
    STATE(177), 1,
      sym_rparen,
    STATE(203), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(131), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4938] = 9,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(252), 1,
      sym_ident,
    STATE(118), 1,
      sym_rparen,
    STATE(203), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(117), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4968] = 10,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_delete,
    ACTIONS(61), 1,
      anon_sym_union,
    ACTIONS(63), 1,
      anon_sym_panic,
    ACTIONS(65), 1,
      anon_sym_extract,
    ACTIONS(67), 1,
      sym_ident,
    ACTIONS(276), 1,
      anon_sym_let,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [5000] = 7,
    STATE(126), 1,
      sym_lparen,
    STATE(172), 1,
      sym_callexpr,
    STATE(223), 1,
      sym_nonletaction,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(278), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(281), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(127), 2,
      sym_action,
      aux_sym_command_repeat3,
  [5026] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(222), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [5041] = 6,
    STATE(47), 1,
      sym_rparen,
    STATE(297), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(91), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(99), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(130), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [5064] = 6,
    STATE(48), 1,
      sym_rparen,
    STATE(297), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(91), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(99), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(141), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [5087] = 8,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    ACTIONS(293), 1,
      sym_ident,
    STATE(203), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(131), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [5114] = 7,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_lparen,
    STATE(172), 1,
      sym_callexpr,
    STATE(181), 1,
      sym_nonletaction,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(298), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(132), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [5139] = 6,
    STATE(177), 1,
      sym_rparen,
    STATE(296), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(99), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(134), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [5162] = 6,
    STATE(182), 1,
      sym_rparen,
    STATE(296), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(99), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(143), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [5185] = 7,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_lparen,
    STATE(172), 1,
      sym_callexpr,
    STATE(181), 1,
      sym_nonletaction,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(132), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [5210] = 3,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(71), 7,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_delete,
      anon_sym_union,
      anon_sym_panic,
      anon_sym_extract,
      sym_ident,
  [5227] = 8,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(262), 1,
      anon_sym_COLONcost,
    ACTIONS(303), 1,
      sym_ident,
    STATE(214), 1,
      sym_rparen,
    STATE(228), 1,
      sym_cost,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(151), 2,
      sym_type,
      aux_sym_command_repeat4,
  [5254] = 8,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(262), 1,
      anon_sym_COLONcost,
    ACTIONS(303), 1,
      sym_ident,
    STATE(221), 1,
      sym_rparen,
    STATE(235), 1,
      sym_cost,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(137), 2,
      sym_type,
      aux_sym_command_repeat4,
  [5281] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(214), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [5296] = 7,
    ACTIONS(305), 1,
      anon_sym_COLONunextractable,
    ACTIONS(307), 1,
      anon_sym_COLONon_merge,
    ACTIONS(309), 1,
      anon_sym_COLONmerge,
    ACTIONS(311), 1,
      anon_sym_COLONdefault,
    STATE(158), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5320] = 5,
    STATE(297), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(313), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(316), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(141), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [5340] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(318), 7,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [5354] = 5,
    STATE(296), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(320), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(323), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(143), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [5374] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(325), 7,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [5388] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(327), 7,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [5402] = 6,
    ACTIONS(329), 1,
      anon_sym_COLONon_merge,
    ACTIONS(331), 1,
      anon_sym_COLONmerge,
    ACTIONS(333), 1,
      anon_sym_COLONdefault,
    STATE(179), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5423] = 6,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(149), 2,
      sym_type,
      aux_sym_command_repeat4,
  [5444] = 6,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(303), 1,
      sym_ident,
    STATE(254), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(152), 2,
      sym_type,
      aux_sym_command_repeat4,
  [5465] = 6,
    ACTIONS(303), 1,
      sym_ident,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(151), 2,
      sym_type,
      aux_sym_command_repeat4,
  [5486] = 6,
    ACTIONS(307), 1,
      anon_sym_COLONon_merge,
    ACTIONS(309), 1,
      anon_sym_COLONmerge,
    ACTIONS(311), 1,
      anon_sym_COLONdefault,
    STATE(158), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5507] = 5,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    ACTIONS(343), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(339), 2,
      anon_sym_RPAREN,
      anon_sym_COLONcost,
    STATE(151), 2,
      sym_type,
      aux_sym_command_repeat4,
  [5526] = 6,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(303), 1,
      sym_ident,
    STATE(234), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    STATE(151), 2,
      sym_type,
      aux_sym_command_repeat4,
  [5547] = 5,
    STATE(177), 1,
      sym_rparen,
    STATE(290), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(99), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5566] = 6,
    STATE(2), 1,
      sym_lparen,
    STATE(172), 1,
      sym_callexpr,
    STATE(181), 1,
      sym_nonletaction,
    STATE(262), 1,
      sym_command,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5587] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(346), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
  [5600] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(198), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [5612] = 5,
    ACTIONS(348), 1,
      anon_sym_COLONmerge,
    ACTIONS(350), 1,
      anon_sym_COLONdefault,
    STATE(162), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5630] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(352), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5642] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      sym_ident,
    STATE(66), 1,
      sym_schedule,
    STATE(205), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [5662] = 5,
    ACTIONS(356), 1,
      anon_sym_COLONmerge,
    ACTIONS(358), 1,
      anon_sym_COLONdefault,
    STATE(164), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5680] = 5,
    ACTIONS(360), 1,
      anon_sym_COLONruleset,
    ACTIONS(362), 1,
      anon_sym_COLONname,
    STATE(179), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5698] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(364), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5710] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(202), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(204), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [5724] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(366), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5736] = 6,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(368), 1,
      anon_sym_COLONuntil,
    ACTIONS(370), 1,
      sym_ident,
    STATE(175), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [5756] = 5,
    ACTIONS(372), 1,
      anon_sym_COLONmerge,
    ACTIONS(374), 1,
      anon_sym_COLONdefault,
    STATE(173), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5774] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(376), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5786] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(248), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(250), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [5800] = 5,
    ACTIONS(378), 1,
      anon_sym_COLONruleset,
    ACTIONS(380), 1,
      anon_sym_COLONname,
    STATE(162), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5818] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(272), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(274), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [5832] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(268), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(270), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [5846] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(382), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5858] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(384), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5870] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(386), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5882] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(264), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(266), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [5896] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(206), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [5908] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(388), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5920] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(218), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [5932] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(390), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5944] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(392), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5956] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(394), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5968] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(396), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5980] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(398), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5992] = 5,
    ACTIONS(400), 1,
      anon_sym_COLONmerge,
    ACTIONS(402), 1,
      anon_sym_COLONdefault,
    STATE(190), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6010] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(404), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6022] = 5,
    ACTIONS(406), 1,
      anon_sym_COLONruleset,
    ACTIONS(408), 1,
      anon_sym_COLONname,
    STATE(190), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6040] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(246), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [6054] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(238), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [6066] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(230), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [6078] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(410), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6090] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(226), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [6102] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(412), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6114] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(414), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6126] = 6,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(416), 1,
      anon_sym_COLONuntil,
    ACTIONS(418), 1,
      sym_ident,
    STATE(118), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [6146] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(420), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6158] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(422), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6170] = 5,
    ACTIONS(424), 1,
      anon_sym_COLONruleset,
    ACTIONS(426), 1,
      anon_sym_COLONwhen,
    STATE(182), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6188] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(428), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6200] = 4,
    ACTIONS(430), 1,
      anon_sym_COLONname,
    STATE(173), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6215] = 4,
    ACTIONS(432), 1,
      sym_unum,
    STATE(180), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6230] = 4,
    ACTIONS(434), 1,
      anon_sym_COLONruleset,
    STATE(190), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6245] = 4,
    ACTIONS(436), 1,
      anon_sym_COLONdefault,
    STATE(196), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6260] = 4,
    ACTIONS(438), 1,
      anon_sym_run,
    ACTIONS(442), 1,
      anon_sym_repeat,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(440), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [6275] = 4,
    ACTIONS(333), 1,
      anon_sym_COLONdefault,
    STATE(179), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6290] = 4,
    ACTIONS(444), 1,
      anon_sym_run,
    ACTIONS(448), 1,
      anon_sym_repeat,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(446), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [6305] = 4,
    ACTIONS(402), 1,
      anon_sym_COLONdefault,
    STATE(190), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6320] = 3,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(318), 2,
      anon_sym_RPAREN,
      anon_sym_COLONcost,
    ACTIONS(450), 2,
      anon_sym_RBRACK,
      sym_ident,
  [6333] = 4,
    ACTIONS(452), 1,
      anon_sym_COLONname,
    STATE(164), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6348] = 4,
    ACTIONS(454), 1,
      anon_sym_COLONuntil,
    STATE(177), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6363] = 4,
    ACTIONS(456), 1,
      anon_sym_COLONdefault,
    STATE(183), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6378] = 4,
    ACTIONS(458), 1,
      anon_sym_COLONuntil,
    STATE(182), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6393] = 4,
    ACTIONS(350), 1,
      anon_sym_COLONdefault,
    STATE(162), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6408] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(460), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6419] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(462), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6430] = 4,
    ACTIONS(464), 1,
      sym_unum,
    STATE(177), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6445] = 4,
    STATE(112), 1,
      sym_schema,
    STATE(147), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(466), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6460] = 4,
    ACTIONS(380), 1,
      anon_sym_COLONname,
    STATE(162), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6475] = 4,
    ACTIONS(468), 1,
      anon_sym_COLONruleset,
    STATE(162), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6490] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(470), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6501] = 4,
    ACTIONS(472), 1,
      anon_sym_COLONuntil,
    STATE(171), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(95), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6516] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(474), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6527] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(476), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6538] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(478), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6549] = 4,
    ACTIONS(480), 1,
      anon_sym_COLONuntil,
    STATE(119), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(91), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6564] = 4,
    ACTIONS(374), 1,
      anon_sym_COLONdefault,
    STATE(173), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6579] = 4,
    ACTIONS(358), 1,
      anon_sym_COLONdefault,
    STATE(164), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6594] = 3,
    STATE(173), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6606] = 3,
    STATE(213), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6618] = 3,
    STATE(219), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6630] = 4,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    ACTIONS(484), 1,
      aux_sym_string_token1,
    STATE(246), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6644] = 4,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(488), 1,
      aux_sym_string_token1,
    STATE(230), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6658] = 3,
    STATE(97), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(11), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6670] = 3,
    STATE(174), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6682] = 3,
    STATE(179), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6694] = 3,
    STATE(214), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6706] = 3,
    STATE(11), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(490), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6718] = 3,
    STATE(164), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6730] = 4,
    ACTIONS(484), 1,
      aux_sym_string_token1,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    STATE(246), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6744] = 3,
    STATE(182), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6756] = 4,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(496), 1,
      aux_sym_string_token1,
    STATE(238), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6770] = 3,
    STATE(12), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(490), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6782] = 3,
    STATE(129), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(11), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6794] = 3,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(71), 2,
      anon_sym_RBRACK,
      sym_ident,
  [6806] = 3,
    STATE(180), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6818] = 3,
    STATE(183), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6830] = 4,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      aux_sym_string_token1,
    STATE(246), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6844] = 3,
    STATE(90), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(11), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6856] = 3,
    STATE(196), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6868] = 3,
    STATE(304), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(99), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6880] = 3,
    STATE(162), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6892] = 3,
    STATE(93), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(11), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6904] = 3,
    STATE(167), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6916] = 3,
    STATE(198), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6928] = 3,
    STATE(158), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6940] = 3,
    STATE(95), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(11), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6952] = 3,
    STATE(193), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6964] = 4,
    ACTIONS(484), 1,
      aux_sym_string_token1,
    ACTIONS(503), 1,
      anon_sym_DQUOTE,
    STATE(246), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6978] = 3,
    STATE(222), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6990] = 3,
    STATE(195), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7002] = 3,
    STATE(185), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7014] = 3,
    STATE(148), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(466), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7026] = 3,
    STATE(177), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7038] = 4,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      aux_sym_string_token1,
    STATE(257), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [7052] = 3,
    STATE(96), 1,
      sym_lparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(11), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7064] = 3,
    STATE(190), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7076] = 3,
    STATE(192), 1,
      sym_rparen,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7088] = 3,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      sym_string,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7099] = 3,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(248), 1,
      sym_string,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7110] = 3,
    ACTIONS(509), 1,
      sym_ident,
    STATE(258), 1,
      sym_type,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7121] = 3,
    ACTIONS(509), 1,
      sym_ident,
    STATE(145), 1,
      sym_type,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7132] = 3,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(227), 1,
      sym_string,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7143] = 3,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(250), 1,
      sym_string,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7154] = 3,
    ACTIONS(509), 1,
      sym_ident,
    STATE(144), 1,
      sym_type,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7165] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(71), 2,
      anon_sym_EQ,
      sym_ident,
  [7174] = 3,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(239), 1,
      sym_string,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7185] = 3,
    ACTIONS(511), 1,
      sym_unum,
    ACTIONS(513), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7196] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(210), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7205] = 3,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7216] = 3,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(245), 1,
      sym_string,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7227] = 3,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      sym_string,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7238] = 3,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      sym_string,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7249] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
    ACTIONS(234), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7258] = 3,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      sym_string,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7269] = 3,
    ACTIONS(67), 1,
      sym_ident,
    ACTIONS(519), 1,
      anon_sym_EQ,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7280] = 2,
    ACTIONS(521), 1,
      sym_unum,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7288] = 2,
    ACTIONS(523), 1,
      sym_unum,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7296] = 2,
    ACTIONS(202), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7304] = 2,
    ACTIONS(525), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7312] = 2,
    ACTIONS(527), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7320] = 2,
    ACTIONS(529), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7328] = 2,
    ACTIONS(69), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7336] = 2,
    ACTIONS(531), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7344] = 2,
    ACTIONS(533), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7352] = 2,
    ACTIONS(535), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7360] = 2,
    ACTIONS(537), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7368] = 2,
    ACTIONS(539), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7376] = 2,
    ACTIONS(541), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7384] = 2,
    ACTIONS(543), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7392] = 2,
    ACTIONS(545), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7400] = 2,
    ACTIONS(547), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7408] = 2,
    ACTIONS(549), 1,
      sym_unum,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7416] = 2,
    ACTIONS(551), 1,
      anon_sym_set,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7424] = 2,
    ACTIONS(553), 1,
      sym_unum,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7432] = 2,
    ACTIONS(555), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7440] = 2,
    ACTIONS(432), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7448] = 2,
    ACTIONS(557), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7456] = 2,
    ACTIONS(559), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7464] = 2,
    ACTIONS(561), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7472] = 2,
    ACTIONS(563), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7480] = 2,
    ACTIONS(464), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7488] = 2,
    ACTIONS(565), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7496] = 2,
    ACTIONS(567), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7504] = 2,
    ACTIONS(569), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7512] = 2,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7520] = 2,
    ACTIONS(573), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7528] = 2,
    ACTIONS(575), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7536] = 2,
    ACTIONS(577), 1,
      sym_unum,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
  [7544] = 2,
    ACTIONS(579), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym_comment,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 100,
  [SMALL_STATE(4)] = 143,
  [SMALL_STATE(5)] = 201,
  [SMALL_STATE(6)] = 259,
  [SMALL_STATE(7)] = 317,
  [SMALL_STATE(8)] = 375,
  [SMALL_STATE(9)] = 433,
  [SMALL_STATE(10)] = 491,
  [SMALL_STATE(11)] = 549,
  [SMALL_STATE(12)] = 607,
  [SMALL_STATE(13)] = 665,
  [SMALL_STATE(14)] = 723,
  [SMALL_STATE(15)] = 781,
  [SMALL_STATE(16)] = 839,
  [SMALL_STATE(17)] = 897,
  [SMALL_STATE(18)] = 955,
  [SMALL_STATE(19)] = 1013,
  [SMALL_STATE(20)] = 1071,
  [SMALL_STATE(21)] = 1129,
  [SMALL_STATE(22)] = 1187,
  [SMALL_STATE(23)] = 1242,
  [SMALL_STATE(24)] = 1297,
  [SMALL_STATE(25)] = 1352,
  [SMALL_STATE(26)] = 1407,
  [SMALL_STATE(27)] = 1462,
  [SMALL_STATE(28)] = 1517,
  [SMALL_STATE(29)] = 1572,
  [SMALL_STATE(30)] = 1627,
  [SMALL_STATE(31)] = 1682,
  [SMALL_STATE(32)] = 1737,
  [SMALL_STATE(33)] = 1792,
  [SMALL_STATE(34)] = 1847,
  [SMALL_STATE(35)] = 1902,
  [SMALL_STATE(36)] = 1957,
  [SMALL_STATE(37)] = 2012,
  [SMALL_STATE(38)] = 2067,
  [SMALL_STATE(39)] = 2119,
  [SMALL_STATE(40)] = 2173,
  [SMALL_STATE(41)] = 2224,
  [SMALL_STATE(42)] = 2272,
  [SMALL_STATE(43)] = 2318,
  [SMALL_STATE(44)] = 2366,
  [SMALL_STATE(45)] = 2412,
  [SMALL_STATE(46)] = 2458,
  [SMALL_STATE(47)] = 2506,
  [SMALL_STATE(48)] = 2552,
  [SMALL_STATE(49)] = 2598,
  [SMALL_STATE(50)] = 2644,
  [SMALL_STATE(51)] = 2689,
  [SMALL_STATE(52)] = 2734,
  [SMALL_STATE(53)] = 2779,
  [SMALL_STATE(54)] = 2824,
  [SMALL_STATE(55)] = 2869,
  [SMALL_STATE(56)] = 2914,
  [SMALL_STATE(57)] = 2959,
  [SMALL_STATE(58)] = 3004,
  [SMALL_STATE(59)] = 3049,
  [SMALL_STATE(60)] = 3094,
  [SMALL_STATE(61)] = 3139,
  [SMALL_STATE(62)] = 3184,
  [SMALL_STATE(63)] = 3229,
  [SMALL_STATE(64)] = 3274,
  [SMALL_STATE(65)] = 3319,
  [SMALL_STATE(66)] = 3364,
  [SMALL_STATE(67)] = 3409,
  [SMALL_STATE(68)] = 3454,
  [SMALL_STATE(69)] = 3499,
  [SMALL_STATE(70)] = 3544,
  [SMALL_STATE(71)] = 3589,
  [SMALL_STATE(72)] = 3634,
  [SMALL_STATE(73)] = 3679,
  [SMALL_STATE(74)] = 3724,
  [SMALL_STATE(75)] = 3769,
  [SMALL_STATE(76)] = 3796,
  [SMALL_STATE(77)] = 3823,
  [SMALL_STATE(78)] = 3843,
  [SMALL_STATE(79)] = 3863,
  [SMALL_STATE(80)] = 3883,
  [SMALL_STATE(81)] = 3903,
  [SMALL_STATE(82)] = 3923,
  [SMALL_STATE(83)] = 3943,
  [SMALL_STATE(84)] = 3963,
  [SMALL_STATE(85)] = 3983,
  [SMALL_STATE(86)] = 4003,
  [SMALL_STATE(87)] = 4023,
  [SMALL_STATE(88)] = 4043,
  [SMALL_STATE(89)] = 4063,
  [SMALL_STATE(90)] = 4092,
  [SMALL_STATE(91)] = 4121,
  [SMALL_STATE(92)] = 4150,
  [SMALL_STATE(93)] = 4167,
  [SMALL_STATE(94)] = 4196,
  [SMALL_STATE(95)] = 4225,
  [SMALL_STATE(96)] = 4254,
  [SMALL_STATE(97)] = 4283,
  [SMALL_STATE(98)] = 4312,
  [SMALL_STATE(99)] = 4341,
  [SMALL_STATE(100)] = 4370,
  [SMALL_STATE(101)] = 4388,
  [SMALL_STATE(102)] = 4406,
  [SMALL_STATE(103)] = 4424,
  [SMALL_STATE(104)] = 4454,
  [SMALL_STATE(105)] = 4472,
  [SMALL_STATE(106)] = 4490,
  [SMALL_STATE(107)] = 4520,
  [SMALL_STATE(108)] = 4550,
  [SMALL_STATE(109)] = 4580,
  [SMALL_STATE(110)] = 4598,
  [SMALL_STATE(111)] = 4616,
  [SMALL_STATE(112)] = 4634,
  [SMALL_STATE(113)] = 4664,
  [SMALL_STATE(114)] = 4694,
  [SMALL_STATE(115)] = 4724,
  [SMALL_STATE(116)] = 4742,
  [SMALL_STATE(117)] = 4772,
  [SMALL_STATE(118)] = 4802,
  [SMALL_STATE(119)] = 4820,
  [SMALL_STATE(120)] = 4838,
  [SMALL_STATE(121)] = 4854,
  [SMALL_STATE(122)] = 4872,
  [SMALL_STATE(123)] = 4890,
  [SMALL_STATE(124)] = 4908,
  [SMALL_STATE(125)] = 4938,
  [SMALL_STATE(126)] = 4968,
  [SMALL_STATE(127)] = 5000,
  [SMALL_STATE(128)] = 5026,
  [SMALL_STATE(129)] = 5041,
  [SMALL_STATE(130)] = 5064,
  [SMALL_STATE(131)] = 5087,
  [SMALL_STATE(132)] = 5114,
  [SMALL_STATE(133)] = 5139,
  [SMALL_STATE(134)] = 5162,
  [SMALL_STATE(135)] = 5185,
  [SMALL_STATE(136)] = 5210,
  [SMALL_STATE(137)] = 5227,
  [SMALL_STATE(138)] = 5254,
  [SMALL_STATE(139)] = 5281,
  [SMALL_STATE(140)] = 5296,
  [SMALL_STATE(141)] = 5320,
  [SMALL_STATE(142)] = 5340,
  [SMALL_STATE(143)] = 5354,
  [SMALL_STATE(144)] = 5374,
  [SMALL_STATE(145)] = 5388,
  [SMALL_STATE(146)] = 5402,
  [SMALL_STATE(147)] = 5423,
  [SMALL_STATE(148)] = 5444,
  [SMALL_STATE(149)] = 5465,
  [SMALL_STATE(150)] = 5486,
  [SMALL_STATE(151)] = 5507,
  [SMALL_STATE(152)] = 5526,
  [SMALL_STATE(153)] = 5547,
  [SMALL_STATE(154)] = 5566,
  [SMALL_STATE(155)] = 5587,
  [SMALL_STATE(156)] = 5600,
  [SMALL_STATE(157)] = 5612,
  [SMALL_STATE(158)] = 5630,
  [SMALL_STATE(159)] = 5642,
  [SMALL_STATE(160)] = 5662,
  [SMALL_STATE(161)] = 5680,
  [SMALL_STATE(162)] = 5698,
  [SMALL_STATE(163)] = 5710,
  [SMALL_STATE(164)] = 5724,
  [SMALL_STATE(165)] = 5736,
  [SMALL_STATE(166)] = 5756,
  [SMALL_STATE(167)] = 5774,
  [SMALL_STATE(168)] = 5786,
  [SMALL_STATE(169)] = 5800,
  [SMALL_STATE(170)] = 5818,
  [SMALL_STATE(171)] = 5832,
  [SMALL_STATE(172)] = 5846,
  [SMALL_STATE(173)] = 5858,
  [SMALL_STATE(174)] = 5870,
  [SMALL_STATE(175)] = 5882,
  [SMALL_STATE(176)] = 5896,
  [SMALL_STATE(177)] = 5908,
  [SMALL_STATE(178)] = 5920,
  [SMALL_STATE(179)] = 5932,
  [SMALL_STATE(180)] = 5944,
  [SMALL_STATE(181)] = 5956,
  [SMALL_STATE(182)] = 5968,
  [SMALL_STATE(183)] = 5980,
  [SMALL_STATE(184)] = 5992,
  [SMALL_STATE(185)] = 6010,
  [SMALL_STATE(186)] = 6022,
  [SMALL_STATE(187)] = 6040,
  [SMALL_STATE(188)] = 6054,
  [SMALL_STATE(189)] = 6066,
  [SMALL_STATE(190)] = 6078,
  [SMALL_STATE(191)] = 6090,
  [SMALL_STATE(192)] = 6102,
  [SMALL_STATE(193)] = 6114,
  [SMALL_STATE(194)] = 6126,
  [SMALL_STATE(195)] = 6146,
  [SMALL_STATE(196)] = 6158,
  [SMALL_STATE(197)] = 6170,
  [SMALL_STATE(198)] = 6188,
  [SMALL_STATE(199)] = 6200,
  [SMALL_STATE(200)] = 6215,
  [SMALL_STATE(201)] = 6230,
  [SMALL_STATE(202)] = 6245,
  [SMALL_STATE(203)] = 6260,
  [SMALL_STATE(204)] = 6275,
  [SMALL_STATE(205)] = 6290,
  [SMALL_STATE(206)] = 6305,
  [SMALL_STATE(207)] = 6320,
  [SMALL_STATE(208)] = 6333,
  [SMALL_STATE(209)] = 6348,
  [SMALL_STATE(210)] = 6363,
  [SMALL_STATE(211)] = 6378,
  [SMALL_STATE(212)] = 6393,
  [SMALL_STATE(213)] = 6408,
  [SMALL_STATE(214)] = 6419,
  [SMALL_STATE(215)] = 6430,
  [SMALL_STATE(216)] = 6445,
  [SMALL_STATE(217)] = 6460,
  [SMALL_STATE(218)] = 6475,
  [SMALL_STATE(219)] = 6490,
  [SMALL_STATE(220)] = 6501,
  [SMALL_STATE(221)] = 6516,
  [SMALL_STATE(222)] = 6527,
  [SMALL_STATE(223)] = 6538,
  [SMALL_STATE(224)] = 6549,
  [SMALL_STATE(225)] = 6564,
  [SMALL_STATE(226)] = 6579,
  [SMALL_STATE(227)] = 6594,
  [SMALL_STATE(228)] = 6606,
  [SMALL_STATE(229)] = 6618,
  [SMALL_STATE(230)] = 6630,
  [SMALL_STATE(231)] = 6644,
  [SMALL_STATE(232)] = 6658,
  [SMALL_STATE(233)] = 6670,
  [SMALL_STATE(234)] = 6682,
  [SMALL_STATE(235)] = 6694,
  [SMALL_STATE(236)] = 6706,
  [SMALL_STATE(237)] = 6718,
  [SMALL_STATE(238)] = 6730,
  [SMALL_STATE(239)] = 6744,
  [SMALL_STATE(240)] = 6756,
  [SMALL_STATE(241)] = 6770,
  [SMALL_STATE(242)] = 6782,
  [SMALL_STATE(243)] = 6794,
  [SMALL_STATE(244)] = 6806,
  [SMALL_STATE(245)] = 6818,
  [SMALL_STATE(246)] = 6830,
  [SMALL_STATE(247)] = 6844,
  [SMALL_STATE(248)] = 6856,
  [SMALL_STATE(249)] = 6868,
  [SMALL_STATE(250)] = 6880,
  [SMALL_STATE(251)] = 6892,
  [SMALL_STATE(252)] = 6904,
  [SMALL_STATE(253)] = 6916,
  [SMALL_STATE(254)] = 6928,
  [SMALL_STATE(255)] = 6940,
  [SMALL_STATE(256)] = 6952,
  [SMALL_STATE(257)] = 6964,
  [SMALL_STATE(258)] = 6978,
  [SMALL_STATE(259)] = 6990,
  [SMALL_STATE(260)] = 7002,
  [SMALL_STATE(261)] = 7014,
  [SMALL_STATE(262)] = 7026,
  [SMALL_STATE(263)] = 7038,
  [SMALL_STATE(264)] = 7052,
  [SMALL_STATE(265)] = 7064,
  [SMALL_STATE(266)] = 7076,
  [SMALL_STATE(267)] = 7088,
  [SMALL_STATE(268)] = 7099,
  [SMALL_STATE(269)] = 7110,
  [SMALL_STATE(270)] = 7121,
  [SMALL_STATE(271)] = 7132,
  [SMALL_STATE(272)] = 7143,
  [SMALL_STATE(273)] = 7154,
  [SMALL_STATE(274)] = 7165,
  [SMALL_STATE(275)] = 7174,
  [SMALL_STATE(276)] = 7185,
  [SMALL_STATE(277)] = 7196,
  [SMALL_STATE(278)] = 7205,
  [SMALL_STATE(279)] = 7216,
  [SMALL_STATE(280)] = 7227,
  [SMALL_STATE(281)] = 7238,
  [SMALL_STATE(282)] = 7249,
  [SMALL_STATE(283)] = 7258,
  [SMALL_STATE(284)] = 7269,
  [SMALL_STATE(285)] = 7280,
  [SMALL_STATE(286)] = 7288,
  [SMALL_STATE(287)] = 7296,
  [SMALL_STATE(288)] = 7304,
  [SMALL_STATE(289)] = 7312,
  [SMALL_STATE(290)] = 7320,
  [SMALL_STATE(291)] = 7328,
  [SMALL_STATE(292)] = 7336,
  [SMALL_STATE(293)] = 7344,
  [SMALL_STATE(294)] = 7352,
  [SMALL_STATE(295)] = 7360,
  [SMALL_STATE(296)] = 7368,
  [SMALL_STATE(297)] = 7376,
  [SMALL_STATE(298)] = 7384,
  [SMALL_STATE(299)] = 7392,
  [SMALL_STATE(300)] = 7400,
  [SMALL_STATE(301)] = 7408,
  [SMALL_STATE(302)] = 7416,
  [SMALL_STATE(303)] = 7424,
  [SMALL_STATE(304)] = 7432,
  [SMALL_STATE(305)] = 7440,
  [SMALL_STATE(306)] = 7448,
  [SMALL_STATE(307)] = 7456,
  [SMALL_STATE(308)] = 7464,
  [SMALL_STATE(309)] = 7472,
  [SMALL_STATE(310)] = 7480,
  [SMALL_STATE(311)] = 7488,
  [SMALL_STATE(312)] = 7496,
  [SMALL_STATE(313)] = 7504,
  [SMALL_STATE(314)] = 7512,
  [SMALL_STATE(315)] = 7520,
  [SMALL_STATE(316)] = 7528,
  [SMALL_STATE(317)] = 7536,
  [SMALL_STATE(318)] = 7544,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lparen, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lparen, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(274),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(274),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(88),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(78),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(78),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(86),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(231),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(291),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(291),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(88),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(78),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(78),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(86),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(231),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(110),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(109),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(109),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(105),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(263),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f64, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f64, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rparen, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rparen, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symstring, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symstring, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 6),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 6),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 5),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 5),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2), SHIFT_REPEAT(136),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(120),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(120),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(187),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2), SHIFT_REPEAT(291),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(291),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat4, 2),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat4, 2), SHIFT_REPEAT(207),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 9),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 10),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 8),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 11),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 6),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 7),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 12),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 8),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 15),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 7),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 13),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 14),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 5),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identsort, 4),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(246),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [571] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
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
