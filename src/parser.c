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
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
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
  sym_type = 54,
  sym_num = 55,
  sym_unum = 56,
  anon_sym_NaN = 57,
  aux_sym_f64_token1 = 58,
  anon_sym_inf = 59,
  anon_sym_DASHinf = 60,
  sym_ident = 61,
  sym_string = 62,
  sym_source_file = 63,
  sym_command = 64,
  sym_schedule = 65,
  sym_cost = 66,
  sym_nonletaction = 67,
  sym_action = 68,
  sym_fact = 69,
  sym_schema = 70,
  sym_expr = 71,
  sym_literal = 72,
  sym_callexpr = 73,
  sym_variant = 74,
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
      if (eof) ADVANCE(234);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == ',') ADVANCE(239);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '=') ADVANCE(318);
      if (lookahead == 'N') ADVANCE(11);
      if (lookahead == '[') ADVANCE(316);
      if (lookahead == ']') ADVANCE(317);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == 'q') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(176);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(171);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '=') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
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
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(324);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(127);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(330);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(283);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(223);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(287);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 110:
      if (lookahead == 'k') ADVANCE(281);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 'w') ADVANCE(164);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 155:
      if (lookahead == 'q') ADVANCE(304);
      END_STATE();
    case 156:
      if (lookahead == 'q') ADVANCE(304);
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 219:
      if (lookahead == 'w') ADVANCE(170);
      END_STATE();
    case 220:
      if (lookahead == 'x') ADVANCE(196);
      END_STATE();
    case 221:
      if (lookahead == 'x') ADVANCE(204);
      END_STATE();
    case 222:
      if (lookahead == 'x') ADVANCE(207);
      END_STATE();
    case 223:
      if (lookahead == 'y') ADVANCE(272);
      END_STATE();
    case 224:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 225:
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 226:
      if (lookahead == 'z') ADVANCE(65);
      END_STATE();
    case 227:
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(237);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == 'd') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == 'p') ADVANCE(345);
      if (lookahead == 'u') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
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
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 228:
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(237);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(238);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 229:
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(238);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
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
          lookahead == '|') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 232:
      if (eof) ADVANCE(234);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(237);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(238);
      if (lookahead == '-') ADVANCE(399);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == 'N') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 233:
      if (eof) ADVANCE(234);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(237);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(238);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'b') ADVANCE(392);
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(338);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(418);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead == 'p') ADVANCE(344);
      if (lookahead == 'q') ADVANCE(478);
      if (lookahead == 'r') ADVANCE(363);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == 'u') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_datatype);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COLONunextractable);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_COLONon_merge);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COLONmerge);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COLONdefault);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_relation);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_ruleset);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_ruleset);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
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
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_COLONwhen);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_birewrite);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_birewrite);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(453);
      if (lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(174);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_COLONuntil);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_add_DASHruleset);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_add_DASHruleset);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_calc);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COLONvariants);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_print_DASHtable);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_print_DASHtable);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_fail);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_fail);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
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
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_panic);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_panic);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_extract);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 319:
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
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 321:
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
          lookahead == '|') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_NaN);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(454);
      if (lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(430);
      if (lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(385);
      if (lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(325);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'h') ADVANCE(375);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(349);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == 'u') ADVANCE(423);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == 'u') ADVANCE(452);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(413);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(277);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(405);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(408);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(409);
      if (lookahead == 'p') ADVANCE(481);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(473);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(464);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(334);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(359);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(483);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == 'u') ADVANCE(410);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(329);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(331);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(487);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(378);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(389);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
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
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(471);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(282);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(477);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(377);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(348);
      if (lookahead == 'w') ADVANCE(447);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(437);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(311);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(356);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(398);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(469);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(441);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(422);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(411);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(444);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(482);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(475);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(346);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(431);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(480);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(400);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(458);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(401);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(390);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead == 't') ADVANCE(339);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(384);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(296);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(279);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(489);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(443);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(403);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(361);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(379);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(465);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(412);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(459);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(460);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(414);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'w') ADVANCE(450);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(468);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(476);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(273);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(439);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'z') ADVANCE(372);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(491);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 492:
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
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 233},
  [2] = {.lex_state = 233},
  [3] = {.lex_state = 232},
  [4] = {.lex_state = 232},
  [5] = {.lex_state = 232},
  [6] = {.lex_state = 232},
  [7] = {.lex_state = 232},
  [8] = {.lex_state = 232},
  [9] = {.lex_state = 232},
  [10] = {.lex_state = 232},
  [11] = {.lex_state = 232},
  [12] = {.lex_state = 232},
  [13] = {.lex_state = 232},
  [14] = {.lex_state = 232},
  [15] = {.lex_state = 232},
  [16] = {.lex_state = 232},
  [17] = {.lex_state = 232},
  [18] = {.lex_state = 232},
  [19] = {.lex_state = 232},
  [20] = {.lex_state = 232},
  [21] = {.lex_state = 232},
  [22] = {.lex_state = 232},
  [23] = {.lex_state = 232},
  [24] = {.lex_state = 232},
  [25] = {.lex_state = 232},
  [26] = {.lex_state = 232},
  [27] = {.lex_state = 232},
  [28] = {.lex_state = 232},
  [29] = {.lex_state = 232},
  [30] = {.lex_state = 232},
  [31] = {.lex_state = 232},
  [32] = {.lex_state = 232},
  [33] = {.lex_state = 232},
  [34] = {.lex_state = 232},
  [35] = {.lex_state = 232},
  [36] = {.lex_state = 232},
  [37] = {.lex_state = 232},
  [38] = {.lex_state = 232},
  [39] = {.lex_state = 232},
  [40] = {.lex_state = 232},
  [41] = {.lex_state = 232},
  [42] = {.lex_state = 232},
  [43] = {.lex_state = 232},
  [44] = {.lex_state = 232},
  [45] = {.lex_state = 232},
  [46] = {.lex_state = 232},
  [47] = {.lex_state = 232},
  [48] = {.lex_state = 232},
  [49] = {.lex_state = 232},
  [50] = {.lex_state = 232},
  [51] = {.lex_state = 232},
  [52] = {.lex_state = 232},
  [53] = {.lex_state = 232},
  [54] = {.lex_state = 232},
  [55] = {.lex_state = 232},
  [56] = {.lex_state = 232},
  [57] = {.lex_state = 232},
  [58] = {.lex_state = 232},
  [59] = {.lex_state = 232},
  [60] = {.lex_state = 232},
  [61] = {.lex_state = 232},
  [62] = {.lex_state = 232},
  [63] = {.lex_state = 232},
  [64] = {.lex_state = 232},
  [65] = {.lex_state = 232},
  [66] = {.lex_state = 232},
  [67] = {.lex_state = 232},
  [68] = {.lex_state = 232},
  [69] = {.lex_state = 232},
  [70] = {.lex_state = 232},
  [71] = {.lex_state = 232},
  [72] = {.lex_state = 232},
  [73] = {.lex_state = 232},
  [74] = {.lex_state = 232},
  [75] = {.lex_state = 232},
  [76] = {.lex_state = 232},
  [77] = {.lex_state = 232},
  [78] = {.lex_state = 232},
  [79] = {.lex_state = 232},
  [80] = {.lex_state = 232},
  [81] = {.lex_state = 233},
  [82] = {.lex_state = 227},
  [83] = {.lex_state = 233},
  [84] = {.lex_state = 233},
  [85] = {.lex_state = 233},
  [86] = {.lex_state = 233},
  [87] = {.lex_state = 233},
  [88] = {.lex_state = 233},
  [89] = {.lex_state = 233},
  [90] = {.lex_state = 233},
  [91] = {.lex_state = 233},
  [92] = {.lex_state = 233},
  [93] = {.lex_state = 233},
  [94] = {.lex_state = 233},
  [95] = {.lex_state = 233},
  [96] = {.lex_state = 233},
  [97] = {.lex_state = 233},
  [98] = {.lex_state = 229},
  [99] = {.lex_state = 228},
  [100] = {.lex_state = 228},
  [101] = {.lex_state = 228},
  [102] = {.lex_state = 228},
  [103] = {.lex_state = 228},
  [104] = {.lex_state = 228},
  [105] = {.lex_state = 228},
  [106] = {.lex_state = 228},
  [107] = {.lex_state = 228},
  [108] = {.lex_state = 229},
  [109] = {.lex_state = 228},
  [110] = {.lex_state = 233},
  [111] = {.lex_state = 228},
  [112] = {.lex_state = 233},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 233},
  [115] = {.lex_state = 233},
  [116] = {.lex_state = 233},
  [117] = {.lex_state = 233},
  [118] = {.lex_state = 233},
  [119] = {.lex_state = 233},
  [120] = {.lex_state = 233},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 233},
  [123] = {.lex_state = 229},
  [124] = {.lex_state = 233},
  [125] = {.lex_state = 233},
  [126] = {.lex_state = 233},
  [127] = {.lex_state = 233},
  [128] = {.lex_state = 233},
  [129] = {.lex_state = 228},
  [130] = {.lex_state = 228},
  [131] = {.lex_state = 228},
  [132] = {.lex_state = 229},
  [133] = {.lex_state = 228},
  [134] = {.lex_state = 228},
  [135] = {.lex_state = 233},
  [136] = {.lex_state = 228},
  [137] = {.lex_state = 233},
  [138] = {.lex_state = 233},
  [139] = {.lex_state = 233},
  [140] = {.lex_state = 233},
  [141] = {.lex_state = 228},
  [142] = {.lex_state = 229},
  [143] = {.lex_state = 233},
  [144] = {.lex_state = 233},
  [145] = {.lex_state = 233},
  [146] = {.lex_state = 233},
  [147] = {.lex_state = 233},
  [148] = {.lex_state = 233},
  [149] = {.lex_state = 233},
  [150] = {.lex_state = 233},
  [151] = {.lex_state = 233},
  [152] = {.lex_state = 233},
  [153] = {.lex_state = 228},
  [154] = {.lex_state = 233},
  [155] = {.lex_state = 233},
  [156] = {.lex_state = 233},
  [157] = {.lex_state = 233},
  [158] = {.lex_state = 233},
  [159] = {.lex_state = 229},
  [160] = {.lex_state = 229},
  [161] = {.lex_state = 233},
  [162] = {.lex_state = 233},
  [163] = {.lex_state = 233},
  [164] = {.lex_state = 233},
  [165] = {.lex_state = 233},
  [166] = {.lex_state = 233},
  [167] = {.lex_state = 233},
  [168] = {.lex_state = 233},
  [169] = {.lex_state = 233},
  [170] = {.lex_state = 233},
  [171] = {.lex_state = 233},
  [172] = {.lex_state = 228},
  [173] = {.lex_state = 233},
  [174] = {.lex_state = 233},
  [175] = {.lex_state = 233},
  [176] = {.lex_state = 233},
  [177] = {.lex_state = 233},
  [178] = {.lex_state = 233},
  [179] = {.lex_state = 233},
  [180] = {.lex_state = 233},
  [181] = {.lex_state = 233},
  [182] = {.lex_state = 233},
  [183] = {.lex_state = 233},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 233},
  [186] = {.lex_state = 233},
  [187] = {.lex_state = 233},
  [188] = {.lex_state = 233},
  [189] = {.lex_state = 233},
  [190] = {.lex_state = 233},
  [191] = {.lex_state = 233},
  [192] = {.lex_state = 233},
  [193] = {.lex_state = 228},
  [194] = {.lex_state = 233},
  [195] = {.lex_state = 228},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 233},
  [198] = {.lex_state = 228},
  [199] = {.lex_state = 233},
  [200] = {.lex_state = 233},
  [201] = {.lex_state = 229},
  [202] = {.lex_state = 233},
  [203] = {.lex_state = 228},
  [204] = {.lex_state = 228},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 233},
  [207] = {.lex_state = 233},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 228},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 233},
  [212] = {.lex_state = 228},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 228},
  [215] = {.lex_state = 228},
  [216] = {.lex_state = 233},
  [217] = {.lex_state = 233},
  [218] = {.lex_state = 233},
  [219] = {.lex_state = 233},
  [220] = {.lex_state = 233},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 228},
  [224] = {.lex_state = 228},
  [225] = {.lex_state = 233},
  [226] = {.lex_state = 233},
  [227] = {.lex_state = 233},
  [228] = {.lex_state = 233},
  [229] = {.lex_state = 233},
  [230] = {.lex_state = 228},
  [231] = {.lex_state = 233},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 233},
  [234] = {.lex_state = 229},
  [235] = {.lex_state = 229},
  [236] = {.lex_state = 228},
  [237] = {.lex_state = 233},
  [238] = {.lex_state = 233},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 233},
  [241] = {.lex_state = 233},
  [242] = {.lex_state = 233},
  [243] = {.lex_state = 233},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 233},
  [246] = {.lex_state = 228},
  [247] = {.lex_state = 233},
  [248] = {.lex_state = 233},
  [249] = {.lex_state = 233},
  [250] = {.lex_state = 233},
  [251] = {.lex_state = 233},
  [252] = {.lex_state = 233},
  [253] = {.lex_state = 233},
  [254] = {.lex_state = 233},
  [255] = {.lex_state = 229},
  [256] = {.lex_state = 228},
  [257] = {.lex_state = 228},
  [258] = {.lex_state = 228},
  [259] = {.lex_state = 228},
  [260] = {.lex_state = 228},
  [261] = {.lex_state = 228},
  [262] = {.lex_state = 228},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 228},
  [265] = {.lex_state = 233},
  [266] = {.lex_state = 233},
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
  [352] = 12,
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
  [696] = 12,
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
  [782] = 12,
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
  [911] = 12,
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
  [953] = 11,
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
  [993] = 11,
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
  [1033] = 11,
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
  [1073] = 11,
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
  [1113] = 11,
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
  [1153] = 11,
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
  [1193] = 11,
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
  [1233] = 11,
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
  [1273] = 11,
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
  [1313] = 11,
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
  [1353] = 11,
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
  [1393] = 11,
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
  [1433] = 10,
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
  [1470] = 10,
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
  [1507] = 10,
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
  [1544] = 11,
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
  [1583] = 11,
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
  [1622] = 10,
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
  [1659] = 11,
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
  [1698] = 10,
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
  [1734] = 10,
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
  [1770] = 10,
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
  [1806] = 10,
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
  [1842] = 10,
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
  [1878] = 10,
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
  [1914] = 10,
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
  [1950] = 10,
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
  [1986] = 10,
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
  [2022] = 10,
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
  [2058] = 10,
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
  [2094] = 10,
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
  [2130] = 10,
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
  [2166] = 10,
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
  [2202] = 10,
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
  [2238] = 10,
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
  [2274] = 10,
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
  [2310] = 10,
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
  [2346] = 10,
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
  [2382] = 10,
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
  [2418] = 10,
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
  [2454] = 3,
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
  [2476] = 10,
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
  [2512] = 10,
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
  [2548] = 10,
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
  [2584] = 10,
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
  [2620] = 3,
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
  [2642] = 3,
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
  [2663] = 3,
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
  [2684] = 3,
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
  [2705] = 3,
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
  [2726] = 4,
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
  [2746] = 3,
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
  [2764] = 3,
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
  [2782] = 3,
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
  [2799] = 3,
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
  [2816] = 3,
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
  [2833] = 3,
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
  [2850] = 3,
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
  [2867] = 8,
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
  [2893] = 8,
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
  [2919] = 2,
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
  [2932] = 2,
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
  [2945] = 6,
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
  [2966] = 6,
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
  [2987] = 6,
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
  [3008] = 6,
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
  [3029] = 6,
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
  [3050] = 6,
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
  [3071] = 6,
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
  [3092] = 6,
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
  [3113] = 6,
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
  [3134] = 6,
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
  [3155] = 6,
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
  [3176] = 6,
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
  [3197] = 6,
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
  [3218] = 6,
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
  [3238] = 5,
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
  [3256] = 5,
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
  [3274] = 5,
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
  [3292] = 5,
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
  [3310] = 5,
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
  [3328] = 5,
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
  [3346] = 5,
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
  [3364] = 5,
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
  [3382] = 5,
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
  [3400] = 6,
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
  [3420] = 5,
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
  [3438] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(287), 5,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
  [3450] = 5,
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
  [3468] = 6,
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
  [3488] = 4,
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
  [3503] = 4,
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
  [3518] = 5,
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
  [3535] = 4,
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
  [3550] = 5,
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
  [3567] = 4,
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
  [3582] = 4,
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
  [3597] = 5,
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
  [3614] = 4,
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
  [3629] = 4,
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
  [3644] = 4,
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
  [3659] = 4,
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
  [3674] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(346), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3684] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(348), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3694] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(350), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3704] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(352), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3714] = 4,
    ACTIONS(285), 1,
      sym_rparen,
    ACTIONS(354), 1,
      anon_sym_COLONuntil,
    ACTIONS(356), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3728] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(211), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3738] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(223), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3748] = 4,
    ACTIONS(161), 1,
      sym_rparen,
    ACTIONS(283), 1,
      sym_type,
    STATE(123), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3762] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(215), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3772] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(219), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3782] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(358), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3792] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(207), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3802] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(360), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3812] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(362), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3822] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(364), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3832] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(366), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3842] = 4,
    ACTIONS(368), 1,
      sym_lparen,
    ACTIONS(370), 1,
      sym_ident,
    STATE(65), 1,
      sym_schedule,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3856] = 4,
    ACTIONS(283), 1,
      sym_type,
    ACTIONS(372), 1,
      sym_rparen,
    STATE(123), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3870] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(374), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3880] = 4,
    ACTIONS(376), 1,
      sym_rparen,
    ACTIONS(378), 1,
      anon_sym_COLONmerge,
    ACTIONS(380), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3894] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(382), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3904] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(384), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3914] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(386), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3924] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(388), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3934] = 4,
    ACTIONS(390), 1,
      sym_rparen,
    ACTIONS(392), 1,
      anon_sym_COLONmerge,
    ACTIONS(394), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3948] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(396), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3958] = 4,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(400), 1,
      anon_sym_COLONruleset,
    ACTIONS(402), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3972] = 4,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(404), 1,
      anon_sym_COLONmerge,
    ACTIONS(406), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3986] = 4,
    ACTIONS(279), 1,
      sym_rparen,
    ACTIONS(408), 1,
      anon_sym_COLONuntil,
    ACTIONS(410), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4000] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(412), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4010] = 4,
    ACTIONS(97), 1,
      sym_rparen,
    ACTIONS(414), 1,
      anon_sym_COLONruleset,
    ACTIONS(416), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4024] = 4,
    ACTIONS(418), 1,
      sym_rparen,
    ACTIONS(420), 1,
      anon_sym_COLONmerge,
    ACTIONS(422), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4038] = 4,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(424), 1,
      anon_sym_COLONruleset,
    ACTIONS(426), 1,
      anon_sym_COLONwhen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4052] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(428), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4062] = 4,
    ACTIONS(430), 1,
      sym_rparen,
    ACTIONS(432), 1,
      sym_type,
    STATE(132), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4076] = 4,
    ACTIONS(434), 1,
      sym_rparen,
    ACTIONS(436), 1,
      sym_type,
    STATE(142), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4090] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(438), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4100] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(440), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4110] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(442), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4120] = 4,
    ACTIONS(418), 1,
      sym_rparen,
    ACTIONS(444), 1,
      anon_sym_COLONruleset,
    ACTIONS(446), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4134] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(448), 2,
      sym_lparen,
      sym_rparen,
  [4143] = 3,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(406), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4154] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(450), 2,
      sym_lparen,
      sym_rparen,
  [4163] = 3,
    ACTIONS(91), 1,
      sym_rparen,
    ACTIONS(452), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4174] = 3,
    ACTIONS(89), 1,
      sym_rparen,
    ACTIONS(454), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4185] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(456), 2,
      sym_lparen,
      sym_rparen,
  [4194] = 3,
    ACTIONS(458), 1,
      sym_rparen,
    ACTIONS(460), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4205] = 3,
    ACTIONS(462), 1,
      sym_unum,
    ACTIONS(464), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4216] = 3,
    ACTIONS(466), 1,
      sym_rparen,
    ACTIONS(468), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4227] = 3,
    ACTIONS(376), 1,
      sym_rparen,
    ACTIONS(470), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4238] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(472), 2,
      sym_lparen,
      sym_rparen,
  [4247] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(474), 2,
      sym_lparen,
      sym_rparen,
  [4256] = 3,
    ACTIONS(376), 1,
      sym_rparen,
    ACTIONS(380), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4267] = 3,
    ACTIONS(390), 1,
      sym_rparen,
    ACTIONS(476), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4278] = 3,
    ACTIONS(125), 1,
      sym_rparen,
    ACTIONS(478), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4289] = 3,
    ACTIONS(123), 1,
      sym_rparen,
    ACTIONS(480), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4300] = 3,
    ACTIONS(418), 1,
      sym_rparen,
    ACTIONS(422), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4311] = 3,
    ACTIONS(390), 1,
      sym_rparen,
    ACTIONS(394), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4322] = 3,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(482), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4333] = 3,
    ACTIONS(63), 1,
      sym_ident,
    ACTIONS(484), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4344] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(486), 2,
      sym_lparen,
      sym_rparen,
  [4353] = 3,
    ACTIONS(97), 1,
      sym_rparen,
    ACTIONS(331), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4364] = 3,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(402), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4375] = 3,
    ACTIONS(488), 1,
      sym_lparen,
    STATE(81), 1,
      sym_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4386] = 3,
    ACTIONS(123), 1,
      sym_rparen,
    ACTIONS(490), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4397] = 3,
    ACTIONS(418), 1,
      sym_rparen,
    ACTIONS(492), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4408] = 3,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(494), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4419] = 3,
    ACTIONS(123), 1,
      sym_rparen,
    ACTIONS(496), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4430] = 2,
    ACTIONS(498), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4438] = 2,
    ACTIONS(500), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4446] = 2,
    ACTIONS(502), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4454] = 2,
    ACTIONS(504), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4462] = 2,
    ACTIONS(506), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4470] = 2,
    ACTIONS(508), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4478] = 2,
    ACTIONS(123), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4486] = 2,
    ACTIONS(510), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4494] = 2,
    ACTIONS(480), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4502] = 2,
    ACTIONS(512), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4510] = 2,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4518] = 2,
    ACTIONS(514), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4526] = 2,
    ACTIONS(516), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4534] = 2,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4542] = 2,
    ACTIONS(518), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4550] = 2,
    ACTIONS(478), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4558] = 2,
    ACTIONS(520), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4566] = 2,
    ACTIONS(522), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4574] = 2,
    ACTIONS(524), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4582] = 2,
    ACTIONS(522), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4590] = 2,
    ACTIONS(526), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4598] = 2,
    ACTIONS(528), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4606] = 2,
    ACTIONS(530), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4614] = 2,
    ACTIONS(532), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4622] = 2,
    ACTIONS(390), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4630] = 2,
    ACTIONS(534), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4638] = 2,
    ACTIONS(536), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4646] = 2,
    ACTIONS(538), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4654] = 2,
    ACTIONS(540), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4662] = 2,
    ACTIONS(480), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4670] = 2,
    ACTIONS(542), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4678] = 2,
    ACTIONS(540), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4686] = 2,
    ACTIONS(418), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4694] = 2,
    ACTIONS(376), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4702] = 2,
    ACTIONS(544), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4710] = 2,
    ACTIONS(125), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4718] = 2,
    ACTIONS(546), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4726] = 2,
    ACTIONS(548), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4734] = 2,
    ACTIONS(550), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4742] = 2,
    ACTIONS(552), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4750] = 2,
    ACTIONS(554), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4758] = 2,
    ACTIONS(556), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4766] = 2,
    ACTIONS(558), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4774] = 2,
    ACTIONS(560), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4782] = 2,
    ACTIONS(466), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4790] = 2,
    ACTIONS(167), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4798] = 2,
    ACTIONS(562), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4806] = 2,
    ACTIONS(458), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4814] = 2,
    ACTIONS(97), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4822] = 2,
    ACTIONS(564), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4830] = 2,
    ACTIONS(566), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4838] = 2,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4846] = 2,
    ACTIONS(570), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4854] = 2,
    ACTIONS(478), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4862] = 2,
    ACTIONS(281), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4870] = 2,
    ACTIONS(572), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4878] = 2,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4886] = 2,
    ACTIONS(574), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4894] = 2,
    ACTIONS(576), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4902] = 2,
    ACTIONS(81), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4910] = 2,
    ACTIONS(578), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4918] = 2,
    ACTIONS(580), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4926] = 2,
    ACTIONS(582), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4934] = 2,
    ACTIONS(584), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4942] = 2,
    ACTIONS(586), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4950] = 2,
    ACTIONS(588), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4958] = 2,
    ACTIONS(590), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4966] = 2,
    ACTIONS(592), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4974] = 2,
    ACTIONS(594), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4982] = 2,
    ACTIONS(596), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4990] = 2,
    ACTIONS(598), 1,
      anon_sym_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4998] = 2,
    ACTIONS(600), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5006] = 2,
    ACTIONS(602), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5014] = 2,
    ACTIONS(604), 1,
      sym_unum,
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
  [SMALL_STATE(23)] = 953,
  [SMALL_STATE(24)] = 993,
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
  [SMALL_STATE(36)] = 1470,
  [SMALL_STATE(37)] = 1507,
  [SMALL_STATE(38)] = 1544,
  [SMALL_STATE(39)] = 1583,
  [SMALL_STATE(40)] = 1622,
  [SMALL_STATE(41)] = 1659,
  [SMALL_STATE(42)] = 1698,
  [SMALL_STATE(43)] = 1734,
  [SMALL_STATE(44)] = 1770,
  [SMALL_STATE(45)] = 1806,
  [SMALL_STATE(46)] = 1842,
  [SMALL_STATE(47)] = 1878,
  [SMALL_STATE(48)] = 1914,
  [SMALL_STATE(49)] = 1950,
  [SMALL_STATE(50)] = 1986,
  [SMALL_STATE(51)] = 2022,
  [SMALL_STATE(52)] = 2058,
  [SMALL_STATE(53)] = 2094,
  [SMALL_STATE(54)] = 2130,
  [SMALL_STATE(55)] = 2166,
  [SMALL_STATE(56)] = 2202,
  [SMALL_STATE(57)] = 2238,
  [SMALL_STATE(58)] = 2274,
  [SMALL_STATE(59)] = 2310,
  [SMALL_STATE(60)] = 2346,
  [SMALL_STATE(61)] = 2382,
  [SMALL_STATE(62)] = 2418,
  [SMALL_STATE(63)] = 2454,
  [SMALL_STATE(64)] = 2476,
  [SMALL_STATE(65)] = 2512,
  [SMALL_STATE(66)] = 2548,
  [SMALL_STATE(67)] = 2584,
  [SMALL_STATE(68)] = 2620,
  [SMALL_STATE(69)] = 2642,
  [SMALL_STATE(70)] = 2663,
  [SMALL_STATE(71)] = 2684,
  [SMALL_STATE(72)] = 2705,
  [SMALL_STATE(73)] = 2726,
  [SMALL_STATE(74)] = 2746,
  [SMALL_STATE(75)] = 2764,
  [SMALL_STATE(76)] = 2782,
  [SMALL_STATE(77)] = 2799,
  [SMALL_STATE(78)] = 2816,
  [SMALL_STATE(79)] = 2833,
  [SMALL_STATE(80)] = 2850,
  [SMALL_STATE(81)] = 2867,
  [SMALL_STATE(82)] = 2893,
  [SMALL_STATE(83)] = 2919,
  [SMALL_STATE(84)] = 2932,
  [SMALL_STATE(85)] = 2945,
  [SMALL_STATE(86)] = 2966,
  [SMALL_STATE(87)] = 2987,
  [SMALL_STATE(88)] = 3008,
  [SMALL_STATE(89)] = 3029,
  [SMALL_STATE(90)] = 3050,
  [SMALL_STATE(91)] = 3071,
  [SMALL_STATE(92)] = 3092,
  [SMALL_STATE(93)] = 3113,
  [SMALL_STATE(94)] = 3134,
  [SMALL_STATE(95)] = 3155,
  [SMALL_STATE(96)] = 3176,
  [SMALL_STATE(97)] = 3197,
  [SMALL_STATE(98)] = 3218,
  [SMALL_STATE(99)] = 3238,
  [SMALL_STATE(100)] = 3256,
  [SMALL_STATE(101)] = 3274,
  [SMALL_STATE(102)] = 3292,
  [SMALL_STATE(103)] = 3310,
  [SMALL_STATE(104)] = 3328,
  [SMALL_STATE(105)] = 3346,
  [SMALL_STATE(106)] = 3364,
  [SMALL_STATE(107)] = 3382,
  [SMALL_STATE(108)] = 3400,
  [SMALL_STATE(109)] = 3420,
  [SMALL_STATE(110)] = 3438,
  [SMALL_STATE(111)] = 3450,
  [SMALL_STATE(112)] = 3468,
  [SMALL_STATE(113)] = 3488,
  [SMALL_STATE(114)] = 3503,
  [SMALL_STATE(115)] = 3518,
  [SMALL_STATE(116)] = 3535,
  [SMALL_STATE(117)] = 3550,
  [SMALL_STATE(118)] = 3567,
  [SMALL_STATE(119)] = 3582,
  [SMALL_STATE(120)] = 3597,
  [SMALL_STATE(121)] = 3614,
  [SMALL_STATE(122)] = 3629,
  [SMALL_STATE(123)] = 3644,
  [SMALL_STATE(124)] = 3659,
  [SMALL_STATE(125)] = 3674,
  [SMALL_STATE(126)] = 3684,
  [SMALL_STATE(127)] = 3694,
  [SMALL_STATE(128)] = 3704,
  [SMALL_STATE(129)] = 3714,
  [SMALL_STATE(130)] = 3728,
  [SMALL_STATE(131)] = 3738,
  [SMALL_STATE(132)] = 3748,
  [SMALL_STATE(133)] = 3762,
  [SMALL_STATE(134)] = 3772,
  [SMALL_STATE(135)] = 3782,
  [SMALL_STATE(136)] = 3792,
  [SMALL_STATE(137)] = 3802,
  [SMALL_STATE(138)] = 3812,
  [SMALL_STATE(139)] = 3822,
  [SMALL_STATE(140)] = 3832,
  [SMALL_STATE(141)] = 3842,
  [SMALL_STATE(142)] = 3856,
  [SMALL_STATE(143)] = 3870,
  [SMALL_STATE(144)] = 3880,
  [SMALL_STATE(145)] = 3894,
  [SMALL_STATE(146)] = 3904,
  [SMALL_STATE(147)] = 3914,
  [SMALL_STATE(148)] = 3924,
  [SMALL_STATE(149)] = 3934,
  [SMALL_STATE(150)] = 3948,
  [SMALL_STATE(151)] = 3958,
  [SMALL_STATE(152)] = 3972,
  [SMALL_STATE(153)] = 3986,
  [SMALL_STATE(154)] = 4000,
  [SMALL_STATE(155)] = 4010,
  [SMALL_STATE(156)] = 4024,
  [SMALL_STATE(157)] = 4038,
  [SMALL_STATE(158)] = 4052,
  [SMALL_STATE(159)] = 4062,
  [SMALL_STATE(160)] = 4076,
  [SMALL_STATE(161)] = 4090,
  [SMALL_STATE(162)] = 4100,
  [SMALL_STATE(163)] = 4110,
  [SMALL_STATE(164)] = 4120,
  [SMALL_STATE(165)] = 4134,
  [SMALL_STATE(166)] = 4143,
  [SMALL_STATE(167)] = 4154,
  [SMALL_STATE(168)] = 4163,
  [SMALL_STATE(169)] = 4174,
  [SMALL_STATE(170)] = 4185,
  [SMALL_STATE(171)] = 4194,
  [SMALL_STATE(172)] = 4205,
  [SMALL_STATE(173)] = 4216,
  [SMALL_STATE(174)] = 4227,
  [SMALL_STATE(175)] = 4238,
  [SMALL_STATE(176)] = 4247,
  [SMALL_STATE(177)] = 4256,
  [SMALL_STATE(178)] = 4267,
  [SMALL_STATE(179)] = 4278,
  [SMALL_STATE(180)] = 4289,
  [SMALL_STATE(181)] = 4300,
  [SMALL_STATE(182)] = 4311,
  [SMALL_STATE(183)] = 4322,
  [SMALL_STATE(184)] = 4333,
  [SMALL_STATE(185)] = 4344,
  [SMALL_STATE(186)] = 4353,
  [SMALL_STATE(187)] = 4364,
  [SMALL_STATE(188)] = 4375,
  [SMALL_STATE(189)] = 4386,
  [SMALL_STATE(190)] = 4397,
  [SMALL_STATE(191)] = 4408,
  [SMALL_STATE(192)] = 4419,
  [SMALL_STATE(193)] = 4430,
  [SMALL_STATE(194)] = 4438,
  [SMALL_STATE(195)] = 4446,
  [SMALL_STATE(196)] = 4454,
  [SMALL_STATE(197)] = 4462,
  [SMALL_STATE(198)] = 4470,
  [SMALL_STATE(199)] = 4478,
  [SMALL_STATE(200)] = 4486,
  [SMALL_STATE(201)] = 4494,
  [SMALL_STATE(202)] = 4502,
  [SMALL_STATE(203)] = 4510,
  [SMALL_STATE(204)] = 4518,
  [SMALL_STATE(205)] = 4526,
  [SMALL_STATE(206)] = 4534,
  [SMALL_STATE(207)] = 4542,
  [SMALL_STATE(208)] = 4550,
  [SMALL_STATE(209)] = 4558,
  [SMALL_STATE(210)] = 4566,
  [SMALL_STATE(211)] = 4574,
  [SMALL_STATE(212)] = 4582,
  [SMALL_STATE(213)] = 4590,
  [SMALL_STATE(214)] = 4598,
  [SMALL_STATE(215)] = 4606,
  [SMALL_STATE(216)] = 4614,
  [SMALL_STATE(217)] = 4622,
  [SMALL_STATE(218)] = 4630,
  [SMALL_STATE(219)] = 4638,
  [SMALL_STATE(220)] = 4646,
  [SMALL_STATE(221)] = 4654,
  [SMALL_STATE(222)] = 4662,
  [SMALL_STATE(223)] = 4670,
  [SMALL_STATE(224)] = 4678,
  [SMALL_STATE(225)] = 4686,
  [SMALL_STATE(226)] = 4694,
  [SMALL_STATE(227)] = 4702,
  [SMALL_STATE(228)] = 4710,
  [SMALL_STATE(229)] = 4718,
  [SMALL_STATE(230)] = 4726,
  [SMALL_STATE(231)] = 4734,
  [SMALL_STATE(232)] = 4742,
  [SMALL_STATE(233)] = 4750,
  [SMALL_STATE(234)] = 4758,
  [SMALL_STATE(235)] = 4766,
  [SMALL_STATE(236)] = 4774,
  [SMALL_STATE(237)] = 4782,
  [SMALL_STATE(238)] = 4790,
  [SMALL_STATE(239)] = 4798,
  [SMALL_STATE(240)] = 4806,
  [SMALL_STATE(241)] = 4814,
  [SMALL_STATE(242)] = 4822,
  [SMALL_STATE(243)] = 4830,
  [SMALL_STATE(244)] = 4838,
  [SMALL_STATE(245)] = 4846,
  [SMALL_STATE(246)] = 4854,
  [SMALL_STATE(247)] = 4862,
  [SMALL_STATE(248)] = 4870,
  [SMALL_STATE(249)] = 4878,
  [SMALL_STATE(250)] = 4886,
  [SMALL_STATE(251)] = 4894,
  [SMALL_STATE(252)] = 4902,
  [SMALL_STATE(253)] = 4910,
  [SMALL_STATE(254)] = 4918,
  [SMALL_STATE(255)] = 4926,
  [SMALL_STATE(256)] = 4934,
  [SMALL_STATE(257)] = 4942,
  [SMALL_STATE(258)] = 4950,
  [SMALL_STATE(259)] = 4958,
  [SMALL_STATE(260)] = 4966,
  [SMALL_STATE(261)] = 4974,
  [SMALL_STATE(262)] = 4982,
  [SMALL_STATE(263)] = 4990,
  [SMALL_STATE(264)] = 4998,
  [SMALL_STATE(265)] = 5006,
  [SMALL_STATE(266)] = 5014,
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
