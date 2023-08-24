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
#define STATE_COUNT 294
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
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
  sym_num = 54,
  sym_unum = 55,
  anon_sym_NaN = 56,
  aux_sym_f64_token1 = 57,
  anon_sym_inf = 58,
  anon_sym_DASHinf = 59,
  sym_ident = 60,
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
  sym_symstring = 77,
  aux_sym_source_file_repeat1 = 78,
  aux_sym_command_repeat1 = 79,
  aux_sym_command_repeat2 = 80,
  aux_sym_command_repeat3 = 81,
  aux_sym_command_repeat4 = 82,
  aux_sym_command_repeat5 = 83,
  aux_sym_command_repeat6 = 84,
  aux_sym_command_repeat7 = 85,
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
  [sym_type] = "type",
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
  [sym_type] = sym_type,
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
  [11] = 4,
  [12] = 12,
  [13] = 13,
  [14] = 8,
  [15] = 12,
  [16] = 16,
  [17] = 17,
  [18] = 10,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 27,
  [35] = 35,
  [36] = 36,
  [37] = 27,
  [38] = 26,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 39,
  [45] = 33,
  [46] = 42,
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
  [83] = 74,
  [84] = 84,
  [85] = 85,
  [86] = 81,
  [87] = 75,
  [88] = 76,
  [89] = 77,
  [90] = 90,
  [91] = 91,
  [92] = 80,
  [93] = 82,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 82,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 80,
  [107] = 107,
  [108] = 108,
  [109] = 109,
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
  [122] = 122,
  [123] = 123,
  [124] = 121,
  [125] = 125,
  [126] = 126,
  [127] = 125,
  [128] = 118,
  [129] = 129,
  [130] = 122,
  [131] = 76,
  [132] = 81,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 77,
  [141] = 141,
  [142] = 139,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 75,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 84,
  [157] = 157,
  [158] = 158,
  [159] = 94,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 162,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 111,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 90,
  [176] = 85,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 91,
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
  [199] = 193,
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
  [218] = 191,
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
  [258] = 79,
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
  [273] = 263,
  [274] = 78,
  [275] = 275,
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
  [289] = 263,
  [290] = 290,
  [291] = 247,
  [292] = 292,
  [293] = 293,
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == 'N') ADVANCE(338);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == 'N') ADVANCE(338);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
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
          lookahead == '_') ADVANCE(488);
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
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(390);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'd') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'f') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead == 'p') ADVANCE(342);
      if (lookahead == 'q') ADVANCE(475);
      if (lookahead == 'r') ADVANCE(361);
      if (lookahead == 's') ADVANCE(378);
      if (lookahead == 'u') ADVANCE(422);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(488);
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
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(379);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead == 'p') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(422);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(488);
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
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(488);
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
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(488);
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
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '-') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(182);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
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
          lookahead == '_') ADVANCE(488);
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
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(326);
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
      if (lookahead == 'f') ADVANCE(330);
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
      if (lookahead == 'f') ADVANCE(332);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
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
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_rparen);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_datatype);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
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
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_relation);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_ruleset);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_ruleset);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 's') ADVANCE(381);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
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
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_COLONwhen);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_birewrite);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_birewrite);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(450);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
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
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_add_DASHruleset);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_add_DASHruleset);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_calc);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
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
      if (lookahead == '-') ADVANCE(435);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_print_DASHtable);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_print_DASHtable);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_fail);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_fail);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
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
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_panic);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_panic);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_extract);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
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
          lookahead == '_') ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_unum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_NaN);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == 'N') ADVANCE(327);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(373);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(453);
      if (lookahead == 'e') ADVANCE(351);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(347);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(334);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'u') ADVANCE(420);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(463);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(446);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == 'o') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead == 'u') ADVANCE(449);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(424);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(355);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(356);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(471);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'b') ADVANCE(410);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'c') ADVANCE(281);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'c') ADVANCE(402);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'c') ADVANCE(317);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'c') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(380);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'c') ADVANCE(389);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'c') ADVANCE(406);
      if (lookahead == 'p') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'c') ADVANCE(470);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'c') ADVANCE(458);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'c') ADVANCE(461);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'd') ADVANCE(358);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'd') ADVANCE(491);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'd') ADVANCE(366);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'd') ADVANCE(480);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == 'u') ADVANCE(407);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(481);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(261);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(313);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(256);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(306);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(266);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(246);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(269);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(298);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(296);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(290);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(349);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(454);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(452);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(360);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(439);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'i') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(445);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(412);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(467);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(459);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(460);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(483);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'f') ADVANCE(288);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'f') ADVANCE(331);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'f') ADVANCE(333);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'f') ADVANCE(484);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(292);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(376);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(442);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(429);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(387);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(487);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(404);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(425);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(350);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(468);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(469);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(430);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(431);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(432);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'k') ADVANCE(286);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(348);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(304);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(341);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(474);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 'n') ADVANCE(273);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(392);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(375);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(371);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(372);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(380);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead == 'w') ADVANCE(444);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'm') ADVANCE(434);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(353);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(315);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(250);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(258);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(244);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(354);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(385);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(391);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(386);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(396);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(466);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'o') ADVANCE(384);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'o') ADVANCE(438);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'o') ADVANCE(426);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'o') ADVANCE(416);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'o') ADVANCE(417);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'o') ADVANCE(418);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'o') ADVANCE(419);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'p') ADVANCE(294);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'p') ADVANCE(408);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'p') ADVANCE(441);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'p') ADVANCE(368);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'p') ADVANCE(479);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'p') ADVANCE(472);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'r') ADVANCE(485);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'r') ADVANCE(344);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'r') ADVANCE(428);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'r') ADVANCE(362);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'r') ADVANCE(477);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'r') ADVANCE(397);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'r') ADVANCE(455);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'r') ADVANCE(365);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'r') ADVANCE(398);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'r') ADVANCE(345);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 's') ADVANCE(388);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 's') ADVANCE(352);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 's') ADVANCE(393);
      if (lookahead == 't') ADVANCE(337);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 's') ADVANCE(382);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(340);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(271);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(248);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(300);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(302);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(319);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(279);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(283);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(437);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(490);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(440);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(364);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(367);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(369);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(399);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(400);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(401);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 't') ADVANCE(448);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'u') ADVANCE(359);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'u') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'u') ADVANCE(462);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'u') ADVANCE(409);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'u') ADVANCE(456);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'u') ADVANCE(457);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'u') ADVANCE(411);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'w') ADVANCE(447);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'x') ADVANCE(465);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'x') ADVANCE(473);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'y') ADVANCE(277);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'y') ADVANCE(492);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'y') ADVANCE(436);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'z') ADVANCE(370);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'y')) ADVANCE(488);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(451);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(427);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(383);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead == '_') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(488);
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
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 1},
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
  [84] = {.lex_state = 2},
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
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 235},
  [97] = {.lex_state = 235},
  [98] = {.lex_state = 235},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 235},
  [101] = {.lex_state = 235},
  [102] = {.lex_state = 235},
  [103] = {.lex_state = 235},
  [104] = {.lex_state = 235},
  [105] = {.lex_state = 235},
  [106] = {.lex_state = 235},
  [107] = {.lex_state = 235},
  [108] = {.lex_state = 235},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 235},
  [111] = {.lex_state = 235},
  [112] = {.lex_state = 235},
  [113] = {.lex_state = 235},
  [114] = {.lex_state = 235},
  [115] = {.lex_state = 235},
  [116] = {.lex_state = 235},
  [117] = {.lex_state = 235},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 235},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 235},
  [132] = {.lex_state = 235},
  [133] = {.lex_state = 235},
  [134] = {.lex_state = 235},
  [135] = {.lex_state = 235},
  [136] = {.lex_state = 235},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 235},
  [139] = {.lex_state = 235},
  [140] = {.lex_state = 235},
  [141] = {.lex_state = 235},
  [142] = {.lex_state = 235},
  [143] = {.lex_state = 235},
  [144] = {.lex_state = 235},
  [145] = {.lex_state = 235},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 235},
  [150] = {.lex_state = 235},
  [151] = {.lex_state = 235},
  [152] = {.lex_state = 235},
  [153] = {.lex_state = 235},
  [154] = {.lex_state = 235},
  [155] = {.lex_state = 235},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 235},
  [158] = {.lex_state = 235},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 235},
  [161] = {.lex_state = 235},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 235},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 235},
  [167] = {.lex_state = 235},
  [168] = {.lex_state = 235},
  [169] = {.lex_state = 235},
  [170] = {.lex_state = 235},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 235},
  [173] = {.lex_state = 235},
  [174] = {.lex_state = 235},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 235},
  [178] = {.lex_state = 235},
  [179] = {.lex_state = 235},
  [180] = {.lex_state = 235},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 235},
  [183] = {.lex_state = 235},
  [184] = {.lex_state = 235},
  [185] = {.lex_state = 235},
  [186] = {.lex_state = 235},
  [187] = {.lex_state = 235},
  [188] = {.lex_state = 235},
  [189] = {.lex_state = 15},
  [190] = {.lex_state = 235},
  [191] = {.lex_state = 235},
  [192] = {.lex_state = 235},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 235},
  [195] = {.lex_state = 235},
  [196] = {.lex_state = 235},
  [197] = {.lex_state = 235},
  [198] = {.lex_state = 235},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 235},
  [201] = {.lex_state = 235},
  [202] = {.lex_state = 235},
  [203] = {.lex_state = 235},
  [204] = {.lex_state = 235},
  [205] = {.lex_state = 235},
  [206] = {.lex_state = 235},
  [207] = {.lex_state = 235},
  [208] = {.lex_state = 15},
  [209] = {.lex_state = 235},
  [210] = {.lex_state = 235},
  [211] = {.lex_state = 15},
  [212] = {.lex_state = 235},
  [213] = {.lex_state = 15},
  [214] = {.lex_state = 235},
  [215] = {.lex_state = 235},
  [216] = {.lex_state = 235},
  [217] = {.lex_state = 235},
  [218] = {.lex_state = 235},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 235},
  [222] = {.lex_state = 235},
  [223] = {.lex_state = 235},
  [224] = {.lex_state = 235},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 235},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 15},
  [229] = {.lex_state = 15},
  [230] = {.lex_state = 235},
  [231] = {.lex_state = 235},
  [232] = {.lex_state = 15},
  [233] = {.lex_state = 235},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 235},
  [236] = {.lex_state = 235},
  [237] = {.lex_state = 235},
  [238] = {.lex_state = 235},
  [239] = {.lex_state = 235},
  [240] = {.lex_state = 235},
  [241] = {.lex_state = 235},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 235},
  [244] = {.lex_state = 15},
  [245] = {.lex_state = 15},
  [246] = {.lex_state = 235},
  [247] = {.lex_state = 235},
  [248] = {.lex_state = 235},
  [249] = {.lex_state = 235},
  [250] = {.lex_state = 235},
  [251] = {.lex_state = 15},
  [252] = {.lex_state = 15},
  [253] = {.lex_state = 235},
  [254] = {.lex_state = 235},
  [255] = {.lex_state = 15},
  [256] = {.lex_state = 15},
  [257] = {.lex_state = 235},
  [258] = {.lex_state = 235},
  [259] = {.lex_state = 235},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 235},
  [262] = {.lex_state = 15},
  [263] = {.lex_state = 15},
  [264] = {.lex_state = 235},
  [265] = {.lex_state = 235},
  [266] = {.lex_state = 15},
  [267] = {.lex_state = 15},
  [268] = {.lex_state = 235},
  [269] = {.lex_state = 15},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 235},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 15},
  [274] = {.lex_state = 235},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 15},
  [277] = {.lex_state = 15},
  [278] = {.lex_state = 235},
  [279] = {.lex_state = 235},
  [280] = {.lex_state = 235},
  [281] = {.lex_state = 235},
  [282] = {.lex_state = 235},
  [283] = {.lex_state = 235},
  [284] = {.lex_state = 15},
  [285] = {.lex_state = 15},
  [286] = {.lex_state = 15},
  [287] = {.lex_state = 15},
  [288] = {.lex_state = 15},
  [289] = {.lex_state = 15},
  [290] = {.lex_state = 15},
  [291] = {.lex_state = 235},
  [292] = {.lex_state = 15},
  [293] = {.lex_state = 0},
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
    [sym_source_file] = STATE(225),
    [sym_command] = STATE(101),
    [sym_nonletaction] = STATE(180),
    [sym_callexpr] = STATE(182),
    [aux_sym_source_file_repeat1] = STATE(101),
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
  [94] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [137] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [180] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [223] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [266] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(3), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [309] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(4), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [352] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(97), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [395] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(15), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [438] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [481] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [524] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [567] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(11), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [610] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [653] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(5), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [696] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(13), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [739] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(12), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [782] = 12,
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
      sym_rparen,
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [825] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(9), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [868] = 12,
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
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(20), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [911] = 11,
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
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [951] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(129), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(29), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [991] = 12,
    ACTIONS(131), 1,
      sym_lparen,
    ACTIONS(133), 1,
      anon_sym_COLONvariants,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    STATE(258), 1,
      sym_expr,
    STATE(264), 1,
      sym_fact,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1033] = 11,
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
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1073] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(145), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1113] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(147), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(26), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1153] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(149), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1193] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(151), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1233] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(153), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1273] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(155), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(30), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1313] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(157), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1353] = 11,
    ACTIONS(159), 1,
      sym_lparen,
    ACTIONS(162), 1,
      sym_rparen,
    ACTIONS(164), 1,
      sym_num,
    ACTIONS(170), 1,
      aux_sym_f64_token1,
    ACTIONS(173), 1,
      sym_ident,
    ACTIONS(176), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(167), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1393] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(179), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1433] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(181), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(32), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1473] = 11,
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
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1513] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(183), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(28), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1553] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(185), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1593] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    STATE(45), 1,
      aux_sym_command_repeat2,
    STATE(83), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1632] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(22), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1669] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(36), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1706] = 10,
    ACTIONS(187), 1,
      sym_lparen,
    ACTIONS(189), 1,
      sym_num,
    ACTIONS(193), 1,
      aux_sym_f64_token1,
    ACTIONS(195), 1,
      sym_ident,
    ACTIONS(197), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(44), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(87), 2,
      sym_literal,
      sym_callexpr,
    STATE(89), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(191), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1743] = 11,
    ACTIONS(131), 1,
      sym_lparen,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    STATE(235), 1,
      sym_fact,
    STATE(258), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1782] = 11,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    STATE(45), 1,
      aux_sym_command_repeat2,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1821] = 10,
    ACTIONS(199), 1,
      sym_lparen,
    ACTIONS(202), 1,
      sym_num,
    ACTIONS(208), 1,
      aux_sym_f64_token1,
    ACTIONS(211), 1,
      sym_ident,
    ACTIONS(214), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(45), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(87), 2,
      sym_literal,
      sym_callexpr,
    STATE(89), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(205), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1858] = 10,
    ACTIONS(187), 1,
      sym_lparen,
    ACTIONS(189), 1,
      sym_num,
    ACTIONS(193), 1,
      aux_sym_f64_token1,
    ACTIONS(195), 1,
      sym_ident,
    ACTIONS(197), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(39), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(87), 2,
      sym_literal,
      sym_callexpr,
    STATE(89), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(191), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1895] = 11,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    ACTIONS(219), 1,
      sym_rparen,
    STATE(243), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1934] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(25), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1971] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(268), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2007] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(279), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2043] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(253), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2079] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(241), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2115] = 10,
    ACTIONS(69), 1,
      sym_num,
    ACTIONS(73), 1,
      aux_sym_f64_token1,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_lparen,
    STATE(47), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(75), 2,
      sym_literal,
      sym_callexpr,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(71), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2151] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(223), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2187] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(205), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2223] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(248), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2259] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(246), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2295] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(203), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2331] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(221), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2367] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(249), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2403] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(150), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2439] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(238), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2475] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(210), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2511] = 10,
    ACTIONS(187), 1,
      sym_lparen,
    ACTIONS(189), 1,
      sym_num,
    ACTIONS(193), 1,
      aux_sym_f64_token1,
    ACTIONS(195), 1,
      sym_ident,
    ACTIONS(197), 1,
      sym_string,
    STATE(71), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(87), 2,
      sym_literal,
      sym_callexpr,
    STATE(89), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(191), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2547] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(230), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2583] = 10,
    ACTIONS(187), 1,
      sym_lparen,
    ACTIONS(189), 1,
      sym_num,
    ACTIONS(193), 1,
      aux_sym_f64_token1,
    ACTIONS(195), 1,
      sym_ident,
    ACTIONS(197), 1,
      sym_string,
    STATE(61), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(87), 2,
      sym_literal,
      sym_callexpr,
    STATE(89), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(191), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2619] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(224), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2655] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(214), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2691] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(187), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2727] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(226), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2763] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(243), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2799] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(206), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2835] = 10,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(139), 1,
      aux_sym_f64_token1,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_lparen,
    STATE(209), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(140), 2,
      sym_f64,
      sym_symstring,
    STATE(149), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(137), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2871] = 4,
    ACTIONS(223), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(225), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(221), 6,
      sym_lparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2891] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(229), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(227), 7,
      sym_lparen,
      sym_rparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2909] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(233), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(231), 7,
      sym_lparen,
      sym_rparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2927] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(237), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(235), 7,
      sym_lparen,
      sym_rparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2945] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(241), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(239), 7,
      sym_lparen,
      sym_rparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2963] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(245), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(243), 7,
      sym_lparen,
      sym_rparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2981] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(249), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(247), 7,
      sym_lparen,
      sym_rparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2999] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(253), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(251), 7,
      sym_lparen,
      sym_rparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3017] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(257), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(255), 7,
      sym_lparen,
      sym_rparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3035] = 4,
    ACTIONS(259), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(225), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(221), 6,
      sym_lparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3055] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(263), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(261), 6,
      sym_lparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3072] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(267), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(265), 6,
      sym_lparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3089] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(253), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(251), 6,
      sym_lparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3106] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(229), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(227), 6,
      sym_lparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3123] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(233), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(231), 6,
      sym_lparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3140] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(237), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(235), 6,
      sym_lparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3157] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(271), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(269), 6,
      sym_lparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3174] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(275), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(273), 6,
      sym_lparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3191] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(249), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(247), 6,
      sym_lparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3208] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(257), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(255), 6,
      sym_lparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3225] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(279), 2,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(277), 6,
      sym_lparen,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3242] = 8,
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
    ACTIONS(281), 1,
      anon_sym_let,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3268] = 8,
    ACTIONS(283), 1,
      sym_rparen,
    ACTIONS(285), 1,
      anon_sym_COLONunextractable,
    ACTIONS(287), 1,
      anon_sym_COLONon_merge,
    ACTIONS(289), 1,
      anon_sym_COLONmerge,
    ACTIONS(291), 1,
      anon_sym_COLONdefault,
    ACTIONS(293), 1,
      anon_sym_COLONcost,
    STATE(117), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3294] = 6,
    ACTIONS(295), 1,
      sym_lparen,
    ACTIONS(297), 1,
      sym_rparen,
    STATE(182), 1,
      sym_callexpr,
    STATE(204), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(103), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3315] = 2,
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
  [3328] = 6,
    ACTIONS(293), 1,
      anon_sym_COLONcost,
    ACTIONS(299), 1,
      sym_rparen,
    ACTIONS(301), 1,
      sym_ident,
    STATE(237), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(123), 2,
      sym_type,
      aux_sym_command_repeat4,
  [3349] = 6,
    ACTIONS(295), 1,
      sym_lparen,
    ACTIONS(297), 1,
      sym_rparen,
    STATE(182), 1,
      sym_callexpr,
    STATE(204), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(104), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3370] = 6,
    ACTIONS(7), 1,
      sym_lparen,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    STATE(180), 1,
      sym_nonletaction,
    STATE(182), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [3391] = 6,
    ACTIONS(295), 1,
      sym_lparen,
    ACTIONS(305), 1,
      sym_rparen,
    STATE(182), 1,
      sym_callexpr,
    STATE(204), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(104), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3412] = 6,
    ACTIONS(295), 1,
      sym_lparen,
    ACTIONS(307), 1,
      sym_rparen,
    STATE(182), 1,
      sym_callexpr,
    STATE(204), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(104), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3433] = 6,
    ACTIONS(309), 1,
      sym_lparen,
    ACTIONS(312), 1,
      sym_rparen,
    STATE(182), 1,
      sym_callexpr,
    STATE(204), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(104), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3454] = 6,
    ACTIONS(295), 1,
      sym_lparen,
    ACTIONS(314), 1,
      sym_rparen,
    STATE(182), 1,
      sym_callexpr,
    STATE(204), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(104), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3475] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(249), 6,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [3488] = 6,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 1,
      sym_lparen,
    STATE(180), 1,
      sym_nonletaction,
    STATE(182), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [3509] = 6,
    ACTIONS(295), 1,
      sym_lparen,
    ACTIONS(314), 1,
      sym_rparen,
    STATE(182), 1,
      sym_callexpr,
    STATE(204), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(100), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3530] = 6,
    ACTIONS(293), 1,
      anon_sym_COLONcost,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(321), 1,
      sym_rparen,
    STATE(222), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(99), 2,
      sym_type,
      aux_sym_command_repeat4,
  [3551] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(323), 6,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [3564] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(325), 6,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [3577] = 2,
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
  [3590] = 6,
    ACTIONS(295), 1,
      sym_lparen,
    ACTIONS(329), 1,
      sym_rparen,
    STATE(182), 1,
      sym_callexpr,
    STATE(204), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(105), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3611] = 6,
    ACTIONS(295), 1,
      sym_lparen,
    ACTIONS(331), 1,
      sym_rparen,
    STATE(182), 1,
      sym_callexpr,
    STATE(204), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(115), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3632] = 6,
    ACTIONS(295), 1,
      sym_lparen,
    ACTIONS(333), 1,
      sym_rparen,
    STATE(182), 1,
      sym_callexpr,
    STATE(204), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(104), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3653] = 6,
    ACTIONS(295), 1,
      sym_lparen,
    ACTIONS(333), 1,
      sym_rparen,
    STATE(182), 1,
      sym_callexpr,
    STATE(204), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(102), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3674] = 6,
    ACTIONS(335), 1,
      sym_rparen,
    ACTIONS(337), 1,
      anon_sym_COLONunextractable,
    ACTIONS(339), 1,
      anon_sym_COLONon_merge,
    ACTIONS(341), 1,
      anon_sym_COLONmerge,
    ACTIONS(343), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3694] = 5,
    ACTIONS(109), 1,
      sym_rparen,
    ACTIONS(345), 1,
      sym_lparen,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(121), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3712] = 5,
    ACTIONS(123), 1,
      sym_rparen,
    ACTIONS(345), 1,
      sym_lparen,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(126), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3730] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(349), 5,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
  [3742] = 5,
    ACTIONS(115), 1,
      sym_rparen,
    ACTIONS(345), 1,
      sym_lparen,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(126), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3760] = 5,
    ACTIONS(345), 1,
      sym_lparen,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(351), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(125), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3778] = 5,
    ACTIONS(353), 1,
      sym_rparen,
    ACTIONS(355), 1,
      anon_sym_COLONcost,
    ACTIONS(357), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(123), 2,
      sym_type,
      aux_sym_command_repeat4,
  [3796] = 5,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(345), 1,
      sym_lparen,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(126), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3814] = 5,
    ACTIONS(109), 1,
      sym_rparen,
    ACTIONS(345), 1,
      sym_lparen,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(126), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3832] = 5,
    ACTIONS(360), 1,
      sym_lparen,
    ACTIONS(363), 1,
      sym_rparen,
    ACTIONS(365), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(126), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3850] = 5,
    ACTIONS(119), 1,
      sym_rparen,
    ACTIONS(345), 1,
      sym_lparen,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(126), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3868] = 5,
    ACTIONS(119), 1,
      sym_rparen,
    ACTIONS(345), 1,
      sym_lparen,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(124), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3886] = 5,
    ACTIONS(125), 1,
      sym_rparen,
    ACTIONS(345), 1,
      sym_lparen,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(119), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3904] = 5,
    ACTIONS(345), 1,
      sym_lparen,
    ACTIONS(347), 1,
      sym_ident,
    ACTIONS(368), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(127), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3922] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(233), 4,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [3933] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(253), 4,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [3944] = 5,
    ACTIONS(7), 1,
      sym_lparen,
    STATE(180), 1,
      sym_nonletaction,
    STATE(182), 1,
      sym_callexpr,
    STATE(264), 1,
      sym_command,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3961] = 4,
    ACTIONS(370), 1,
      sym_lparen,
    ACTIONS(372), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(135), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3976] = 4,
    ACTIONS(374), 1,
      sym_lparen,
    ACTIONS(377), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(135), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3991] = 4,
    ACTIONS(379), 1,
      sym_lparen,
    ACTIONS(382), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(136), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [4006] = 4,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(384), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(123), 2,
      sym_type,
      aux_sym_command_repeat4,
  [4021] = 4,
    ACTIONS(283), 1,
      sym_rparen,
    ACTIONS(386), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(136), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [4036] = 4,
    ACTIONS(388), 1,
      anon_sym_run,
    ACTIONS(392), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(390), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [4051] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(237), 4,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [4062] = 5,
    ACTIONS(335), 1,
      sym_rparen,
    ACTIONS(339), 1,
      anon_sym_COLONon_merge,
    ACTIONS(341), 1,
      anon_sym_COLONmerge,
    ACTIONS(343), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4079] = 4,
    ACTIONS(394), 1,
      anon_sym_run,
    ACTIONS(398), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(396), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [4094] = 4,
    ACTIONS(370), 1,
      sym_lparen,
    ACTIONS(400), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(134), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [4109] = 5,
    ACTIONS(402), 1,
      sym_rparen,
    ACTIONS(404), 1,
      anon_sym_COLONon_merge,
    ACTIONS(406), 1,
      anon_sym_COLONmerge,
    ACTIONS(408), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4126] = 4,
    ACTIONS(386), 1,
      sym_lparen,
    ACTIONS(410), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(138), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [4141] = 4,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(412), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(137), 2,
      sym_type,
      aux_sym_command_repeat4,
  [4156] = 4,
    ACTIONS(155), 1,
      sym_rparen,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(123), 2,
      sym_type,
      aux_sym_command_repeat4,
  [4171] = 4,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(414), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(147), 2,
      sym_type,
      aux_sym_command_repeat4,
  [4186] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(229), 4,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [4197] = 4,
    ACTIONS(283), 1,
      sym_rparen,
    ACTIONS(416), 1,
      anon_sym_COLONruleset,
    ACTIONS(418), 1,
      anon_sym_COLONwhen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4211] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(420), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4221] = 4,
    ACTIONS(422), 1,
      sym_rparen,
    ACTIONS(424), 1,
      anon_sym_COLONruleset,
    ACTIONS(426), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4235] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(428), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4245] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(430), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4255] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(432), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4265] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(261), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [4275] = 4,
    ACTIONS(402), 1,
      sym_rparen,
    ACTIONS(434), 1,
      anon_sym_COLONruleset,
    ACTIONS(436), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4289] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(438), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4299] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(277), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [4309] = 4,
    ACTIONS(440), 1,
      sym_rparen,
    ACTIONS(442), 1,
      anon_sym_COLONmerge,
    ACTIONS(444), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4323] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(446), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4333] = 4,
    ACTIONS(351), 1,
      sym_rparen,
    ACTIONS(448), 1,
      anon_sym_COLONuntil,
    ACTIONS(450), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4347] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(452), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4357] = 4,
    ACTIONS(454), 1,
      sym_lparen,
    ACTIONS(456), 1,
      sym_ident,
    STATE(51), 1,
      sym_schedule,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4371] = 4,
    ACTIONS(368), 1,
      sym_rparen,
    ACTIONS(458), 1,
      anon_sym_COLONuntil,
    ACTIONS(460), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4385] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(462), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4395] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(464), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4405] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(466), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4415] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(468), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4425] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(470), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4435] = 3,
    ACTIONS(325), 1,
      anon_sym_COLONcost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(472), 2,
      sym_rparen,
      sym_ident,
  [4447] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(474), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4457] = 4,
    ACTIONS(476), 1,
      sym_rparen,
    ACTIONS(478), 1,
      anon_sym_COLONmerge,
    ACTIONS(480), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4471] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(482), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4481] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(269), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [4491] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(265), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [4501] = 4,
    ACTIONS(476), 1,
      sym_rparen,
    ACTIONS(484), 1,
      anon_sym_COLONruleset,
    ACTIONS(486), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4515] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(488), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4525] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(490), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4535] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(492), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4545] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(273), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [4555] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(494), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4565] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(496), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4575] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(498), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4585] = 4,
    ACTIONS(422), 1,
      sym_rparen,
    ACTIONS(500), 1,
      anon_sym_COLONmerge,
    ACTIONS(502), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4599] = 4,
    ACTIONS(504), 1,
      sym_rparen,
    ACTIONS(506), 1,
      anon_sym_COLONmerge,
    ACTIONS(508), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4613] = 3,
    ACTIONS(504), 1,
      sym_rparen,
    ACTIONS(508), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4624] = 3,
    ACTIONS(440), 1,
      sym_rparen,
    ACTIONS(510), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4635] = 3,
    ACTIONS(512), 1,
      sym_unum,
    ACTIONS(514), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4646] = 3,
    ACTIONS(476), 1,
      sym_rparen,
    ACTIONS(516), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4657] = 3,
    ACTIONS(518), 1,
      sym_rparen,
    ACTIONS(520), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4668] = 3,
    ACTIONS(522), 1,
      sym_rparen,
    ACTIONS(524), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4679] = 3,
    ACTIONS(526), 1,
      anon_sym_EQ,
    ACTIONS(528), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4690] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(530), 2,
      sym_lparen,
      sym_rparen,
  [4699] = 3,
    ACTIONS(410), 1,
      sym_rparen,
    ACTIONS(532), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4710] = 3,
    ACTIONS(534), 1,
      sym_lparen,
    STATE(96), 1,
      sym_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4721] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(536), 2,
      sym_lparen,
      sym_rparen,
  [4730] = 3,
    ACTIONS(410), 1,
      sym_rparen,
    ACTIONS(538), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4741] = 3,
    ACTIONS(63), 1,
      sym_ident,
    ACTIONS(540), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4752] = 3,
    ACTIONS(410), 1,
      sym_rparen,
    ACTIONS(542), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4763] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(544), 2,
      sym_lparen,
      sym_rparen,
  [4772] = 3,
    ACTIONS(283), 1,
      sym_rparen,
    ACTIONS(546), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4783] = 3,
    ACTIONS(548), 1,
      sym_rparen,
    ACTIONS(550), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4794] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(552), 2,
      sym_lparen,
      sym_rparen,
  [4803] = 3,
    ACTIONS(422), 1,
      sym_rparen,
    ACTIONS(502), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4814] = 3,
    ACTIONS(402), 1,
      sym_rparen,
    ACTIONS(408), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4825] = 3,
    ACTIONS(422), 1,
      sym_rparen,
    ACTIONS(426), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4836] = 3,
    ACTIONS(554), 1,
      sym_ident,
    STATE(112), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4847] = 3,
    ACTIONS(476), 1,
      sym_rparen,
    ACTIONS(480), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4858] = 3,
    ACTIONS(556), 1,
      sym_rparen,
    ACTIONS(558), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4869] = 3,
    ACTIONS(554), 1,
      sym_ident,
    STATE(282), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4880] = 3,
    ACTIONS(422), 1,
      sym_rparen,
    ACTIONS(560), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4891] = 3,
    ACTIONS(554), 1,
      sym_ident,
    STATE(110), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4902] = 3,
    ACTIONS(440), 1,
      sym_rparen,
    ACTIONS(444), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4913] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(562), 2,
      sym_lparen,
      sym_rparen,
  [4922] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(564), 2,
      sym_lparen,
      sym_rparen,
  [4931] = 3,
    ACTIONS(504), 1,
      sym_rparen,
    ACTIONS(566), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4942] = 3,
    ACTIONS(568), 1,
      sym_rparen,
    ACTIONS(570), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4953] = 2,
    ACTIONS(572), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4961] = 2,
    ACTIONS(542), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4969] = 2,
    ACTIONS(402), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4977] = 2,
    ACTIONS(574), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4985] = 2,
    ACTIONS(576), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4993] = 2,
    ACTIONS(504), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5001] = 2,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5009] = 2,
    ACTIONS(580), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5017] = 2,
    ACTIONS(582), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5025] = 2,
    ACTIONS(584), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5033] = 2,
    ACTIONS(582), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5041] = 2,
    ACTIONS(440), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5049] = 2,
    ACTIONS(586), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5057] = 2,
    ACTIONS(588), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5065] = 2,
    ACTIONS(590), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5073] = 2,
    ACTIONS(592), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5081] = 2,
    ACTIONS(335), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5089] = 2,
    ACTIONS(594), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5097] = 2,
    ACTIONS(596), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5105] = 2,
    ACTIONS(556), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5113] = 2,
    ACTIONS(598), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5121] = 2,
    ACTIONS(600), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5129] = 2,
    ACTIONS(548), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5137] = 2,
    ACTIONS(602), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5145] = 2,
    ACTIONS(604), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5153] = 2,
    ACTIONS(606), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5161] = 2,
    ACTIONS(608), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5169] = 2,
    ACTIONS(610), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5177] = 2,
    ACTIONS(612), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5185] = 2,
    ACTIONS(422), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5193] = 2,
    ACTIONS(614), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5201] = 2,
    ACTIONS(616), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5209] = 2,
    ACTIONS(618), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5217] = 2,
    ACTIONS(620), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5225] = 2,
    ACTIONS(283), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5233] = 2,
    ACTIONS(622), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5241] = 2,
    ACTIONS(624), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5249] = 2,
    ACTIONS(602), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5257] = 2,
    ACTIONS(626), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5265] = 2,
    ACTIONS(245), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5273] = 2,
    ACTIONS(628), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5281] = 2,
    ACTIONS(630), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5289] = 2,
    ACTIONS(632), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5297] = 2,
    ACTIONS(634), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5305] = 2,
    ACTIONS(636), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5313] = 2,
    ACTIONS(410), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5321] = 2,
    ACTIONS(638), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5329] = 2,
    ACTIONS(542), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5337] = 2,
    ACTIONS(640), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5345] = 2,
    ACTIONS(642), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5353] = 2,
    ACTIONS(644), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5361] = 2,
    ACTIONS(646), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5369] = 2,
    ACTIONS(648), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5377] = 2,
    ACTIONS(524), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5385] = 2,
    ACTIONS(650), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5393] = 2,
    ACTIONS(241), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5401] = 2,
    ACTIONS(652), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5409] = 2,
    ACTIONS(654), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5417] = 2,
    ACTIONS(656), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5425] = 2,
    ACTIONS(658), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5433] = 2,
    ACTIONS(476), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5441] = 2,
    ACTIONS(522), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5449] = 2,
    ACTIONS(660), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5457] = 2,
    ACTIONS(662), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5465] = 2,
    ACTIONS(664), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5473] = 2,
    ACTIONS(524), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5481] = 2,
    ACTIONS(666), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5489] = 2,
    ACTIONS(668), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5497] = 2,
    ACTIONS(670), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5505] = 2,
    ACTIONS(672), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5513] = 2,
    ACTIONS(674), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5521] = 2,
    ACTIONS(676), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5529] = 2,
    ACTIONS(678), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5537] = 2,
    ACTIONS(680), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5545] = 2,
    ACTIONS(682), 1,
      anon_sym_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 137,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 223,
  [SMALL_STATE(7)] = 266,
  [SMALL_STATE(8)] = 309,
  [SMALL_STATE(9)] = 352,
  [SMALL_STATE(10)] = 395,
  [SMALL_STATE(11)] = 438,
  [SMALL_STATE(12)] = 481,
  [SMALL_STATE(13)] = 524,
  [SMALL_STATE(14)] = 567,
  [SMALL_STATE(15)] = 610,
  [SMALL_STATE(16)] = 653,
  [SMALL_STATE(17)] = 696,
  [SMALL_STATE(18)] = 739,
  [SMALL_STATE(19)] = 782,
  [SMALL_STATE(20)] = 825,
  [SMALL_STATE(21)] = 868,
  [SMALL_STATE(22)] = 911,
  [SMALL_STATE(23)] = 951,
  [SMALL_STATE(24)] = 991,
  [SMALL_STATE(25)] = 1033,
  [SMALL_STATE(26)] = 1073,
  [SMALL_STATE(27)] = 1113,
  [SMALL_STATE(28)] = 1153,
  [SMALL_STATE(29)] = 1193,
  [SMALL_STATE(30)] = 1233,
  [SMALL_STATE(31)] = 1273,
  [SMALL_STATE(32)] = 1313,
  [SMALL_STATE(33)] = 1353,
  [SMALL_STATE(34)] = 1393,
  [SMALL_STATE(35)] = 1433,
  [SMALL_STATE(36)] = 1473,
  [SMALL_STATE(37)] = 1513,
  [SMALL_STATE(38)] = 1553,
  [SMALL_STATE(39)] = 1593,
  [SMALL_STATE(40)] = 1632,
  [SMALL_STATE(41)] = 1669,
  [SMALL_STATE(42)] = 1706,
  [SMALL_STATE(43)] = 1743,
  [SMALL_STATE(44)] = 1782,
  [SMALL_STATE(45)] = 1821,
  [SMALL_STATE(46)] = 1858,
  [SMALL_STATE(47)] = 1895,
  [SMALL_STATE(48)] = 1934,
  [SMALL_STATE(49)] = 1971,
  [SMALL_STATE(50)] = 2007,
  [SMALL_STATE(51)] = 2043,
  [SMALL_STATE(52)] = 2079,
  [SMALL_STATE(53)] = 2115,
  [SMALL_STATE(54)] = 2151,
  [SMALL_STATE(55)] = 2187,
  [SMALL_STATE(56)] = 2223,
  [SMALL_STATE(57)] = 2259,
  [SMALL_STATE(58)] = 2295,
  [SMALL_STATE(59)] = 2331,
  [SMALL_STATE(60)] = 2367,
  [SMALL_STATE(61)] = 2403,
  [SMALL_STATE(62)] = 2439,
  [SMALL_STATE(63)] = 2475,
  [SMALL_STATE(64)] = 2511,
  [SMALL_STATE(65)] = 2547,
  [SMALL_STATE(66)] = 2583,
  [SMALL_STATE(67)] = 2619,
  [SMALL_STATE(68)] = 2655,
  [SMALL_STATE(69)] = 2691,
  [SMALL_STATE(70)] = 2727,
  [SMALL_STATE(71)] = 2763,
  [SMALL_STATE(72)] = 2799,
  [SMALL_STATE(73)] = 2835,
  [SMALL_STATE(74)] = 2871,
  [SMALL_STATE(75)] = 2891,
  [SMALL_STATE(76)] = 2909,
  [SMALL_STATE(77)] = 2927,
  [SMALL_STATE(78)] = 2945,
  [SMALL_STATE(79)] = 2963,
  [SMALL_STATE(80)] = 2981,
  [SMALL_STATE(81)] = 2999,
  [SMALL_STATE(82)] = 3017,
  [SMALL_STATE(83)] = 3035,
  [SMALL_STATE(84)] = 3055,
  [SMALL_STATE(85)] = 3072,
  [SMALL_STATE(86)] = 3089,
  [SMALL_STATE(87)] = 3106,
  [SMALL_STATE(88)] = 3123,
  [SMALL_STATE(89)] = 3140,
  [SMALL_STATE(90)] = 3157,
  [SMALL_STATE(91)] = 3174,
  [SMALL_STATE(92)] = 3191,
  [SMALL_STATE(93)] = 3208,
  [SMALL_STATE(94)] = 3225,
  [SMALL_STATE(95)] = 3242,
  [SMALL_STATE(96)] = 3268,
  [SMALL_STATE(97)] = 3294,
  [SMALL_STATE(98)] = 3315,
  [SMALL_STATE(99)] = 3328,
  [SMALL_STATE(100)] = 3349,
  [SMALL_STATE(101)] = 3370,
  [SMALL_STATE(102)] = 3391,
  [SMALL_STATE(103)] = 3412,
  [SMALL_STATE(104)] = 3433,
  [SMALL_STATE(105)] = 3454,
  [SMALL_STATE(106)] = 3475,
  [SMALL_STATE(107)] = 3488,
  [SMALL_STATE(108)] = 3509,
  [SMALL_STATE(109)] = 3530,
  [SMALL_STATE(110)] = 3551,
  [SMALL_STATE(111)] = 3564,
  [SMALL_STATE(112)] = 3577,
  [SMALL_STATE(113)] = 3590,
  [SMALL_STATE(114)] = 3611,
  [SMALL_STATE(115)] = 3632,
  [SMALL_STATE(116)] = 3653,
  [SMALL_STATE(117)] = 3674,
  [SMALL_STATE(118)] = 3694,
  [SMALL_STATE(119)] = 3712,
  [SMALL_STATE(120)] = 3730,
  [SMALL_STATE(121)] = 3742,
  [SMALL_STATE(122)] = 3760,
  [SMALL_STATE(123)] = 3778,
  [SMALL_STATE(124)] = 3796,
  [SMALL_STATE(125)] = 3814,
  [SMALL_STATE(126)] = 3832,
  [SMALL_STATE(127)] = 3850,
  [SMALL_STATE(128)] = 3868,
  [SMALL_STATE(129)] = 3886,
  [SMALL_STATE(130)] = 3904,
  [SMALL_STATE(131)] = 3922,
  [SMALL_STATE(132)] = 3933,
  [SMALL_STATE(133)] = 3944,
  [SMALL_STATE(134)] = 3961,
  [SMALL_STATE(135)] = 3976,
  [SMALL_STATE(136)] = 3991,
  [SMALL_STATE(137)] = 4006,
  [SMALL_STATE(138)] = 4021,
  [SMALL_STATE(139)] = 4036,
  [SMALL_STATE(140)] = 4051,
  [SMALL_STATE(141)] = 4062,
  [SMALL_STATE(142)] = 4079,
  [SMALL_STATE(143)] = 4094,
  [SMALL_STATE(144)] = 4109,
  [SMALL_STATE(145)] = 4126,
  [SMALL_STATE(146)] = 4141,
  [SMALL_STATE(147)] = 4156,
  [SMALL_STATE(148)] = 4171,
  [SMALL_STATE(149)] = 4186,
  [SMALL_STATE(150)] = 4197,
  [SMALL_STATE(151)] = 4211,
  [SMALL_STATE(152)] = 4221,
  [SMALL_STATE(153)] = 4235,
  [SMALL_STATE(154)] = 4245,
  [SMALL_STATE(155)] = 4255,
  [SMALL_STATE(156)] = 4265,
  [SMALL_STATE(157)] = 4275,
  [SMALL_STATE(158)] = 4289,
  [SMALL_STATE(159)] = 4299,
  [SMALL_STATE(160)] = 4309,
  [SMALL_STATE(161)] = 4323,
  [SMALL_STATE(162)] = 4333,
  [SMALL_STATE(163)] = 4347,
  [SMALL_STATE(164)] = 4357,
  [SMALL_STATE(165)] = 4371,
  [SMALL_STATE(166)] = 4385,
  [SMALL_STATE(167)] = 4395,
  [SMALL_STATE(168)] = 4405,
  [SMALL_STATE(169)] = 4415,
  [SMALL_STATE(170)] = 4425,
  [SMALL_STATE(171)] = 4435,
  [SMALL_STATE(172)] = 4447,
  [SMALL_STATE(173)] = 4457,
  [SMALL_STATE(174)] = 4471,
  [SMALL_STATE(175)] = 4481,
  [SMALL_STATE(176)] = 4491,
  [SMALL_STATE(177)] = 4501,
  [SMALL_STATE(178)] = 4515,
  [SMALL_STATE(179)] = 4525,
  [SMALL_STATE(180)] = 4535,
  [SMALL_STATE(181)] = 4545,
  [SMALL_STATE(182)] = 4555,
  [SMALL_STATE(183)] = 4565,
  [SMALL_STATE(184)] = 4575,
  [SMALL_STATE(185)] = 4585,
  [SMALL_STATE(186)] = 4599,
  [SMALL_STATE(187)] = 4613,
  [SMALL_STATE(188)] = 4624,
  [SMALL_STATE(189)] = 4635,
  [SMALL_STATE(190)] = 4646,
  [SMALL_STATE(191)] = 4657,
  [SMALL_STATE(192)] = 4668,
  [SMALL_STATE(193)] = 4679,
  [SMALL_STATE(194)] = 4690,
  [SMALL_STATE(195)] = 4699,
  [SMALL_STATE(196)] = 4710,
  [SMALL_STATE(197)] = 4721,
  [SMALL_STATE(198)] = 4730,
  [SMALL_STATE(199)] = 4741,
  [SMALL_STATE(200)] = 4752,
  [SMALL_STATE(201)] = 4763,
  [SMALL_STATE(202)] = 4772,
  [SMALL_STATE(203)] = 4783,
  [SMALL_STATE(204)] = 4794,
  [SMALL_STATE(205)] = 4803,
  [SMALL_STATE(206)] = 4814,
  [SMALL_STATE(207)] = 4825,
  [SMALL_STATE(208)] = 4836,
  [SMALL_STATE(209)] = 4847,
  [SMALL_STATE(210)] = 4858,
  [SMALL_STATE(211)] = 4869,
  [SMALL_STATE(212)] = 4880,
  [SMALL_STATE(213)] = 4891,
  [SMALL_STATE(214)] = 4902,
  [SMALL_STATE(215)] = 4913,
  [SMALL_STATE(216)] = 4922,
  [SMALL_STATE(217)] = 4931,
  [SMALL_STATE(218)] = 4942,
  [SMALL_STATE(219)] = 4953,
  [SMALL_STATE(220)] = 4961,
  [SMALL_STATE(221)] = 4969,
  [SMALL_STATE(222)] = 4977,
  [SMALL_STATE(223)] = 4985,
  [SMALL_STATE(224)] = 4993,
  [SMALL_STATE(225)] = 5001,
  [SMALL_STATE(226)] = 5009,
  [SMALL_STATE(227)] = 5017,
  [SMALL_STATE(228)] = 5025,
  [SMALL_STATE(229)] = 5033,
  [SMALL_STATE(230)] = 5041,
  [SMALL_STATE(231)] = 5049,
  [SMALL_STATE(232)] = 5057,
  [SMALL_STATE(233)] = 5065,
  [SMALL_STATE(234)] = 5073,
  [SMALL_STATE(235)] = 5081,
  [SMALL_STATE(236)] = 5089,
  [SMALL_STATE(237)] = 5097,
  [SMALL_STATE(238)] = 5105,
  [SMALL_STATE(239)] = 5113,
  [SMALL_STATE(240)] = 5121,
  [SMALL_STATE(241)] = 5129,
  [SMALL_STATE(242)] = 5137,
  [SMALL_STATE(243)] = 5145,
  [SMALL_STATE(244)] = 5153,
  [SMALL_STATE(245)] = 5161,
  [SMALL_STATE(246)] = 5169,
  [SMALL_STATE(247)] = 5177,
  [SMALL_STATE(248)] = 5185,
  [SMALL_STATE(249)] = 5193,
  [SMALL_STATE(250)] = 5201,
  [SMALL_STATE(251)] = 5209,
  [SMALL_STATE(252)] = 5217,
  [SMALL_STATE(253)] = 5225,
  [SMALL_STATE(254)] = 5233,
  [SMALL_STATE(255)] = 5241,
  [SMALL_STATE(256)] = 5249,
  [SMALL_STATE(257)] = 5257,
  [SMALL_STATE(258)] = 5265,
  [SMALL_STATE(259)] = 5273,
  [SMALL_STATE(260)] = 5281,
  [SMALL_STATE(261)] = 5289,
  [SMALL_STATE(262)] = 5297,
  [SMALL_STATE(263)] = 5305,
  [SMALL_STATE(264)] = 5313,
  [SMALL_STATE(265)] = 5321,
  [SMALL_STATE(266)] = 5329,
  [SMALL_STATE(267)] = 5337,
  [SMALL_STATE(268)] = 5345,
  [SMALL_STATE(269)] = 5353,
  [SMALL_STATE(270)] = 5361,
  [SMALL_STATE(271)] = 5369,
  [SMALL_STATE(272)] = 5377,
  [SMALL_STATE(273)] = 5385,
  [SMALL_STATE(274)] = 5393,
  [SMALL_STATE(275)] = 5401,
  [SMALL_STATE(276)] = 5409,
  [SMALL_STATE(277)] = 5417,
  [SMALL_STATE(278)] = 5425,
  [SMALL_STATE(279)] = 5433,
  [SMALL_STATE(280)] = 5441,
  [SMALL_STATE(281)] = 5449,
  [SMALL_STATE(282)] = 5457,
  [SMALL_STATE(283)] = 5465,
  [SMALL_STATE(284)] = 5473,
  [SMALL_STATE(285)] = 5481,
  [SMALL_STATE(286)] = 5489,
  [SMALL_STATE(287)] = 5497,
  [SMALL_STATE(288)] = 5505,
  [SMALL_STATE(289)] = 5513,
  [SMALL_STATE(290)] = 5521,
  [SMALL_STATE(291)] = 5529,
  [SMALL_STATE(292)] = 5537,
  [SMALL_STATE(293)] = 5545,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(193),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(77),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(76),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(76),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(75),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(81),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(289),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(77),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(76),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(76),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(75),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(81),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(263),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(89),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(88),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(88),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(87),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(86),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f64, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f64, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 5),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symstring, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symstring, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 5),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 5),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 6),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 6),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2), SHIFT_REPEAT(95),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat4, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat4, 2), SHIFT_REPEAT(171),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(139),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(156),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2), SHIFT_REPEAT(245),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(252),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 7),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 14),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 10),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 15),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 11),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 9),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 6),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 13),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 7),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 5),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 12),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 8),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 8),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identsort, 4),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 5),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 4),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [578] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
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
