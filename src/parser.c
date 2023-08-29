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
#define STATE_COUNT 300
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
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
  anon_sym_push = 34,
  anon_sym_pop = 35,
  anon_sym_print_DASHtable = 36,
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
  aux_sym_type_token1 = 54,
  sym_num = 55,
  sym_unum = 56,
  anon_sym_NaN = 57,
  aux_sym_f64_token1 = 58,
  anon_sym_inf = 59,
  anon_sym_DASHinf = 60,
  sym_string = 61,
  sym_source_file = 62,
  sym_command = 63,
  sym_schedule = 64,
  sym_cost = 65,
  sym_nonletaction = 66,
  sym_action = 67,
  sym_fact = 68,
  sym_schema = 69,
  sym_expr = 70,
  sym_literal = 71,
  sym_callexpr = 72,
  sym_variant = 73,
  sym_type = 74,
  sym_identsort = 75,
  sym_f64 = 76,
  sym_ident = 77,
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
  [aux_sym_type_token1] = "type_token1",
  [sym_num] = "num",
  [sym_unum] = "unum",
  [anon_sym_NaN] = "NaN",
  [aux_sym_f64_token1] = "f64_token1",
  [anon_sym_inf] = "inf",
  [anon_sym_DASHinf] = "-inf",
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
  [sym_type] = "type",
  [sym_identsort] = "identsort",
  [sym_f64] = "f64",
  [sym_ident] = "ident",
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
  [aux_sym_type_token1] = aux_sym_type_token1,
  [sym_num] = sym_num,
  [sym_unum] = sym_unum,
  [anon_sym_NaN] = anon_sym_NaN,
  [aux_sym_f64_token1] = aux_sym_f64_token1,
  [anon_sym_inf] = anon_sym_inf,
  [anon_sym_DASHinf] = anon_sym_DASHinf,
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
  [sym_type] = sym_type,
  [sym_identsort] = sym_identsort,
  [sym_f64] = sym_f64,
  [sym_ident] = sym_ident,
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
  [aux_sym_type_token1] = {
    .visible = false,
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
  [sym_ident] = {
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
  [9] = 5,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 10,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 11,
  [18] = 18,
  [19] = 19,
  [20] = 12,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 22,
  [28] = 25,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 25,
  [36] = 36,
  [37] = 22,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 33,
  [44] = 44,
  [45] = 42,
  [46] = 46,
  [47] = 46,
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
  [79] = 74,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 83,
  [86] = 86,
  [87] = 75,
  [88] = 88,
  [89] = 76,
  [90] = 82,
  [91] = 91,
  [92] = 77,
  [93] = 81,
  [94] = 94,
  [95] = 84,
  [96] = 96,
  [97] = 76,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 82,
  [113] = 113,
  [114] = 108,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 83,
  [124] = 124,
  [125] = 107,
  [126] = 126,
  [127] = 127,
  [128] = 111,
  [129] = 109,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 75,
  [137] = 81,
  [138] = 138,
  [139] = 77,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 84,
  [144] = 144,
  [145] = 135,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 134,
  [156] = 156,
  [157] = 157,
  [158] = 94,
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
  [174] = 91,
  [175] = 175,
  [176] = 98,
  [177] = 86,
  [178] = 178,
  [179] = 88,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 76,
  [186] = 76,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 159,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 126,
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
  [218] = 217,
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
  [244] = 197,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 197,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 78,
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
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 76,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 80,
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
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 270,
  [298] = 298,
  [299] = 299,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(236);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == ',') ADVANCE(243);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '=') ADVANCE(322);
      if (lookahead == 'N') ADVANCE(18);
      if (lookahead == '[') ADVANCE(320);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '-') ADVANCE(483);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == 'N') ADVANCE(328);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == '-') ADVANCE(483);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == 'N') ADVANCE(328);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'b') ADVANCE(380);
      if (lookahead == 'c') ADVANCE(325);
      if (lookahead == 'd') ADVANCE(326);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'f') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead == 'p') ADVANCE(332);
      if (lookahead == 'q') ADVANCE(465);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(412);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(369);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == 'p') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(412);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '-') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(182);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(177);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '=') ADVANCE(323);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(487);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(133);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(126);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(137);
      if (lookahead == 'v') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(316);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(491);
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(493);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(287);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(229);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(291);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 116:
      if (lookahead == 'k') ADVANCE(285);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(170);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(293);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 161:
      if (lookahead == 'q') ADVANCE(308);
      END_STATE();
    case 162:
      if (lookahead == 'q') ADVANCE(308);
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 224:
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 225:
      if (lookahead == 'w') ADVANCE(176);
      END_STATE();
    case 226:
      if (lookahead == 'x') ADVANCE(202);
      END_STATE();
    case 227:
      if (lookahead == 'x') ADVANCE(210);
      END_STATE();
    case 228:
      if (lookahead == 'x') ADVANCE(213);
      END_STATE();
    case 229:
      if (lookahead == 'y') ADVANCE(276);
      END_STATE();
    case 230:
      if (lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 231:
      if (lookahead == 'y') ADVANCE(159);
      END_STATE();
    case 232:
      if (lookahead == 'z') ADVANCE(71);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      END_STATE();
    case 235:
      if (eof) ADVANCE(236);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(239);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(241);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_lparen);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_rparen);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_datatype);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_COLONunextractable);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_COLONon_merge);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COLONmerge);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_COLONdefault);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_relation);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_ruleset);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_ruleset);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 's') ADVANCE(371);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_COLONruleset);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_COLONname);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_COLONwhen);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_birewrite);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_birewrite);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(440);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(180);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_COLONuntil);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_add_DASHruleset);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_add_DASHruleset);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_calc);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_COLONvariants);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(425);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_print_DASHtable);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_print_DASHtable);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_fail);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_fail);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_saturate);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_COLONcost);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_panic);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_panic);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_extract);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == 'N') ADVANCE(488);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == 'h') ADVANCE(363);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead == 'e') ADVANCE(341);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'a') ADVANCE(337);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'a') ADVANCE(324);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == 'u') ADVANCE(410);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'a') ADVANCE(453);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'a') ADVANCE(436);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(423);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead == 'u') ADVANCE(439);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'a') ADVANCE(414);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'a') ADVANCE(345);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'a') ADVANCE(346);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'a') ADVANCE(461);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'b') ADVANCE(400);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'c') ADVANCE(281);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'c') ADVANCE(392);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'c') ADVANCE(317);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'c') ADVANCE(395);
      if (lookahead == 'l') ADVANCE(370);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'c') ADVANCE(379);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'c') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(468);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'c') ADVANCE(460);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'c') ADVANCE(448);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'c') ADVANCE(451);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'd') ADVANCE(348);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'd') ADVANCE(481);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'd') ADVANCE(356);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'd') ADVANCE(470);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(403);
      if (lookahead == 'u') ADVANCE(397);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(471);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(261);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(313);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(256);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(306);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(266);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(246);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(269);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(298);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(296);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(290);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(339);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(444);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(442);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(350);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(429);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead == 'o') ADVANCE(435);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(402);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(457);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(449);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(450);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(473);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'f') ADVANCE(288);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'f') ADVANCE(492);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'f') ADVANCE(494);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'f') ADVANCE(474);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'h') ADVANCE(292);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'h') ADVANCE(366);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(432);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(419);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(477);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(394);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(415);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(340);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(458);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(459);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(420);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(421);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(422);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'k') ADVANCE(286);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(338);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(304);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(331);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(464);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'n') ADVANCE(273);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(382);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(365);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(361);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(362);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(370);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == 'w') ADVANCE(434);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'm') ADVANCE(424);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(343);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(315);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(250);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(258);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(244);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(344);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(375);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(381);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(376);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(386);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(456);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'o') ADVANCE(374);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'o') ADVANCE(428);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'o') ADVANCE(416);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'o') ADVANCE(406);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'o') ADVANCE(407);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'o') ADVANCE(408);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'o') ADVANCE(409);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'p') ADVANCE(294);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'p') ADVANCE(398);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'p') ADVANCE(431);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'p') ADVANCE(358);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'p') ADVANCE(469);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'p') ADVANCE(462);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'r') ADVANCE(475);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'r') ADVANCE(334);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'r') ADVANCE(418);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'r') ADVANCE(352);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'r') ADVANCE(467);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'r') ADVANCE(387);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'r') ADVANCE(445);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'r') ADVANCE(355);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'r') ADVANCE(388);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'r') ADVANCE(335);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 's') ADVANCE(378);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 's') ADVANCE(342);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 't') ADVANCE(327);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 's') ADVANCE(372);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(330);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(271);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(248);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(300);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(302);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(319);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(279);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(283);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(427);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(476);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(480);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(430);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(479);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(354);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(357);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(359);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(389);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(390);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(391);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 't') ADVANCE(438);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(349);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(367);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(452);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(399);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(446);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(447);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(401);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'w') ADVANCE(437);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'x') ADVANCE(455);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'x') ADVANCE(463);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'y') ADVANCE(277);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'y') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'y') ADVANCE(426);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == 'z') ADVANCE(360);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'y')) ADVANCE(478);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(433);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '-') ADVANCE(373);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_unum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_NaN);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '^') ADVANCE(478);
      if (lookahead == '_') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 235},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 235},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 235},
  [100] = {.lex_state = 235},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 235},
  [104] = {.lex_state = 235},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 235},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 235},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 235},
  [113] = {.lex_state = 235},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 235},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 235},
  [118] = {.lex_state = 235},
  [119] = {.lex_state = 235},
  [120] = {.lex_state = 235},
  [121] = {.lex_state = 235},
  [122] = {.lex_state = 235},
  [123] = {.lex_state = 235},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 235},
  [127] = {.lex_state = 235},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 235},
  [131] = {.lex_state = 235},
  [132] = {.lex_state = 235},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 235},
  [136] = {.lex_state = 235},
  [137] = {.lex_state = 235},
  [138] = {.lex_state = 235},
  [139] = {.lex_state = 235},
  [140] = {.lex_state = 235},
  [141] = {.lex_state = 235},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 235},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 235},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 235},
  [148] = {.lex_state = 235},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 235},
  [152] = {.lex_state = 235},
  [153] = {.lex_state = 235},
  [154] = {.lex_state = 235},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 235},
  [157] = {.lex_state = 235},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 235},
  [161] = {.lex_state = 235},
  [162] = {.lex_state = 235},
  [163] = {.lex_state = 235},
  [164] = {.lex_state = 235},
  [165] = {.lex_state = 235},
  [166] = {.lex_state = 235},
  [167] = {.lex_state = 235},
  [168] = {.lex_state = 235},
  [169] = {.lex_state = 235},
  [170] = {.lex_state = 235},
  [171] = {.lex_state = 235},
  [172] = {.lex_state = 235},
  [173] = {.lex_state = 235},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 235},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 235},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 235},
  [181] = {.lex_state = 235},
  [182] = {.lex_state = 15},
  [183] = {.lex_state = 235},
  [184] = {.lex_state = 235},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 235},
  [188] = {.lex_state = 235},
  [189] = {.lex_state = 235},
  [190] = {.lex_state = 14},
  [191] = {.lex_state = 235},
  [192] = {.lex_state = 235},
  [193] = {.lex_state = 235},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 235},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 15},
  [198] = {.lex_state = 235},
  [199] = {.lex_state = 15},
  [200] = {.lex_state = 235},
  [201] = {.lex_state = 15},
  [202] = {.lex_state = 235},
  [203] = {.lex_state = 15},
  [204] = {.lex_state = 235},
  [205] = {.lex_state = 15},
  [206] = {.lex_state = 235},
  [207] = {.lex_state = 15},
  [208] = {.lex_state = 235},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 15},
  [211] = {.lex_state = 15},
  [212] = {.lex_state = 15},
  [213] = {.lex_state = 235},
  [214] = {.lex_state = 235},
  [215] = {.lex_state = 15},
  [216] = {.lex_state = 235},
  [217] = {.lex_state = 235},
  [218] = {.lex_state = 235},
  [219] = {.lex_state = 235},
  [220] = {.lex_state = 235},
  [221] = {.lex_state = 15},
  [222] = {.lex_state = 235},
  [223] = {.lex_state = 15},
  [224] = {.lex_state = 235},
  [225] = {.lex_state = 15},
  [226] = {.lex_state = 15},
  [227] = {.lex_state = 235},
  [228] = {.lex_state = 15},
  [229] = {.lex_state = 15},
  [230] = {.lex_state = 15},
  [231] = {.lex_state = 15},
  [232] = {.lex_state = 235},
  [233] = {.lex_state = 235},
  [234] = {.lex_state = 235},
  [235] = {.lex_state = 15},
  [236] = {.lex_state = 235},
  [237] = {.lex_state = 15},
  [238] = {.lex_state = 15},
  [239] = {.lex_state = 235},
  [240] = {.lex_state = 15},
  [241] = {.lex_state = 235},
  [242] = {.lex_state = 15},
  [243] = {.lex_state = 235},
  [244] = {.lex_state = 15},
  [245] = {.lex_state = 15},
  [246] = {.lex_state = 235},
  [247] = {.lex_state = 235},
  [248] = {.lex_state = 15},
  [249] = {.lex_state = 235},
  [250] = {.lex_state = 235},
  [251] = {.lex_state = 235},
  [252] = {.lex_state = 235},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 235},
  [255] = {.lex_state = 235},
  [256] = {.lex_state = 235},
  [257] = {.lex_state = 235},
  [258] = {.lex_state = 235},
  [259] = {.lex_state = 235},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 235},
  [262] = {.lex_state = 235},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 235},
  [265] = {.lex_state = 235},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 235},
  [268] = {.lex_state = 235},
  [269] = {.lex_state = 235},
  [270] = {.lex_state = 235},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 235},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 15},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 235},
  [278] = {.lex_state = 235},
  [279] = {.lex_state = 235},
  [280] = {.lex_state = 235},
  [281] = {.lex_state = 235},
  [282] = {.lex_state = 235},
  [283] = {.lex_state = 235},
  [284] = {.lex_state = 235},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 235},
  [287] = {.lex_state = 235},
  [288] = {.lex_state = 235},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 235},
  [291] = {.lex_state = 235},
  [292] = {.lex_state = 235},
  [293] = {.lex_state = 235},
  [294] = {.lex_state = 235},
  [295] = {.lex_state = 235},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 235},
  [298] = {.lex_state = 235},
  [299] = {.lex_state = 235},
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
    [sym_source_file] = STATE(289),
    [sym_command] = STATE(103),
    [sym_nonletaction] = STATE(160),
    [sym_callexpr] = STATE(161),
    [aux_sym_source_file_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [sym_lparen] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
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
    ACTIONS(39), 1,
      anon_sym_check_DASHproof,
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
      aux_sym_type_token1,
    STATE(35), 1,
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
    ACTIONS(43), 2,
      anon_sym_push,
      anon_sym_pop,
    ACTIONS(23), 3,
      anon_sym_ruleset,
      anon_sym_add_DASHruleset,
      anon_sym_print_DASHsize,
  [97] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(67), 1,
      sym_rparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [141] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(77), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(16), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [185] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [229] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(81), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(15), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [273] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(83), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [317] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(81), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [361] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(85), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [405] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(87), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [449] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(89), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(10), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [493] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(91), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [537] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(91), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [581] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(93), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(3), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [625] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(95), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [669] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(97), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [713] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(99), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(13), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [757] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(101), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(8), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [801] = 12,
    ACTIONS(103), 1,
      sym_lparen,
    ACTIONS(106), 1,
      sym_rparen,
    ACTIONS(108), 1,
      aux_sym_type_token1,
    ACTIONS(111), 1,
      sym_num,
    ACTIONS(117), 1,
      aux_sym_f64_token1,
    ACTIONS(120), 1,
      sym_string,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(114), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [845] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(87), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(5), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [889] = 12,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(65), 1,
      sym_lparen,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(123), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(7), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [933] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(127), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [974] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(129), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1015] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(81), 1,
      sym_rparen,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1056] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(131), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(22), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1097] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(133), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(31), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1138] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(135), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1179] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(137), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(27), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1220] = 12,
    ACTIONS(139), 1,
      sym_lparen,
    ACTIONS(141), 1,
      anon_sym_COLONvariants,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    STATE(254), 1,
      sym_expr,
    STATE(261), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1263] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(101), 1,
      sym_rparen,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1304] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(153), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1345] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(155), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1386] = 11,
    ACTIONS(157), 1,
      sym_lparen,
    ACTIONS(160), 1,
      sym_rparen,
    ACTIONS(162), 1,
      aux_sym_type_token1,
    ACTIONS(165), 1,
      sym_num,
    ACTIONS(171), 1,
      aux_sym_f64_token1,
    ACTIONS(174), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(168), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1427] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(177), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(23), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1468] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(179), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(37), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1509] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(95), 1,
      sym_rparen,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1550] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(181), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1591] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(183), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1632] = 11,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    ACTIONS(187), 1,
      sym_rparen,
    STATE(277), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1672] = 10,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(30), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1710] = 10,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(24), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1748] = 10,
    ACTIONS(189), 1,
      sym_lparen,
    ACTIONS(191), 1,
      aux_sym_type_token1,
    ACTIONS(193), 1,
      sym_num,
    ACTIONS(197), 1,
      aux_sym_f64_token1,
    ACTIONS(199), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(47), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(92), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(195), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(87), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1786] = 10,
    ACTIONS(201), 1,
      sym_lparen,
    ACTIONS(204), 1,
      aux_sym_type_token1,
    ACTIONS(207), 1,
      sym_num,
    ACTIONS(213), 1,
      aux_sym_f64_token1,
    ACTIONS(216), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(43), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(92), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(210), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(87), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1824] = 11,
    ACTIONS(139), 1,
      sym_lparen,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    STATE(254), 1,
      sym_expr,
    STATE(281), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1864] = 10,
    ACTIONS(189), 1,
      sym_lparen,
    ACTIONS(191), 1,
      aux_sym_type_token1,
    ACTIONS(193), 1,
      sym_num,
    ACTIONS(197), 1,
      aux_sym_f64_token1,
    ACTIONS(199), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(46), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(92), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(195), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(87), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1902] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    STATE(43), 1,
      aux_sym_command_repeat2,
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1942] = 11,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    STATE(43), 1,
      aux_sym_command_repeat2,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [1982] = 10,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(36), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2020] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(236), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2057] = 10,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(125), 1,
      sym_lparen,
    STATE(39), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(75), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2094] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(290), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2131] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(195), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2168] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(293), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2205] = 10,
    ACTIONS(189), 1,
      sym_lparen,
    ACTIONS(191), 1,
      aux_sym_type_token1,
    ACTIONS(193), 1,
      sym_num,
    ACTIONS(197), 1,
      aux_sym_f64_token1,
    ACTIONS(199), 1,
      sym_string,
    STATE(62), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(92), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(195), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(87), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2242] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(269), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2279] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(220), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2316] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(292), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2353] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(267), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2390] = 10,
    ACTIONS(189), 1,
      sym_lparen,
    ACTIONS(191), 1,
      aux_sym_type_token1,
    ACTIONS(193), 1,
      sym_num,
    ACTIONS(197), 1,
      aux_sym_f64_token1,
    ACTIONS(199), 1,
      sym_string,
    STATE(67), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(92), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(195), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(87), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2427] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(227), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2464] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(265), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2501] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(181), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2538] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(250), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2575] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(259), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2612] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(246), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2649] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(239), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2686] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(277), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2723] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(251), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2760] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(298), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2797] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(278), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2834] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(252), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2871] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(206), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2908] = 10,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(149), 1,
      aux_sym_f64_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(185), 1,
      sym_lparen,
    STATE(256), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(139), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(147), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(136), 3,
      sym_literal,
      sym_callexpr,
      sym_ident,
  [2945] = 4,
    ACTIONS(221), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(223), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(219), 6,
      sym_lparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2965] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(227), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(225), 7,
      sym_lparen,
      sym_rparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2983] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(231), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(229), 7,
      sym_lparen,
      sym_rparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3001] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(235), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(233), 7,
      sym_lparen,
      sym_rparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3019] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(239), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(237), 7,
      sym_lparen,
      sym_rparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3037] = 4,
    ACTIONS(241), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(223), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(219), 6,
      sym_lparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3057] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(245), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(243), 7,
      sym_lparen,
      sym_rparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3075] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(249), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(247), 7,
      sym_lparen,
      sym_rparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3093] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(253), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(251), 7,
      sym_lparen,
      sym_rparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3111] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(257), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(255), 7,
      sym_lparen,
      sym_rparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3129] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(261), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(259), 7,
      sym_lparen,
      sym_rparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3147] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(257), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(255), 6,
      sym_lparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3164] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(265), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(263), 6,
      sym_lparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3181] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(227), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(225), 6,
      sym_lparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3198] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(269), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(267), 6,
      sym_lparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3215] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(231), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(229), 6,
      sym_lparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3232] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(253), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(251), 6,
      sym_lparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3249] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(273), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(271), 6,
      sym_lparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3266] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(235), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(233), 6,
      sym_lparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3283] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(249), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(247), 6,
      sym_lparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3300] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(277), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(275), 6,
      sym_lparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3317] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(261), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(259), 6,
      sym_lparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3334] = 9,
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
      aux_sym_type_token1,
    ACTIONS(279), 1,
      anon_sym_let,
    STATE(35), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3363] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(231), 8,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONname,
      anon_sym_COLONwhen,
      anon_sym_COLONuntil,
      sym_unum,
  [3378] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(283), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(281), 6,
      sym_lparen,
      aux_sym_type_token1,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3395] = 8,
    ACTIONS(285), 1,
      sym_rparen,
    ACTIONS(287), 1,
      anon_sym_COLONunextractable,
    ACTIONS(289), 1,
      anon_sym_COLONon_merge,
    ACTIONS(291), 1,
      anon_sym_COLONmerge,
    ACTIONS(293), 1,
      anon_sym_COLONdefault,
    ACTIONS(295), 1,
      anon_sym_COLONcost,
    STATE(131), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3421] = 6,
    ACTIONS(297), 1,
      sym_lparen,
    ACTIONS(299), 1,
      sym_rparen,
    STATE(161), 1,
      sym_callexpr,
    STATE(202), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(117), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3442] = 6,
    ACTIONS(123), 1,
      sym_rparen,
    ACTIONS(301), 1,
      sym_lparen,
    ACTIONS(303), 1,
      aux_sym_type_token1,
    STATE(158), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(124), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3463] = 6,
    ACTIONS(305), 1,
      sym_lparen,
    ACTIONS(308), 1,
      sym_rparen,
    ACTIONS(310), 1,
      aux_sym_type_token1,
    STATE(158), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(102), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3484] = 6,
    ACTIONS(7), 1,
      sym_lparen,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    STATE(160), 1,
      sym_nonletaction,
    STATE(161), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(121), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [3505] = 6,
    ACTIONS(297), 1,
      sym_lparen,
    ACTIONS(315), 1,
      sym_rparen,
    STATE(161), 1,
      sym_callexpr,
    STATE(202), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(117), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3526] = 6,
    ACTIONS(295), 1,
      anon_sym_COLONcost,
    ACTIONS(317), 1,
      sym_rparen,
    ACTIONS(319), 1,
      aux_sym_type_token1,
    STATE(295), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(116), 2,
      sym_type,
      aux_sym_command_repeat4,
  [3547] = 6,
    ACTIONS(297), 1,
      sym_lparen,
    ACTIONS(321), 1,
      sym_rparen,
    STATE(161), 1,
      sym_callexpr,
    STATE(202), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(122), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3568] = 6,
    ACTIONS(91), 1,
      sym_rparen,
    ACTIONS(301), 1,
      sym_lparen,
    ACTIONS(303), 1,
      aux_sym_type_token1,
    STATE(158), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(102), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3589] = 6,
    ACTIONS(301), 1,
      sym_lparen,
    ACTIONS(303), 1,
      aux_sym_type_token1,
    ACTIONS(323), 1,
      sym_rparen,
    STATE(158), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(128), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3610] = 6,
    ACTIONS(99), 1,
      sym_rparen,
    ACTIONS(301), 1,
      sym_lparen,
    ACTIONS(303), 1,
      aux_sym_type_token1,
    STATE(158), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3631] = 6,
    ACTIONS(297), 1,
      sym_lparen,
    ACTIONS(325), 1,
      sym_rparen,
    STATE(161), 1,
      sym_callexpr,
    STATE(202), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(115), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3652] = 6,
    ACTIONS(99), 1,
      sym_rparen,
    ACTIONS(301), 1,
      sym_lparen,
    ACTIONS(303), 1,
      aux_sym_type_token1,
    STATE(158), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(102), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3673] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(253), 6,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [3686] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(327), 6,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [3699] = 6,
    ACTIONS(301), 1,
      sym_lparen,
    ACTIONS(303), 1,
      aux_sym_type_token1,
    ACTIONS(329), 1,
      sym_rparen,
    STATE(158), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(111), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3720] = 6,
    ACTIONS(297), 1,
      sym_lparen,
    ACTIONS(331), 1,
      sym_rparen,
    STATE(161), 1,
      sym_callexpr,
    STATE(202), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(117), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3741] = 6,
    ACTIONS(295), 1,
      anon_sym_COLONcost,
    ACTIONS(319), 1,
      aux_sym_type_token1,
    ACTIONS(333), 1,
      sym_rparen,
    STATE(291), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(133), 2,
      sym_type,
      aux_sym_command_repeat4,
  [3762] = 6,
    ACTIONS(335), 1,
      sym_lparen,
    ACTIONS(338), 1,
      sym_rparen,
    STATE(161), 1,
      sym_callexpr,
    STATE(202), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(117), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3783] = 6,
    ACTIONS(297), 1,
      sym_lparen,
    ACTIONS(315), 1,
      sym_rparen,
    STATE(161), 1,
      sym_callexpr,
    STATE(202), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(100), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3804] = 6,
    ACTIONS(297), 1,
      sym_lparen,
    ACTIONS(340), 1,
      sym_rparen,
    STATE(161), 1,
      sym_callexpr,
    STATE(202), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(120), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3825] = 6,
    ACTIONS(297), 1,
      sym_lparen,
    ACTIONS(325), 1,
      sym_rparen,
    STATE(161), 1,
      sym_callexpr,
    STATE(202), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(117), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3846] = 6,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 1,
      sym_lparen,
    STATE(160), 1,
      sym_nonletaction,
    STATE(161), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(121), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [3867] = 6,
    ACTIONS(297), 1,
      sym_lparen,
    ACTIONS(347), 1,
      sym_rparen,
    STATE(161), 1,
      sym_callexpr,
    STATE(202), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(117), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3888] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(257), 6,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [3901] = 6,
    ACTIONS(83), 1,
      sym_rparen,
    ACTIONS(301), 1,
      sym_lparen,
    ACTIONS(303), 1,
      aux_sym_type_token1,
    STATE(158), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(102), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3922] = 6,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(301), 1,
      sym_lparen,
    ACTIONS(303), 1,
      aux_sym_type_token1,
    STATE(158), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(102), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3943] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(349), 6,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [3956] = 6,
    ACTIONS(297), 1,
      sym_lparen,
    ACTIONS(347), 1,
      sym_rparen,
    STATE(161), 1,
      sym_callexpr,
    STATE(202), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(104), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3977] = 6,
    ACTIONS(89), 1,
      sym_rparen,
    ACTIONS(301), 1,
      sym_lparen,
    ACTIONS(303), 1,
      aux_sym_type_token1,
    STATE(158), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(102), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3998] = 6,
    ACTIONS(89), 1,
      sym_rparen,
    ACTIONS(301), 1,
      sym_lparen,
    ACTIONS(303), 1,
      aux_sym_type_token1,
    STATE(158), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(125), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4019] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(351), 6,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [4032] = 6,
    ACTIONS(353), 1,
      sym_rparen,
    ACTIONS(355), 1,
      anon_sym_COLONunextractable,
    ACTIONS(357), 1,
      anon_sym_COLONon_merge,
    ACTIONS(359), 1,
      anon_sym_COLONmerge,
    ACTIONS(361), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4052] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(363), 5,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
  [4064] = 5,
    ACTIONS(365), 1,
      sym_rparen,
    ACTIONS(367), 1,
      anon_sym_COLONcost,
    ACTIONS(369), 1,
      aux_sym_type_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(133), 2,
      sym_type,
      aux_sym_command_repeat4,
  [4082] = 5,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(329), 1,
      sym_rparen,
    ACTIONS(372), 1,
      anon_sym_COLONuntil,
    STATE(217), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4099] = 4,
    ACTIONS(374), 1,
      anon_sym_run,
    ACTIONS(378), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(376), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [4114] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(227), 4,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [4125] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(249), 4,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [4136] = 4,
    ACTIONS(380), 1,
      sym_lparen,
    ACTIONS(382), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [4151] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(235), 4,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [4162] = 4,
    ACTIONS(285), 1,
      sym_rparen,
    ACTIONS(380), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(152), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [4177] = 5,
    ACTIONS(7), 1,
      sym_lparen,
    STATE(160), 1,
      sym_nonletaction,
    STATE(161), 1,
      sym_callexpr,
    STATE(261), 1,
      sym_command,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4194] = 4,
    ACTIONS(133), 1,
      sym_rparen,
    ACTIONS(319), 1,
      aux_sym_type_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(133), 2,
      sym_type,
      aux_sym_command_repeat4,
  [4209] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(261), 4,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [4220] = 4,
    ACTIONS(319), 1,
      aux_sym_type_token1,
    ACTIONS(384), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(149), 2,
      sym_type,
      aux_sym_command_repeat4,
  [4235] = 4,
    ACTIONS(386), 1,
      anon_sym_run,
    ACTIONS(390), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(388), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [4250] = 5,
    ACTIONS(191), 1,
      aux_sym_type_token1,
    ACTIONS(392), 1,
      sym_lparen,
    STATE(71), 1,
      sym_schedule,
    STATE(94), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4267] = 4,
    ACTIONS(394), 1,
      sym_lparen,
    ACTIONS(396), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(151), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [4282] = 5,
    ACTIONS(353), 1,
      sym_rparen,
    ACTIONS(357), 1,
      anon_sym_COLONon_merge,
    ACTIONS(359), 1,
      anon_sym_COLONmerge,
    ACTIONS(361), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4299] = 4,
    ACTIONS(319), 1,
      aux_sym_type_token1,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(133), 2,
      sym_type,
      aux_sym_command_repeat4,
  [4314] = 4,
    ACTIONS(319), 1,
      aux_sym_type_token1,
    ACTIONS(400), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(142), 2,
      sym_type,
      aux_sym_command_repeat4,
  [4329] = 4,
    ACTIONS(394), 1,
      sym_lparen,
    ACTIONS(402), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(153), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [4344] = 4,
    ACTIONS(404), 1,
      sym_lparen,
    ACTIONS(407), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(152), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [4359] = 4,
    ACTIONS(409), 1,
      sym_lparen,
    ACTIONS(412), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(153), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [4374] = 5,
    ACTIONS(414), 1,
      sym_rparen,
    ACTIONS(416), 1,
      anon_sym_COLONon_merge,
    ACTIONS(418), 1,
      anon_sym_COLONmerge,
    ACTIONS(420), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4391] = 5,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(323), 1,
      sym_rparen,
    ACTIONS(422), 1,
      anon_sym_COLONuntil,
    STATE(218), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4408] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(424), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4418] = 4,
    ACTIONS(426), 1,
      sym_rparen,
    ACTIONS(428), 1,
      anon_sym_COLONmerge,
    ACTIONS(430), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4432] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(275), 3,
      sym_lparen,
      sym_rparen,
      aux_sym_type_token1,
  [4442] = 4,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(432), 1,
      anon_sym_EQ,
    STATE(35), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4456] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(434), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4466] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(436), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4476] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(438), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4486] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(440), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4496] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(442), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4506] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(444), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4516] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(446), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4526] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(448), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4536] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(450), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4546] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(452), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4556] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(454), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4566] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(456), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4576] = 4,
    ACTIONS(458), 1,
      sym_rparen,
    ACTIONS(460), 1,
      anon_sym_COLONmerge,
    ACTIONS(462), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4590] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(464), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4600] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(271), 3,
      sym_lparen,
      sym_rparen,
      aux_sym_type_token1,
  [4610] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(466), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4620] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(281), 3,
      sym_lparen,
      sym_rparen,
      aux_sym_type_token1,
  [4630] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(263), 3,
      sym_lparen,
      sym_rparen,
      aux_sym_type_token1,
  [4640] = 4,
    ACTIONS(468), 1,
      sym_rparen,
    ACTIONS(470), 1,
      anon_sym_COLONmerge,
    ACTIONS(472), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4654] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(267), 3,
      sym_lparen,
      sym_rparen,
      aux_sym_type_token1,
  [4664] = 4,
    ACTIONS(474), 1,
      sym_rparen,
    ACTIONS(476), 1,
      anon_sym_COLONmerge,
    ACTIONS(478), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4678] = 4,
    ACTIONS(285), 1,
      sym_rparen,
    ACTIONS(480), 1,
      anon_sym_COLONruleset,
    ACTIONS(482), 1,
      anon_sym_COLONwhen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4692] = 4,
    ACTIONS(484), 1,
      aux_sym_type_token1,
    ACTIONS(486), 1,
      sym_unum,
    STATE(258), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4706] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(488), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4716] = 4,
    ACTIONS(426), 1,
      sym_rparen,
    ACTIONS(490), 1,
      anon_sym_COLONruleset,
    ACTIONS(492), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4730] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(229), 3,
      sym_lparen,
      sym_rparen,
      aux_sym_type_token1,
  [4740] = 3,
    ACTIONS(231), 1,
      anon_sym_COLONcost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(229), 2,
      sym_rparen,
      aux_sym_type_token1,
  [4752] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(494), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4762] = 4,
    ACTIONS(474), 1,
      sym_rparen,
    ACTIONS(496), 1,
      anon_sym_COLONruleset,
    ACTIONS(498), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4776] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(500), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4786] = 4,
    ACTIONS(63), 1,
      aux_sym_type_token1,
    ACTIONS(502), 1,
      anon_sym_EQ,
    STATE(28), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4800] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(504), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4810] = 4,
    ACTIONS(414), 1,
      sym_rparen,
    ACTIONS(506), 1,
      anon_sym_COLONruleset,
    ACTIONS(508), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4824] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(510), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4834] = 3,
    ACTIONS(349), 1,
      anon_sym_COLONcost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(512), 2,
      sym_rparen,
      aux_sym_type_token1,
  [4846] = 3,
    ACTIONS(474), 1,
      sym_rparen,
    ACTIONS(478), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4857] = 3,
    ACTIONS(484), 1,
      aux_sym_type_token1,
    STATE(252), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4868] = 3,
    ACTIONS(514), 1,
      aux_sym_type_token1,
    STATE(35), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4879] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(516), 2,
      sym_lparen,
      sym_rparen,
  [4888] = 3,
    ACTIONS(514), 1,
      aux_sym_type_token1,
    STATE(260), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4899] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(518), 2,
      sym_lparen,
      sym_rparen,
  [4908] = 3,
    ACTIONS(520), 1,
      aux_sym_type_token1,
    STATE(113), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4919] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(522), 2,
      sym_lparen,
      sym_rparen,
  [4928] = 3,
    ACTIONS(484), 1,
      aux_sym_type_token1,
    STATE(243), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4939] = 3,
    ACTIONS(524), 1,
      sym_rparen,
    ACTIONS(526), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4950] = 3,
    ACTIONS(484), 1,
      aux_sym_type_token1,
    STATE(208), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4961] = 3,
    ACTIONS(426), 1,
      sym_rparen,
    ACTIONS(430), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4972] = 3,
    ACTIONS(528), 1,
      aux_sym_type_token1,
    STATE(221), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4983] = 3,
    ACTIONS(426), 1,
      sym_rparen,
    ACTIONS(492), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4994] = 3,
    ACTIONS(484), 1,
      aux_sym_type_token1,
    STATE(224), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5005] = 3,
    ACTIONS(514), 1,
      aux_sym_type_token1,
    STATE(34), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5016] = 3,
    ACTIONS(530), 1,
      aux_sym_type_token1,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5027] = 3,
    ACTIONS(484), 1,
      aux_sym_type_token1,
    STATE(269), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5038] = 3,
    ACTIONS(426), 1,
      sym_rparen,
    ACTIONS(532), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5049] = 3,
    ACTIONS(382), 1,
      sym_rparen,
    ACTIONS(534), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5060] = 3,
    ACTIONS(484), 1,
      aux_sym_type_token1,
    STATE(298), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5071] = 3,
    ACTIONS(285), 1,
      sym_rparen,
    ACTIONS(536), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5082] = 3,
    ACTIONS(538), 1,
      sym_rparen,
    ACTIONS(540), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5093] = 3,
    ACTIONS(542), 1,
      sym_rparen,
    ACTIONS(544), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5104] = 3,
    ACTIONS(546), 1,
      sym_lparen,
    STATE(99), 1,
      sym_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5115] = 3,
    ACTIONS(468), 1,
      sym_rparen,
    ACTIONS(472), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5126] = 3,
    ACTIONS(520), 1,
      aux_sym_type_token1,
    STATE(294), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5137] = 3,
    ACTIONS(474), 1,
      sym_rparen,
    ACTIONS(548), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5148] = 3,
    ACTIONS(484), 1,
      aux_sym_type_token1,
    STATE(261), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5159] = 3,
    ACTIONS(468), 1,
      sym_rparen,
    ACTIONS(550), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5170] = 3,
    ACTIONS(484), 1,
      aux_sym_type_token1,
    STATE(234), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5181] = 3,
    ACTIONS(484), 1,
      aux_sym_type_token1,
    STATE(265), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5192] = 3,
    ACTIONS(458), 1,
      sym_rparen,
    ACTIONS(462), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5203] = 3,
    ACTIONS(484), 1,
      aux_sym_type_token1,
    STATE(262), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5214] = 3,
    ACTIONS(528), 1,
      aux_sym_type_token1,
    STATE(196), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5225] = 3,
    ACTIONS(514), 1,
      aux_sym_type_token1,
    STATE(26), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5236] = 3,
    ACTIONS(552), 1,
      aux_sym_type_token1,
    STATE(105), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5247] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(554), 2,
      sym_lparen,
      sym_rparen,
  [5256] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(556), 2,
      sym_lparen,
      sym_rparen,
  [5265] = 3,
    ACTIONS(458), 1,
      sym_rparen,
    ACTIONS(558), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5276] = 3,
    ACTIONS(484), 1,
      aux_sym_type_token1,
    STATE(219), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5287] = 3,
    ACTIONS(560), 1,
      sym_rparen,
    ACTIONS(562), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5298] = 3,
    ACTIONS(484), 1,
      aux_sym_type_token1,
    STATE(214), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5309] = 3,
    ACTIONS(514), 1,
      aux_sym_type_token1,
    STATE(32), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5320] = 3,
    ACTIONS(564), 1,
      sym_rparen,
    ACTIONS(566), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5331] = 3,
    ACTIONS(484), 1,
      aux_sym_type_token1,
    STATE(138), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5342] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(568), 2,
      sym_lparen,
      sym_rparen,
  [5351] = 3,
    ACTIONS(530), 1,
      aux_sym_type_token1,
    STATE(71), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5362] = 3,
    ACTIONS(382), 1,
      sym_rparen,
    ACTIONS(570), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5373] = 3,
    ACTIONS(514), 1,
      aux_sym_type_token1,
    STATE(28), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5384] = 3,
    ACTIONS(520), 1,
      aux_sym_type_token1,
    STATE(130), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5395] = 3,
    ACTIONS(414), 1,
      sym_rparen,
    ACTIONS(420), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5406] = 3,
    ACTIONS(382), 1,
      sym_rparen,
    ACTIONS(572), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5417] = 3,
    ACTIONS(514), 1,
      aux_sym_type_token1,
    STATE(25), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5428] = 2,
    ACTIONS(574), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5436] = 2,
    ACTIONS(576), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5444] = 2,
    ACTIONS(564), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5452] = 2,
    ACTIONS(285), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5460] = 2,
    ACTIONS(578), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5468] = 2,
    ACTIONS(239), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5476] = 2,
    ACTIONS(580), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5484] = 2,
    ACTIONS(560), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5492] = 2,
    ACTIONS(582), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5500] = 2,
    ACTIONS(584), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5508] = 2,
    ACTIONS(586), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5516] = 2,
    ACTIONS(570), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5524] = 2,
    ACTIONS(382), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5532] = 2,
    ACTIONS(588), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5540] = 2,
    ACTIONS(590), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5548] = 2,
    ACTIONS(592), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5556] = 2,
    ACTIONS(458), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5564] = 2,
    ACTIONS(594), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5572] = 2,
    ACTIONS(596), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5580] = 2,
    ACTIONS(598), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5588] = 2,
    ACTIONS(468), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5596] = 2,
    ACTIONS(600), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5604] = 2,
    ACTIONS(602), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5612] = 2,
    ACTIONS(604), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5620] = 2,
    ACTIONS(526), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5628] = 2,
    ACTIONS(606), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5636] = 2,
    ACTIONS(231), 1,
      aux_sym_type_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5644] = 2,
    ACTIONS(608), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5652] = 2,
    ACTIONS(610), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5660] = 2,
    ACTIONS(426), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5668] = 2,
    ACTIONS(245), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5676] = 2,
    ACTIONS(612), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5684] = 2,
    ACTIONS(353), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5692] = 2,
    ACTIONS(614), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5700] = 2,
    ACTIONS(524), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5708] = 2,
    ACTIONS(616), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5716] = 2,
    ACTIONS(618), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5724] = 2,
    ACTIONS(620), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5732] = 2,
    ACTIONS(622), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5740] = 2,
    ACTIONS(624), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5748] = 2,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5756] = 2,
    ACTIONS(474), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5764] = 2,
    ACTIONS(628), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5772] = 2,
    ACTIONS(630), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5780] = 2,
    ACTIONS(632), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5788] = 2,
    ACTIONS(634), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5796] = 2,
    ACTIONS(636), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5804] = 2,
    ACTIONS(638), 1,
      anon_sym_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5812] = 2,
    ACTIONS(640), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5820] = 2,
    ACTIONS(414), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5828] = 2,
    ACTIONS(642), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 97,
  [SMALL_STATE(4)] = 141,
  [SMALL_STATE(5)] = 185,
  [SMALL_STATE(6)] = 229,
  [SMALL_STATE(7)] = 273,
  [SMALL_STATE(8)] = 317,
  [SMALL_STATE(9)] = 361,
  [SMALL_STATE(10)] = 405,
  [SMALL_STATE(11)] = 449,
  [SMALL_STATE(12)] = 493,
  [SMALL_STATE(13)] = 537,
  [SMALL_STATE(14)] = 581,
  [SMALL_STATE(15)] = 625,
  [SMALL_STATE(16)] = 669,
  [SMALL_STATE(17)] = 713,
  [SMALL_STATE(18)] = 757,
  [SMALL_STATE(19)] = 801,
  [SMALL_STATE(20)] = 845,
  [SMALL_STATE(21)] = 889,
  [SMALL_STATE(22)] = 933,
  [SMALL_STATE(23)] = 974,
  [SMALL_STATE(24)] = 1015,
  [SMALL_STATE(25)] = 1056,
  [SMALL_STATE(26)] = 1097,
  [SMALL_STATE(27)] = 1138,
  [SMALL_STATE(28)] = 1179,
  [SMALL_STATE(29)] = 1220,
  [SMALL_STATE(30)] = 1263,
  [SMALL_STATE(31)] = 1304,
  [SMALL_STATE(32)] = 1345,
  [SMALL_STATE(33)] = 1386,
  [SMALL_STATE(34)] = 1427,
  [SMALL_STATE(35)] = 1468,
  [SMALL_STATE(36)] = 1509,
  [SMALL_STATE(37)] = 1550,
  [SMALL_STATE(38)] = 1591,
  [SMALL_STATE(39)] = 1632,
  [SMALL_STATE(40)] = 1672,
  [SMALL_STATE(41)] = 1710,
  [SMALL_STATE(42)] = 1748,
  [SMALL_STATE(43)] = 1786,
  [SMALL_STATE(44)] = 1824,
  [SMALL_STATE(45)] = 1864,
  [SMALL_STATE(46)] = 1902,
  [SMALL_STATE(47)] = 1942,
  [SMALL_STATE(48)] = 1982,
  [SMALL_STATE(49)] = 2020,
  [SMALL_STATE(50)] = 2057,
  [SMALL_STATE(51)] = 2094,
  [SMALL_STATE(52)] = 2131,
  [SMALL_STATE(53)] = 2168,
  [SMALL_STATE(54)] = 2205,
  [SMALL_STATE(55)] = 2242,
  [SMALL_STATE(56)] = 2279,
  [SMALL_STATE(57)] = 2316,
  [SMALL_STATE(58)] = 2353,
  [SMALL_STATE(59)] = 2390,
  [SMALL_STATE(60)] = 2427,
  [SMALL_STATE(61)] = 2464,
  [SMALL_STATE(62)] = 2501,
  [SMALL_STATE(63)] = 2538,
  [SMALL_STATE(64)] = 2575,
  [SMALL_STATE(65)] = 2612,
  [SMALL_STATE(66)] = 2649,
  [SMALL_STATE(67)] = 2686,
  [SMALL_STATE(68)] = 2723,
  [SMALL_STATE(69)] = 2760,
  [SMALL_STATE(70)] = 2797,
  [SMALL_STATE(71)] = 2834,
  [SMALL_STATE(72)] = 2871,
  [SMALL_STATE(73)] = 2908,
  [SMALL_STATE(74)] = 2945,
  [SMALL_STATE(75)] = 2965,
  [SMALL_STATE(76)] = 2983,
  [SMALL_STATE(77)] = 3001,
  [SMALL_STATE(78)] = 3019,
  [SMALL_STATE(79)] = 3037,
  [SMALL_STATE(80)] = 3057,
  [SMALL_STATE(81)] = 3075,
  [SMALL_STATE(82)] = 3093,
  [SMALL_STATE(83)] = 3111,
  [SMALL_STATE(84)] = 3129,
  [SMALL_STATE(85)] = 3147,
  [SMALL_STATE(86)] = 3164,
  [SMALL_STATE(87)] = 3181,
  [SMALL_STATE(88)] = 3198,
  [SMALL_STATE(89)] = 3215,
  [SMALL_STATE(90)] = 3232,
  [SMALL_STATE(91)] = 3249,
  [SMALL_STATE(92)] = 3266,
  [SMALL_STATE(93)] = 3283,
  [SMALL_STATE(94)] = 3300,
  [SMALL_STATE(95)] = 3317,
  [SMALL_STATE(96)] = 3334,
  [SMALL_STATE(97)] = 3363,
  [SMALL_STATE(98)] = 3378,
  [SMALL_STATE(99)] = 3395,
  [SMALL_STATE(100)] = 3421,
  [SMALL_STATE(101)] = 3442,
  [SMALL_STATE(102)] = 3463,
  [SMALL_STATE(103)] = 3484,
  [SMALL_STATE(104)] = 3505,
  [SMALL_STATE(105)] = 3526,
  [SMALL_STATE(106)] = 3547,
  [SMALL_STATE(107)] = 3568,
  [SMALL_STATE(108)] = 3589,
  [SMALL_STATE(109)] = 3610,
  [SMALL_STATE(110)] = 3631,
  [SMALL_STATE(111)] = 3652,
  [SMALL_STATE(112)] = 3673,
  [SMALL_STATE(113)] = 3686,
  [SMALL_STATE(114)] = 3699,
  [SMALL_STATE(115)] = 3720,
  [SMALL_STATE(116)] = 3741,
  [SMALL_STATE(117)] = 3762,
  [SMALL_STATE(118)] = 3783,
  [SMALL_STATE(119)] = 3804,
  [SMALL_STATE(120)] = 3825,
  [SMALL_STATE(121)] = 3846,
  [SMALL_STATE(122)] = 3867,
  [SMALL_STATE(123)] = 3888,
  [SMALL_STATE(124)] = 3901,
  [SMALL_STATE(125)] = 3922,
  [SMALL_STATE(126)] = 3943,
  [SMALL_STATE(127)] = 3956,
  [SMALL_STATE(128)] = 3977,
  [SMALL_STATE(129)] = 3998,
  [SMALL_STATE(130)] = 4019,
  [SMALL_STATE(131)] = 4032,
  [SMALL_STATE(132)] = 4052,
  [SMALL_STATE(133)] = 4064,
  [SMALL_STATE(134)] = 4082,
  [SMALL_STATE(135)] = 4099,
  [SMALL_STATE(136)] = 4114,
  [SMALL_STATE(137)] = 4125,
  [SMALL_STATE(138)] = 4136,
  [SMALL_STATE(139)] = 4151,
  [SMALL_STATE(140)] = 4162,
  [SMALL_STATE(141)] = 4177,
  [SMALL_STATE(142)] = 4194,
  [SMALL_STATE(143)] = 4209,
  [SMALL_STATE(144)] = 4220,
  [SMALL_STATE(145)] = 4235,
  [SMALL_STATE(146)] = 4250,
  [SMALL_STATE(147)] = 4267,
  [SMALL_STATE(148)] = 4282,
  [SMALL_STATE(149)] = 4299,
  [SMALL_STATE(150)] = 4314,
  [SMALL_STATE(151)] = 4329,
  [SMALL_STATE(152)] = 4344,
  [SMALL_STATE(153)] = 4359,
  [SMALL_STATE(154)] = 4374,
  [SMALL_STATE(155)] = 4391,
  [SMALL_STATE(156)] = 4408,
  [SMALL_STATE(157)] = 4418,
  [SMALL_STATE(158)] = 4432,
  [SMALL_STATE(159)] = 4442,
  [SMALL_STATE(160)] = 4456,
  [SMALL_STATE(161)] = 4466,
  [SMALL_STATE(162)] = 4476,
  [SMALL_STATE(163)] = 4486,
  [SMALL_STATE(164)] = 4496,
  [SMALL_STATE(165)] = 4506,
  [SMALL_STATE(166)] = 4516,
  [SMALL_STATE(167)] = 4526,
  [SMALL_STATE(168)] = 4536,
  [SMALL_STATE(169)] = 4546,
  [SMALL_STATE(170)] = 4556,
  [SMALL_STATE(171)] = 4566,
  [SMALL_STATE(172)] = 4576,
  [SMALL_STATE(173)] = 4590,
  [SMALL_STATE(174)] = 4600,
  [SMALL_STATE(175)] = 4610,
  [SMALL_STATE(176)] = 4620,
  [SMALL_STATE(177)] = 4630,
  [SMALL_STATE(178)] = 4640,
  [SMALL_STATE(179)] = 4654,
  [SMALL_STATE(180)] = 4664,
  [SMALL_STATE(181)] = 4678,
  [SMALL_STATE(182)] = 4692,
  [SMALL_STATE(183)] = 4706,
  [SMALL_STATE(184)] = 4716,
  [SMALL_STATE(185)] = 4730,
  [SMALL_STATE(186)] = 4740,
  [SMALL_STATE(187)] = 4752,
  [SMALL_STATE(188)] = 4762,
  [SMALL_STATE(189)] = 4776,
  [SMALL_STATE(190)] = 4786,
  [SMALL_STATE(191)] = 4800,
  [SMALL_STATE(192)] = 4810,
  [SMALL_STATE(193)] = 4824,
  [SMALL_STATE(194)] = 4834,
  [SMALL_STATE(195)] = 4846,
  [SMALL_STATE(196)] = 4857,
  [SMALL_STATE(197)] = 4868,
  [SMALL_STATE(198)] = 4879,
  [SMALL_STATE(199)] = 4888,
  [SMALL_STATE(200)] = 4899,
  [SMALL_STATE(201)] = 4908,
  [SMALL_STATE(202)] = 4919,
  [SMALL_STATE(203)] = 4928,
  [SMALL_STATE(204)] = 4939,
  [SMALL_STATE(205)] = 4950,
  [SMALL_STATE(206)] = 4961,
  [SMALL_STATE(207)] = 4972,
  [SMALL_STATE(208)] = 4983,
  [SMALL_STATE(209)] = 4994,
  [SMALL_STATE(210)] = 5005,
  [SMALL_STATE(211)] = 5016,
  [SMALL_STATE(212)] = 5027,
  [SMALL_STATE(213)] = 5038,
  [SMALL_STATE(214)] = 5049,
  [SMALL_STATE(215)] = 5060,
  [SMALL_STATE(216)] = 5071,
  [SMALL_STATE(217)] = 5082,
  [SMALL_STATE(218)] = 5093,
  [SMALL_STATE(219)] = 5104,
  [SMALL_STATE(220)] = 5115,
  [SMALL_STATE(221)] = 5126,
  [SMALL_STATE(222)] = 5137,
  [SMALL_STATE(223)] = 5148,
  [SMALL_STATE(224)] = 5159,
  [SMALL_STATE(225)] = 5170,
  [SMALL_STATE(226)] = 5181,
  [SMALL_STATE(227)] = 5192,
  [SMALL_STATE(228)] = 5203,
  [SMALL_STATE(229)] = 5214,
  [SMALL_STATE(230)] = 5225,
  [SMALL_STATE(231)] = 5236,
  [SMALL_STATE(232)] = 5247,
  [SMALL_STATE(233)] = 5256,
  [SMALL_STATE(234)] = 5265,
  [SMALL_STATE(235)] = 5276,
  [SMALL_STATE(236)] = 5287,
  [SMALL_STATE(237)] = 5298,
  [SMALL_STATE(238)] = 5309,
  [SMALL_STATE(239)] = 5320,
  [SMALL_STATE(240)] = 5331,
  [SMALL_STATE(241)] = 5342,
  [SMALL_STATE(242)] = 5351,
  [SMALL_STATE(243)] = 5362,
  [SMALL_STATE(244)] = 5373,
  [SMALL_STATE(245)] = 5384,
  [SMALL_STATE(246)] = 5395,
  [SMALL_STATE(247)] = 5406,
  [SMALL_STATE(248)] = 5417,
  [SMALL_STATE(249)] = 5428,
  [SMALL_STATE(250)] = 5436,
  [SMALL_STATE(251)] = 5444,
  [SMALL_STATE(252)] = 5452,
  [SMALL_STATE(253)] = 5460,
  [SMALL_STATE(254)] = 5468,
  [SMALL_STATE(255)] = 5476,
  [SMALL_STATE(256)] = 5484,
  [SMALL_STATE(257)] = 5492,
  [SMALL_STATE(258)] = 5500,
  [SMALL_STATE(259)] = 5508,
  [SMALL_STATE(260)] = 5516,
  [SMALL_STATE(261)] = 5524,
  [SMALL_STATE(262)] = 5532,
  [SMALL_STATE(263)] = 5540,
  [SMALL_STATE(264)] = 5548,
  [SMALL_STATE(265)] = 5556,
  [SMALL_STATE(266)] = 5564,
  [SMALL_STATE(267)] = 5572,
  [SMALL_STATE(268)] = 5580,
  [SMALL_STATE(269)] = 5588,
  [SMALL_STATE(270)] = 5596,
  [SMALL_STATE(271)] = 5604,
  [SMALL_STATE(272)] = 5612,
  [SMALL_STATE(273)] = 5620,
  [SMALL_STATE(274)] = 5628,
  [SMALL_STATE(275)] = 5636,
  [SMALL_STATE(276)] = 5644,
  [SMALL_STATE(277)] = 5652,
  [SMALL_STATE(278)] = 5660,
  [SMALL_STATE(279)] = 5668,
  [SMALL_STATE(280)] = 5676,
  [SMALL_STATE(281)] = 5684,
  [SMALL_STATE(282)] = 5692,
  [SMALL_STATE(283)] = 5700,
  [SMALL_STATE(284)] = 5708,
  [SMALL_STATE(285)] = 5716,
  [SMALL_STATE(286)] = 5724,
  [SMALL_STATE(287)] = 5732,
  [SMALL_STATE(288)] = 5740,
  [SMALL_STATE(289)] = 5748,
  [SMALL_STATE(290)] = 5756,
  [SMALL_STATE(291)] = 5764,
  [SMALL_STATE(292)] = 5772,
  [SMALL_STATE(293)] = 5780,
  [SMALL_STATE(294)] = 5788,
  [SMALL_STATE(295)] = 5796,
  [SMALL_STATE(296)] = 5804,
  [SMALL_STATE(297)] = 5812,
  [SMALL_STATE(298)] = 5820,
  [SMALL_STATE(299)] = 5828,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(190),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(76),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(77),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(81),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(81),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(84),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(244),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(76),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(77),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(81),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(81),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(84),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(248),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(89),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(92),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(93),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(93),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(95),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f64, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f64, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symstring, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symstring, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 6),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 5),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(135),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(185),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2), SHIFT_REPEAT(96),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat4, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat4, 2), SHIFT_REPEAT(194),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(231),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2), SHIFT_REPEAT(207),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 15),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 14),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 13),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 12),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 11),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 5),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 6),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 7),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 10),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 7),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 9),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 4),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 8),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 8),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identsort, 4),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 5),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 4),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [626] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
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
