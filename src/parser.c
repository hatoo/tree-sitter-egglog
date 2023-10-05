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
#define STATE_COUNT 268
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
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
  sym_unit = 77,
  sym_f64 = 78,
  sym_symstring = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_command_repeat1 = 81,
  aux_sym_command_repeat2 = 82,
  aux_sym_command_repeat3 = 83,
  aux_sym_command_repeat4 = 84,
  aux_sym_command_repeat5 = 85,
  aux_sym_command_repeat6 = 86,
  aux_sym_command_repeat7 = 87,
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
  [sym_unit] = "unit",
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
  [sym_unit] = sym_unit,
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
  [sym_unit] = {
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
  [79] = 78,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 80,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 81,
  [94] = 94,
  [95] = 95,
  [96] = 82,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 90,
  [103] = 97,
  [104] = 101,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 83,
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
  [121] = 121,
  [122] = 117,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 58,
  [128] = 128,
  [129] = 59,
  [130] = 130,
  [131] = 57,
  [132] = 132,
  [133] = 56,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 60,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 134,
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
  [191] = 170,
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
  [267] = 216,
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
  [61] = {.lex_state = 236},
  [62] = {.lex_state = 230},
  [63] = {.lex_state = 236},
  [64] = {.lex_state = 236},
  [65] = {.lex_state = 236},
  [66] = {.lex_state = 236},
  [67] = {.lex_state = 236},
  [68] = {.lex_state = 236},
  [69] = {.lex_state = 236},
  [70] = {.lex_state = 236},
  [71] = {.lex_state = 236},
  [72] = {.lex_state = 236},
  [73] = {.lex_state = 236},
  [74] = {.lex_state = 236},
  [75] = {.lex_state = 236},
  [76] = {.lex_state = 236},
  [77] = {.lex_state = 236},
  [78] = {.lex_state = 231},
  [79] = {.lex_state = 231},
  [80] = {.lex_state = 231},
  [81] = {.lex_state = 236},
  [82] = {.lex_state = 236},
  [83] = {.lex_state = 236},
  [84] = {.lex_state = 236},
  [85] = {.lex_state = 236},
  [86] = {.lex_state = 236},
  [87] = {.lex_state = 236},
  [88] = {.lex_state = 236},
  [89] = {.lex_state = 231},
  [90] = {.lex_state = 231},
  [91] = {.lex_state = 231},
  [92] = {.lex_state = 236},
  [93] = {.lex_state = 236},
  [94] = {.lex_state = 236},
  [95] = {.lex_state = 231},
  [96] = {.lex_state = 236},
  [97] = {.lex_state = 231},
  [98] = {.lex_state = 231},
  [99] = {.lex_state = 232},
  [100] = {.lex_state = 236},
  [101] = {.lex_state = 236},
  [102] = {.lex_state = 231},
  [103] = {.lex_state = 231},
  [104] = {.lex_state = 236},
  [105] = {.lex_state = 232},
  [106] = {.lex_state = 236},
  [107] = {.lex_state = 236},
  [108] = {.lex_state = 236},
  [109] = {.lex_state = 236},
  [110] = {.lex_state = 236},
  [111] = {.lex_state = 236},
  [112] = {.lex_state = 236},
  [113] = {.lex_state = 236},
  [114] = {.lex_state = 236},
  [115] = {.lex_state = 236},
  [116] = {.lex_state = 236},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 236},
  [119] = {.lex_state = 232},
  [120] = {.lex_state = 236},
  [121] = {.lex_state = 236},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 236},
  [124] = {.lex_state = 236},
  [125] = {.lex_state = 236},
  [126] = {.lex_state = 236},
  [127] = {.lex_state = 231},
  [128] = {.lex_state = 236},
  [129] = {.lex_state = 231},
  [130] = {.lex_state = 236},
  [131] = {.lex_state = 231},
  [132] = {.lex_state = 236},
  [133] = {.lex_state = 231},
  [134] = {.lex_state = 231},
  [135] = {.lex_state = 236},
  [136] = {.lex_state = 236},
  [137] = {.lex_state = 236},
  [138] = {.lex_state = 236},
  [139] = {.lex_state = 236},
  [140] = {.lex_state = 232},
  [141] = {.lex_state = 236},
  [142] = {.lex_state = 236},
  [143] = {.lex_state = 231},
  [144] = {.lex_state = 236},
  [145] = {.lex_state = 236},
  [146] = {.lex_state = 236},
  [147] = {.lex_state = 236},
  [148] = {.lex_state = 236},
  [149] = {.lex_state = 232},
  [150] = {.lex_state = 236},
  [151] = {.lex_state = 236},
  [152] = {.lex_state = 236},
  [153] = {.lex_state = 231},
  [154] = {.lex_state = 236},
  [155] = {.lex_state = 236},
  [156] = {.lex_state = 232},
  [157] = {.lex_state = 232},
  [158] = {.lex_state = 236},
  [159] = {.lex_state = 236},
  [160] = {.lex_state = 236},
  [161] = {.lex_state = 236},
  [162] = {.lex_state = 231},
  [163] = {.lex_state = 236},
  [164] = {.lex_state = 236},
  [165] = {.lex_state = 236},
  [166] = {.lex_state = 236},
  [167] = {.lex_state = 236},
  [168] = {.lex_state = 236},
  [169] = {.lex_state = 236},
  [170] = {.lex_state = 236},
  [171] = {.lex_state = 236},
  [172] = {.lex_state = 236},
  [173] = {.lex_state = 236},
  [174] = {.lex_state = 231},
  [175] = {.lex_state = 231},
  [176] = {.lex_state = 236},
  [177] = {.lex_state = 236},
  [178] = {.lex_state = 236},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 236},
  [181] = {.lex_state = 236},
  [182] = {.lex_state = 236},
  [183] = {.lex_state = 236},
  [184] = {.lex_state = 236},
  [185] = {.lex_state = 236},
  [186] = {.lex_state = 236},
  [187] = {.lex_state = 236},
  [188] = {.lex_state = 236},
  [189] = {.lex_state = 236},
  [190] = {.lex_state = 236},
  [191] = {.lex_state = 236},
  [192] = {.lex_state = 236},
  [193] = {.lex_state = 236},
  [194] = {.lex_state = 236},
  [195] = {.lex_state = 231},
  [196] = {.lex_state = 231},
  [197] = {.lex_state = 236},
  [198] = {.lex_state = 231},
  [199] = {.lex_state = 236},
  [200] = {.lex_state = 236},
  [201] = {.lex_state = 236},
  [202] = {.lex_state = 236},
  [203] = {.lex_state = 232},
  [204] = {.lex_state = 231},
  [205] = {.lex_state = 231},
  [206] = {.lex_state = 231},
  [207] = {.lex_state = 236},
  [208] = {.lex_state = 231},
  [209] = {.lex_state = 231},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 231},
  [212] = {.lex_state = 231},
  [213] = {.lex_state = 236},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 236},
  [216] = {.lex_state = 236},
  [217] = {.lex_state = 232},
  [218] = {.lex_state = 236},
  [219] = {.lex_state = 231},
  [220] = {.lex_state = 236},
  [221] = {.lex_state = 236},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 231},
  [224] = {.lex_state = 231},
  [225] = {.lex_state = 231},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 236},
  [228] = {.lex_state = 231},
  [229] = {.lex_state = 231},
  [230] = {.lex_state = 236},
  [231] = {.lex_state = 236},
  [232] = {.lex_state = 232},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 231},
  [235] = {.lex_state = 231},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 236},
  [239] = {.lex_state = 236},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 236},
  [242] = {.lex_state = 236},
  [243] = {.lex_state = 236},
  [244] = {.lex_state = 236},
  [245] = {.lex_state = 236},
  [246] = {.lex_state = 236},
  [247] = {.lex_state = 236},
  [248] = {.lex_state = 236},
  [249] = {.lex_state = 236},
  [250] = {.lex_state = 236},
  [251] = {.lex_state = 236},
  [252] = {.lex_state = 236},
  [253] = {.lex_state = 232},
  [254] = {.lex_state = 236},
  [255] = {.lex_state = 236},
  [256] = {.lex_state = 231},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 236},
  [259] = {.lex_state = 236},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 231},
  [263] = {.lex_state = 231},
  [264] = {.lex_state = 236},
  [265] = {.lex_state = 236},
  [266] = {.lex_state = 236},
  [267] = {.lex_state = 236},
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
    [sym_source_file] = STATE(214),
    [sym_command] = STATE(67),
    [sym_nonletaction] = STATE(161),
    [sym_callexpr] = STATE(125),
    [aux_sym_source_file_repeat1] = STATE(67),
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
  [95] = 11,
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
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [136] = 11,
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
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [177] = 11,
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
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [218] = 11,
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
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [259] = 11,
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
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(4), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [300] = 11,
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
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(14), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [341] = 11,
    ACTIONS(89), 1,
      sym_lparen,
    ACTIONS(92), 1,
      sym_rparen,
    ACTIONS(94), 1,
      sym_num,
    ACTIONS(100), 1,
      aux_sym_f64_token1,
    ACTIONS(103), 1,
      sym_ident,
    ACTIONS(106), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(97), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [382] = 11,
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
    ACTIONS(109), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(5), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [423] = 11,
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
    ACTIONS(111), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [464] = 11,
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
    ACTIONS(113), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(3), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [505] = 11,
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
    ACTIONS(115), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [546] = 11,
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
    ACTIONS(117), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [587] = 11,
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
    STATE(9), 1,
      aux_sym_command_repeat2,
    STATE(55), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [627] = 10,
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
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(13), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [665] = 10,
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
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(15), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [703] = 10,
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
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(6), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [741] = 11,
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
    ACTIONS(119), 1,
      sym_rparen,
    STATE(207), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [781] = 11,
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
    ACTIONS(121), 1,
      anon_sym_COLONvariants,
    STATE(251), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [821] = 10,
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
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(11), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [859] = 10,
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
    STATE(207), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [896] = 10,
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
    STATE(248), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [933] = 10,
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
    STATE(200), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [970] = 10,
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
    STATE(227), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1007] = 10,
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
    STATE(182), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1044] = 10,
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
    STATE(238), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1081] = 10,
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
    STATE(185), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1118] = 10,
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
    STATE(221), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1155] = 10,
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
    STATE(254), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1192] = 10,
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
    STATE(178), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1229] = 10,
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
    STATE(241), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1266] = 10,
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
    STATE(46), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1303] = 10,
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
    STATE(259), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1340] = 10,
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
    STATE(177), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1377] = 10,
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
    STATE(246), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1414] = 10,
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
    STATE(22), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1451] = 10,
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
    STATE(250), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1488] = 10,
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
    STATE(19), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1525] = 10,
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
    STATE(243), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1562] = 10,
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
    STATE(164), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1599] = 10,
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
    STATE(230), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1636] = 10,
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
    STATE(187), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1673] = 10,
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
    STATE(218), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1710] = 10,
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
    STATE(249), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1747] = 10,
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
    STATE(154), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1784] = 10,
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
    STATE(167), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(50), 3,
      sym_unit,
      sym_f64,
      sym_symstring,
  [1821] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(125), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(123), 8,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [1843] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(129), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(127), 8,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [1865] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(133), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(131), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [1886] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(137), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(135), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [1907] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(141), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(139), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [1928] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(145), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(143), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [1949] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(149), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(147), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [1970] = 4,
    ACTIONS(153), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(151), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(155), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [1990] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(157), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(159), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2007] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(161), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(163), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2024] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(165), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(167), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2041] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(169), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(171), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2058] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(173), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(175), 5,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2075] = 8,
    ACTIONS(111), 1,
      sym_rparen,
    ACTIONS(177), 1,
      anon_sym_COLONunextractable,
    ACTIONS(179), 1,
      anon_sym_COLONon_merge,
    ACTIONS(181), 1,
      anon_sym_COLONmerge,
    ACTIONS(183), 1,
      anon_sym_COLONdefault,
    ACTIONS(185), 1,
      anon_sym_COLONcost,
    STATE(110), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2101] = 8,
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
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2127] = 6,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      sym_lparen,
    STATE(125), 1,
      sym_callexpr,
    STATE(161), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(63), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [2148] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(194), 6,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [2161] = 6,
    ACTIONS(196), 1,
      sym_lparen,
    ACTIONS(198), 1,
      sym_rparen,
    STATE(125), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(74), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2182] = 6,
    ACTIONS(196), 1,
      sym_lparen,
    ACTIONS(200), 1,
      sym_rparen,
    STATE(125), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(76), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2203] = 6,
    ACTIONS(7), 1,
      sym_lparen,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(125), 1,
      sym_callexpr,
    STATE(161), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(63), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [2224] = 6,
    ACTIONS(196), 1,
      sym_lparen,
    ACTIONS(198), 1,
      sym_rparen,
    STATE(125), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(71), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2245] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(204), 6,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [2258] = 6,
    ACTIONS(196), 1,
      sym_lparen,
    ACTIONS(206), 1,
      sym_rparen,
    STATE(125), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(65), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2279] = 6,
    ACTIONS(196), 1,
      sym_lparen,
    ACTIONS(200), 1,
      sym_rparen,
    STATE(125), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(74), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2300] = 6,
    ACTIONS(196), 1,
      sym_lparen,
    ACTIONS(208), 1,
      sym_rparen,
    STATE(125), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(74), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2321] = 6,
    ACTIONS(196), 1,
      sym_lparen,
    ACTIONS(208), 1,
      sym_rparen,
    STATE(125), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(75), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2342] = 6,
    ACTIONS(210), 1,
      sym_lparen,
    ACTIONS(213), 1,
      sym_rparen,
    STATE(125), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(74), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2363] = 6,
    ACTIONS(196), 1,
      sym_lparen,
    ACTIONS(215), 1,
      sym_rparen,
    STATE(125), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(74), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2384] = 6,
    ACTIONS(196), 1,
      sym_lparen,
    ACTIONS(217), 1,
      sym_rparen,
    STATE(125), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(74), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2405] = 6,
    ACTIONS(196), 1,
      sym_lparen,
    ACTIONS(219), 1,
      sym_rparen,
    STATE(125), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(72), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2426] = 5,
    ACTIONS(221), 1,
      sym_lparen,
    ACTIONS(223), 1,
      sym_rparen,
    ACTIONS(225), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2444] = 5,
    ACTIONS(221), 1,
      sym_lparen,
    ACTIONS(225), 1,
      sym_ident,
    ACTIONS(227), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2462] = 5,
    ACTIONS(221), 1,
      sym_lparen,
    ACTIONS(225), 1,
      sym_ident,
    ACTIONS(229), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2480] = 5,
    ACTIONS(229), 1,
      sym_rparen,
    ACTIONS(231), 1,
      sym_lparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(109), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2498] = 5,
    ACTIONS(229), 1,
      sym_rparen,
    ACTIONS(231), 1,
      sym_lparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(94), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2516] = 5,
    ACTIONS(231), 1,
      sym_lparen,
    ACTIONS(233), 1,
      sym_rparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(94), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2534] = 5,
    ACTIONS(115), 1,
      sym_rparen,
    ACTIONS(231), 1,
      sym_lparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(94), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2552] = 5,
    ACTIONS(231), 1,
      sym_lparen,
    ACTIONS(235), 1,
      sym_rparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(108), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2570] = 5,
    ACTIONS(231), 1,
      sym_lparen,
    ACTIONS(237), 1,
      sym_rparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(94), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2588] = 5,
    ACTIONS(231), 1,
      sym_lparen,
    ACTIONS(239), 1,
      sym_rparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(100), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2606] = 5,
    ACTIONS(111), 1,
      sym_rparen,
    ACTIONS(231), 1,
      sym_lparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2624] = 5,
    ACTIONS(221), 1,
      sym_lparen,
    ACTIONS(225), 1,
      sym_ident,
    ACTIONS(241), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2642] = 5,
    ACTIONS(221), 1,
      sym_lparen,
    ACTIONS(225), 1,
      sym_ident,
    ACTIONS(243), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(78), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2660] = 5,
    ACTIONS(221), 1,
      sym_lparen,
    ACTIONS(225), 1,
      sym_ident,
    ACTIONS(239), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(98), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2678] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(245), 5,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
  [2690] = 5,
    ACTIONS(231), 1,
      sym_lparen,
    ACTIONS(241), 1,
      sym_rparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(83), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2708] = 5,
    ACTIONS(247), 1,
      sym_lparen,
    ACTIONS(250), 1,
      sym_rparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(94), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2726] = 5,
    ACTIONS(252), 1,
      sym_lparen,
    ACTIONS(255), 1,
      sym_rparen,
    ACTIONS(257), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2744] = 5,
    ACTIONS(231), 1,
      sym_lparen,
    ACTIONS(241), 1,
      sym_rparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(94), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2762] = 5,
    ACTIONS(221), 1,
      sym_lparen,
    ACTIONS(225), 1,
      sym_ident,
    ACTIONS(227), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(89), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2780] = 5,
    ACTIONS(221), 1,
      sym_lparen,
    ACTIONS(225), 1,
      sym_ident,
    ACTIONS(260), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2798] = 6,
    ACTIONS(185), 1,
      anon_sym_COLONcost,
    ACTIONS(262), 1,
      sym_rparen,
    ACTIONS(264), 1,
      sym_type,
    STATE(119), 1,
      aux_sym_command_repeat4,
    STATE(255), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2818] = 5,
    ACTIONS(231), 1,
      sym_lparen,
    ACTIONS(260), 1,
      sym_rparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(94), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2836] = 5,
    ACTIONS(227), 1,
      sym_rparen,
    ACTIONS(231), 1,
      sym_lparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(96), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2854] = 5,
    ACTIONS(221), 1,
      sym_lparen,
    ACTIONS(225), 1,
      sym_ident,
    ACTIONS(266), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(79), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2872] = 5,
    ACTIONS(221), 1,
      sym_lparen,
    ACTIONS(223), 1,
      sym_rparen,
    ACTIONS(225), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(80), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2890] = 5,
    ACTIONS(223), 1,
      sym_rparen,
    ACTIONS(231), 1,
      sym_lparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(82), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2908] = 6,
    ACTIONS(185), 1,
      anon_sym_COLONcost,
    ACTIONS(268), 1,
      sym_rparen,
    ACTIONS(270), 1,
      sym_type,
    STATE(99), 1,
      aux_sym_command_repeat4,
    STATE(244), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2928] = 5,
    ACTIONS(83), 1,
      sym_rparen,
    ACTIONS(231), 1,
      sym_lparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(84), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2946] = 5,
    ACTIONS(83), 1,
      sym_rparen,
    ACTIONS(231), 1,
      sym_lparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(94), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2964] = 5,
    ACTIONS(231), 1,
      sym_lparen,
    ACTIONS(272), 1,
      sym_rparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(94), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2982] = 5,
    ACTIONS(231), 1,
      sym_lparen,
    ACTIONS(274), 1,
      sym_rparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(94), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3000] = 6,
    ACTIONS(83), 1,
      sym_rparen,
    ACTIONS(276), 1,
      anon_sym_COLONunextractable,
    ACTIONS(278), 1,
      anon_sym_COLONon_merge,
    ACTIONS(280), 1,
      anon_sym_COLONmerge,
    ACTIONS(282), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3020] = 5,
    ACTIONS(231), 1,
      sym_lparen,
    ACTIONS(284), 1,
      sym_rparen,
    STATE(180), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(86), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3038] = 4,
    ACTIONS(286), 1,
      sym_lparen,
    ACTIONS(289), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(112), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3053] = 4,
    ACTIONS(111), 1,
      sym_rparen,
    ACTIONS(291), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(123), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [3068] = 5,
    ACTIONS(115), 1,
      sym_rparen,
    ACTIONS(293), 1,
      anon_sym_COLONon_merge,
    ACTIONS(295), 1,
      anon_sym_COLONmerge,
    ACTIONS(297), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3085] = 5,
    ACTIONS(83), 1,
      sym_rparen,
    ACTIONS(278), 1,
      anon_sym_COLONon_merge,
    ACTIONS(280), 1,
      anon_sym_COLONmerge,
    ACTIONS(282), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3102] = 4,
    ACTIONS(299), 1,
      sym_lparen,
    ACTIONS(301), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(112), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3117] = 4,
    ACTIONS(303), 1,
      anon_sym_run,
    ACTIONS(307), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(305), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [3132] = 5,
    ACTIONS(7), 1,
      sym_lparen,
    STATE(125), 1,
      sym_callexpr,
    STATE(161), 1,
      sym_nonletaction,
    STATE(251), 1,
      sym_command,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3149] = 4,
    ACTIONS(311), 1,
      sym_type,
    STATE(119), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(309), 2,
      sym_rparen,
      anon_sym_COLONcost,
  [3164] = 4,
    ACTIONS(299), 1,
      sym_lparen,
    ACTIONS(314), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(116), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3179] = 4,
    ACTIONS(260), 1,
      sym_rparen,
    ACTIONS(291), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(113), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [3194] = 4,
    ACTIONS(316), 1,
      anon_sym_run,
    ACTIONS(320), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(318), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [3209] = 4,
    ACTIONS(322), 1,
      sym_lparen,
    ACTIONS(325), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(123), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [3224] = 4,
    ACTIONS(327), 1,
      sym_rparen,
    ACTIONS(329), 1,
      anon_sym_COLONmerge,
    ACTIONS(331), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3238] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(333), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3248] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(335), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3258] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(165), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3268] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(337), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3278] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(169), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3288] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(339), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3298] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(161), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3308] = 4,
    ACTIONS(327), 1,
      sym_rparen,
    ACTIONS(341), 1,
      anon_sym_COLONruleset,
    ACTIONS(343), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3322] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(157), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3332] = 4,
    ACTIONS(266), 1,
      sym_rparen,
    ACTIONS(345), 1,
      anon_sym_COLONuntil,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3346] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(349), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3356] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(351), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3366] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(353), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3376] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(355), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3386] = 4,
    ACTIONS(357), 1,
      sym_rparen,
    ACTIONS(359), 1,
      anon_sym_COLONmerge,
    ACTIONS(361), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3400] = 4,
    ACTIONS(264), 1,
      sym_type,
    ACTIONS(363), 1,
      sym_rparen,
    STATE(119), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3414] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(365), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3424] = 4,
    ACTIONS(367), 1,
      sym_rparen,
    ACTIONS(369), 1,
      anon_sym_COLONmerge,
    ACTIONS(371), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3438] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(173), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3448] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(373), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3458] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(375), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3468] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(377), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3478] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(379), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3488] = 4,
    ACTIONS(357), 1,
      sym_rparen,
    ACTIONS(381), 1,
      anon_sym_COLONruleset,
    ACTIONS(383), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3502] = 4,
    ACTIONS(85), 1,
      sym_rparen,
    ACTIONS(264), 1,
      sym_type,
    STATE(119), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3516] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(385), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3526] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(387), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3536] = 4,
    ACTIONS(115), 1,
      sym_rparen,
    ACTIONS(389), 1,
      anon_sym_COLONruleset,
    ACTIONS(391), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3550] = 4,
    ACTIONS(243), 1,
      sym_rparen,
    ACTIONS(393), 1,
      anon_sym_COLONuntil,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3564] = 4,
    ACTIONS(111), 1,
      sym_rparen,
    ACTIONS(397), 1,
      anon_sym_COLONruleset,
    ACTIONS(399), 1,
      anon_sym_COLONwhen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3578] = 4,
    ACTIONS(401), 1,
      sym_rparen,
    ACTIONS(403), 1,
      anon_sym_COLONmerge,
    ACTIONS(405), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3592] = 4,
    ACTIONS(407), 1,
      sym_rparen,
    ACTIONS(409), 1,
      sym_type,
    STATE(149), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3606] = 4,
    ACTIONS(411), 1,
      sym_rparen,
    ACTIONS(413), 1,
      sym_type,
    STATE(140), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3620] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(415), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3630] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(417), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3640] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(419), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3650] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(421), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3660] = 4,
    ACTIONS(423), 1,
      sym_lparen,
    ACTIONS(425), 1,
      sym_ident,
    STATE(42), 1,
      sym_schedule,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3674] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(427), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3684] = 3,
    ACTIONS(357), 1,
      sym_rparen,
    ACTIONS(361), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3695] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(429), 2,
      sym_lparen,
      sym_rparen,
  [3704] = 3,
    ACTIONS(239), 1,
      sym_rparen,
    ACTIONS(431), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3715] = 3,
    ACTIONS(115), 1,
      sym_rparen,
    ACTIONS(297), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3726] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(433), 2,
      sym_lparen,
      sym_rparen,
  [3735] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(435), 2,
      sym_lparen,
      sym_rparen,
  [3744] = 3,
    ACTIONS(227), 1,
      sym_rparen,
    ACTIONS(437), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3755] = 3,
    ACTIONS(260), 1,
      sym_rparen,
    ACTIONS(439), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3766] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(441), 2,
      sym_lparen,
      sym_rparen,
  [3775] = 3,
    ACTIONS(443), 1,
      sym_lparen,
    STATE(61), 1,
      sym_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3786] = 3,
    ACTIONS(445), 1,
      sym_unum,
    ACTIONS(447), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3797] = 3,
    ACTIONS(449), 1,
      sym_rparen,
    ACTIONS(451), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3808] = 3,
    ACTIONS(260), 1,
      sym_rparen,
    ACTIONS(453), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3819] = 3,
    ACTIONS(455), 1,
      sym_rparen,
    ACTIONS(457), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3830] = 3,
    ACTIONS(327), 1,
      sym_rparen,
    ACTIONS(331), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3841] = 3,
    ACTIONS(63), 1,
      sym_ident,
    ACTIONS(459), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3852] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(461), 2,
      sym_lparen,
      sym_rparen,
  [3861] = 3,
    ACTIONS(260), 1,
      sym_rparen,
    ACTIONS(463), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3872] = 3,
    ACTIONS(465), 1,
      sym_rparen,
    ACTIONS(467), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3883] = 3,
    ACTIONS(367), 1,
      sym_rparen,
    ACTIONS(469), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3894] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(471), 2,
      sym_lparen,
      sym_rparen,
  [3903] = 3,
    ACTIONS(367), 1,
      sym_rparen,
    ACTIONS(371), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3914] = 3,
    ACTIONS(401), 1,
      sym_rparen,
    ACTIONS(473), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3925] = 3,
    ACTIONS(401), 1,
      sym_rparen,
    ACTIONS(405), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3936] = 3,
    ACTIONS(111), 1,
      sym_rparen,
    ACTIONS(475), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3947] = 3,
    ACTIONS(357), 1,
      sym_rparen,
    ACTIONS(383), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3958] = 3,
    ACTIONS(327), 1,
      sym_rparen,
    ACTIONS(477), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3969] = 3,
    ACTIONS(223), 1,
      sym_rparen,
    ACTIONS(479), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3980] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(481), 2,
      sym_lparen,
      sym_rparen,
  [3989] = 3,
    ACTIONS(357), 1,
      sym_rparen,
    ACTIONS(483), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4000] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(485), 2,
      sym_lparen,
      sym_rparen,
  [4009] = 2,
    ACTIONS(487), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4017] = 2,
    ACTIONS(489), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4025] = 2,
    ACTIONS(491), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4033] = 2,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4041] = 2,
    ACTIONS(493), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4049] = 2,
    ACTIONS(83), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4057] = 2,
    ACTIONS(495), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4065] = 2,
    ACTIONS(497), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4073] = 2,
    ACTIONS(499), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4081] = 2,
    ACTIONS(501), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4089] = 2,
    ACTIONS(503), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4097] = 2,
    ACTIONS(505), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4105] = 2,
    ACTIONS(507), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4113] = 2,
    ACTIONS(509), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4121] = 2,
    ACTIONS(511), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4129] = 2,
    ACTIONS(513), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4137] = 2,
    ACTIONS(431), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4145] = 2,
    ACTIONS(513), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4153] = 2,
    ACTIONS(515), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4161] = 2,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4169] = 2,
    ACTIONS(519), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4177] = 2,
    ACTIONS(521), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4185] = 2,
    ACTIONS(523), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4193] = 2,
    ACTIONS(401), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4201] = 2,
    ACTIONS(525), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4209] = 2,
    ACTIONS(527), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4217] = 2,
    ACTIONS(529), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4225] = 2,
    ACTIONS(531), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4233] = 2,
    ACTIONS(533), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4241] = 2,
    ACTIONS(535), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4249] = 2,
    ACTIONS(531), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4257] = 2,
    ACTIONS(537), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4265] = 2,
    ACTIONS(367), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4273] = 2,
    ACTIONS(539), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4281] = 2,
    ACTIONS(541), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4289] = 2,
    ACTIONS(111), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4297] = 2,
    ACTIONS(119), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4305] = 2,
    ACTIONS(543), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4313] = 2,
    ACTIONS(545), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4321] = 2,
    ACTIONS(547), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4329] = 2,
    ACTIONS(549), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4337] = 2,
    ACTIONS(463), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4345] = 2,
    ACTIONS(551), 1,
      anon_sym_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4353] = 2,
    ACTIONS(465), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4361] = 2,
    ACTIONS(553), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4369] = 2,
    ACTIONS(555), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4377] = 2,
    ACTIONS(455), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4385] = 2,
    ACTIONS(557), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4393] = 2,
    ACTIONS(559), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4401] = 2,
    ACTIONS(262), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4409] = 2,
    ACTIONS(561), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4417] = 2,
    ACTIONS(563), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4425] = 2,
    ACTIONS(565), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4433] = 2,
    ACTIONS(115), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4441] = 2,
    ACTIONS(567), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4449] = 2,
    ACTIONS(357), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4457] = 2,
    ACTIONS(260), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4465] = 2,
    ACTIONS(569), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4473] = 2,
    ACTIONS(463), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4481] = 2,
    ACTIONS(327), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4489] = 2,
    ACTIONS(571), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4497] = 2,
    ACTIONS(573), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4505] = 2,
    ACTIONS(575), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4513] = 2,
    ACTIONS(577), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4521] = 2,
    ACTIONS(579), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4529] = 2,
    ACTIONS(431), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4537] = 2,
    ACTIONS(581), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4545] = 2,
    ACTIONS(583), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4553] = 2,
    ACTIONS(585), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4561] = 2,
    ACTIONS(587), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4569] = 2,
    ACTIONS(239), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4577] = 2,
    ACTIONS(589), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4585] = 2,
    ACTIONS(591), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 136,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 218,
  [SMALL_STATE(7)] = 259,
  [SMALL_STATE(8)] = 300,
  [SMALL_STATE(9)] = 341,
  [SMALL_STATE(10)] = 382,
  [SMALL_STATE(11)] = 423,
  [SMALL_STATE(12)] = 464,
  [SMALL_STATE(13)] = 505,
  [SMALL_STATE(14)] = 546,
  [SMALL_STATE(15)] = 587,
  [SMALL_STATE(16)] = 627,
  [SMALL_STATE(17)] = 665,
  [SMALL_STATE(18)] = 703,
  [SMALL_STATE(19)] = 741,
  [SMALL_STATE(20)] = 781,
  [SMALL_STATE(21)] = 821,
  [SMALL_STATE(22)] = 859,
  [SMALL_STATE(23)] = 896,
  [SMALL_STATE(24)] = 933,
  [SMALL_STATE(25)] = 970,
  [SMALL_STATE(26)] = 1007,
  [SMALL_STATE(27)] = 1044,
  [SMALL_STATE(28)] = 1081,
  [SMALL_STATE(29)] = 1118,
  [SMALL_STATE(30)] = 1155,
  [SMALL_STATE(31)] = 1192,
  [SMALL_STATE(32)] = 1229,
  [SMALL_STATE(33)] = 1266,
  [SMALL_STATE(34)] = 1303,
  [SMALL_STATE(35)] = 1340,
  [SMALL_STATE(36)] = 1377,
  [SMALL_STATE(37)] = 1414,
  [SMALL_STATE(38)] = 1451,
  [SMALL_STATE(39)] = 1488,
  [SMALL_STATE(40)] = 1525,
  [SMALL_STATE(41)] = 1562,
  [SMALL_STATE(42)] = 1599,
  [SMALL_STATE(43)] = 1636,
  [SMALL_STATE(44)] = 1673,
  [SMALL_STATE(45)] = 1710,
  [SMALL_STATE(46)] = 1747,
  [SMALL_STATE(47)] = 1784,
  [SMALL_STATE(48)] = 1821,
  [SMALL_STATE(49)] = 1843,
  [SMALL_STATE(50)] = 1865,
  [SMALL_STATE(51)] = 1886,
  [SMALL_STATE(52)] = 1907,
  [SMALL_STATE(53)] = 1928,
  [SMALL_STATE(54)] = 1949,
  [SMALL_STATE(55)] = 1970,
  [SMALL_STATE(56)] = 1990,
  [SMALL_STATE(57)] = 2007,
  [SMALL_STATE(58)] = 2024,
  [SMALL_STATE(59)] = 2041,
  [SMALL_STATE(60)] = 2058,
  [SMALL_STATE(61)] = 2075,
  [SMALL_STATE(62)] = 2101,
  [SMALL_STATE(63)] = 2127,
  [SMALL_STATE(64)] = 2148,
  [SMALL_STATE(65)] = 2161,
  [SMALL_STATE(66)] = 2182,
  [SMALL_STATE(67)] = 2203,
  [SMALL_STATE(68)] = 2224,
  [SMALL_STATE(69)] = 2245,
  [SMALL_STATE(70)] = 2258,
  [SMALL_STATE(71)] = 2279,
  [SMALL_STATE(72)] = 2300,
  [SMALL_STATE(73)] = 2321,
  [SMALL_STATE(74)] = 2342,
  [SMALL_STATE(75)] = 2363,
  [SMALL_STATE(76)] = 2384,
  [SMALL_STATE(77)] = 2405,
  [SMALL_STATE(78)] = 2426,
  [SMALL_STATE(79)] = 2444,
  [SMALL_STATE(80)] = 2462,
  [SMALL_STATE(81)] = 2480,
  [SMALL_STATE(82)] = 2498,
  [SMALL_STATE(83)] = 2516,
  [SMALL_STATE(84)] = 2534,
  [SMALL_STATE(85)] = 2552,
  [SMALL_STATE(86)] = 2570,
  [SMALL_STATE(87)] = 2588,
  [SMALL_STATE(88)] = 2606,
  [SMALL_STATE(89)] = 2624,
  [SMALL_STATE(90)] = 2642,
  [SMALL_STATE(91)] = 2660,
  [SMALL_STATE(92)] = 2678,
  [SMALL_STATE(93)] = 2690,
  [SMALL_STATE(94)] = 2708,
  [SMALL_STATE(95)] = 2726,
  [SMALL_STATE(96)] = 2744,
  [SMALL_STATE(97)] = 2762,
  [SMALL_STATE(98)] = 2780,
  [SMALL_STATE(99)] = 2798,
  [SMALL_STATE(100)] = 2818,
  [SMALL_STATE(101)] = 2836,
  [SMALL_STATE(102)] = 2854,
  [SMALL_STATE(103)] = 2872,
  [SMALL_STATE(104)] = 2890,
  [SMALL_STATE(105)] = 2908,
  [SMALL_STATE(106)] = 2928,
  [SMALL_STATE(107)] = 2946,
  [SMALL_STATE(108)] = 2964,
  [SMALL_STATE(109)] = 2982,
  [SMALL_STATE(110)] = 3000,
  [SMALL_STATE(111)] = 3020,
  [SMALL_STATE(112)] = 3038,
  [SMALL_STATE(113)] = 3053,
  [SMALL_STATE(114)] = 3068,
  [SMALL_STATE(115)] = 3085,
  [SMALL_STATE(116)] = 3102,
  [SMALL_STATE(117)] = 3117,
  [SMALL_STATE(118)] = 3132,
  [SMALL_STATE(119)] = 3149,
  [SMALL_STATE(120)] = 3164,
  [SMALL_STATE(121)] = 3179,
  [SMALL_STATE(122)] = 3194,
  [SMALL_STATE(123)] = 3209,
  [SMALL_STATE(124)] = 3224,
  [SMALL_STATE(125)] = 3238,
  [SMALL_STATE(126)] = 3248,
  [SMALL_STATE(127)] = 3258,
  [SMALL_STATE(128)] = 3268,
  [SMALL_STATE(129)] = 3278,
  [SMALL_STATE(130)] = 3288,
  [SMALL_STATE(131)] = 3298,
  [SMALL_STATE(132)] = 3308,
  [SMALL_STATE(133)] = 3322,
  [SMALL_STATE(134)] = 3332,
  [SMALL_STATE(135)] = 3346,
  [SMALL_STATE(136)] = 3356,
  [SMALL_STATE(137)] = 3366,
  [SMALL_STATE(138)] = 3376,
  [SMALL_STATE(139)] = 3386,
  [SMALL_STATE(140)] = 3400,
  [SMALL_STATE(141)] = 3414,
  [SMALL_STATE(142)] = 3424,
  [SMALL_STATE(143)] = 3438,
  [SMALL_STATE(144)] = 3448,
  [SMALL_STATE(145)] = 3458,
  [SMALL_STATE(146)] = 3468,
  [SMALL_STATE(147)] = 3478,
  [SMALL_STATE(148)] = 3488,
  [SMALL_STATE(149)] = 3502,
  [SMALL_STATE(150)] = 3516,
  [SMALL_STATE(151)] = 3526,
  [SMALL_STATE(152)] = 3536,
  [SMALL_STATE(153)] = 3550,
  [SMALL_STATE(154)] = 3564,
  [SMALL_STATE(155)] = 3578,
  [SMALL_STATE(156)] = 3592,
  [SMALL_STATE(157)] = 3606,
  [SMALL_STATE(158)] = 3620,
  [SMALL_STATE(159)] = 3630,
  [SMALL_STATE(160)] = 3640,
  [SMALL_STATE(161)] = 3650,
  [SMALL_STATE(162)] = 3660,
  [SMALL_STATE(163)] = 3674,
  [SMALL_STATE(164)] = 3684,
  [SMALL_STATE(165)] = 3695,
  [SMALL_STATE(166)] = 3704,
  [SMALL_STATE(167)] = 3715,
  [SMALL_STATE(168)] = 3726,
  [SMALL_STATE(169)] = 3735,
  [SMALL_STATE(170)] = 3744,
  [SMALL_STATE(171)] = 3755,
  [SMALL_STATE(172)] = 3766,
  [SMALL_STATE(173)] = 3775,
  [SMALL_STATE(174)] = 3786,
  [SMALL_STATE(175)] = 3797,
  [SMALL_STATE(176)] = 3808,
  [SMALL_STATE(177)] = 3819,
  [SMALL_STATE(178)] = 3830,
  [SMALL_STATE(179)] = 3841,
  [SMALL_STATE(180)] = 3852,
  [SMALL_STATE(181)] = 3861,
  [SMALL_STATE(182)] = 3872,
  [SMALL_STATE(183)] = 3883,
  [SMALL_STATE(184)] = 3894,
  [SMALL_STATE(185)] = 3903,
  [SMALL_STATE(186)] = 3914,
  [SMALL_STATE(187)] = 3925,
  [SMALL_STATE(188)] = 3936,
  [SMALL_STATE(189)] = 3947,
  [SMALL_STATE(190)] = 3958,
  [SMALL_STATE(191)] = 3969,
  [SMALL_STATE(192)] = 3980,
  [SMALL_STATE(193)] = 3989,
  [SMALL_STATE(194)] = 4000,
  [SMALL_STATE(195)] = 4009,
  [SMALL_STATE(196)] = 4017,
  [SMALL_STATE(197)] = 4025,
  [SMALL_STATE(198)] = 4033,
  [SMALL_STATE(199)] = 4041,
  [SMALL_STATE(200)] = 4049,
  [SMALL_STATE(201)] = 4057,
  [SMALL_STATE(202)] = 4065,
  [SMALL_STATE(203)] = 4073,
  [SMALL_STATE(204)] = 4081,
  [SMALL_STATE(205)] = 4089,
  [SMALL_STATE(206)] = 4097,
  [SMALL_STATE(207)] = 4105,
  [SMALL_STATE(208)] = 4113,
  [SMALL_STATE(209)] = 4121,
  [SMALL_STATE(210)] = 4129,
  [SMALL_STATE(211)] = 4137,
  [SMALL_STATE(212)] = 4145,
  [SMALL_STATE(213)] = 4153,
  [SMALL_STATE(214)] = 4161,
  [SMALL_STATE(215)] = 4169,
  [SMALL_STATE(216)] = 4177,
  [SMALL_STATE(217)] = 4185,
  [SMALL_STATE(218)] = 4193,
  [SMALL_STATE(219)] = 4201,
  [SMALL_STATE(220)] = 4209,
  [SMALL_STATE(221)] = 4217,
  [SMALL_STATE(222)] = 4225,
  [SMALL_STATE(223)] = 4233,
  [SMALL_STATE(224)] = 4241,
  [SMALL_STATE(225)] = 4249,
  [SMALL_STATE(226)] = 4257,
  [SMALL_STATE(227)] = 4265,
  [SMALL_STATE(228)] = 4273,
  [SMALL_STATE(229)] = 4281,
  [SMALL_STATE(230)] = 4289,
  [SMALL_STATE(231)] = 4297,
  [SMALL_STATE(232)] = 4305,
  [SMALL_STATE(233)] = 4313,
  [SMALL_STATE(234)] = 4321,
  [SMALL_STATE(235)] = 4329,
  [SMALL_STATE(236)] = 4337,
  [SMALL_STATE(237)] = 4345,
  [SMALL_STATE(238)] = 4353,
  [SMALL_STATE(239)] = 4361,
  [SMALL_STATE(240)] = 4369,
  [SMALL_STATE(241)] = 4377,
  [SMALL_STATE(242)] = 4385,
  [SMALL_STATE(243)] = 4393,
  [SMALL_STATE(244)] = 4401,
  [SMALL_STATE(245)] = 4409,
  [SMALL_STATE(246)] = 4417,
  [SMALL_STATE(247)] = 4425,
  [SMALL_STATE(248)] = 4433,
  [SMALL_STATE(249)] = 4441,
  [SMALL_STATE(250)] = 4449,
  [SMALL_STATE(251)] = 4457,
  [SMALL_STATE(252)] = 4465,
  [SMALL_STATE(253)] = 4473,
  [SMALL_STATE(254)] = 4481,
  [SMALL_STATE(255)] = 4489,
  [SMALL_STATE(256)] = 4497,
  [SMALL_STATE(257)] = 4505,
  [SMALL_STATE(258)] = 4513,
  [SMALL_STATE(259)] = 4521,
  [SMALL_STATE(260)] = 4529,
  [SMALL_STATE(261)] = 4537,
  [SMALL_STATE(262)] = 4545,
  [SMALL_STATE(263)] = 4553,
  [SMALL_STATE(264)] = 4561,
  [SMALL_STATE(265)] = 4569,
  [SMALL_STATE(266)] = 4577,
  [SMALL_STATE(267)] = 4585,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(175),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(50),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(51),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(51),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(52),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(53),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f64, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f64, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symstring, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symstring, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 6),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 5),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2), SHIFT_REPEAT(62),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(179),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(117),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(143),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2), SHIFT_REPEAT(195),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2), SHIFT_REPEAT(119),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(229),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 13),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 7),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 12),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 5),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 14),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 7),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 11),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 15),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 8),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 9),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 8),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 10),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 6),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 5),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identsort, 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [517] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
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
