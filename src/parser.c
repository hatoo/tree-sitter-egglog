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
#define STATE_COUNT 267
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  sym_ws = 2,
  sym_lparen = 3,
  sym_rparen = 4,
  anon_sym_COMMA = 5,
  anon_sym_set_DASHoption = 6,
  anon_sym_datatype = 7,
  anon_sym_sort = 8,
  anon_sym_function = 9,
  anon_sym_COLONunextractable = 10,
  anon_sym_COLONon_merge = 11,
  anon_sym_COLONmerge = 12,
  anon_sym_COLONdefault = 13,
  anon_sym_declare = 14,
  anon_sym_relation = 15,
  anon_sym_ruleset = 16,
  anon_sym_rule = 17,
  anon_sym_COLONruleset = 18,
  anon_sym_COLONname = 19,
  anon_sym_rewrite = 20,
  anon_sym_COLONwhen = 21,
  anon_sym_birewrite = 22,
  anon_sym_let = 23,
  anon_sym_run = 24,
  anon_sym_COLONuntil = 25,
  anon_sym_simplify = 26,
  anon_sym_add_DASHruleset = 27,
  anon_sym_calc = 28,
  anon_sym_query_DASHextract = 29,
  anon_sym_COLONvariants = 30,
  anon_sym_check = 31,
  anon_sym_check_DASHproof = 32,
  anon_sym_run_DASHschedule = 33,
  anon_sym_print_DASHstats = 34,
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
  anon_sym_LBRACK = 52,
  anon_sym_RBRACK = 53,
  anon_sym_EQ = 54,
  sym_type = 55,
  sym_num = 56,
  sym_unum = 57,
  anon_sym_NaN = 58,
  aux_sym_f64_token1 = 59,
  anon_sym_inf = 60,
  anon_sym_DASHinf = 61,
  sym_ident = 62,
  sym_string = 63,
  sym_source_file = 64,
  sym_command = 65,
  sym_schedule = 66,
  sym_cost = 67,
  sym_nonletaction = 68,
  sym_action = 69,
  sym_fact = 70,
  sym_schema = 71,
  sym_expr = 72,
  sym_literal = 73,
  sym_callexpr = 74,
  sym_variant = 75,
  sym_identsort = 76,
  sym_f64 = 77,
  sym_symstring = 78,
  aux_sym_source_file_repeat1 = 79,
  aux_sym_command_repeat1 = 80,
  aux_sym_command_repeat2 = 81,
  aux_sym_command_repeat3 = 82,
  aux_sym_command_repeat4 = 83,
  aux_sym_command_repeat5 = 84,
  aux_sym_command_repeat6 = 85,
  aux_sym_command_repeat7 = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_ws] = "ws",
  [sym_lparen] = "lparen",
  [sym_rparen] = "rparen",
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
  [anon_sym_print_DASHstats] = "print-stats",
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_type] = "type",
  [sym_num] = "num",
  [sym_unum] = "unum",
  [anon_sym_NaN] = "NaN",
  [aux_sym_f64_token1] = "f64_token1",
  [anon_sym_inf] = "inf",
  [anon_sym_DASHinf] = "-inf",
  [sym_ident] = "ident",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
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
  [sym_identsort] = "identsort",
  [sym_f64] = "f64",
  [sym_symstring] = "symstring",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
  [aux_sym_command_repeat3] = "command_repeat3",
  [aux_sym_command_repeat4] = "command_repeat4",
  [aux_sym_command_repeat5] = "command_repeat5",
  [aux_sym_command_repeat6] = "command_repeat6",
  [aux_sym_command_repeat7] = "command_repeat7",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_ws] = sym_ws,
  [sym_lparen] = sym_lparen,
  [sym_rparen] = sym_rparen,
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
  [anon_sym_print_DASHstats] = anon_sym_print_DASHstats,
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_type] = sym_type,
  [sym_num] = sym_num,
  [sym_unum] = sym_unum,
  [anon_sym_NaN] = anon_sym_NaN,
  [aux_sym_f64_token1] = aux_sym_f64_token1,
  [anon_sym_inf] = anon_sym_inf,
  [anon_sym_DASHinf] = anon_sym_DASHinf,
  [sym_ident] = sym_ident,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
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
  [sym_identsort] = sym_identsort,
  [sym_f64] = sym_f64,
  [sym_symstring] = sym_symstring,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_command_repeat2] = aux_sym_command_repeat2,
  [aux_sym_command_repeat3] = aux_sym_command_repeat3,
  [aux_sym_command_repeat4] = aux_sym_command_repeat4,
  [aux_sym_command_repeat5] = aux_sym_command_repeat5,
  [aux_sym_command_repeat6] = aux_sym_command_repeat6,
  [aux_sym_command_repeat7] = aux_sym_command_repeat7,
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
  [sym_lparen] = {
    .visible = true,
    .named = true,
  },
  [sym_rparen] = {
    .visible = true,
    .named = true,
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
  [anon_sym_print_DASHstats] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
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
  [9] = 4,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 7,
  [15] = 8,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
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
  [76] = 76,
  [77] = 77,
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
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 100,
  [103] = 103,
  [104] = 104,
  [105] = 103,
  [106] = 104,
  [107] = 107,
  [108] = 108,
  [109] = 101,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 113,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 77,
  [131] = 80,
  [132] = 132,
  [133] = 78,
  [134] = 79,
  [135] = 135,
  [136] = 76,
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
  [153] = 129,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
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
  [169] = 168,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
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
  [193] = 193,
  [194] = 194,
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
  [205] = 205,
  [206] = 206,
  [207] = 207,
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
  [224] = 224,
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
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
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
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 211,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(237);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == ',') ADVANCE(242);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '=') ADVANCE(323);
      if (lookahead == 'N') ADVANCE(11);
      if (lookahead == '[') ADVANCE(321);
      if (lookahead == ']') ADVANCE(322);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'q') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(173);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(172);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '=') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(329);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(128);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(123);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(317);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(333);
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(335);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(286);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(226);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(292);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 111:
      if (lookahead == 'k') ADVANCE(284);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(304);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(84);
      if (lookahead == 'w') ADVANCE(165);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(294);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 156:
      if (lookahead == 'q') ADVANCE(309);
      END_STATE();
    case 157:
      if (lookahead == 'q') ADVANCE(309);
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 222:
      if (lookahead == 'w') ADVANCE(171);
      END_STATE();
    case 223:
      if (lookahead == 'x') ADVANCE(198);
      END_STATE();
    case 224:
      if (lookahead == 'x') ADVANCE(207);
      END_STATE();
    case 225:
      if (lookahead == 'x') ADVANCE(210);
      END_STATE();
    case 226:
      if (lookahead == 'y') ADVANCE(275);
      END_STATE();
    case 227:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 228:
      if (lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 229:
      if (lookahead == 'z') ADVANCE(66);
      END_STATE();
    case 230:
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(240);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == 'd') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead == 'u') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 231:
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(240);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(241);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 232:
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(241);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 235:
      if (eof) ADVANCE(237);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(240);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(241);
      if (lookahead == '-') ADVANCE(405);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == 'N') ADVANCE(345);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 236:
      if (eof) ADVANCE(237);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(240);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(241);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == 'b') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(342);
      if (lookahead == 'd') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 'o') ADVANCE(487);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead == 'q') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead == 's') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_datatype);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COLONunextractable);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_COLONon_merge);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_COLONmerge);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COLONdefault);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_relation);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_ruleset);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_ruleset);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_COLONruleset);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_COLONname);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_COLONwhen);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_birewrite);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_birewrite);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(461);
      if (lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(177);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_COLONuntil);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_add_DASHruleset);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_add_DASHruleset);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_calc);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_COLONvariants);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(153);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_print_DASHstats);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_print_DASHstats);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_print_DASHtable);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_print_DASHtable);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_fail);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_fail);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_saturate);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_COLONcost);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_panic);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_panic);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_extract);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_unum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_NaN);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(459);
      if (lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(452);
      if (lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(391);
      if (lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'h') ADVANCE(381);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'u') ADVANCE(429);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(403);
      if (lookahead == 'u') ADVANCE(458);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(419);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(411);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(397);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(415);
      if (lookahead == 'p') ADVANCE(489);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(481);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(468);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(471);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(339);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(365);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(491);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead == 'u') ADVANCE(416);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(454);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(334);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(336);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(495);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(293);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(384);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(395);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(498);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(479);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(480);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(285);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(305);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(349);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(485);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(371);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(400);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(380);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 'w') ADVANCE(453);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(443);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(404);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(295);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(450);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(376);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(490);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(483);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(496);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(370);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(407);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(396);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(401);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(360);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(390);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(347);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(497);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(375);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(408);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(410);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(457);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(367);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(385);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(472);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(418);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(466);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(467);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(420);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'w') ADVANCE(456);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(475);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(484);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(276);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(340);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(445);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'z') ADVANCE(378);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(499);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 236},
  [2] = {.lex_state = 236},
  [3] = {.lex_state = 235},
  [4] = {.lex_state = 235},
  [5] = {.lex_state = 235},
  [6] = {.lex_state = 235},
  [7] = {.lex_state = 235},
  [8] = {.lex_state = 235},
  [9] = {.lex_state = 235},
  [10] = {.lex_state = 235},
  [11] = {.lex_state = 235},
  [12] = {.lex_state = 235},
  [13] = {.lex_state = 235},
  [14] = {.lex_state = 235},
  [15] = {.lex_state = 235},
  [16] = {.lex_state = 235},
  [17] = {.lex_state = 235},
  [18] = {.lex_state = 235},
  [19] = {.lex_state = 235},
  [20] = {.lex_state = 235},
  [21] = {.lex_state = 235},
  [22] = {.lex_state = 235},
  [23] = {.lex_state = 235},
  [24] = {.lex_state = 235},
  [25] = {.lex_state = 235},
  [26] = {.lex_state = 235},
  [27] = {.lex_state = 235},
  [28] = {.lex_state = 235},
  [29] = {.lex_state = 235},
  [30] = {.lex_state = 235},
  [31] = {.lex_state = 235},
  [32] = {.lex_state = 235},
  [33] = {.lex_state = 235},
  [34] = {.lex_state = 235},
  [35] = {.lex_state = 235},
  [36] = {.lex_state = 235},
  [37] = {.lex_state = 235},
  [38] = {.lex_state = 235},
  [39] = {.lex_state = 235},
  [40] = {.lex_state = 235},
  [41] = {.lex_state = 235},
  [42] = {.lex_state = 235},
  [43] = {.lex_state = 235},
  [44] = {.lex_state = 235},
  [45] = {.lex_state = 235},
  [46] = {.lex_state = 235},
  [47] = {.lex_state = 235},
  [48] = {.lex_state = 235},
  [49] = {.lex_state = 235},
  [50] = {.lex_state = 235},
  [51] = {.lex_state = 235},
  [52] = {.lex_state = 235},
  [53] = {.lex_state = 235},
  [54] = {.lex_state = 235},
  [55] = {.lex_state = 235},
  [56] = {.lex_state = 235},
  [57] = {.lex_state = 235},
  [58] = {.lex_state = 235},
  [59] = {.lex_state = 235},
  [60] = {.lex_state = 235},
  [61] = {.lex_state = 235},
  [62] = {.lex_state = 235},
  [63] = {.lex_state = 235},
  [64] = {.lex_state = 235},
  [65] = {.lex_state = 235},
  [66] = {.lex_state = 235},
  [67] = {.lex_state = 235},
  [68] = {.lex_state = 235},
  [69] = {.lex_state = 235},
  [70] = {.lex_state = 235},
  [71] = {.lex_state = 235},
  [72] = {.lex_state = 235},
  [73] = {.lex_state = 235},
  [74] = {.lex_state = 235},
  [75] = {.lex_state = 235},
  [76] = {.lex_state = 235},
  [77] = {.lex_state = 235},
  [78] = {.lex_state = 235},
  [79] = {.lex_state = 235},
  [80] = {.lex_state = 235},
  [81] = {.lex_state = 236},
  [82] = {.lex_state = 230},
  [83] = {.lex_state = 236},
  [84] = {.lex_state = 236},
  [85] = {.lex_state = 236},
  [86] = {.lex_state = 236},
  [87] = {.lex_state = 236},
  [88] = {.lex_state = 236},
  [89] = {.lex_state = 236},
  [90] = {.lex_state = 236},
  [91] = {.lex_state = 236},
  [92] = {.lex_state = 236},
  [93] = {.lex_state = 236},
  [94] = {.lex_state = 236},
  [95] = {.lex_state = 236},
  [96] = {.lex_state = 236},
  [97] = {.lex_state = 236},
  [98] = {.lex_state = 232},
  [99] = {.lex_state = 231},
  [100] = {.lex_state = 231},
  [101] = {.lex_state = 231},
  [102] = {.lex_state = 231},
  [103] = {.lex_state = 231},
  [104] = {.lex_state = 231},
  [105] = {.lex_state = 231},
  [106] = {.lex_state = 231},
  [107] = {.lex_state = 231},
  [108] = {.lex_state = 232},
  [109] = {.lex_state = 231},
  [110] = {.lex_state = 236},
  [111] = {.lex_state = 231},
  [112] = {.lex_state = 236},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 236},
  [115] = {.lex_state = 236},
  [116] = {.lex_state = 236},
  [117] = {.lex_state = 236},
  [118] = {.lex_state = 236},
  [119] = {.lex_state = 236},
  [120] = {.lex_state = 236},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 236},
  [123] = {.lex_state = 232},
  [124] = {.lex_state = 236},
  [125] = {.lex_state = 236},
  [126] = {.lex_state = 236},
  [127] = {.lex_state = 236},
  [128] = {.lex_state = 236},
  [129] = {.lex_state = 231},
  [130] = {.lex_state = 231},
  [131] = {.lex_state = 231},
  [132] = {.lex_state = 232},
  [133] = {.lex_state = 231},
  [134] = {.lex_state = 231},
  [135] = {.lex_state = 236},
  [136] = {.lex_state = 231},
  [137] = {.lex_state = 236},
  [138] = {.lex_state = 236},
  [139] = {.lex_state = 236},
  [140] = {.lex_state = 236},
  [141] = {.lex_state = 231},
  [142] = {.lex_state = 232},
  [143] = {.lex_state = 236},
  [144] = {.lex_state = 236},
  [145] = {.lex_state = 236},
  [146] = {.lex_state = 236},
  [147] = {.lex_state = 236},
  [148] = {.lex_state = 236},
  [149] = {.lex_state = 236},
  [150] = {.lex_state = 236},
  [151] = {.lex_state = 236},
  [152] = {.lex_state = 236},
  [153] = {.lex_state = 231},
  [154] = {.lex_state = 236},
  [155] = {.lex_state = 236},
  [156] = {.lex_state = 236},
  [157] = {.lex_state = 236},
  [158] = {.lex_state = 236},
  [159] = {.lex_state = 232},
  [160] = {.lex_state = 232},
  [161] = {.lex_state = 236},
  [162] = {.lex_state = 236},
  [163] = {.lex_state = 236},
  [164] = {.lex_state = 236},
  [165] = {.lex_state = 236},
  [166] = {.lex_state = 236},
  [167] = {.lex_state = 236},
  [168] = {.lex_state = 236},
  [169] = {.lex_state = 236},
  [170] = {.lex_state = 236},
  [171] = {.lex_state = 236},
  [172] = {.lex_state = 231},
  [173] = {.lex_state = 236},
  [174] = {.lex_state = 236},
  [175] = {.lex_state = 236},
  [176] = {.lex_state = 236},
  [177] = {.lex_state = 236},
  [178] = {.lex_state = 236},
  [179] = {.lex_state = 236},
  [180] = {.lex_state = 236},
  [181] = {.lex_state = 236},
  [182] = {.lex_state = 236},
  [183] = {.lex_state = 236},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 236},
  [186] = {.lex_state = 236},
  [187] = {.lex_state = 236},
  [188] = {.lex_state = 236},
  [189] = {.lex_state = 236},
  [190] = {.lex_state = 236},
  [191] = {.lex_state = 236},
  [192] = {.lex_state = 236},
  [193] = {.lex_state = 231},
  [194] = {.lex_state = 236},
  [195] = {.lex_state = 231},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 236},
  [198] = {.lex_state = 231},
  [199] = {.lex_state = 236},
  [200] = {.lex_state = 236},
  [201] = {.lex_state = 232},
  [202] = {.lex_state = 236},
  [203] = {.lex_state = 231},
  [204] = {.lex_state = 231},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 236},
  [207] = {.lex_state = 236},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 231},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 236},
  [212] = {.lex_state = 231},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 231},
  [215] = {.lex_state = 231},
  [216] = {.lex_state = 236},
  [217] = {.lex_state = 236},
  [218] = {.lex_state = 236},
  [219] = {.lex_state = 236},
  [220] = {.lex_state = 236},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 231},
  [224] = {.lex_state = 231},
  [225] = {.lex_state = 236},
  [226] = {.lex_state = 236},
  [227] = {.lex_state = 236},
  [228] = {.lex_state = 236},
  [229] = {.lex_state = 236},
  [230] = {.lex_state = 231},
  [231] = {.lex_state = 236},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 236},
  [234] = {.lex_state = 232},
  [235] = {.lex_state = 232},
  [236] = {.lex_state = 231},
  [237] = {.lex_state = 236},
  [238] = {.lex_state = 236},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 236},
  [241] = {.lex_state = 236},
  [242] = {.lex_state = 236},
  [243] = {.lex_state = 236},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 236},
  [246] = {.lex_state = 231},
  [247] = {.lex_state = 236},
  [248] = {.lex_state = 236},
  [249] = {.lex_state = 236},
  [250] = {.lex_state = 236},
  [251] = {.lex_state = 236},
  [252] = {.lex_state = 236},
  [253] = {.lex_state = 236},
  [254] = {.lex_state = 236},
  [255] = {.lex_state = 232},
  [256] = {.lex_state = 231},
  [257] = {.lex_state = 231},
  [258] = {.lex_state = 231},
  [259] = {.lex_state = 231},
  [260] = {.lex_state = 231},
  [261] = {.lex_state = 231},
  [262] = {.lex_state = 231},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 231},
  [265] = {.lex_state = 236},
  [266] = {.lex_state = 236},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [sym_lparen] = ACTIONS(1),
    [sym_rparen] = ACTIONS(1),
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
    [anon_sym_print_DASHstats] = ACTIONS(1),
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [sym_unum] = ACTIONS(1),
    [anon_sym_NaN] = ACTIONS(1),
    [aux_sym_f64_token1] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [anon_sym_DASHinf] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(244),
    [sym_command] = STATE(86),
    [sym_nonletaction] = STATE(127),
    [sym_callexpr] = STATE(128),
    [aux_sym_source_file_repeat1] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [sym_lparen] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(9), 1,
      sym_lparen,
    ACTIONS(13), 1,
      anon_sym_datatype,
    ACTIONS(15), 1,
      anon_sym_sort,
    ACTIONS(17), 1,
      anon_sym_function,
    ACTIONS(19), 1,
      anon_sym_declare,
    ACTIONS(21), 1,
      anon_sym_relation,
    ACTIONS(25), 1,
      anon_sym_rule,
    ACTIONS(29), 1,
      anon_sym_run,
    ACTIONS(31), 1,
      anon_sym_simplify,
    ACTIONS(33), 1,
      anon_sym_calc,
    ACTIONS(35), 1,
      anon_sym_query_DASHextract,
    ACTIONS(37), 1,
      anon_sym_check,
    ACTIONS(41), 1,
      anon_sym_run_DASHschedule,
    ACTIONS(45), 1,
      anon_sym_print_DASHtable,
    ACTIONS(47), 1,
      anon_sym_input,
    ACTIONS(49), 1,
      anon_sym_output,
    ACTIONS(51), 1,
      anon_sym_fail,
    ACTIONS(53), 1,
      anon_sym_include,
    ACTIONS(55), 1,
      anon_sym_delete,
    ACTIONS(57), 1,
      anon_sym_union,
    ACTIONS(59), 1,
      anon_sym_panic,
    ACTIONS(61), 1,
      anon_sym_extract,
    ACTIONS(63), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(11), 2,
      anon_sym_set_DASHoption,
      anon_sym_let,
    ACTIONS(27), 2,
      anon_sym_rewrite,
      anon_sym_birewrite,
    ACTIONS(39), 2,
      anon_sym_check_DASHproof,
      anon_sym_print_DASHstats,
    ACTIONS(43), 2,
      anon_sym_push,
      anon_sym_pop,
    ACTIONS(23), 3,
      anon_sym_ruleset,
      anon_sym_add_DASHruleset,
      anon_sym_print_DASHsize,
  [95] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(67), 1,
      sym_rparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(18), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [138] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [181] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(81), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(16), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [224] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(81), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [267] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(83), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(4), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [310] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(83), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [353] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(85), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [396] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(87), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(6), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [439] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(89), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(8), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [482] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(91), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(15), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [525] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(93), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [568] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(95), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [611] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(95), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [654] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(97), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [697] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(99), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(13), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [740] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(101), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [783] = 12,
    ACTIONS(103), 1,
      sym_lparen,
    ACTIONS(106), 1,
      sym_rparen,
    ACTIONS(108), 1,
      sym_num,
    ACTIONS(114), 1,
      aux_sym_f64_token1,
    ACTIONS(117), 1,
      sym_ident,
    ACTIONS(120), 1,
      sym_string,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(111), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [826] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(123), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [869] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_rparen,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(20), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [912] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      anon_sym_COLONvariants,
    STATE(74), 1,
      sym_expr,
    STATE(199), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [954] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(129), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(25), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [994] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    ACTIONS(131), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(34), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1034] = 11,
    ACTIONS(133), 1,
      sym_lparen,
    ACTIONS(136), 1,
      sym_rparen,
    ACTIONS(138), 1,
      sym_num,
    ACTIONS(144), 1,
      aux_sym_f64_token1,
    ACTIONS(147), 1,
      sym_ident,
    ACTIONS(150), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(25), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(141), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1074] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    ACTIONS(153), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(25), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1114] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(81), 1,
      sym_rparen,
    ACTIONS(129), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(25), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1154] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    ACTIONS(155), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(26), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1194] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    ACTIONS(157), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(25), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1234] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    ACTIONS(159), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(29), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1274] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(97), 1,
      sym_rparen,
    ACTIONS(129), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(25), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1314] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    ACTIONS(161), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1354] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    ACTIONS(163), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(25), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1394] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    ACTIONS(165), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(25), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1434] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(41), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1471] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(27), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1508] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(31), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1545] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    STATE(74), 1,
      sym_expr,
    STATE(252), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1584] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    ACTIONS(167), 1,
      sym_rparen,
    STATE(227), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1623] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(23), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1660] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(25), 1,
      aux_sym_command_repeat2,
    STATE(73), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1699] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(66), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1735] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(182), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1771] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(220), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1807] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(225), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1843] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(177), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1879] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(226), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1915] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(173), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1951] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(237), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1987] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(217), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2023] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(157), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2059] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(248), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2095] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(166), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2131] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(241), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2167] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(39), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2203] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(186), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2239] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(206), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2275] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(233), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2311] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(181), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2347] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(245), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2383] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(171), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2419] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(51), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2455] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(171), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2477] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(251), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2513] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(249), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2549] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(227), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2585] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_lparen,
    STATE(240), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_literal,
      sym_callexpr,
    STATE(72), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2621] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(175), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(173), 8,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2643] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(179), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(177), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2664] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(183), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(181), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2685] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(187), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(185), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2706] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(191), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(189), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2727] = 4,
    ACTIONS(195), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(193), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(197), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2747] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(199), 4,
      sym_lparen,
      sym_rparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(201), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2765] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(203), 4,
      sym_lparen,
      sym_rparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(205), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2783] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(207), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(209), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2800] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(211), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(213), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2817] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(215), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(217), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2834] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(219), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(221), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2851] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(223), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(225), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2868] = 8,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(227), 1,
      anon_sym_COLONunextractable,
    ACTIONS(229), 1,
      anon_sym_COLONon_merge,
    ACTIONS(231), 1,
      anon_sym_COLONmerge,
    ACTIONS(233), 1,
      anon_sym_COLONdefault,
    ACTIONS(235), 1,
      anon_sym_COLONcost,
    STATE(112), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2894] = 8,
    ACTIONS(9), 1,
      sym_lparen,
    ACTIONS(55), 1,
      anon_sym_delete,
    ACTIONS(57), 1,
      anon_sym_union,
    ACTIONS(59), 1,
      anon_sym_panic,
    ACTIONS(61), 1,
      anon_sym_extract,
    ACTIONS(63), 1,
      sym_ident,
    ACTIONS(237), 1,
      anon_sym_let,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2920] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(239), 6,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [2933] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(241), 6,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [2946] = 6,
    ACTIONS(243), 1,
      sym_lparen,
    ACTIONS(246), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(167), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(85), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2967] = 6,
    ACTIONS(7), 1,
      sym_lparen,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(127), 1,
      sym_nonletaction,
    STATE(128), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [2988] = 6,
    ACTIONS(250), 1,
      sym_lparen,
    ACTIONS(252), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(167), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(92), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3009] = 6,
    ACTIONS(250), 1,
      sym_lparen,
    ACTIONS(254), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(167), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(85), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3030] = 6,
    ACTIONS(250), 1,
      sym_lparen,
    ACTIONS(256), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(167), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(85), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3051] = 6,
    ACTIONS(250), 1,
      sym_lparen,
    ACTIONS(258), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(167), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(89), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3072] = 6,
    ACTIONS(250), 1,
      sym_lparen,
    ACTIONS(256), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(167), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(88), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3093] = 6,
    ACTIONS(250), 1,
      sym_lparen,
    ACTIONS(260), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(167), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(85), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3114] = 6,
    ACTIONS(250), 1,
      sym_lparen,
    ACTIONS(262), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(167), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(85), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3135] = 6,
    ACTIONS(250), 1,
      sym_lparen,
    ACTIONS(260), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(167), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(97), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3156] = 6,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 1,
      sym_lparen,
    STATE(127), 1,
      sym_nonletaction,
    STATE(128), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [3177] = 6,
    ACTIONS(250), 1,
      sym_lparen,
    ACTIONS(269), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(167), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(93), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3198] = 6,
    ACTIONS(250), 1,
      sym_lparen,
    ACTIONS(269), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(167), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(85), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3219] = 6,
    ACTIONS(235), 1,
      anon_sym_COLONcost,
    ACTIONS(271), 1,
      sym_rparen,
    ACTIONS(273), 1,
      sym_type,
    STATE(108), 1,
      aux_sym_command_repeat4,
    STATE(247), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3239] = 5,
    ACTIONS(125), 1,
      sym_rparen,
    ACTIONS(275), 1,
      sym_lparen,
    ACTIONS(277), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3257] = 5,
    ACTIONS(83), 1,
      sym_rparen,
    ACTIONS(275), 1,
      sym_lparen,
    ACTIONS(277), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(111), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3275] = 5,
    ACTIONS(275), 1,
      sym_lparen,
    ACTIONS(277), 1,
      sym_ident,
    ACTIONS(279), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(106), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3293] = 5,
    ACTIONS(95), 1,
      sym_rparen,
    ACTIONS(275), 1,
      sym_lparen,
    ACTIONS(277), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(111), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3311] = 5,
    ACTIONS(89), 1,
      sym_rparen,
    ACTIONS(275), 1,
      sym_lparen,
    ACTIONS(277), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(100), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3329] = 5,
    ACTIONS(89), 1,
      sym_rparen,
    ACTIONS(275), 1,
      sym_lparen,
    ACTIONS(277), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(111), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3347] = 5,
    ACTIONS(91), 1,
      sym_rparen,
    ACTIONS(275), 1,
      sym_lparen,
    ACTIONS(277), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(102), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3365] = 5,
    ACTIONS(91), 1,
      sym_rparen,
    ACTIONS(275), 1,
      sym_lparen,
    ACTIONS(277), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(111), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3383] = 5,
    ACTIONS(123), 1,
      sym_rparen,
    ACTIONS(275), 1,
      sym_lparen,
    ACTIONS(277), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(111), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3401] = 6,
    ACTIONS(235), 1,
      anon_sym_COLONcost,
    ACTIONS(281), 1,
      sym_rparen,
    ACTIONS(283), 1,
      sym_type,
    STATE(123), 1,
      aux_sym_command_repeat4,
    STATE(231), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3421] = 5,
    ACTIONS(275), 1,
      sym_lparen,
    ACTIONS(277), 1,
      sym_ident,
    ACTIONS(285), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(104), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3439] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(287), 5,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
  [3451] = 5,
    ACTIONS(289), 1,
      sym_lparen,
    ACTIONS(292), 1,
      sym_rparen,
    ACTIONS(294), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(111), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3469] = 6,
    ACTIONS(81), 1,
      sym_rparen,
    ACTIONS(297), 1,
      anon_sym_COLONunextractable,
    ACTIONS(299), 1,
      anon_sym_COLONon_merge,
    ACTIONS(301), 1,
      anon_sym_COLONmerge,
    ACTIONS(303), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3489] = 4,
    ACTIONS(305), 1,
      anon_sym_run,
    ACTIONS(309), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(307), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [3504] = 4,
    ACTIONS(311), 1,
      sym_lparen,
    ACTIONS(313), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(122), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3519] = 5,
    ACTIONS(81), 1,
      sym_rparen,
    ACTIONS(299), 1,
      anon_sym_COLONon_merge,
    ACTIONS(301), 1,
      anon_sym_COLONmerge,
    ACTIONS(303), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3536] = 4,
    ACTIONS(315), 1,
      sym_lparen,
    ACTIONS(318), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(116), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3551] = 5,
    ACTIONS(7), 1,
      sym_lparen,
    STATE(127), 1,
      sym_nonletaction,
    STATE(128), 1,
      sym_callexpr,
    STATE(199), 1,
      sym_command,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3568] = 4,
    ACTIONS(123), 1,
      sym_rparen,
    ACTIONS(320), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(124), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [3583] = 4,
    ACTIONS(322), 1,
      sym_lparen,
    ACTIONS(325), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(119), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [3598] = 5,
    ACTIONS(97), 1,
      sym_rparen,
    ACTIONS(327), 1,
      anon_sym_COLONon_merge,
    ACTIONS(329), 1,
      anon_sym_COLONmerge,
    ACTIONS(331), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3615] = 4,
    ACTIONS(333), 1,
      anon_sym_run,
    ACTIONS(337), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(335), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [3630] = 4,
    ACTIONS(311), 1,
      sym_lparen,
    ACTIONS(339), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(116), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3645] = 4,
    ACTIONS(343), 1,
      sym_type,
    STATE(123), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(341), 2,
      sym_rparen,
      anon_sym_COLONcost,
  [3660] = 4,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(320), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(119), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [3675] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(346), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3685] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(348), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3695] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(350), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3705] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(352), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3715] = 4,
    ACTIONS(285), 1,
      sym_rparen,
    ACTIONS(354), 1,
      anon_sym_COLONuntil,
    ACTIONS(356), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3729] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(211), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3739] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(223), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3749] = 4,
    ACTIONS(161), 1,
      sym_rparen,
    ACTIONS(283), 1,
      sym_type,
    STATE(123), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3763] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(215), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3773] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(219), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3783] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(358), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3793] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(207), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3803] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(360), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3813] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(362), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3823] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(364), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3833] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(366), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3843] = 4,
    ACTIONS(368), 1,
      sym_lparen,
    ACTIONS(370), 1,
      sym_ident,
    STATE(65), 1,
      sym_schedule,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3857] = 4,
    ACTIONS(283), 1,
      sym_type,
    ACTIONS(372), 1,
      sym_rparen,
    STATE(123), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3871] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(374), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3881] = 4,
    ACTIONS(376), 1,
      sym_rparen,
    ACTIONS(378), 1,
      anon_sym_COLONmerge,
    ACTIONS(380), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3895] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(382), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3905] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(384), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3915] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(386), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3925] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(388), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3935] = 4,
    ACTIONS(390), 1,
      sym_rparen,
    ACTIONS(392), 1,
      anon_sym_COLONmerge,
    ACTIONS(394), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3949] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(396), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3959] = 4,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(400), 1,
      anon_sym_COLONruleset,
    ACTIONS(402), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3973] = 4,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(404), 1,
      anon_sym_COLONmerge,
    ACTIONS(406), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3987] = 4,
    ACTIONS(279), 1,
      sym_rparen,
    ACTIONS(408), 1,
      anon_sym_COLONuntil,
    ACTIONS(410), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4001] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(412), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4011] = 4,
    ACTIONS(97), 1,
      sym_rparen,
    ACTIONS(414), 1,
      anon_sym_COLONruleset,
    ACTIONS(416), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4025] = 4,
    ACTIONS(418), 1,
      sym_rparen,
    ACTIONS(420), 1,
      anon_sym_COLONmerge,
    ACTIONS(422), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4039] = 4,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(424), 1,
      anon_sym_COLONruleset,
    ACTIONS(426), 1,
      anon_sym_COLONwhen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4053] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(428), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4063] = 4,
    ACTIONS(430), 1,
      sym_rparen,
    ACTIONS(432), 1,
      sym_type,
    STATE(132), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4077] = 4,
    ACTIONS(434), 1,
      sym_rparen,
    ACTIONS(436), 1,
      sym_type,
    STATE(142), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4091] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(438), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4101] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(440), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4111] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(442), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4121] = 4,
    ACTIONS(418), 1,
      sym_rparen,
    ACTIONS(444), 1,
      anon_sym_COLONruleset,
    ACTIONS(446), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4135] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(448), 2,
      sym_lparen,
      sym_rparen,
  [4144] = 3,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(406), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4155] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(450), 2,
      sym_lparen,
      sym_rparen,
  [4164] = 3,
    ACTIONS(91), 1,
      sym_rparen,
    ACTIONS(452), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4175] = 3,
    ACTIONS(89), 1,
      sym_rparen,
    ACTIONS(454), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4186] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(456), 2,
      sym_lparen,
      sym_rparen,
  [4195] = 3,
    ACTIONS(458), 1,
      sym_rparen,
    ACTIONS(460), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4206] = 3,
    ACTIONS(462), 1,
      sym_unum,
    ACTIONS(464), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4217] = 3,
    ACTIONS(466), 1,
      sym_rparen,
    ACTIONS(468), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4228] = 3,
    ACTIONS(376), 1,
      sym_rparen,
    ACTIONS(470), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4239] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(472), 2,
      sym_lparen,
      sym_rparen,
  [4248] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(474), 2,
      sym_lparen,
      sym_rparen,
  [4257] = 3,
    ACTIONS(376), 1,
      sym_rparen,
    ACTIONS(380), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4268] = 3,
    ACTIONS(390), 1,
      sym_rparen,
    ACTIONS(476), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4279] = 3,
    ACTIONS(125), 1,
      sym_rparen,
    ACTIONS(478), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4290] = 3,
    ACTIONS(123), 1,
      sym_rparen,
    ACTIONS(480), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4301] = 3,
    ACTIONS(418), 1,
      sym_rparen,
    ACTIONS(422), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4312] = 3,
    ACTIONS(390), 1,
      sym_rparen,
    ACTIONS(394), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4323] = 3,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(482), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4334] = 3,
    ACTIONS(63), 1,
      sym_ident,
    ACTIONS(484), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4345] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(486), 2,
      sym_lparen,
      sym_rparen,
  [4354] = 3,
    ACTIONS(97), 1,
      sym_rparen,
    ACTIONS(331), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4365] = 3,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(402), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4376] = 3,
    ACTIONS(488), 1,
      sym_lparen,
    STATE(81), 1,
      sym_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4387] = 3,
    ACTIONS(123), 1,
      sym_rparen,
    ACTIONS(490), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4398] = 3,
    ACTIONS(418), 1,
      sym_rparen,
    ACTIONS(492), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4409] = 3,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(494), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4420] = 3,
    ACTIONS(123), 1,
      sym_rparen,
    ACTIONS(496), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4431] = 2,
    ACTIONS(498), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4439] = 2,
    ACTIONS(500), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4447] = 2,
    ACTIONS(502), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4455] = 2,
    ACTIONS(504), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4463] = 2,
    ACTIONS(506), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4471] = 2,
    ACTIONS(508), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4479] = 2,
    ACTIONS(123), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4487] = 2,
    ACTIONS(510), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4495] = 2,
    ACTIONS(480), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4503] = 2,
    ACTIONS(512), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4511] = 2,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4519] = 2,
    ACTIONS(514), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4527] = 2,
    ACTIONS(516), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4535] = 2,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4543] = 2,
    ACTIONS(518), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4551] = 2,
    ACTIONS(478), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4559] = 2,
    ACTIONS(520), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4567] = 2,
    ACTIONS(522), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4575] = 2,
    ACTIONS(524), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4583] = 2,
    ACTIONS(522), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4591] = 2,
    ACTIONS(526), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4599] = 2,
    ACTIONS(528), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4607] = 2,
    ACTIONS(530), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4615] = 2,
    ACTIONS(532), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4623] = 2,
    ACTIONS(390), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4631] = 2,
    ACTIONS(534), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4639] = 2,
    ACTIONS(536), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4647] = 2,
    ACTIONS(538), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4655] = 2,
    ACTIONS(540), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4663] = 2,
    ACTIONS(480), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4671] = 2,
    ACTIONS(542), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4679] = 2,
    ACTIONS(540), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4687] = 2,
    ACTIONS(418), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4695] = 2,
    ACTIONS(376), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4703] = 2,
    ACTIONS(544), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4711] = 2,
    ACTIONS(125), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4719] = 2,
    ACTIONS(546), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4727] = 2,
    ACTIONS(548), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4735] = 2,
    ACTIONS(550), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4743] = 2,
    ACTIONS(552), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4751] = 2,
    ACTIONS(554), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4759] = 2,
    ACTIONS(556), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4767] = 2,
    ACTIONS(558), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4775] = 2,
    ACTIONS(560), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4783] = 2,
    ACTIONS(466), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4791] = 2,
    ACTIONS(167), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4799] = 2,
    ACTIONS(562), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4807] = 2,
    ACTIONS(458), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4815] = 2,
    ACTIONS(97), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4823] = 2,
    ACTIONS(564), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4831] = 2,
    ACTIONS(566), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4839] = 2,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4847] = 2,
    ACTIONS(570), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4855] = 2,
    ACTIONS(478), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4863] = 2,
    ACTIONS(281), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4871] = 2,
    ACTIONS(572), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4879] = 2,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4887] = 2,
    ACTIONS(574), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4895] = 2,
    ACTIONS(576), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4903] = 2,
    ACTIONS(81), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4911] = 2,
    ACTIONS(578), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4919] = 2,
    ACTIONS(580), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4927] = 2,
    ACTIONS(582), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4935] = 2,
    ACTIONS(584), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4943] = 2,
    ACTIONS(586), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4951] = 2,
    ACTIONS(588), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4959] = 2,
    ACTIONS(590), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4967] = 2,
    ACTIONS(592), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4975] = 2,
    ACTIONS(594), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4983] = 2,
    ACTIONS(596), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4991] = 2,
    ACTIONS(598), 1,
      anon_sym_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4999] = 2,
    ACTIONS(600), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5007] = 2,
    ACTIONS(602), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5015] = 2,
    ACTIONS(604), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 138,
  [SMALL_STATE(5)] = 181,
  [SMALL_STATE(6)] = 224,
  [SMALL_STATE(7)] = 267,
  [SMALL_STATE(8)] = 310,
  [SMALL_STATE(9)] = 353,
  [SMALL_STATE(10)] = 396,
  [SMALL_STATE(11)] = 439,
  [SMALL_STATE(12)] = 482,
  [SMALL_STATE(13)] = 525,
  [SMALL_STATE(14)] = 568,
  [SMALL_STATE(15)] = 611,
  [SMALL_STATE(16)] = 654,
  [SMALL_STATE(17)] = 697,
  [SMALL_STATE(18)] = 740,
  [SMALL_STATE(19)] = 783,
  [SMALL_STATE(20)] = 826,
  [SMALL_STATE(21)] = 869,
  [SMALL_STATE(22)] = 912,
  [SMALL_STATE(23)] = 954,
  [SMALL_STATE(24)] = 994,
  [SMALL_STATE(25)] = 1034,
  [SMALL_STATE(26)] = 1074,
  [SMALL_STATE(27)] = 1114,
  [SMALL_STATE(28)] = 1154,
  [SMALL_STATE(29)] = 1194,
  [SMALL_STATE(30)] = 1234,
  [SMALL_STATE(31)] = 1274,
  [SMALL_STATE(32)] = 1314,
  [SMALL_STATE(33)] = 1354,
  [SMALL_STATE(34)] = 1394,
  [SMALL_STATE(35)] = 1434,
  [SMALL_STATE(36)] = 1471,
  [SMALL_STATE(37)] = 1508,
  [SMALL_STATE(38)] = 1545,
  [SMALL_STATE(39)] = 1584,
  [SMALL_STATE(40)] = 1623,
  [SMALL_STATE(41)] = 1660,
  [SMALL_STATE(42)] = 1699,
  [SMALL_STATE(43)] = 1735,
  [SMALL_STATE(44)] = 1771,
  [SMALL_STATE(45)] = 1807,
  [SMALL_STATE(46)] = 1843,
  [SMALL_STATE(47)] = 1879,
  [SMALL_STATE(48)] = 1915,
  [SMALL_STATE(49)] = 1951,
  [SMALL_STATE(50)] = 1987,
  [SMALL_STATE(51)] = 2023,
  [SMALL_STATE(52)] = 2059,
  [SMALL_STATE(53)] = 2095,
  [SMALL_STATE(54)] = 2131,
  [SMALL_STATE(55)] = 2167,
  [SMALL_STATE(56)] = 2203,
  [SMALL_STATE(57)] = 2239,
  [SMALL_STATE(58)] = 2275,
  [SMALL_STATE(59)] = 2311,
  [SMALL_STATE(60)] = 2347,
  [SMALL_STATE(61)] = 2383,
  [SMALL_STATE(62)] = 2419,
  [SMALL_STATE(63)] = 2455,
  [SMALL_STATE(64)] = 2477,
  [SMALL_STATE(65)] = 2513,
  [SMALL_STATE(66)] = 2549,
  [SMALL_STATE(67)] = 2585,
  [SMALL_STATE(68)] = 2621,
  [SMALL_STATE(69)] = 2643,
  [SMALL_STATE(70)] = 2664,
  [SMALL_STATE(71)] = 2685,
  [SMALL_STATE(72)] = 2706,
  [SMALL_STATE(73)] = 2727,
  [SMALL_STATE(74)] = 2747,
  [SMALL_STATE(75)] = 2765,
  [SMALL_STATE(76)] = 2783,
  [SMALL_STATE(77)] = 2800,
  [SMALL_STATE(78)] = 2817,
  [SMALL_STATE(79)] = 2834,
  [SMALL_STATE(80)] = 2851,
  [SMALL_STATE(81)] = 2868,
  [SMALL_STATE(82)] = 2894,
  [SMALL_STATE(83)] = 2920,
  [SMALL_STATE(84)] = 2933,
  [SMALL_STATE(85)] = 2946,
  [SMALL_STATE(86)] = 2967,
  [SMALL_STATE(87)] = 2988,
  [SMALL_STATE(88)] = 3009,
  [SMALL_STATE(89)] = 3030,
  [SMALL_STATE(90)] = 3051,
  [SMALL_STATE(91)] = 3072,
  [SMALL_STATE(92)] = 3093,
  [SMALL_STATE(93)] = 3114,
  [SMALL_STATE(94)] = 3135,
  [SMALL_STATE(95)] = 3156,
  [SMALL_STATE(96)] = 3177,
  [SMALL_STATE(97)] = 3198,
  [SMALL_STATE(98)] = 3219,
  [SMALL_STATE(99)] = 3239,
  [SMALL_STATE(100)] = 3257,
  [SMALL_STATE(101)] = 3275,
  [SMALL_STATE(102)] = 3293,
  [SMALL_STATE(103)] = 3311,
  [SMALL_STATE(104)] = 3329,
  [SMALL_STATE(105)] = 3347,
  [SMALL_STATE(106)] = 3365,
  [SMALL_STATE(107)] = 3383,
  [SMALL_STATE(108)] = 3401,
  [SMALL_STATE(109)] = 3421,
  [SMALL_STATE(110)] = 3439,
  [SMALL_STATE(111)] = 3451,
  [SMALL_STATE(112)] = 3469,
  [SMALL_STATE(113)] = 3489,
  [SMALL_STATE(114)] = 3504,
  [SMALL_STATE(115)] = 3519,
  [SMALL_STATE(116)] = 3536,
  [SMALL_STATE(117)] = 3551,
  [SMALL_STATE(118)] = 3568,
  [SMALL_STATE(119)] = 3583,
  [SMALL_STATE(120)] = 3598,
  [SMALL_STATE(121)] = 3615,
  [SMALL_STATE(122)] = 3630,
  [SMALL_STATE(123)] = 3645,
  [SMALL_STATE(124)] = 3660,
  [SMALL_STATE(125)] = 3675,
  [SMALL_STATE(126)] = 3685,
  [SMALL_STATE(127)] = 3695,
  [SMALL_STATE(128)] = 3705,
  [SMALL_STATE(129)] = 3715,
  [SMALL_STATE(130)] = 3729,
  [SMALL_STATE(131)] = 3739,
  [SMALL_STATE(132)] = 3749,
  [SMALL_STATE(133)] = 3763,
  [SMALL_STATE(134)] = 3773,
  [SMALL_STATE(135)] = 3783,
  [SMALL_STATE(136)] = 3793,
  [SMALL_STATE(137)] = 3803,
  [SMALL_STATE(138)] = 3813,
  [SMALL_STATE(139)] = 3823,
  [SMALL_STATE(140)] = 3833,
  [SMALL_STATE(141)] = 3843,
  [SMALL_STATE(142)] = 3857,
  [SMALL_STATE(143)] = 3871,
  [SMALL_STATE(144)] = 3881,
  [SMALL_STATE(145)] = 3895,
  [SMALL_STATE(146)] = 3905,
  [SMALL_STATE(147)] = 3915,
  [SMALL_STATE(148)] = 3925,
  [SMALL_STATE(149)] = 3935,
  [SMALL_STATE(150)] = 3949,
  [SMALL_STATE(151)] = 3959,
  [SMALL_STATE(152)] = 3973,
  [SMALL_STATE(153)] = 3987,
  [SMALL_STATE(154)] = 4001,
  [SMALL_STATE(155)] = 4011,
  [SMALL_STATE(156)] = 4025,
  [SMALL_STATE(157)] = 4039,
  [SMALL_STATE(158)] = 4053,
  [SMALL_STATE(159)] = 4063,
  [SMALL_STATE(160)] = 4077,
  [SMALL_STATE(161)] = 4091,
  [SMALL_STATE(162)] = 4101,
  [SMALL_STATE(163)] = 4111,
  [SMALL_STATE(164)] = 4121,
  [SMALL_STATE(165)] = 4135,
  [SMALL_STATE(166)] = 4144,
  [SMALL_STATE(167)] = 4155,
  [SMALL_STATE(168)] = 4164,
  [SMALL_STATE(169)] = 4175,
  [SMALL_STATE(170)] = 4186,
  [SMALL_STATE(171)] = 4195,
  [SMALL_STATE(172)] = 4206,
  [SMALL_STATE(173)] = 4217,
  [SMALL_STATE(174)] = 4228,
  [SMALL_STATE(175)] = 4239,
  [SMALL_STATE(176)] = 4248,
  [SMALL_STATE(177)] = 4257,
  [SMALL_STATE(178)] = 4268,
  [SMALL_STATE(179)] = 4279,
  [SMALL_STATE(180)] = 4290,
  [SMALL_STATE(181)] = 4301,
  [SMALL_STATE(182)] = 4312,
  [SMALL_STATE(183)] = 4323,
  [SMALL_STATE(184)] = 4334,
  [SMALL_STATE(185)] = 4345,
  [SMALL_STATE(186)] = 4354,
  [SMALL_STATE(187)] = 4365,
  [SMALL_STATE(188)] = 4376,
  [SMALL_STATE(189)] = 4387,
  [SMALL_STATE(190)] = 4398,
  [SMALL_STATE(191)] = 4409,
  [SMALL_STATE(192)] = 4420,
  [SMALL_STATE(193)] = 4431,
  [SMALL_STATE(194)] = 4439,
  [SMALL_STATE(195)] = 4447,
  [SMALL_STATE(196)] = 4455,
  [SMALL_STATE(197)] = 4463,
  [SMALL_STATE(198)] = 4471,
  [SMALL_STATE(199)] = 4479,
  [SMALL_STATE(200)] = 4487,
  [SMALL_STATE(201)] = 4495,
  [SMALL_STATE(202)] = 4503,
  [SMALL_STATE(203)] = 4511,
  [SMALL_STATE(204)] = 4519,
  [SMALL_STATE(205)] = 4527,
  [SMALL_STATE(206)] = 4535,
  [SMALL_STATE(207)] = 4543,
  [SMALL_STATE(208)] = 4551,
  [SMALL_STATE(209)] = 4559,
  [SMALL_STATE(210)] = 4567,
  [SMALL_STATE(211)] = 4575,
  [SMALL_STATE(212)] = 4583,
  [SMALL_STATE(213)] = 4591,
  [SMALL_STATE(214)] = 4599,
  [SMALL_STATE(215)] = 4607,
  [SMALL_STATE(216)] = 4615,
  [SMALL_STATE(217)] = 4623,
  [SMALL_STATE(218)] = 4631,
  [SMALL_STATE(219)] = 4639,
  [SMALL_STATE(220)] = 4647,
  [SMALL_STATE(221)] = 4655,
  [SMALL_STATE(222)] = 4663,
  [SMALL_STATE(223)] = 4671,
  [SMALL_STATE(224)] = 4679,
  [SMALL_STATE(225)] = 4687,
  [SMALL_STATE(226)] = 4695,
  [SMALL_STATE(227)] = 4703,
  [SMALL_STATE(228)] = 4711,
  [SMALL_STATE(229)] = 4719,
  [SMALL_STATE(230)] = 4727,
  [SMALL_STATE(231)] = 4735,
  [SMALL_STATE(232)] = 4743,
  [SMALL_STATE(233)] = 4751,
  [SMALL_STATE(234)] = 4759,
  [SMALL_STATE(235)] = 4767,
  [SMALL_STATE(236)] = 4775,
  [SMALL_STATE(237)] = 4783,
  [SMALL_STATE(238)] = 4791,
  [SMALL_STATE(239)] = 4799,
  [SMALL_STATE(240)] = 4807,
  [SMALL_STATE(241)] = 4815,
  [SMALL_STATE(242)] = 4823,
  [SMALL_STATE(243)] = 4831,
  [SMALL_STATE(244)] = 4839,
  [SMALL_STATE(245)] = 4847,
  [SMALL_STATE(246)] = 4855,
  [SMALL_STATE(247)] = 4863,
  [SMALL_STATE(248)] = 4871,
  [SMALL_STATE(249)] = 4879,
  [SMALL_STATE(250)] = 4887,
  [SMALL_STATE(251)] = 4895,
  [SMALL_STATE(252)] = 4903,
  [SMALL_STATE(253)] = 4911,
  [SMALL_STATE(254)] = 4919,
  [SMALL_STATE(255)] = 4927,
  [SMALL_STATE(256)] = 4935,
  [SMALL_STATE(257)] = 4943,
  [SMALL_STATE(258)] = 4951,
  [SMALL_STATE(259)] = 4959,
  [SMALL_STATE(260)] = 4967,
  [SMALL_STATE(261)] = 4975,
  [SMALL_STATE(262)] = 4983,
  [SMALL_STATE(263)] = 4991,
  [SMALL_STATE(264)] = 4999,
  [SMALL_STATE(265)] = 5007,
  [SMALL_STATE(266)] = 5015,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(184),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(72),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(71),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(71),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(70),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(69),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(198),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(72),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(71),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(71),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(70),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(69),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symstring, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symstring, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f64, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f64, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 6),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 5),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 3),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2), SHIFT_REPEAT(82),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(121),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(136),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2), SHIFT_REPEAT(193),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(258),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2), SHIFT_REPEAT(123),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 8),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 8),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 5),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 15),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 14),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 13),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 12),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 11),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 10),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 9),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 7),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 6),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 7),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 5),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identsort, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [568] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
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
