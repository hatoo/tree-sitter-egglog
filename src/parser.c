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
#define STATE_COUNT 269
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
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
  anon_sym_calc = 27,
  anon_sym_query_DASHextract = 28,
  anon_sym_COLONvariants = 29,
  anon_sym_check = 30,
  anon_sym_check_DASHproof = 31,
  anon_sym_run_DASHschedule = 32,
  anon_sym_print_DASHstats = 33,
  anon_sym_push = 34,
  anon_sym_pop = 35,
  anon_sym_print_DASHfunction = 36,
  anon_sym_print_DASHsize = 37,
  anon_sym_input = 38,
  anon_sym_output = 39,
  anon_sym_fail = 40,
  anon_sym_include = 41,
  anon_sym_saturate = 42,
  anon_sym_seq = 43,
  anon_sym_repeat = 44,
  anon_sym_COLONcost = 45,
  anon_sym_set = 46,
  anon_sym_delete = 47,
  anon_sym_union = 48,
  anon_sym_panic = 49,
  anon_sym_extract = 50,
  anon_sym_LBRACK = 51,
  anon_sym_RBRACK = 52,
  anon_sym_EQ = 53,
  sym_type = 54,
  anon_sym_true = 55,
  anon_sym_false = 56,
  sym_num = 57,
  sym_unum = 58,
  anon_sym_NaN = 59,
  aux_sym_f64_token1 = 60,
  anon_sym_inf = 61,
  anon_sym_DASHinf = 62,
  sym_ident = 63,
  sym_string = 64,
  sym_source_file = 65,
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
  sym_identsort = 77,
  sym_unit = 78,
  sym_bool = 79,
  sym_f64 = 80,
  sym_symstring = 81,
  aux_sym_source_file_repeat1 = 82,
  aux_sym_command_repeat1 = 83,
  aux_sym_command_repeat2 = 84,
  aux_sym_command_repeat3 = 85,
  aux_sym_command_repeat4 = 86,
  aux_sym_command_repeat5 = 87,
  aux_sym_command_repeat6 = 88,
  aux_sym_command_repeat7 = 89,
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
  [anon_sym_calc] = "calc",
  [anon_sym_query_DASHextract] = "query-extract",
  [anon_sym_COLONvariants] = ":variants",
  [anon_sym_check] = "check",
  [anon_sym_check_DASHproof] = "check-proof",
  [anon_sym_run_DASHschedule] = "run-schedule",
  [anon_sym_print_DASHstats] = "print-stats",
  [anon_sym_push] = "push",
  [anon_sym_pop] = "pop",
  [anon_sym_print_DASHfunction] = "print-function",
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
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
  [sym_unit] = "unit",
  [sym_bool] = "bool",
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
  [anon_sym_calc] = anon_sym_calc,
  [anon_sym_query_DASHextract] = anon_sym_query_DASHextract,
  [anon_sym_COLONvariants] = anon_sym_COLONvariants,
  [anon_sym_check] = anon_sym_check,
  [anon_sym_check_DASHproof] = anon_sym_check_DASHproof,
  [anon_sym_run_DASHschedule] = anon_sym_run_DASHschedule,
  [anon_sym_print_DASHstats] = anon_sym_print_DASHstats,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_print_DASHfunction] = anon_sym_print_DASHfunction,
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
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
  [sym_unit] = sym_unit,
  [sym_bool] = sym_bool,
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
  [anon_sym_print_DASHfunction] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
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
  [87] = 86,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 88,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 102,
  [108] = 83,
  [109] = 104,
  [110] = 97,
  [111] = 101,
  [112] = 98,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 115,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 60,
  [128] = 59,
  [129] = 57,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
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
  [144] = 58,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 61,
  [152] = 152,
  [153] = 153,
  [154] = 134,
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
  [168] = 167,
  [169] = 169,
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
  [266] = 266,
  [267] = 267,
  [268] = 249,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(235);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == ',') ADVANCE(240);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '=') ADVANCE(319);
      if (lookahead == 'N') ADVANCE(10);
      if (lookahead == '[') ADVANCE(317);
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 'q') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
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
      if (lookahead == '-') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '=') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
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
    case 7:
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 8:
      if (lookahead == 'N') ADVANCE(329);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(123);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(119);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(91);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == 'w') ADVANCE(91);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(333);
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(91);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 83:
      if (lookahead == 'f') ADVANCE(335);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(282);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(224);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(219);
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(288);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 108:
      if (lookahead == 'k') ADVANCE(280);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(163);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(290);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 154:
      if (lookahead == 'q') ADVANCE(305);
      END_STATE();
    case 155:
      if (lookahead == 'q') ADVANCE(305);
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 220:
      if (lookahead == 'w') ADVANCE(170);
      END_STATE();
    case 221:
      if (lookahead == 'x') ADVANCE(195);
      END_STATE();
    case 222:
      if (lookahead == 'x') ADVANCE(204);
      END_STATE();
    case 223:
      if (lookahead == 'x') ADVANCE(207);
      END_STATE();
    case 224:
      if (lookahead == 'y') ADVANCE(273);
      END_STATE();
    case 225:
      if (lookahead == 'y') ADVANCE(5);
      END_STATE();
    case 226:
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 227:
      if (lookahead == 'z') ADVANCE(64);
      END_STATE();
    case 228:
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(238);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == 'd') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(381);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead == 'u') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
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
    case 229:
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(238);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(239);
      if (lookahead == ':') ADVANCE(218);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
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
    case 230:
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(239);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
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
          lookahead == '|') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 233:
      if (eof) ADVANCE(235);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(238);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(239);
      if (lookahead == '-') ADVANCE(402);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == 'f') ADVANCE(345);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == 't') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
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
    case 234:
      if (eof) ADVANCE(235);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(238);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(239);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == 'b') ADVANCE(395);
      if (lookahead == 'c') ADVANCE(341);
      if (lookahead == 'd') ADVANCE(342);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(344);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead == 'l') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(486);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead == 'q') ADVANCE(485);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
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
    case 235:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 241:
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
    case 242:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 243:
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
    case 244:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 245:
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
    case 246:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 247:
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
      ACCEPT_TOKEN(anon_sym_COLONdefault);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 253:
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
    case 254:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 255:
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
    case 256:
      ACCEPT_TOKEN(anon_sym_ruleset);
      END_STATE();
    case 257:
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
    case 258:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == 's') ADVANCE(386);
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
      ACCEPT_TOKEN(anon_sym_COLONruleset);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_COLONname);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 263:
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
    case 264:
      ACCEPT_TOKEN(anon_sym_COLONwhen);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_birewrite);
      END_STATE();
    case 266:
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
    case 267:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 268:
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
    case 269:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(460);
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
    case 271:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(174);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_COLONuntil);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 274:
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
    case 275:
      ACCEPT_TOKEN(anon_sym_calc);
      END_STATE();
    case 276:
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
    case 277:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      END_STATE();
    case 278:
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
    case 279:
      ACCEPT_TOKEN(anon_sym_COLONvariants);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(151);
      END_STATE();
    case 281:
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
    case 282:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      END_STATE();
    case 283:
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
    case 284:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      END_STATE();
    case 285:
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
    case 286:
      ACCEPT_TOKEN(anon_sym_print_DASHstats);
      END_STATE();
    case 287:
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
    case 288:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 289:
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
    case 290:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 291:
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
    case 292:
      ACCEPT_TOKEN(anon_sym_print_DASHfunction);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_print_DASHfunction);
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
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      END_STATE();
    case 295:
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
    case 296:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 297:
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
    case 298:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 299:
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
    case 300:
      ACCEPT_TOKEN(anon_sym_fail);
      END_STATE();
    case 301:
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
    case 302:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 303:
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
    case 304:
      ACCEPT_TOKEN(anon_sym_saturate);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_COLONcost);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 310:
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
    case 311:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 312:
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
    case 313:
      ACCEPT_TOKEN(anon_sym_panic);
      END_STATE();
    case 314:
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
    case 315:
      ACCEPT_TOKEN(anon_sym_extract);
      END_STATE();
    case 316:
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
    case 317:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 320:
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
    case 321:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 322:
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
          lookahead == '|') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_true);
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
    case 325:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_false);
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
    case 327:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(231);
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
      if (lookahead == '-') ADVANCE(392);
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
      if (lookahead == '-') ADVANCE(435);
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
      if (lookahead == '-') ADVANCE(387);
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
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'h') ADVANCE(379);
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
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(462);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(340);
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
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'u') ADVANCE(427);
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
      if (lookahead == 'a') ADVANCE(414);
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
      if (lookahead == 'a') ADVANCE(473);
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
      if (lookahead == 'a') ADVANCE(475);
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
      if (lookahead == 'a') ADVANCE(454);
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
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(400);
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
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(431);
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
      if (lookahead == 'a') ADVANCE(361);
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
      if (lookahead == 'a') ADVANCE(362);
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
      if (lookahead == 'a') ADVANCE(480);
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
      if (lookahead == 'c') ADVANCE(276);
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
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(409);
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
      if (lookahead == 'c') ADVANCE(314);
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
      if (lookahead == 'c') ADVANCE(412);
      if (lookahead == 'l') ADVANCE(385);
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
      if (lookahead == 'c') ADVANCE(394);
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
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead == 'p') ADVANCE(488);
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
      if (lookahead == 'c') ADVANCE(479);
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
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(470);
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
      if (lookahead == 'c') ADVANCE(482);
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
      if (lookahead == 'd') ADVANCE(487);
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
      if (lookahead == 'd') ADVANCE(371);
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
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'u') ADVANCE(415);
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
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(259);
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
      if (lookahead == 'e') ADVANCE(310);
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
      if (lookahead == 'e') ADVANCE(253);
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
      if (lookahead == 'e') ADVANCE(303);
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
      if (lookahead == 'e') ADVANCE(263);
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
      if (lookahead == 'e') ADVANCE(243);
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
      if (lookahead == 'e') ADVANCE(266);
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
      if (lookahead == 'e') ADVANCE(295);
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
      if (lookahead == 'e') ADVANCE(285);
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
      if (lookahead == 'e') ADVANCE(324);
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
      if (lookahead == 'e') ADVANCE(326);
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
      if (lookahead == 'e') ADVANCE(355);
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
      if (lookahead == 'e') ADVANCE(364);
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
      if (lookahead == 'e') ADVANCE(463);
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
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead == 'o') ADVANCE(453);
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
      if (lookahead == 'e') ADVANCE(418);
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
      if (lookahead == 'e') ADVANCE(476);
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
    case 387:
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
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(283);
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
    case 390:
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
    case 391:
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
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(491);
      if (lookahead == 's') ADVANCE(398);
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
      if (lookahead == 'h') ADVANCE(289);
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
      if (lookahead == 'h') ADVANCE(380);
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
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(437);
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
      if (lookahead == 'i') ADVANCE(391);
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
      if (lookahead == 'i') ADVANCE(498);
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
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(411);
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
      if (lookahead == 'i') ADVANCE(432);
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
      if (lookahead == 'i') ADVANCE(356);
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
      if (lookahead == 'i') ADVANCE(430);
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
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(477);
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
      if (lookahead == 'i') ADVANCE(478);
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
    case 406:
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
    case 407:
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
    case 408:
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
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(281);
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
      if (lookahead == 'l') ADVANCE(354);
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
      if (lookahead == 'l') ADVANCE(301);
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
      if (lookahead == 'l') ADVANCE(348);
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
      if (lookahead == 'l') ADVANCE(484);
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
      if (lookahead == 'l') ADVANCE(461);
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
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(270);
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
      if (lookahead == 'l') ADVANCE(397);
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
      if (lookahead == 'l') ADVANCE(376);
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
      if (lookahead == 'l') ADVANCE(385);
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
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'w') ADVANCE(452);
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
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(359);
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
      if (lookahead == 'n') ADVANCE(312);
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
      if (lookahead == 'n') ADVANCE(247);
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
      if (lookahead == 'n') ADVANCE(255);
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
      if (lookahead == 'n') ADVANCE(241);
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
      if (lookahead == 'n') ADVANCE(293);
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
      if (lookahead == 'n') ADVANCE(360);
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
      if (lookahead == 'n') ADVANCE(389);
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
      if (lookahead == 'n') ADVANCE(396);
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
      if (lookahead == 'n') ADVANCE(390);
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
      if (lookahead == 'n') ADVANCE(401);
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
      if (lookahead == 'n') ADVANCE(472);
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
      if (lookahead == 'n') ADVANCE(363);
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
      if (lookahead == 'o') ADVANCE(388);
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
    case 436:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(434);
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
      if (lookahead == 'o') ADVANCE(422);
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
      if (lookahead == 'o') ADVANCE(423);
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
      if (lookahead == 'o') ADVANCE(424);
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
    case 441:
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
    case 442:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(291);
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
      if (lookahead == 'p') ADVANCE(416);
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
      if (lookahead == 'p') ADVANCE(373);
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
    case 447:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(481);
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
      if (lookahead == 'r') ADVANCE(351);
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
      if (lookahead == 'r') ADVANCE(436);
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
      if (lookahead == 'r') ADVANCE(367);
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
      if (lookahead == 'r') ADVANCE(403);
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
    case 454:
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
    case 455:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(490);
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
      if (lookahead == 'r') ADVANCE(404);
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
    case 458:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(393);
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
      if (lookahead == 's') ADVANCE(287);
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
      if (lookahead == 's') ADVANCE(358);
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
      if (lookahead == 's') ADVANCE(378);
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
      if (lookahead == 't') ADVANCE(346);
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
      if (lookahead == 't') ADVANCE(268);
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
    case 465:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(245);
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
      if (lookahead == 't') ADVANCE(297);
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
      if (lookahead == 't') ADVANCE(299);
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
      if (lookahead == 't') ADVANCE(316);
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
      if (lookahead == 't') ADVANCE(257);
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
    case 472:
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
    case 473:
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
    case 474:
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
    case 475:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(459);
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
      if (lookahead == 't') ADVANCE(369);
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
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(374);
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
      if (lookahead == 't') ADVANCE(405);
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
      if (lookahead == 't') ADVANCE(406);
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
      if (lookahead == 't') ADVANCE(407);
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
    case 483:
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
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(365);
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
      if (lookahead == 'u') ADVANCE(382);
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
      if (lookahead == 'u') ADVANCE(471);
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
      if (lookahead == 'u') ADVANCE(417);
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
    case 489:
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
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(377);
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
      if (lookahead == 'u') ADVANCE(433);
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
      if (lookahead == 'x') ADVANCE(474);
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
      if (lookahead == 'x') ADVANCE(483);
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
      if (lookahead == 'y') ADVANCE(274);
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
      if (lookahead == 'y') ADVANCE(339);
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
      if (lookahead == 'z') ADVANCE(375);
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
  [1] = {.lex_state = 234},
  [2] = {.lex_state = 234},
  [3] = {.lex_state = 233},
  [4] = {.lex_state = 233},
  [5] = {.lex_state = 233},
  [6] = {.lex_state = 233},
  [7] = {.lex_state = 233},
  [8] = {.lex_state = 233},
  [9] = {.lex_state = 233},
  [10] = {.lex_state = 233},
  [11] = {.lex_state = 233},
  [12] = {.lex_state = 233},
  [13] = {.lex_state = 233},
  [14] = {.lex_state = 233},
  [15] = {.lex_state = 233},
  [16] = {.lex_state = 233},
  [17] = {.lex_state = 233},
  [18] = {.lex_state = 233},
  [19] = {.lex_state = 233},
  [20] = {.lex_state = 233},
  [21] = {.lex_state = 233},
  [22] = {.lex_state = 233},
  [23] = {.lex_state = 233},
  [24] = {.lex_state = 233},
  [25] = {.lex_state = 233},
  [26] = {.lex_state = 233},
  [27] = {.lex_state = 233},
  [28] = {.lex_state = 233},
  [29] = {.lex_state = 233},
  [30] = {.lex_state = 233},
  [31] = {.lex_state = 233},
  [32] = {.lex_state = 233},
  [33] = {.lex_state = 233},
  [34] = {.lex_state = 233},
  [35] = {.lex_state = 233},
  [36] = {.lex_state = 233},
  [37] = {.lex_state = 233},
  [38] = {.lex_state = 233},
  [39] = {.lex_state = 233},
  [40] = {.lex_state = 233},
  [41] = {.lex_state = 233},
  [42] = {.lex_state = 233},
  [43] = {.lex_state = 233},
  [44] = {.lex_state = 233},
  [45] = {.lex_state = 233},
  [46] = {.lex_state = 233},
  [47] = {.lex_state = 233},
  [48] = {.lex_state = 233},
  [49] = {.lex_state = 233},
  [50] = {.lex_state = 233},
  [51] = {.lex_state = 233},
  [52] = {.lex_state = 233},
  [53] = {.lex_state = 233},
  [54] = {.lex_state = 233},
  [55] = {.lex_state = 233},
  [56] = {.lex_state = 233},
  [57] = {.lex_state = 233},
  [58] = {.lex_state = 233},
  [59] = {.lex_state = 233},
  [60] = {.lex_state = 233},
  [61] = {.lex_state = 233},
  [62] = {.lex_state = 228},
  [63] = {.lex_state = 234},
  [64] = {.lex_state = 234},
  [65] = {.lex_state = 234},
  [66] = {.lex_state = 234},
  [67] = {.lex_state = 234},
  [68] = {.lex_state = 234},
  [69] = {.lex_state = 234},
  [70] = {.lex_state = 234},
  [71] = {.lex_state = 234},
  [72] = {.lex_state = 234},
  [73] = {.lex_state = 234},
  [74] = {.lex_state = 234},
  [75] = {.lex_state = 234},
  [76] = {.lex_state = 234},
  [77] = {.lex_state = 234},
  [78] = {.lex_state = 234},
  [79] = {.lex_state = 234},
  [80] = {.lex_state = 229},
  [81] = {.lex_state = 230},
  [82] = {.lex_state = 234},
  [83] = {.lex_state = 229},
  [84] = {.lex_state = 234},
  [85] = {.lex_state = 234},
  [86] = {.lex_state = 234},
  [87] = {.lex_state = 234},
  [88] = {.lex_state = 229},
  [89] = {.lex_state = 234},
  [90] = {.lex_state = 229},
  [91] = {.lex_state = 229},
  [92] = {.lex_state = 234},
  [93] = {.lex_state = 234},
  [94] = {.lex_state = 229},
  [95] = {.lex_state = 234},
  [96] = {.lex_state = 234},
  [97] = {.lex_state = 234},
  [98] = {.lex_state = 229},
  [99] = {.lex_state = 234},
  [100] = {.lex_state = 234},
  [101] = {.lex_state = 229},
  [102] = {.lex_state = 234},
  [103] = {.lex_state = 234},
  [104] = {.lex_state = 234},
  [105] = {.lex_state = 234},
  [106] = {.lex_state = 230},
  [107] = {.lex_state = 234},
  [108] = {.lex_state = 229},
  [109] = {.lex_state = 234},
  [110] = {.lex_state = 234},
  [111] = {.lex_state = 229},
  [112] = {.lex_state = 229},
  [113] = {.lex_state = 234},
  [114] = {.lex_state = 234},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 234},
  [118] = {.lex_state = 234},
  [119] = {.lex_state = 234},
  [120] = {.lex_state = 234},
  [121] = {.lex_state = 234},
  [122] = {.lex_state = 234},
  [123] = {.lex_state = 234},
  [124] = {.lex_state = 230},
  [125] = {.lex_state = 234},
  [126] = {.lex_state = 230},
  [127] = {.lex_state = 229},
  [128] = {.lex_state = 229},
  [129] = {.lex_state = 229},
  [130] = {.lex_state = 234},
  [131] = {.lex_state = 234},
  [132] = {.lex_state = 234},
  [133] = {.lex_state = 234},
  [134] = {.lex_state = 229},
  [135] = {.lex_state = 234},
  [136] = {.lex_state = 234},
  [137] = {.lex_state = 234},
  [138] = {.lex_state = 234},
  [139] = {.lex_state = 229},
  [140] = {.lex_state = 234},
  [141] = {.lex_state = 234},
  [142] = {.lex_state = 234},
  [143] = {.lex_state = 234},
  [144] = {.lex_state = 229},
  [145] = {.lex_state = 230},
  [146] = {.lex_state = 234},
  [147] = {.lex_state = 230},
  [148] = {.lex_state = 234},
  [149] = {.lex_state = 234},
  [150] = {.lex_state = 234},
  [151] = {.lex_state = 229},
  [152] = {.lex_state = 234},
  [153] = {.lex_state = 234},
  [154] = {.lex_state = 229},
  [155] = {.lex_state = 234},
  [156] = {.lex_state = 230},
  [157] = {.lex_state = 234},
  [158] = {.lex_state = 234},
  [159] = {.lex_state = 234},
  [160] = {.lex_state = 234},
  [161] = {.lex_state = 234},
  [162] = {.lex_state = 234},
  [163] = {.lex_state = 234},
  [164] = {.lex_state = 234},
  [165] = {.lex_state = 234},
  [166] = {.lex_state = 234},
  [167] = {.lex_state = 234},
  [168] = {.lex_state = 234},
  [169] = {.lex_state = 234},
  [170] = {.lex_state = 234},
  [171] = {.lex_state = 234},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 234},
  [174] = {.lex_state = 234},
  [175] = {.lex_state = 229},
  [176] = {.lex_state = 234},
  [177] = {.lex_state = 234},
  [178] = {.lex_state = 234},
  [179] = {.lex_state = 234},
  [180] = {.lex_state = 234},
  [181] = {.lex_state = 234},
  [182] = {.lex_state = 229},
  [183] = {.lex_state = 234},
  [184] = {.lex_state = 234},
  [185] = {.lex_state = 234},
  [186] = {.lex_state = 234},
  [187] = {.lex_state = 234},
  [188] = {.lex_state = 234},
  [189] = {.lex_state = 234},
  [190] = {.lex_state = 234},
  [191] = {.lex_state = 234},
  [192] = {.lex_state = 234},
  [193] = {.lex_state = 234},
  [194] = {.lex_state = 234},
  [195] = {.lex_state = 234},
  [196] = {.lex_state = 234},
  [197] = {.lex_state = 234},
  [198] = {.lex_state = 230},
  [199] = {.lex_state = 234},
  [200] = {.lex_state = 234},
  [201] = {.lex_state = 229},
  [202] = {.lex_state = 229},
  [203] = {.lex_state = 229},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 234},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 234},
  [208] = {.lex_state = 234},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 229},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 230},
  [213] = {.lex_state = 229},
  [214] = {.lex_state = 229},
  [215] = {.lex_state = 234},
  [216] = {.lex_state = 229},
  [217] = {.lex_state = 229},
  [218] = {.lex_state = 234},
  [219] = {.lex_state = 234},
  [220] = {.lex_state = 229},
  [221] = {.lex_state = 234},
  [222] = {.lex_state = 234},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 234},
  [225] = {.lex_state = 229},
  [226] = {.lex_state = 229},
  [227] = {.lex_state = 234},
  [228] = {.lex_state = 234},
  [229] = {.lex_state = 234},
  [230] = {.lex_state = 234},
  [231] = {.lex_state = 234},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 234},
  [236] = {.lex_state = 234},
  [237] = {.lex_state = 234},
  [238] = {.lex_state = 234},
  [239] = {.lex_state = 234},
  [240] = {.lex_state = 234},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 234},
  [243] = {.lex_state = 234},
  [244] = {.lex_state = 229},
  [245] = {.lex_state = 234},
  [246] = {.lex_state = 234},
  [247] = {.lex_state = 234},
  [248] = {.lex_state = 229},
  [249] = {.lex_state = 234},
  [250] = {.lex_state = 234},
  [251] = {.lex_state = 229},
  [252] = {.lex_state = 230},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 234},
  [255] = {.lex_state = 229},
  [256] = {.lex_state = 234},
  [257] = {.lex_state = 234},
  [258] = {.lex_state = 229},
  [259] = {.lex_state = 229},
  [260] = {.lex_state = 229},
  [261] = {.lex_state = 229},
  [262] = {.lex_state = 229},
  [263] = {.lex_state = 229},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 234},
  [266] = {.lex_state = 234},
  [267] = {.lex_state = 230},
  [268] = {.lex_state = 234},
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
    [anon_sym_calc] = ACTIONS(1),
    [anon_sym_query_DASHextract] = ACTIONS(1),
    [anon_sym_COLONvariants] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_check_DASHproof] = ACTIONS(1),
    [anon_sym_run_DASHschedule] = ACTIONS(1),
    [anon_sym_print_DASHstats] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_print_DASHfunction] = ACTIONS(1),
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [sym_unum] = ACTIONS(1),
    [anon_sym_NaN] = ACTIONS(1),
    [aux_sym_f64_token1] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [anon_sym_DASHinf] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(232),
    [sym_command] = STATE(64),
    [sym_nonletaction] = STATE(160),
    [sym_callexpr] = STATE(155),
    [aux_sym_source_file_repeat1] = STATE(64),
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
      anon_sym_print_DASHfunction,
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
    ACTIONS(23), 2,
      anon_sym_ruleset,
      anon_sym_print_DASHsize,
    ACTIONS(27), 2,
      anon_sym_rewrite,
      anon_sym_birewrite,
    ACTIONS(39), 2,
      anon_sym_check_DASHproof,
      anon_sym_print_DASHstats,
    ACTIONS(43), 2,
      anon_sym_push,
      anon_sym_pop,
  [94] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(67), 1,
      sym_rparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [140] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(81), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [186] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(83), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [232] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(85), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [278] = 12,
    ACTIONS(87), 1,
      sym_lparen,
    ACTIONS(90), 1,
      sym_rparen,
    ACTIONS(95), 1,
      sym_num,
    ACTIONS(101), 1,
      aux_sym_f64_token1,
    ACTIONS(104), 1,
      sym_ident,
    ACTIONS(107), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(98), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [324] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(110), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [370] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(112), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [416] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(114), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [462] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(116), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [508] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(118), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [554] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(120), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [600] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(122), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [646] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [689] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [732] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(7), 1,
      aux_sym_command_repeat2,
    STATE(56), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [777] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [820] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(124), 1,
      sym_rparen,
    STATE(199), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [865] = 12,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(126), 1,
      anon_sym_COLONvariants,
    STATE(231), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [910] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [953] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(250), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [995] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(191), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1037] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(228), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1079] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(183), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1121] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(222), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1163] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(236), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1205] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(185), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1247] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(219), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1289] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(174), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1331] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(47), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1373] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(239), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1415] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(19), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1457] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(45), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1499] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(196), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1541] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(238), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1583] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(200), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1625] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(242), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1667] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(181), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1709] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(235), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1751] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(193), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1793] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(207), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1835] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(169), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1877] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(247), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1919] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(131), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1961] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(257), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [2003] = 11,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_num,
    ACTIONS(75), 1,
      aux_sym_f64_token1,
    ACTIONS(77), 1,
      sym_ident,
    ACTIONS(79), 1,
      sym_string,
    STATE(199), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(73), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(54), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [2045] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(130), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(128), 8,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2069] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(134), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(132), 8,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2093] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(136), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(138), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2116] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(140), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(142), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2139] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(144), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(146), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2162] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(148), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(150), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2185] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(152), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(154), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2208] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(156), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(158), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2231] = 4,
    ACTIONS(162), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(160), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(164), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2253] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(166), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(168), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2272] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(170), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(172), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2291] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(174), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(176), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2310] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(178), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(180), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2329] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(182), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(184), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2348] = 8,
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
    ACTIONS(186), 1,
      anon_sym_let,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2374] = 8,
    ACTIONS(112), 1,
      sym_rparen,
    ACTIONS(188), 1,
      anon_sym_COLONunextractable,
    ACTIONS(190), 1,
      anon_sym_COLONon_merge,
    ACTIONS(192), 1,
      anon_sym_COLONmerge,
    ACTIONS(194), 1,
      anon_sym_COLONdefault,
    ACTIONS(196), 1,
      anon_sym_COLONcost,
    STATE(100), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2400] = 6,
    ACTIONS(7), 1,
      sym_lparen,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    STATE(155), 1,
      sym_callexpr,
    STATE(160), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(65), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [2421] = 6,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      sym_lparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(160), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(65), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [2442] = 6,
    ACTIONS(205), 1,
      sym_lparen,
    ACTIONS(207), 1,
      sym_rparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(187), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(76), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2463] = 6,
    ACTIONS(205), 1,
      sym_lparen,
    ACTIONS(209), 1,
      sym_rparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(187), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(76), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2484] = 6,
    ACTIONS(205), 1,
      sym_lparen,
    ACTIONS(207), 1,
      sym_rparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(187), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(78), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2505] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(211), 6,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [2518] = 6,
    ACTIONS(205), 1,
      sym_lparen,
    ACTIONS(209), 1,
      sym_rparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(187), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(72), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2539] = 6,
    ACTIONS(205), 1,
      sym_lparen,
    ACTIONS(213), 1,
      sym_rparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(187), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(67), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2560] = 6,
    ACTIONS(205), 1,
      sym_lparen,
    ACTIONS(215), 1,
      sym_rparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(187), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(76), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2581] = 6,
    ACTIONS(205), 1,
      sym_lparen,
    ACTIONS(217), 1,
      sym_rparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(187), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(66), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2602] = 6,
    ACTIONS(205), 1,
      sym_lparen,
    ACTIONS(219), 1,
      sym_rparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(187), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(75), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2623] = 6,
    ACTIONS(205), 1,
      sym_lparen,
    ACTIONS(213), 1,
      sym_rparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(187), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(76), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2644] = 6,
    ACTIONS(221), 1,
      sym_lparen,
    ACTIONS(224), 1,
      sym_rparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(187), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(76), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2665] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(226), 6,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [2678] = 6,
    ACTIONS(205), 1,
      sym_lparen,
    ACTIONS(228), 1,
      sym_rparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(187), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(76), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2699] = 5,
    ACTIONS(230), 1,
      sym_lparen,
    ACTIONS(232), 1,
      sym_rparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2717] = 5,
    ACTIONS(234), 1,
      sym_lparen,
    ACTIONS(237), 1,
      sym_rparen,
    ACTIONS(239), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(80), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2735] = 6,
    ACTIONS(196), 1,
      anon_sym_COLONcost,
    ACTIONS(242), 1,
      sym_rparen,
    ACTIONS(244), 1,
      sym_type,
    STATE(124), 1,
      aux_sym_command_repeat4,
    STATE(237), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2755] = 5,
    ACTIONS(230), 1,
      sym_lparen,
    ACTIONS(246), 1,
      sym_rparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2773] = 5,
    ACTIONS(248), 1,
      sym_lparen,
    ACTIONS(250), 1,
      sym_rparen,
    ACTIONS(252), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(80), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2791] = 5,
    ACTIONS(230), 1,
      sym_lparen,
    ACTIONS(254), 1,
      sym_rparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(82), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2809] = 5,
    ACTIONS(112), 1,
      sym_rparen,
    ACTIONS(230), 1,
      sym_lparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(99), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2827] = 5,
    ACTIONS(230), 1,
      sym_lparen,
    ACTIONS(256), 1,
      sym_rparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2845] = 5,
    ACTIONS(230), 1,
      sym_lparen,
    ACTIONS(258), 1,
      sym_rparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2863] = 5,
    ACTIONS(248), 1,
      sym_lparen,
    ACTIONS(252), 1,
      sym_ident,
    ACTIONS(260), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(112), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2881] = 5,
    ACTIONS(230), 1,
      sym_lparen,
    ACTIONS(262), 1,
      sym_rparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(79), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2899] = 5,
    ACTIONS(248), 1,
      sym_lparen,
    ACTIONS(252), 1,
      sym_ident,
    ACTIONS(264), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(80), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2917] = 5,
    ACTIONS(248), 1,
      sym_lparen,
    ACTIONS(252), 1,
      sym_ident,
    ACTIONS(266), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(90), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2935] = 5,
    ACTIONS(230), 1,
      sym_lparen,
    ACTIONS(266), 1,
      sym_rparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(93), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2953] = 5,
    ACTIONS(230), 1,
      sym_lparen,
    ACTIONS(264), 1,
      sym_rparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2971] = 5,
    ACTIONS(248), 1,
      sym_lparen,
    ACTIONS(252), 1,
      sym_ident,
    ACTIONS(268), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(98), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2989] = 5,
    ACTIONS(270), 1,
      sym_lparen,
    ACTIONS(273), 1,
      sym_rparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3007] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(275), 5,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
  [3019] = 5,
    ACTIONS(230), 1,
      sym_lparen,
    ACTIONS(277), 1,
      sym_rparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(102), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3037] = 5,
    ACTIONS(248), 1,
      sym_lparen,
    ACTIONS(252), 1,
      sym_ident,
    ACTIONS(277), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(80), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3055] = 5,
    ACTIONS(85), 1,
      sym_rparen,
    ACTIONS(230), 1,
      sym_lparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3073] = 6,
    ACTIONS(85), 1,
      sym_rparen,
    ACTIONS(279), 1,
      anon_sym_COLONunextractable,
    ACTIONS(281), 1,
      anon_sym_COLONon_merge,
    ACTIONS(283), 1,
      anon_sym_COLONmerge,
    ACTIONS(285), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3093] = 5,
    ACTIONS(248), 1,
      sym_lparen,
    ACTIONS(252), 1,
      sym_ident,
    ACTIONS(277), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(108), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3111] = 5,
    ACTIONS(230), 1,
      sym_lparen,
    ACTIONS(287), 1,
      sym_rparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3129] = 5,
    ACTIONS(118), 1,
      sym_rparen,
    ACTIONS(230), 1,
      sym_lparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3147] = 5,
    ACTIONS(230), 1,
      sym_lparen,
    ACTIONS(287), 1,
      sym_rparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(87), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3165] = 5,
    ACTIONS(85), 1,
      sym_rparen,
    ACTIONS(230), 1,
      sym_lparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(103), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3183] = 6,
    ACTIONS(196), 1,
      anon_sym_COLONcost,
    ACTIONS(289), 1,
      sym_rparen,
    ACTIONS(291), 1,
      sym_type,
    STATE(81), 1,
      aux_sym_command_repeat4,
    STATE(229), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3203] = 5,
    ACTIONS(230), 1,
      sym_lparen,
    ACTIONS(250), 1,
      sym_rparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3221] = 5,
    ACTIONS(248), 1,
      sym_lparen,
    ACTIONS(252), 1,
      sym_ident,
    ACTIONS(287), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(80), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3239] = 5,
    ACTIONS(230), 1,
      sym_lparen,
    ACTIONS(250), 1,
      sym_rparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(86), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3257] = 5,
    ACTIONS(230), 1,
      sym_lparen,
    ACTIONS(293), 1,
      sym_rparen,
    STATE(171), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3275] = 5,
    ACTIONS(248), 1,
      sym_lparen,
    ACTIONS(252), 1,
      sym_ident,
    ACTIONS(293), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(83), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3293] = 5,
    ACTIONS(248), 1,
      sym_lparen,
    ACTIONS(252), 1,
      sym_ident,
    ACTIONS(293), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(80), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3311] = 4,
    ACTIONS(295), 1,
      sym_lparen,
    ACTIONS(298), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(113), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3326] = 5,
    ACTIONS(7), 1,
      sym_lparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(160), 1,
      sym_nonletaction,
    STATE(231), 1,
      sym_command,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3343] = 4,
    ACTIONS(300), 1,
      anon_sym_run,
    ACTIONS(304), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(302), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [3358] = 4,
    ACTIONS(306), 1,
      anon_sym_run,
    ACTIONS(310), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(308), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [3373] = 4,
    ACTIONS(312), 1,
      sym_lparen,
    ACTIONS(314), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(119), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3388] = 4,
    ACTIONS(316), 1,
      sym_lparen,
    ACTIONS(319), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(118), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [3403] = 4,
    ACTIONS(312), 1,
      sym_lparen,
    ACTIONS(321), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(113), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3418] = 5,
    ACTIONS(118), 1,
      sym_rparen,
    ACTIONS(323), 1,
      anon_sym_COLONon_merge,
    ACTIONS(325), 1,
      anon_sym_COLONmerge,
    ACTIONS(327), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3435] = 5,
    ACTIONS(85), 1,
      sym_rparen,
    ACTIONS(281), 1,
      anon_sym_COLONon_merge,
    ACTIONS(283), 1,
      anon_sym_COLONmerge,
    ACTIONS(285), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3452] = 4,
    ACTIONS(264), 1,
      sym_rparen,
    ACTIONS(329), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(123), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [3467] = 4,
    ACTIONS(112), 1,
      sym_rparen,
    ACTIONS(329), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(118), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [3482] = 4,
    ACTIONS(333), 1,
      sym_type,
    STATE(124), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(331), 2,
      sym_rparen,
      anon_sym_COLONcost,
  [3497] = 4,
    ACTIONS(336), 1,
      sym_rparen,
    ACTIONS(338), 1,
      anon_sym_COLONmerge,
    ACTIONS(340), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3511] = 4,
    ACTIONS(342), 1,
      sym_rparen,
    ACTIONS(344), 1,
      sym_type,
    STATE(147), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3525] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(178), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3535] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(174), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3545] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(166), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3555] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(346), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3565] = 4,
    ACTIONS(112), 1,
      sym_rparen,
    ACTIONS(348), 1,
      anon_sym_COLONruleset,
    ACTIONS(350), 1,
      anon_sym_COLONwhen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3579] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(352), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3589] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(354), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3599] = 4,
    ACTIONS(260), 1,
      sym_rparen,
    ACTIONS(356), 1,
      anon_sym_COLONuntil,
    ACTIONS(358), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3613] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(360), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3623] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(362), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3633] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(364), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3643] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(366), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3653] = 4,
    ACTIONS(368), 1,
      sym_lparen,
    ACTIONS(370), 1,
      sym_ident,
    STATE(37), 1,
      sym_schedule,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3667] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(372), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3677] = 4,
    ACTIONS(374), 1,
      sym_rparen,
    ACTIONS(376), 1,
      anon_sym_COLONmerge,
    ACTIONS(378), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3691] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(380), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3701] = 4,
    ACTIONS(382), 1,
      sym_rparen,
    ACTIONS(384), 1,
      anon_sym_COLONruleset,
    ACTIONS(386), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3715] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(170), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3725] = 4,
    ACTIONS(388), 1,
      sym_rparen,
    ACTIONS(390), 1,
      sym_type,
    STATE(156), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3739] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(392), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3749] = 4,
    ACTIONS(81), 1,
      sym_rparen,
    ACTIONS(244), 1,
      sym_type,
    STATE(124), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3763] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(394), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3773] = 4,
    ACTIONS(382), 1,
      sym_rparen,
    ACTIONS(396), 1,
      anon_sym_COLONmerge,
    ACTIONS(398), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3787] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(400), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3797] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(182), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3807] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(402), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3817] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(404), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3827] = 4,
    ACTIONS(268), 1,
      sym_rparen,
    ACTIONS(406), 1,
      anon_sym_COLONuntil,
    ACTIONS(408), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3841] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(410), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3851] = 4,
    ACTIONS(244), 1,
      sym_type,
    ACTIONS(412), 1,
      sym_rparen,
    STATE(124), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3865] = 4,
    ACTIONS(118), 1,
      sym_rparen,
    ACTIONS(414), 1,
      anon_sym_COLONruleset,
    ACTIONS(416), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3879] = 4,
    ACTIONS(418), 1,
      sym_rparen,
    ACTIONS(420), 1,
      anon_sym_COLONmerge,
    ACTIONS(422), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3893] = 4,
    ACTIONS(418), 1,
      sym_rparen,
    ACTIONS(424), 1,
      anon_sym_COLONruleset,
    ACTIONS(426), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3907] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(428), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3917] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(430), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3927] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(432), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3937] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(434), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3947] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(436), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3957] = 3,
    ACTIONS(418), 1,
      sym_rparen,
    ACTIONS(438), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3968] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(440), 2,
      sym_lparen,
      sym_rparen,
  [3977] = 3,
    ACTIONS(277), 1,
      sym_rparen,
    ACTIONS(442), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3988] = 3,
    ACTIONS(293), 1,
      sym_rparen,
    ACTIONS(444), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3999] = 3,
    ACTIONS(446), 1,
      sym_rparen,
    ACTIONS(448), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4010] = 3,
    ACTIONS(264), 1,
      sym_rparen,
    ACTIONS(450), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4021] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(452), 2,
      sym_lparen,
      sym_rparen,
  [4030] = 3,
    ACTIONS(63), 1,
      sym_ident,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4041] = 3,
    ACTIONS(112), 1,
      sym_rparen,
    ACTIONS(456), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4052] = 3,
    ACTIONS(458), 1,
      sym_rparen,
    ACTIONS(460), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4063] = 3,
    ACTIONS(462), 1,
      sym_unum,
    ACTIONS(464), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4074] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(466), 2,
      sym_lparen,
      sym_rparen,
  [4083] = 3,
    ACTIONS(336), 1,
      sym_rparen,
    ACTIONS(468), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4094] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(470), 2,
      sym_lparen,
      sym_rparen,
  [4103] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(472), 2,
      sym_lparen,
      sym_rparen,
  [4112] = 3,
    ACTIONS(264), 1,
      sym_rparen,
    ACTIONS(474), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4123] = 3,
    ACTIONS(418), 1,
      sym_rparen,
    ACTIONS(422), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4134] = 3,
    ACTIONS(476), 1,
      sym_rparen,
    ACTIONS(478), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4145] = 3,
    ACTIONS(336), 1,
      sym_rparen,
    ACTIONS(340), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4156] = 3,
    ACTIONS(374), 1,
      sym_rparen,
    ACTIONS(480), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4167] = 3,
    ACTIONS(374), 1,
      sym_rparen,
    ACTIONS(378), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4178] = 3,
    ACTIONS(266), 1,
      sym_rparen,
    ACTIONS(482), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4189] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(484), 2,
      sym_lparen,
      sym_rparen,
  [4198] = 3,
    ACTIONS(382), 1,
      sym_rparen,
    ACTIONS(386), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4209] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(486), 2,
      sym_lparen,
      sym_rparen,
  [4218] = 3,
    ACTIONS(488), 1,
      sym_lparen,
    STATE(63), 1,
      sym_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4229] = 3,
    ACTIONS(118), 1,
      sym_rparen,
    ACTIONS(327), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4240] = 3,
    ACTIONS(264), 1,
      sym_rparen,
    ACTIONS(490), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4251] = 3,
    ACTIONS(382), 1,
      sym_rparen,
    ACTIONS(398), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4262] = 3,
    ACTIONS(382), 1,
      sym_rparen,
    ACTIONS(492), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4273] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(494), 2,
      sym_lparen,
      sym_rparen,
  [4282] = 2,
    ACTIONS(118), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4290] = 2,
    ACTIONS(496), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4298] = 2,
    ACTIONS(450), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4306] = 2,
    ACTIONS(498), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4314] = 2,
    ACTIONS(112), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4322] = 2,
    ACTIONS(500), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4330] = 2,
    ACTIONS(502), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4338] = 2,
    ACTIONS(504), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4346] = 2,
    ACTIONS(506), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4354] = 2,
    ACTIONS(508), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4362] = 2,
    ACTIONS(482), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4370] = 2,
    ACTIONS(382), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4378] = 2,
    ACTIONS(510), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4386] = 2,
    ACTIONS(512), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4394] = 2,
    ACTIONS(514), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4402] = 2,
    ACTIONS(516), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4410] = 2,
    ACTIONS(518), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4418] = 2,
    ACTIONS(516), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4426] = 2,
    ACTIONS(520), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4434] = 2,
    ACTIONS(124), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4442] = 2,
    ACTIONS(522), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4450] = 2,
    ACTIONS(524), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4458] = 2,
    ACTIONS(526), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4466] = 2,
    ACTIONS(374), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4474] = 2,
    ACTIONS(528), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4482] = 2,
    ACTIONS(266), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4490] = 2,
    ACTIONS(530), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4498] = 2,
    ACTIONS(532), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4506] = 2,
    ACTIONS(534), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4514] = 2,
    ACTIONS(536), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4522] = 2,
    ACTIONS(532), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4530] = 2,
    ACTIONS(538), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4538] = 2,
    ACTIONS(336), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4546] = 2,
    ACTIONS(242), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4554] = 2,
    ACTIONS(540), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4562] = 2,
    ACTIONS(264), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4570] = 2,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4578] = 2,
    ACTIONS(544), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4586] = 2,
    ACTIONS(546), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4594] = 2,
    ACTIONS(418), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4602] = 2,
    ACTIONS(548), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4610] = 2,
    ACTIONS(550), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4618] = 2,
    ACTIONS(552), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4626] = 2,
    ACTIONS(458), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4634] = 2,
    ACTIONS(554), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4642] = 2,
    ACTIONS(556), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4650] = 2,
    ACTIONS(446), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4658] = 2,
    ACTIONS(558), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4666] = 2,
    ACTIONS(482), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4674] = 2,
    ACTIONS(560), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4682] = 2,
    ACTIONS(562), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4690] = 2,
    ACTIONS(564), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4698] = 2,
    ACTIONS(566), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4706] = 2,
    ACTIONS(568), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4714] = 2,
    ACTIONS(570), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4722] = 2,
    ACTIONS(572), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4730] = 2,
    ACTIONS(574), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4738] = 2,
    ACTIONS(450), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4746] = 2,
    ACTIONS(576), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4754] = 2,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4762] = 2,
    ACTIONS(578), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4770] = 2,
    ACTIONS(85), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4778] = 2,
    ACTIONS(580), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4786] = 2,
    ACTIONS(582), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4794] = 2,
    ACTIONS(584), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4802] = 2,
    ACTIONS(586), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4810] = 2,
    ACTIONS(588), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4818] = 2,
    ACTIONS(590), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4826] = 2,
    ACTIONS(592), 1,
      anon_sym_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4834] = 2,
    ACTIONS(594), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4842] = 2,
    ACTIONS(596), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4850] = 2,
    ACTIONS(598), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4858] = 2,
    ACTIONS(600), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 232,
  [SMALL_STATE(7)] = 278,
  [SMALL_STATE(8)] = 324,
  [SMALL_STATE(9)] = 370,
  [SMALL_STATE(10)] = 416,
  [SMALL_STATE(11)] = 462,
  [SMALL_STATE(12)] = 508,
  [SMALL_STATE(13)] = 554,
  [SMALL_STATE(14)] = 600,
  [SMALL_STATE(15)] = 646,
  [SMALL_STATE(16)] = 689,
  [SMALL_STATE(17)] = 732,
  [SMALL_STATE(18)] = 777,
  [SMALL_STATE(19)] = 820,
  [SMALL_STATE(20)] = 865,
  [SMALL_STATE(21)] = 910,
  [SMALL_STATE(22)] = 953,
  [SMALL_STATE(23)] = 995,
  [SMALL_STATE(24)] = 1037,
  [SMALL_STATE(25)] = 1079,
  [SMALL_STATE(26)] = 1121,
  [SMALL_STATE(27)] = 1163,
  [SMALL_STATE(28)] = 1205,
  [SMALL_STATE(29)] = 1247,
  [SMALL_STATE(30)] = 1289,
  [SMALL_STATE(31)] = 1331,
  [SMALL_STATE(32)] = 1373,
  [SMALL_STATE(33)] = 1415,
  [SMALL_STATE(34)] = 1457,
  [SMALL_STATE(35)] = 1499,
  [SMALL_STATE(36)] = 1541,
  [SMALL_STATE(37)] = 1583,
  [SMALL_STATE(38)] = 1625,
  [SMALL_STATE(39)] = 1667,
  [SMALL_STATE(40)] = 1709,
  [SMALL_STATE(41)] = 1751,
  [SMALL_STATE(42)] = 1793,
  [SMALL_STATE(43)] = 1835,
  [SMALL_STATE(44)] = 1877,
  [SMALL_STATE(45)] = 1919,
  [SMALL_STATE(46)] = 1961,
  [SMALL_STATE(47)] = 2003,
  [SMALL_STATE(48)] = 2045,
  [SMALL_STATE(49)] = 2069,
  [SMALL_STATE(50)] = 2093,
  [SMALL_STATE(51)] = 2116,
  [SMALL_STATE(52)] = 2139,
  [SMALL_STATE(53)] = 2162,
  [SMALL_STATE(54)] = 2185,
  [SMALL_STATE(55)] = 2208,
  [SMALL_STATE(56)] = 2231,
  [SMALL_STATE(57)] = 2253,
  [SMALL_STATE(58)] = 2272,
  [SMALL_STATE(59)] = 2291,
  [SMALL_STATE(60)] = 2310,
  [SMALL_STATE(61)] = 2329,
  [SMALL_STATE(62)] = 2348,
  [SMALL_STATE(63)] = 2374,
  [SMALL_STATE(64)] = 2400,
  [SMALL_STATE(65)] = 2421,
  [SMALL_STATE(66)] = 2442,
  [SMALL_STATE(67)] = 2463,
  [SMALL_STATE(68)] = 2484,
  [SMALL_STATE(69)] = 2505,
  [SMALL_STATE(70)] = 2518,
  [SMALL_STATE(71)] = 2539,
  [SMALL_STATE(72)] = 2560,
  [SMALL_STATE(73)] = 2581,
  [SMALL_STATE(74)] = 2602,
  [SMALL_STATE(75)] = 2623,
  [SMALL_STATE(76)] = 2644,
  [SMALL_STATE(77)] = 2665,
  [SMALL_STATE(78)] = 2678,
  [SMALL_STATE(79)] = 2699,
  [SMALL_STATE(80)] = 2717,
  [SMALL_STATE(81)] = 2735,
  [SMALL_STATE(82)] = 2755,
  [SMALL_STATE(83)] = 2773,
  [SMALL_STATE(84)] = 2791,
  [SMALL_STATE(85)] = 2809,
  [SMALL_STATE(86)] = 2827,
  [SMALL_STATE(87)] = 2845,
  [SMALL_STATE(88)] = 2863,
  [SMALL_STATE(89)] = 2881,
  [SMALL_STATE(90)] = 2899,
  [SMALL_STATE(91)] = 2917,
  [SMALL_STATE(92)] = 2935,
  [SMALL_STATE(93)] = 2953,
  [SMALL_STATE(94)] = 2971,
  [SMALL_STATE(95)] = 2989,
  [SMALL_STATE(96)] = 3007,
  [SMALL_STATE(97)] = 3019,
  [SMALL_STATE(98)] = 3037,
  [SMALL_STATE(99)] = 3055,
  [SMALL_STATE(100)] = 3073,
  [SMALL_STATE(101)] = 3093,
  [SMALL_STATE(102)] = 3111,
  [SMALL_STATE(103)] = 3129,
  [SMALL_STATE(104)] = 3147,
  [SMALL_STATE(105)] = 3165,
  [SMALL_STATE(106)] = 3183,
  [SMALL_STATE(107)] = 3203,
  [SMALL_STATE(108)] = 3221,
  [SMALL_STATE(109)] = 3239,
  [SMALL_STATE(110)] = 3257,
  [SMALL_STATE(111)] = 3275,
  [SMALL_STATE(112)] = 3293,
  [SMALL_STATE(113)] = 3311,
  [SMALL_STATE(114)] = 3326,
  [SMALL_STATE(115)] = 3343,
  [SMALL_STATE(116)] = 3358,
  [SMALL_STATE(117)] = 3373,
  [SMALL_STATE(118)] = 3388,
  [SMALL_STATE(119)] = 3403,
  [SMALL_STATE(120)] = 3418,
  [SMALL_STATE(121)] = 3435,
  [SMALL_STATE(122)] = 3452,
  [SMALL_STATE(123)] = 3467,
  [SMALL_STATE(124)] = 3482,
  [SMALL_STATE(125)] = 3497,
  [SMALL_STATE(126)] = 3511,
  [SMALL_STATE(127)] = 3525,
  [SMALL_STATE(128)] = 3535,
  [SMALL_STATE(129)] = 3545,
  [SMALL_STATE(130)] = 3555,
  [SMALL_STATE(131)] = 3565,
  [SMALL_STATE(132)] = 3579,
  [SMALL_STATE(133)] = 3589,
  [SMALL_STATE(134)] = 3599,
  [SMALL_STATE(135)] = 3613,
  [SMALL_STATE(136)] = 3623,
  [SMALL_STATE(137)] = 3633,
  [SMALL_STATE(138)] = 3643,
  [SMALL_STATE(139)] = 3653,
  [SMALL_STATE(140)] = 3667,
  [SMALL_STATE(141)] = 3677,
  [SMALL_STATE(142)] = 3691,
  [SMALL_STATE(143)] = 3701,
  [SMALL_STATE(144)] = 3715,
  [SMALL_STATE(145)] = 3725,
  [SMALL_STATE(146)] = 3739,
  [SMALL_STATE(147)] = 3749,
  [SMALL_STATE(148)] = 3763,
  [SMALL_STATE(149)] = 3773,
  [SMALL_STATE(150)] = 3787,
  [SMALL_STATE(151)] = 3797,
  [SMALL_STATE(152)] = 3807,
  [SMALL_STATE(153)] = 3817,
  [SMALL_STATE(154)] = 3827,
  [SMALL_STATE(155)] = 3841,
  [SMALL_STATE(156)] = 3851,
  [SMALL_STATE(157)] = 3865,
  [SMALL_STATE(158)] = 3879,
  [SMALL_STATE(159)] = 3893,
  [SMALL_STATE(160)] = 3907,
  [SMALL_STATE(161)] = 3917,
  [SMALL_STATE(162)] = 3927,
  [SMALL_STATE(163)] = 3937,
  [SMALL_STATE(164)] = 3947,
  [SMALL_STATE(165)] = 3957,
  [SMALL_STATE(166)] = 3968,
  [SMALL_STATE(167)] = 3977,
  [SMALL_STATE(168)] = 3988,
  [SMALL_STATE(169)] = 3999,
  [SMALL_STATE(170)] = 4010,
  [SMALL_STATE(171)] = 4021,
  [SMALL_STATE(172)] = 4030,
  [SMALL_STATE(173)] = 4041,
  [SMALL_STATE(174)] = 4052,
  [SMALL_STATE(175)] = 4063,
  [SMALL_STATE(176)] = 4074,
  [SMALL_STATE(177)] = 4083,
  [SMALL_STATE(178)] = 4094,
  [SMALL_STATE(179)] = 4103,
  [SMALL_STATE(180)] = 4112,
  [SMALL_STATE(181)] = 4123,
  [SMALL_STATE(182)] = 4134,
  [SMALL_STATE(183)] = 4145,
  [SMALL_STATE(184)] = 4156,
  [SMALL_STATE(185)] = 4167,
  [SMALL_STATE(186)] = 4178,
  [SMALL_STATE(187)] = 4189,
  [SMALL_STATE(188)] = 4198,
  [SMALL_STATE(189)] = 4209,
  [SMALL_STATE(190)] = 4218,
  [SMALL_STATE(191)] = 4229,
  [SMALL_STATE(192)] = 4240,
  [SMALL_STATE(193)] = 4251,
  [SMALL_STATE(194)] = 4262,
  [SMALL_STATE(195)] = 4273,
  [SMALL_STATE(196)] = 4282,
  [SMALL_STATE(197)] = 4290,
  [SMALL_STATE(198)] = 4298,
  [SMALL_STATE(199)] = 4306,
  [SMALL_STATE(200)] = 4314,
  [SMALL_STATE(201)] = 4322,
  [SMALL_STATE(202)] = 4330,
  [SMALL_STATE(203)] = 4338,
  [SMALL_STATE(204)] = 4346,
  [SMALL_STATE(205)] = 4354,
  [SMALL_STATE(206)] = 4362,
  [SMALL_STATE(207)] = 4370,
  [SMALL_STATE(208)] = 4378,
  [SMALL_STATE(209)] = 4386,
  [SMALL_STATE(210)] = 4394,
  [SMALL_STATE(211)] = 4402,
  [SMALL_STATE(212)] = 4410,
  [SMALL_STATE(213)] = 4418,
  [SMALL_STATE(214)] = 4426,
  [SMALL_STATE(215)] = 4434,
  [SMALL_STATE(216)] = 4442,
  [SMALL_STATE(217)] = 4450,
  [SMALL_STATE(218)] = 4458,
  [SMALL_STATE(219)] = 4466,
  [SMALL_STATE(220)] = 4474,
  [SMALL_STATE(221)] = 4482,
  [SMALL_STATE(222)] = 4490,
  [SMALL_STATE(223)] = 4498,
  [SMALL_STATE(224)] = 4506,
  [SMALL_STATE(225)] = 4514,
  [SMALL_STATE(226)] = 4522,
  [SMALL_STATE(227)] = 4530,
  [SMALL_STATE(228)] = 4538,
  [SMALL_STATE(229)] = 4546,
  [SMALL_STATE(230)] = 4554,
  [SMALL_STATE(231)] = 4562,
  [SMALL_STATE(232)] = 4570,
  [SMALL_STATE(233)] = 4578,
  [SMALL_STATE(234)] = 4586,
  [SMALL_STATE(235)] = 4594,
  [SMALL_STATE(236)] = 4602,
  [SMALL_STATE(237)] = 4610,
  [SMALL_STATE(238)] = 4618,
  [SMALL_STATE(239)] = 4626,
  [SMALL_STATE(240)] = 4634,
  [SMALL_STATE(241)] = 4642,
  [SMALL_STATE(242)] = 4650,
  [SMALL_STATE(243)] = 4658,
  [SMALL_STATE(244)] = 4666,
  [SMALL_STATE(245)] = 4674,
  [SMALL_STATE(246)] = 4682,
  [SMALL_STATE(247)] = 4690,
  [SMALL_STATE(248)] = 4698,
  [SMALL_STATE(249)] = 4706,
  [SMALL_STATE(250)] = 4714,
  [SMALL_STATE(251)] = 4722,
  [SMALL_STATE(252)] = 4730,
  [SMALL_STATE(253)] = 4738,
  [SMALL_STATE(254)] = 4746,
  [SMALL_STATE(255)] = 4754,
  [SMALL_STATE(256)] = 4762,
  [SMALL_STATE(257)] = 4770,
  [SMALL_STATE(258)] = 4778,
  [SMALL_STATE(259)] = 4786,
  [SMALL_STATE(260)] = 4794,
  [SMALL_STATE(261)] = 4802,
  [SMALL_STATE(262)] = 4810,
  [SMALL_STATE(263)] = 4818,
  [SMALL_STATE(264)] = 4826,
  [SMALL_STATE(265)] = 4834,
  [SMALL_STATE(266)] = 4842,
  [SMALL_STATE(267)] = 4850,
  [SMALL_STATE(268)] = 4858,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(182),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(53),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(54),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(55),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(55),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(52),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(51),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symstring, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symstring, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f64, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f64, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 5),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 6),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 6),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2), SHIFT_REPEAT(62),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(115),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(129),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(172),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2), SHIFT_REPEAT(251),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(202),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2), SHIFT_REPEAT(124),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 15),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 14),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 13),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 12),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 11),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 5),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 7),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 10),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 9),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 4),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 8),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 8),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 6),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 7),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 4),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 5),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identsort, 4),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [542] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
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
