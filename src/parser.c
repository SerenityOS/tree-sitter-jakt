#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 406
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 1
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 21

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_while = 4,
  anon_sym_PLUS_PLUS = 5,
  anon_sym_DASH_DASH = 6,
  anon_sym_continue = 7,
  anon_sym_for = 8,
  anon_sym_in = 9,
  anon_sym_DOT_DOT = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  anon_sym_u8 = 14,
  anon_sym_i8 = 15,
  anon_sym_u16 = 16,
  anon_sym_i16 = 17,
  anon_sym_u32 = 18,
  anon_sym_i32 = 19,
  anon_sym_u64 = 20,
  anon_sym_i64 = 21,
  anon_sym_u128 = 22,
  anon_sym_i128 = 23,
  anon_sym_isize = 24,
  anon_sym_usize = 25,
  anon_sym_f32 = 26,
  anon_sym_f64 = 27,
  anon_sym_c_int = 28,
  anon_sym_bool = 29,
  anon_sym_String = 30,
  anon_sym_c_char = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  anon_sym_let = 34,
  anon_sym_COLON = 35,
  anon_sym_EQ = 36,
  sym_mutable_specifier = 37,
  anon_sym_DASH = 38,
  anon_sym_return = 39,
  anon_sym_AMP = 40,
  anon_sym_PIPE = 41,
  anon_sym_CARET = 42,
  anon_sym_EQ_EQ = 43,
  anon_sym_BANG_EQ = 44,
  anon_sym_LT = 45,
  anon_sym_LT_EQ = 46,
  anon_sym_GT = 47,
  anon_sym_GT_EQ = 48,
  anon_sym_LT_LT = 49,
  anon_sym_GT_GT = 50,
  anon_sym_PLUS = 51,
  anon_sym_STAR = 52,
  anon_sym_SLASH = 53,
  anon_sym_PERCENT = 54,
  sym_integer_literal = 55,
  aux_sym_string_literal_token1 = 56,
  anon_sym_DQUOTE = 57,
  sym_char_literal = 58,
  sym_escape_sequence = 59,
  anon_sym_function = 60,
  anon_sym_DASH_GT = 61,
  anon_sym_LBRACE = 62,
  anon_sym_RBRACE = 63,
  anon_sym_if = 64,
  anon_sym_else = 65,
  anon_sym_true = 66,
  anon_sym_false = 67,
  sym_line_comment = 68,
  sym__string_content = 69,
  sym_float_literal = 70,
  sym_source_file = 71,
  sym_declaration = 72,
  sym__expression = 73,
  sym_while_statement = 74,
  sym_increment_statement = 75,
  sym_decrement_statement = 76,
  sym_continue_statement = 77,
  sym_for_expression = 78,
  sym_call_expression = 79,
  sym_range_expression = 80,
  sym_arguments = 81,
  sym__top_level_declaration = 82,
  sym__type = 83,
  sym_array_type = 84,
  sym_let_declaration = 85,
  sym_unary_expression = 86,
  sym_return_statement = 87,
  sym_binary_expression = 88,
  sym__literal = 89,
  sym__pattern = 90,
  sym__literal_pattern = 91,
  sym_negative_literal = 92,
  sym_string_literal = 93,
  sym_function_declaration = 94,
  sym_parameters = 95,
  sym_parameter = 96,
  sym_block = 97,
  sym_if_statement = 98,
  sym_else_clause = 99,
  sym_boolean_literal = 100,
  aux_sym_source_file_repeat1 = 101,
  aux_sym_arguments_repeat1 = 102,
  aux_sym_arguments_repeat2 = 103,
  aux_sym_string_literal_repeat1 = 104,
  aux_sym_parameters_repeat1 = 105,
  aux_sym_block_repeat1 = 106,
  alias_sym_type_identifier = 107,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_while] = "while",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_continue] = "continue",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_u8] = "primitive_type",
  [anon_sym_i8] = "primitive_type",
  [anon_sym_u16] = "primitive_type",
  [anon_sym_i16] = "primitive_type",
  [anon_sym_u32] = "primitive_type",
  [anon_sym_i32] = "primitive_type",
  [anon_sym_u64] = "primitive_type",
  [anon_sym_i64] = "primitive_type",
  [anon_sym_u128] = "primitive_type",
  [anon_sym_i128] = "primitive_type",
  [anon_sym_isize] = "primitive_type",
  [anon_sym_usize] = "primitive_type",
  [anon_sym_f32] = "primitive_type",
  [anon_sym_f64] = "primitive_type",
  [anon_sym_c_int] = "primitive_type",
  [anon_sym_bool] = "primitive_type",
  [anon_sym_String] = "primitive_type",
  [anon_sym_c_char] = "primitive_type",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_let] = "let",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [sym_mutable_specifier] = "mutable_specifier",
  [anon_sym_DASH] = "-",
  [anon_sym_return] = "return",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [sym_integer_literal] = "integer_literal",
  [aux_sym_string_literal_token1] = "\"",
  [anon_sym_DQUOTE] = "\"",
  [sym_char_literal] = "char_literal",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_function] = "function",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_line_comment] = "line_comment",
  [sym__string_content] = "_string_content",
  [sym_float_literal] = "float_literal",
  [sym_source_file] = "source_file",
  [sym_declaration] = "declaration",
  [sym__expression] = "_expression",
  [sym_while_statement] = "while_statement",
  [sym_increment_statement] = "increment_statement",
  [sym_decrement_statement] = "decrement_statement",
  [sym_continue_statement] = "continue_statement",
  [sym_for_expression] = "for_expression",
  [sym_call_expression] = "call_expression",
  [sym_range_expression] = "range_expression",
  [sym_arguments] = "arguments",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym__type] = "_type",
  [sym_array_type] = "array_type",
  [sym_let_declaration] = "let_declaration",
  [sym_unary_expression] = "unary_expression",
  [sym_return_statement] = "return_statement",
  [sym_binary_expression] = "binary_expression",
  [sym__literal] = "_literal",
  [sym__pattern] = "_pattern",
  [sym__literal_pattern] = "_literal_pattern",
  [sym_negative_literal] = "negative_literal",
  [sym_string_literal] = "string_literal",
  [sym_function_declaration] = "function_declaration",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_block] = "block",
  [sym_if_statement] = "if_statement",
  [sym_else_clause] = "else_clause",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_i8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u8,
  [anon_sym_i16] = anon_sym_u8,
  [anon_sym_u32] = anon_sym_u8,
  [anon_sym_i32] = anon_sym_u8,
  [anon_sym_u64] = anon_sym_u8,
  [anon_sym_i64] = anon_sym_u8,
  [anon_sym_u128] = anon_sym_u8,
  [anon_sym_i128] = anon_sym_u8,
  [anon_sym_isize] = anon_sym_u8,
  [anon_sym_usize] = anon_sym_u8,
  [anon_sym_f32] = anon_sym_u8,
  [anon_sym_f64] = anon_sym_u8,
  [anon_sym_c_int] = anon_sym_u8,
  [anon_sym_bool] = anon_sym_u8,
  [anon_sym_String] = anon_sym_u8,
  [anon_sym_c_char] = anon_sym_u8,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_mutable_specifier] = sym_mutable_specifier,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_integer_literal] = sym_integer_literal,
  [aux_sym_string_literal_token1] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_char_literal] = sym_char_literal,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_line_comment] = sym_line_comment,
  [sym__string_content] = sym__string_content,
  [sym_float_literal] = sym_float_literal,
  [sym_source_file] = sym_source_file,
  [sym_declaration] = sym_declaration,
  [sym__expression] = sym__expression,
  [sym_while_statement] = sym_while_statement,
  [sym_increment_statement] = sym_increment_statement,
  [sym_decrement_statement] = sym_decrement_statement,
  [sym_continue_statement] = sym_continue_statement,
  [sym_for_expression] = sym_for_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_range_expression] = sym_range_expression,
  [sym_arguments] = sym_arguments,
  [sym__top_level_declaration] = sym__top_level_declaration,
  [sym__type] = sym__type,
  [sym_array_type] = sym_array_type,
  [sym_let_declaration] = sym_let_declaration,
  [sym_unary_expression] = sym_unary_expression,
  [sym_return_statement] = sym_return_statement,
  [sym_binary_expression] = sym_binary_expression,
  [sym__literal] = sym__literal,
  [sym__pattern] = sym__pattern,
  [sym__literal_pattern] = sym__literal_pattern,
  [sym_negative_literal] = sym_negative_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_block] = sym_block,
  [sym_if_statement] = sym_if_statement,
  [sym_else_clause] = sym_else_clause,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u128] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_i128] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_isize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_c_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_c_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_mutable_specifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_literal_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_increment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_decrement_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_range_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_let_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__literal_pattern] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_negative_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alternative = 1,
  field_arguments = 2,
  field_body = 3,
  field_condition = 4,
  field_consequence = 5,
  field_element = 6,
  field_function = 7,
  field_left = 8,
  field_name = 9,
  field_operator = 10,
  field_parameters = 11,
  field_pattern = 12,
  field_return_type = 13,
  field_right = 14,
  field_type = 15,
  field_value = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_element] = "element",
  [field_function] = "function",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_pattern] = "pattern",
  [field_return_type] = "return_type",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 3},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 3},
  [12] = {.index = 18, .length = 3},
  [13] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 2},
  [17] = {.index = 30, .length = 1},
  [18] = {.index = 31, .length = 3},
  [19] = {.index = 34, .length = 4},
  [20] = {.index = 38, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_pattern, 1},
  [1] =
    {field_arguments, 1},
    {field_function, 0},
  [3] =
    {field_body, 2},
    {field_condition, 1},
  [5] =
    {field_pattern, 2},
  [6] =
    {field_condition, 1},
    {field_consequence, 2},
  [8] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [11] =
    {field_pattern, 1},
    {field_type, 3},
  [13] =
    {field_pattern, 1},
    {field_value, 3},
  [15] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [18] =
    {field_alternative, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [21] =
    {field_body, 4},
    {field_pattern, 1},
    {field_value, 3},
  [24] =
    {field_pattern, 2},
    {field_type, 4},
  [26] =
    {field_pattern, 2},
    {field_value, 4},
  [28] =
    {field_pattern, 0},
    {field_type, 2},
  [30] =
    {field_element, 1},
  [31] =
    {field_pattern, 1},
    {field_type, 3},
    {field_value, 5},
  [34] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [38] =
    {field_pattern, 2},
    {field_type, 4},
    {field_value, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_identifier,
  },
  [8] = {
    [0] = alias_sym_type_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= '_')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '^') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(104);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '^') ADVANCE(69);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '^') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '^') ADVANCE(69);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '^') ADVANCE(69);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '^') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '^') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '^') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '^') ADVANCE(69);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(97);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(19);
      if (lookahead == '8') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(19);
      if (lookahead == '8') ADVANCE(84);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(84);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == '6') ADVANCE(84);
      END_STATE();
    case 18:
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '4') ADVANCE(84);
      END_STATE();
    case 20:
      if (lookahead == '8') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(44);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(45);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 32:
      if (lookahead == 'z') ADVANCE(25);
      END_STATE();
    case 33:
      if (lookahead == '{') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == '{') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == '}') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '}') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(90);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(91);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '^') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(53);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(102);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '2') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '3') ADVANCE(85);
      if (lookahead == '6') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '4') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(11);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(104);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'S') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == '6') ADVANCE(25);
      if (lookahead == '8') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == '3') ADVANCE(35);
      if (lookahead == '6') ADVANCE(36);
      if (lookahead == '8') ADVANCE(37);
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == '4') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(51);
      if (lookahead == '6') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == '4') ADVANCE(54);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == '2') ADVANCE(60);
      if (lookahead == '6') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == '4') ADVANCE(63);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == '8') ADVANCE(74);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 55:
      if (lookahead == 'z') ADVANCE(75);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == '8') ADVANCE(79);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 64:
      if (lookahead == 'z') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_c_char);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_mutable_specifier);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 49, .external_lex_state = 2},
  [2] = {.lex_state = 49, .external_lex_state = 2},
  [3] = {.lex_state = 49, .external_lex_state = 2},
  [4] = {.lex_state = 49, .external_lex_state = 2},
  [5] = {.lex_state = 49, .external_lex_state = 2},
  [6] = {.lex_state = 49, .external_lex_state = 2},
  [7] = {.lex_state = 49, .external_lex_state = 2},
  [8] = {.lex_state = 49, .external_lex_state = 2},
  [9] = {.lex_state = 49, .external_lex_state = 2},
  [10] = {.lex_state = 49, .external_lex_state = 2},
  [11] = {.lex_state = 49, .external_lex_state = 2},
  [12] = {.lex_state = 49, .external_lex_state = 2},
  [13] = {.lex_state = 49, .external_lex_state = 2},
  [14] = {.lex_state = 49, .external_lex_state = 2},
  [15] = {.lex_state = 49, .external_lex_state = 2},
  [16] = {.lex_state = 49, .external_lex_state = 2},
  [17] = {.lex_state = 49, .external_lex_state = 2},
  [18] = {.lex_state = 49, .external_lex_state = 2},
  [19] = {.lex_state = 49, .external_lex_state = 2},
  [20] = {.lex_state = 49, .external_lex_state = 2},
  [21] = {.lex_state = 49, .external_lex_state = 2},
  [22] = {.lex_state = 49, .external_lex_state = 2},
  [23] = {.lex_state = 49, .external_lex_state = 2},
  [24] = {.lex_state = 49, .external_lex_state = 2},
  [25] = {.lex_state = 49, .external_lex_state = 2},
  [26] = {.lex_state = 49, .external_lex_state = 2},
  [27] = {.lex_state = 49, .external_lex_state = 2},
  [28] = {.lex_state = 49, .external_lex_state = 2},
  [29] = {.lex_state = 49, .external_lex_state = 2},
  [30] = {.lex_state = 49, .external_lex_state = 2},
  [31] = {.lex_state = 49, .external_lex_state = 2},
  [32] = {.lex_state = 49, .external_lex_state = 2},
  [33] = {.lex_state = 49, .external_lex_state = 2},
  [34] = {.lex_state = 7, .external_lex_state = 2},
  [35] = {.lex_state = 7, .external_lex_state = 2},
  [36] = {.lex_state = 49, .external_lex_state = 2},
  [37] = {.lex_state = 49, .external_lex_state = 2},
  [38] = {.lex_state = 49, .external_lex_state = 2},
  [39] = {.lex_state = 7, .external_lex_state = 2},
  [40] = {.lex_state = 7, .external_lex_state = 2},
  [41] = {.lex_state = 7, .external_lex_state = 2},
  [42] = {.lex_state = 49, .external_lex_state = 2},
  [43] = {.lex_state = 49, .external_lex_state = 2},
  [44] = {.lex_state = 7, .external_lex_state = 2},
  [45] = {.lex_state = 7, .external_lex_state = 2},
  [46] = {.lex_state = 49, .external_lex_state = 2},
  [47] = {.lex_state = 49, .external_lex_state = 2},
  [48] = {.lex_state = 49, .external_lex_state = 2},
  [49] = {.lex_state = 49, .external_lex_state = 2},
  [50] = {.lex_state = 49, .external_lex_state = 2},
  [51] = {.lex_state = 7, .external_lex_state = 2},
  [52] = {.lex_state = 49, .external_lex_state = 2},
  [53] = {.lex_state = 7, .external_lex_state = 2},
  [54] = {.lex_state = 49, .external_lex_state = 2},
  [55] = {.lex_state = 49, .external_lex_state = 2},
  [56] = {.lex_state = 7, .external_lex_state = 2},
  [57] = {.lex_state = 49, .external_lex_state = 2},
  [58] = {.lex_state = 7, .external_lex_state = 2},
  [59] = {.lex_state = 8, .external_lex_state = 2},
  [60] = {.lex_state = 49, .external_lex_state = 2},
  [61] = {.lex_state = 7, .external_lex_state = 2},
  [62] = {.lex_state = 7, .external_lex_state = 2},
  [63] = {.lex_state = 7, .external_lex_state = 2},
  [64] = {.lex_state = 7, .external_lex_state = 2},
  [65] = {.lex_state = 7, .external_lex_state = 2},
  [66] = {.lex_state = 7, .external_lex_state = 2},
  [67] = {.lex_state = 7, .external_lex_state = 2},
  [68] = {.lex_state = 7, .external_lex_state = 2},
  [69] = {.lex_state = 7, .external_lex_state = 2},
  [70] = {.lex_state = 7, .external_lex_state = 2},
  [71] = {.lex_state = 7, .external_lex_state = 2},
  [72] = {.lex_state = 7, .external_lex_state = 2},
  [73] = {.lex_state = 8, .external_lex_state = 2},
  [74] = {.lex_state = 7, .external_lex_state = 2},
  [75] = {.lex_state = 8, .external_lex_state = 2},
  [76] = {.lex_state = 7, .external_lex_state = 2},
  [77] = {.lex_state = 6, .external_lex_state = 2},
  [78] = {.lex_state = 6, .external_lex_state = 2},
  [79] = {.lex_state = 6, .external_lex_state = 2},
  [80] = {.lex_state = 6, .external_lex_state = 2},
  [81] = {.lex_state = 49, .external_lex_state = 2},
  [82] = {.lex_state = 6, .external_lex_state = 2},
  [83] = {.lex_state = 6, .external_lex_state = 2},
  [84] = {.lex_state = 6, .external_lex_state = 2},
  [85] = {.lex_state = 6, .external_lex_state = 2},
  [86] = {.lex_state = 6, .external_lex_state = 2},
  [87] = {.lex_state = 6, .external_lex_state = 2},
  [88] = {.lex_state = 49, .external_lex_state = 2},
  [89] = {.lex_state = 6, .external_lex_state = 2},
  [90] = {.lex_state = 6, .external_lex_state = 2},
  [91] = {.lex_state = 6, .external_lex_state = 2},
  [92] = {.lex_state = 6, .external_lex_state = 2},
  [93] = {.lex_state = 6, .external_lex_state = 2},
  [94] = {.lex_state = 6, .external_lex_state = 2},
  [95] = {.lex_state = 6, .external_lex_state = 2},
  [96] = {.lex_state = 6, .external_lex_state = 2},
  [97] = {.lex_state = 6, .external_lex_state = 2},
  [98] = {.lex_state = 6, .external_lex_state = 2},
  [99] = {.lex_state = 6, .external_lex_state = 2},
  [100] = {.lex_state = 6, .external_lex_state = 2},
  [101] = {.lex_state = 6, .external_lex_state = 2},
  [102] = {.lex_state = 49, .external_lex_state = 2},
  [103] = {.lex_state = 6, .external_lex_state = 2},
  [104] = {.lex_state = 6, .external_lex_state = 2},
  [105] = {.lex_state = 6, .external_lex_state = 2},
  [106] = {.lex_state = 49, .external_lex_state = 2},
  [107] = {.lex_state = 49, .external_lex_state = 2},
  [108] = {.lex_state = 49, .external_lex_state = 2},
  [109] = {.lex_state = 49, .external_lex_state = 2},
  [110] = {.lex_state = 49, .external_lex_state = 2},
  [111] = {.lex_state = 49, .external_lex_state = 2},
  [112] = {.lex_state = 49, .external_lex_state = 2},
  [113] = {.lex_state = 49, .external_lex_state = 2},
  [114] = {.lex_state = 49, .external_lex_state = 2},
  [115] = {.lex_state = 49, .external_lex_state = 2},
  [116] = {.lex_state = 49, .external_lex_state = 2},
  [117] = {.lex_state = 49, .external_lex_state = 2},
  [118] = {.lex_state = 49, .external_lex_state = 2},
  [119] = {.lex_state = 49, .external_lex_state = 2},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 2, .external_lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 49, .external_lex_state = 2},
  [236] = {.lex_state = 49, .external_lex_state = 2},
  [237] = {.lex_state = 49, .external_lex_state = 2},
  [238] = {.lex_state = 49, .external_lex_state = 2},
  [239] = {.lex_state = 49, .external_lex_state = 2},
  [240] = {.lex_state = 49, .external_lex_state = 2},
  [241] = {.lex_state = 49, .external_lex_state = 2},
  [242] = {.lex_state = 49, .external_lex_state = 2},
  [243] = {.lex_state = 49, .external_lex_state = 2},
  [244] = {.lex_state = 49, .external_lex_state = 2},
  [245] = {.lex_state = 49, .external_lex_state = 2},
  [246] = {.lex_state = 49, .external_lex_state = 2},
  [247] = {.lex_state = 49, .external_lex_state = 2},
  [248] = {.lex_state = 49, .external_lex_state = 2},
  [249] = {.lex_state = 49, .external_lex_state = 2},
  [250] = {.lex_state = 49, .external_lex_state = 2},
  [251] = {.lex_state = 49, .external_lex_state = 2},
  [252] = {.lex_state = 49, .external_lex_state = 2},
  [253] = {.lex_state = 49, .external_lex_state = 2},
  [254] = {.lex_state = 49, .external_lex_state = 2},
  [255] = {.lex_state = 49, .external_lex_state = 2},
  [256] = {.lex_state = 49, .external_lex_state = 2},
  [257] = {.lex_state = 49, .external_lex_state = 2},
  [258] = {.lex_state = 49, .external_lex_state = 2},
  [259] = {.lex_state = 49, .external_lex_state = 2},
  [260] = {.lex_state = 49, .external_lex_state = 2},
  [261] = {.lex_state = 49, .external_lex_state = 2},
  [262] = {.lex_state = 49, .external_lex_state = 2},
  [263] = {.lex_state = 49, .external_lex_state = 2},
  [264] = {.lex_state = 49, .external_lex_state = 2},
  [265] = {.lex_state = 49, .external_lex_state = 2},
  [266] = {.lex_state = 49, .external_lex_state = 2},
  [267] = {.lex_state = 49, .external_lex_state = 2},
  [268] = {.lex_state = 49, .external_lex_state = 2},
  [269] = {.lex_state = 49, .external_lex_state = 2},
  [270] = {.lex_state = 49, .external_lex_state = 2},
  [271] = {.lex_state = 49, .external_lex_state = 2},
  [272] = {.lex_state = 49, .external_lex_state = 2},
  [273] = {.lex_state = 49, .external_lex_state = 2},
  [274] = {.lex_state = 49, .external_lex_state = 2},
  [275] = {.lex_state = 49, .external_lex_state = 2},
  [276] = {.lex_state = 49, .external_lex_state = 2},
  [277] = {.lex_state = 49, .external_lex_state = 2},
  [278] = {.lex_state = 49, .external_lex_state = 2},
  [279] = {.lex_state = 49, .external_lex_state = 2},
  [280] = {.lex_state = 49, .external_lex_state = 2},
  [281] = {.lex_state = 49, .external_lex_state = 2},
  [282] = {.lex_state = 49, .external_lex_state = 2},
  [283] = {.lex_state = 49, .external_lex_state = 2},
  [284] = {.lex_state = 49, .external_lex_state = 2},
  [285] = {.lex_state = 49, .external_lex_state = 2},
  [286] = {.lex_state = 49, .external_lex_state = 2},
  [287] = {.lex_state = 49, .external_lex_state = 2},
  [288] = {.lex_state = 49, .external_lex_state = 2},
  [289] = {.lex_state = 49, .external_lex_state = 2},
  [290] = {.lex_state = 49, .external_lex_state = 2},
  [291] = {.lex_state = 49, .external_lex_state = 2},
  [292] = {.lex_state = 49, .external_lex_state = 2},
  [293] = {.lex_state = 49, .external_lex_state = 2},
  [294] = {.lex_state = 49, .external_lex_state = 2},
  [295] = {.lex_state = 49, .external_lex_state = 2},
  [296] = {.lex_state = 49, .external_lex_state = 2},
  [297] = {.lex_state = 49, .external_lex_state = 2},
  [298] = {.lex_state = 49, .external_lex_state = 2},
  [299] = {.lex_state = 49, .external_lex_state = 2},
  [300] = {.lex_state = 49, .external_lex_state = 2},
  [301] = {.lex_state = 49, .external_lex_state = 2},
  [302] = {.lex_state = 49, .external_lex_state = 2},
  [303] = {.lex_state = 49, .external_lex_state = 2},
  [304] = {.lex_state = 49, .external_lex_state = 2},
  [305] = {.lex_state = 49, .external_lex_state = 2},
  [306] = {.lex_state = 49, .external_lex_state = 2},
  [307] = {.lex_state = 49, .external_lex_state = 2},
  [308] = {.lex_state = 49, .external_lex_state = 2},
  [309] = {.lex_state = 49, .external_lex_state = 2},
  [310] = {.lex_state = 49, .external_lex_state = 2},
  [311] = {.lex_state = 49, .external_lex_state = 2},
  [312] = {.lex_state = 49, .external_lex_state = 2},
  [313] = {.lex_state = 49, .external_lex_state = 2},
  [314] = {.lex_state = 49, .external_lex_state = 2},
  [315] = {.lex_state = 49, .external_lex_state = 2},
  [316] = {.lex_state = 49, .external_lex_state = 2},
  [317] = {.lex_state = 49, .external_lex_state = 2},
  [318] = {.lex_state = 49, .external_lex_state = 2},
  [319] = {.lex_state = 1, .external_lex_state = 3},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 1, .external_lex_state = 3},
  [322] = {.lex_state = 1, .external_lex_state = 3},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 1, .external_lex_state = 3},
  [325] = {.lex_state = 9},
  [326] = {.lex_state = 1, .external_lex_state = 3},
  [327] = {.lex_state = 5},
  [328] = {.lex_state = 5},
  [329] = {.lex_state = 1},
  [330] = {.lex_state = 1, .external_lex_state = 3},
  [331] = {.lex_state = 5},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 9},
  [334] = {.lex_state = 1, .external_lex_state = 3},
  [335] = {.lex_state = 5},
  [336] = {.lex_state = 1, .external_lex_state = 3},
  [337] = {.lex_state = 5},
  [338] = {.lex_state = 1, .external_lex_state = 3},
  [339] = {.lex_state = 1, .external_lex_state = 3},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 1, .external_lex_state = 3},
  [342] = {.lex_state = 5},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 5},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 5},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 5},
  [359] = {.lex_state = 12},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 5},
  [362] = {.lex_state = 12},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0, .external_lex_state = 2},
  [365] = {.lex_state = 1},
  [366] = {.lex_state = 12},
  [367] = {.lex_state = 9},
  [368] = {.lex_state = 1},
  [369] = {.lex_state = 1},
  [370] = {.lex_state = 9},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0, .external_lex_state = 2},
  [373] = {.lex_state = 9},
  [374] = {.lex_state = 1},
  [375] = {.lex_state = 9},
  [376] = {.lex_state = 0, .external_lex_state = 2},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 12},
  [380] = {.lex_state = 1},
  [381] = {.lex_state = 1},
  [382] = {.lex_state = 1},
  [383] = {.lex_state = 1},
  [384] = {.lex_state = 12},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 9},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 9},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 9},
  [400] = {.lex_state = 9},
  [401] = {.lex_state = 9},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 9},
};

enum {
  ts_external_token__string_content = 0,
  ts_external_token_float_literal = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token_float_literal] = sym_float_literal,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__string_content] = true,
    [ts_external_token_float_literal] = true,
  },
  [2] = {
    [ts_external_token_float_literal] = true,
  },
  [3] = {
    [ts_external_token__string_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_u128] = ACTIONS(1),
    [anon_sym_i128] = ACTIONS(1),
    [anon_sym_isize] = ACTIONS(1),
    [anon_sym_usize] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_c_int] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_c_char] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_mutable_specifier] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [aux_sym_string_literal_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_char_literal] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(393),
    [sym_declaration] = STATE(381),
    [sym__expression] = STATE(123),
    [sym_while_statement] = STATE(381),
    [sym_increment_statement] = STATE(381),
    [sym_decrement_statement] = STATE(381),
    [sym_continue_statement] = STATE(381),
    [sym_for_expression] = STATE(148),
    [sym_call_expression] = STATE(148),
    [sym_range_expression] = STATE(148),
    [sym__top_level_declaration] = STATE(29),
    [sym_let_declaration] = STATE(380),
    [sym_unary_expression] = STATE(148),
    [sym_return_statement] = STATE(381),
    [sym_binary_expression] = STATE(148),
    [sym__literal] = STATE(148),
    [sym_string_literal] = STATE(155),
    [sym_function_declaration] = STATE(29),
    [sym_block] = STATE(381),
    [sym_if_statement] = STATE(381),
    [sym_boolean_literal] = STATE(155),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_continue] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [sym_integer_literal] = ACTIONS(21),
    [aux_sym_string_literal_token1] = ACTIONS(23),
    [sym_char_literal] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    STATE(160), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [82] = 18,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [164] = 18,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [246] = 18,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [328] = 18,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [410] = 17,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [489] = 17,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [568] = 17,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [647] = 17,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [726] = 17,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [805] = 17,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [884] = 17,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [963] = 17,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1042] = 17,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1121] = 17,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1200] = 17,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1279] = 17,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1358] = 17,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1437] = 17,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1516] = 17,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1595] = 16,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    STATE(143), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1671] = 16,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    STATE(166), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1747] = 16,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    STATE(161), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1823] = 16,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    STATE(156), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1899] = 16,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    STATE(150), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1975] = 16,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    STATE(180), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [2051] = 16,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      sym_mutable_specifier,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    STATE(212), 1,
      sym__expression,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(375), 1,
      sym_negative_literal,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(190), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [2127] = 21,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_while,
    ACTIONS(9), 1,
      anon_sym_continue,
    ACTIONS(11), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_DOT_DOT,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      aux_sym_string_literal_token1,
    ACTIONS(25), 1,
      anon_sym_function,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(123), 1,
      sym__expression,
    STATE(380), 1,
      sym_let_declaration,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(155), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(21), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(30), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(148), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(381), 8,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [2209] = 21,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_while,
    ACTIONS(111), 1,
      anon_sym_continue,
    ACTIONS(114), 1,
      anon_sym_for,
    ACTIONS(117), 1,
      anon_sym_DOT_DOT,
    ACTIONS(120), 1,
      anon_sym_let,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(126), 1,
      anon_sym_return,
    ACTIONS(132), 1,
      aux_sym_string_literal_token1,
    ACTIONS(135), 1,
      anon_sym_function,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_if,
    STATE(123), 1,
      sym__expression,
    STATE(380), 1,
      sym_let_declaration,
    ACTIONS(144), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(155), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(129), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(30), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(148), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(381), 8,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [2291] = 2,
    ACTIONS(149), 9,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(147), 28,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_let,
      sym_mutable_specifier,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2333] = 2,
    ACTIONS(153), 9,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(151), 28,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_let,
      sym_mutable_specifier,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2375] = 2,
    ACTIONS(157), 9,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(155), 28,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_let,
      sym_mutable_specifier,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2417] = 8,
    ACTIONS(163), 1,
      anon_sym_DOT_DOT,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(161), 15,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2470] = 3,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(173), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(175), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2513] = 19,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_while,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_return,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      anon_sym_if,
    STATE(45), 1,
      sym__expression,
    STATE(315), 1,
      sym_let_declaration,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(46), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2588] = 19,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_while,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_return,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_if,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(315), 1,
      sym_let_declaration,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(52), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2663] = 19,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_while,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_return,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_if,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(315), 1,
      sym_let_declaration,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(37), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2738] = 5,
    ACTIONS(163), 1,
      anon_sym_DOT_DOT,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(159), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(161), 20,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2785] = 7,
    ACTIONS(163), 1,
      anon_sym_DOT_DOT,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(171), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(161), 17,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2836] = 11,
    ACTIONS(163), 1,
      anon_sym_DOT_DOT,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    ACTIONS(213), 1,
      anon_sym_CARET,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(161), 12,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2895] = 19,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_while,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_return,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(315), 1,
      sym_let_declaration,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(52), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2970] = 19,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_while,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_return,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(315), 1,
      sym_let_declaration,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(42), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [3045] = 9,
    ACTIONS(163), 1,
      anon_sym_DOT_DOT,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_AMP,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(161), 14,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3100] = 15,
    ACTIONS(163), 1,
      anon_sym_DOT_DOT,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    ACTIONS(213), 1,
      anon_sym_CARET,
    ACTIONS(221), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(223), 1,
      anon_sym_DASH_DASH,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(227), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(225), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(229), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(219), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3167] = 19,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_while,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_return,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_if,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(315), 1,
      sym_let_declaration,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(52), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [3242] = 19,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_while,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_return,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_if,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(315), 1,
      sym_let_declaration,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(52), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [3317] = 19,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_while,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_return,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_if,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(315), 1,
      sym_let_declaration,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(47), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [3392] = 19,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_while,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_return,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_if,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(315), 1,
      sym_let_declaration,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(52), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [3467] = 19,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_while,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_return,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_if,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(315), 1,
      sym_let_declaration,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(49), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [3542] = 5,
    ACTIONS(163), 1,
      anon_sym_DOT_DOT,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(241), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(243), 20,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3589] = 19,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_while,
    ACTIONS(251), 1,
      anon_sym_continue,
    ACTIONS(254), 1,
      anon_sym_for,
    ACTIONS(257), 1,
      anon_sym_DOT_DOT,
    ACTIONS(260), 1,
      anon_sym_let,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(266), 1,
      anon_sym_return,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    ACTIONS(280), 1,
      anon_sym_if,
    STATE(45), 1,
      sym__expression,
    STATE(315), 1,
      sym_let_declaration,
    ACTIONS(283), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(269), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(52), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [3664] = 10,
    ACTIONS(163), 1,
      anon_sym_DOT_DOT,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_CARET,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(169), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(161), 13,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3721] = 19,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_while,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_return,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_if,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(315), 1,
      sym_let_declaration,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(52), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [3796] = 19,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_while,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_return,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_if,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(315), 1,
      sym_let_declaration,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(54), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [3871] = 6,
    ACTIONS(163), 1,
      anon_sym_DOT_DOT,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(171), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(161), 17,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3920] = 13,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(293), 1,
      anon_sym_for,
    ACTIONS(295), 1,
      anon_sym_DOT_DOT,
    ACTIONS(300), 1,
      sym_mutable_specifier,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(309), 1,
      aux_sym_string_literal_token1,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(312), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    ACTIONS(306), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(375), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(297), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [3983] = 2,
    ACTIONS(315), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(317), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4023] = 2,
    ACTIONS(319), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(321), 23,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4063] = 13,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(329), 1,
      sym_mutable_specifier,
    ACTIONS(331), 1,
      anon_sym_DASH,
    STATE(352), 1,
      sym_parameter,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(386), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(333), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(375), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [4125] = 2,
    ACTIONS(335), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(337), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4165] = 2,
    ACTIONS(339), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(341), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4205] = 2,
    ACTIONS(319), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(321), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4245] = 2,
    ACTIONS(343), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(345), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4285] = 2,
    ACTIONS(347), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(349), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4325] = 2,
    ACTIONS(351), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(353), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4365] = 2,
    ACTIONS(355), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(357), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4405] = 2,
    ACTIONS(359), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(361), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4445] = 2,
    ACTIONS(363), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(365), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4485] = 2,
    ACTIONS(367), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(369), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4525] = 2,
    ACTIONS(371), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(373), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4565] = 2,
    ACTIONS(375), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(377), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4605] = 2,
    ACTIONS(335), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(337), 23,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4645] = 2,
    ACTIONS(379), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(381), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4685] = 2,
    ACTIONS(347), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(349), 23,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4725] = 2,
    ACTIONS(383), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(385), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4765] = 7,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_arguments,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(393), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(161), 15,
      sym_float_literal,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4814] = 6,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_arguments,
    ACTIONS(393), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(161), 17,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4861] = 13,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE,
    ACTIONS(401), 1,
      anon_sym_CARET,
    STATE(97), 1,
      sym_arguments,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(405), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(407), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(393), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(403), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(409), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(395), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4922] = 2,
    ACTIONS(383), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(385), 22,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4961] = 12,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(329), 1,
      sym_mutable_specifier,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(385), 1,
      sym_parameter,
    STATE(386), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(333), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(375), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [5020] = 2,
    ACTIONS(375), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(377), 22,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5059] = 13,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE,
    ACTIONS(401), 1,
      anon_sym_CARET,
    STATE(97), 1,
      sym_arguments,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(405), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(407), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(393), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(403), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(415), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(413), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5120] = 13,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE,
    ACTIONS(401), 1,
      anon_sym_CARET,
    STATE(97), 1,
      sym_arguments,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(405), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(407), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(393), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(403), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(419), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(417), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5181] = 5,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_arguments,
    ACTIONS(241), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(243), 20,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5226] = 13,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE,
    ACTIONS(401), 1,
      anon_sym_CARET,
    STATE(97), 1,
      sym_arguments,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(405), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(407), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(393), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(403), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(423), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(421), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5287] = 13,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE,
    ACTIONS(401), 1,
      anon_sym_CARET,
    STATE(97), 1,
      sym_arguments,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(405), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(407), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(393), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(403), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(427), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(425), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5348] = 12,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(329), 1,
      sym_mutable_specifier,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(385), 1,
      sym_parameter,
    STATE(386), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(333), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(375), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [5407] = 8,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_arguments,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(407), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(393), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(161), 13,
      sym_float_literal,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5458] = 10,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_AMP,
    ACTIONS(401), 1,
      anon_sym_CARET,
    STATE(97), 1,
      sym_arguments,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(407), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(393), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(161), 11,
      sym_float_literal,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5513] = 11,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE,
    ACTIONS(401), 1,
      anon_sym_CARET,
    STATE(97), 1,
      sym_arguments,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(407), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(393), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 10,
      sym_float_literal,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(159), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5570] = 3,
    STATE(97), 1,
      sym_arguments,
    ACTIONS(173), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(175), 22,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5611] = 9,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_AMP,
    STATE(97), 1,
      sym_arguments,
    ACTIONS(391), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(407), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(393), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(161), 12,
      sym_float_literal,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5664] = 5,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_arguments,
    ACTIONS(159), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(161), 20,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5709] = 2,
    ACTIONS(315), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(317), 22,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5747] = 2,
    ACTIONS(367), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(369), 22,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5785] = 2,
    ACTIONS(339), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(341), 22,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5823] = 2,
    ACTIONS(343), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(345), 22,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5861] = 2,
    ACTIONS(351), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(353), 22,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5899] = 2,
    ACTIONS(355), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(357), 22,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5937] = 2,
    ACTIONS(371), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(373), 22,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5975] = 11,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(329), 1,
      sym_mutable_specifier,
    ACTIONS(331), 1,
      anon_sym_DASH,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(385), 1,
      sym_parameter,
    STATE(386), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(333), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(375), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6031] = 2,
    ACTIONS(379), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(381), 22,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [6069] = 2,
    ACTIONS(359), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(361), 22,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [6107] = 2,
    ACTIONS(363), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(365), 22,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [6145] = 10,
    ACTIONS(23), 1,
      aux_sym_string_literal_token1,
    ACTIONS(431), 1,
      sym_identifier,
    ACTIONS(435), 1,
      sym_mutable_specifier,
    ACTIONS(437), 1,
      anon_sym_DASH,
    STATE(320), 1,
      sym__literal_pattern,
    STATE(328), 1,
      sym__pattern,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(439), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(335), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(433), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6198] = 10,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(445), 1,
      sym_mutable_specifier,
    ACTIONS(447), 1,
      anon_sym_DASH,
    ACTIONS(451), 1,
      aux_sym_string_literal_token1,
    STATE(277), 1,
      sym__literal_pattern,
    STATE(292), 1,
      sym__pattern,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(449), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(271), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(443), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6251] = 9,
    ACTIONS(23), 1,
      aux_sym_string_literal_token1,
    ACTIONS(431), 1,
      sym_identifier,
    ACTIONS(437), 1,
      anon_sym_DASH,
    STATE(320), 1,
      sym__literal_pattern,
    STATE(337), 1,
      sym__pattern,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(439), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(335), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(433), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6301] = 9,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_DASH,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(401), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(333), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(375), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6351] = 9,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_DASH,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(400), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(333), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(375), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6401] = 9,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_DASH,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(399), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(333), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(375), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6451] = 9,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(447), 1,
      anon_sym_DASH,
    ACTIONS(451), 1,
      aux_sym_string_literal_token1,
    STATE(277), 1,
      sym__literal_pattern,
    STATE(294), 1,
      sym__pattern,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(449), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(271), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(443), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6501] = 9,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_DASH,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(389), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(333), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(375), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6551] = 9,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_DASH,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(333), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(375), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6601] = 9,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_DASH,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(405), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(333), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(375), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6651] = 9,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_DASH,
    STATE(370), 1,
      sym__literal_pattern,
    STATE(391), 1,
      sym__pattern,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(333), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(375), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6701] = 2,
    ACTIONS(457), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(455), 23,
      anon_sym_for,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      sym_mutable_specifier,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6735] = 2,
    ACTIONS(461), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(459), 23,
      anon_sym_for,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      sym_mutable_specifier,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6769] = 12,
    ACTIONS(451), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_for,
    ACTIONS(469), 1,
      anon_sym_DOT_DOT,
    ACTIONS(471), 1,
      anon_sym_DASH,
    STATE(79), 1,
      sym__expression,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(475), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    STATE(100), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(473), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    ACTIONS(465), 5,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
    STATE(98), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [6820] = 2,
    ACTIONS(349), 1,
      anon_sym_LF,
    ACTIONS(347), 23,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6849] = 2,
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(335), 23,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6878] = 2,
    ACTIONS(321), 1,
      anon_sym_LF,
    ACTIONS(319), 23,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6907] = 14,
    ACTIONS(477), 1,
      anon_sym_LF,
    ACTIONS(479), 1,
      anon_sym_SEMI,
    ACTIONS(481), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(483), 1,
      anon_sym_DASH_DASH,
    ACTIONS(485), 1,
      anon_sym_DOT_DOT,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_AMP,
    ACTIONS(493), 1,
      anon_sym_PIPE,
    ACTIONS(495), 1,
      anon_sym_CARET,
    STATE(167), 1,
      sym_arguments,
    ACTIONS(489), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(499), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(501), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(497), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6959] = 9,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      anon_sym_DOT_DOT,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_AMP,
    STATE(167), 1,
      sym_arguments,
    ACTIONS(489), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(499), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(501), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 11,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7001] = 10,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      anon_sym_DOT_DOT,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_CARET,
    STATE(167), 1,
      sym_arguments,
    ACTIONS(489), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(499), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(501), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 10,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7045] = 8,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      anon_sym_DOT_DOT,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_arguments,
    ACTIONS(489), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(499), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(501), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 12,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7085] = 2,
    ACTIONS(335), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(337), 21,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [7113] = 11,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      anon_sym_DOT_DOT,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_AMP,
    ACTIONS(493), 1,
      anon_sym_PIPE,
    ACTIONS(495), 1,
      anon_sym_CARET,
    STATE(167), 1,
      sym_arguments,
    ACTIONS(489), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(499), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(501), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 9,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7159] = 5,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      anon_sym_DOT_DOT,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_arguments,
    ACTIONS(159), 19,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7193] = 2,
    ACTIONS(319), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(321), 21,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [7221] = 2,
    ACTIONS(377), 1,
      anon_sym_LF,
    ACTIONS(375), 22,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_else,
  [7249] = 7,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      anon_sym_DOT_DOT,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_arguments,
    ACTIONS(489), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(501), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 14,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7287] = 3,
    ACTIONS(175), 1,
      anon_sym_LF,
    STATE(167), 1,
      sym_arguments,
    ACTIONS(173), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7317] = 6,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      anon_sym_DOT_DOT,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_arguments,
    ACTIONS(501), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 16,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
  [7353] = 5,
    ACTIONS(243), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      anon_sym_DOT_DOT,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_arguments,
    ACTIONS(241), 19,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7387] = 2,
    ACTIONS(347), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(349), 21,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [7415] = 2,
    ACTIONS(385), 1,
      anon_sym_LF,
    ACTIONS(383), 22,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_else,
  [7443] = 5,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(507), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_array_type,
    STATE(118), 1,
      sym__type,
    ACTIONS(505), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [7476] = 9,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    STATE(187), 1,
      sym_arguments,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
  [7517] = 2,
    ACTIONS(353), 1,
      anon_sym_LF,
    ACTIONS(351), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7544] = 2,
    ACTIONS(381), 1,
      anon_sym_LF,
    ACTIONS(379), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7571] = 2,
    ACTIONS(361), 1,
      anon_sym_LF,
    ACTIONS(359), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7598] = 14,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    STATE(187), 1,
      sym_arguments,
    STATE(353), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7649] = 2,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(363), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7676] = 5,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(535), 1,
      anon_sym_LBRACK,
    STATE(332), 1,
      sym_array_type,
    STATE(398), 1,
      sym__type,
    ACTIONS(533), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [7709] = 5,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(507), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_array_type,
    STATE(117), 1,
      sym__type,
    ACTIONS(505), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [7742] = 5,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(535), 1,
      anon_sym_LBRACK,
    STATE(332), 1,
      sym_array_type,
    STATE(392), 1,
      sym__type,
    ACTIONS(533), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [7775] = 2,
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(343), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7802] = 2,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(367), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7829] = 14,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      sym_arguments,
    STATE(356), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7880] = 5,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(535), 1,
      anon_sym_LBRACK,
    STATE(332), 1,
      sym_array_type,
    STATE(377), 1,
      sym__type,
    ACTIONS(533), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [7913] = 14,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    ACTIONS(539), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_arguments,
    STATE(357), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7964] = 5,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym_arguments,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [7997] = 2,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(371), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8024] = 2,
    ACTIONS(357), 1,
      anon_sym_LF,
    ACTIONS(355), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8051] = 14,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      sym_arguments,
    STATE(360), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8102] = 5,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(535), 1,
      anon_sym_LBRACK,
    STATE(332), 1,
      sym_array_type,
    STATE(395), 1,
      sym__type,
    ACTIONS(533), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [8135] = 5,
    ACTIONS(545), 1,
      sym_identifier,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    STATE(349), 1,
      sym__type,
    STATE(355), 1,
      sym_array_type,
    ACTIONS(547), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [8168] = 14,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_arguments,
    STATE(343), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8219] = 14,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_arguments,
    STATE(350), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8270] = 14,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      sym_arguments,
    STATE(351), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8321] = 2,
    ACTIONS(317), 1,
      anon_sym_LF,
    ACTIONS(315), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8348] = 14,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_arguments,
    STATE(347), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8399] = 5,
    ACTIONS(545), 1,
      sym_identifier,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    STATE(342), 1,
      sym__type,
    STATE(355), 1,
      sym_array_type,
    ACTIONS(547), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [8432] = 5,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(535), 1,
      anon_sym_LBRACK,
    STATE(332), 1,
      sym_array_type,
    STATE(378), 1,
      sym__type,
    ACTIONS(533), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [8465] = 14,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      sym_arguments,
    STATE(348), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8516] = 2,
    ACTIONS(341), 1,
      anon_sym_LF,
    ACTIONS(339), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8543] = 5,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(535), 1,
      anon_sym_LBRACK,
    STATE(332), 1,
      sym_array_type,
    STATE(371), 1,
      sym__type,
    ACTIONS(533), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [8576] = 5,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(507), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_array_type,
    STATE(306), 1,
      sym__type,
    ACTIONS(505), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [8609] = 5,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym_arguments,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [8642] = 14,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_arguments,
    STATE(345), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8693] = 5,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(507), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_array_type,
    STATE(309), 1,
      sym__type,
    ACTIONS(505), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [8726] = 7,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym_arguments,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
  [8763] = 3,
    STATE(187), 1,
      sym_arguments,
    ACTIONS(173), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [8792] = 11,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    STATE(187), 1,
      sym_arguments,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
  [8837] = 6,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym_arguments,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_LBRACE,
  [8872] = 8,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym_arguments,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
  [8911] = 10,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(525), 1,
      anon_sym_CARET,
    STATE(187), 1,
      sym_arguments,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
  [8954] = 2,
    ACTIONS(359), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(361), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [8980] = 12,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    STATE(187), 1,
      sym_arguments,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(571), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9026] = 2,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [9052] = 13,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    STATE(187), 1,
      sym_arguments,
    STATE(298), 1,
      sym_block,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9100] = 13,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    STATE(187), 1,
      sym_arguments,
    STATE(317), 1,
      sym_block,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9148] = 13,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym_arguments,
    STATE(189), 1,
      sym_block,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9196] = 3,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 18,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9224] = 2,
    ACTIONS(383), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(385), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [9250] = 2,
    ACTIONS(339), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(341), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [9276] = 5,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_DOT_DOT,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    STATE(220), 1,
      sym_arguments,
    ACTIONS(159), 17,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9308] = 2,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(365), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [9334] = 3,
    ACTIONS(581), 1,
      anon_sym_COLON,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 18,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9362] = 12,
    ACTIONS(421), 1,
      anon_sym_SEMI,
    ACTIONS(423), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_DOT_DOT,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(585), 1,
      anon_sym_AMP,
    ACTIONS(587), 1,
      anon_sym_PIPE,
    ACTIONS(589), 1,
      anon_sym_CARET,
    STATE(220), 1,
      sym_arguments,
    ACTIONS(583), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(593), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(595), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(591), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9408] = 12,
    ACTIONS(425), 1,
      anon_sym_SEMI,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_DOT_DOT,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(585), 1,
      anon_sym_AMP,
    ACTIONS(587), 1,
      anon_sym_PIPE,
    ACTIONS(589), 1,
      anon_sym_CARET,
    STATE(220), 1,
      sym_arguments,
    ACTIONS(583), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(593), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(595), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(591), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9454] = 2,
    ACTIONS(367), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(369), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [9480] = 3,
    ACTIONS(597), 1,
      anon_sym_COLON,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(345), 18,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9508] = 13,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym_arguments,
    STATE(227), 1,
      sym_block,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9556] = 13,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    STATE(144), 1,
      sym_block,
    STATE(187), 1,
      sym_arguments,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9604] = 13,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    STATE(187), 1,
      sym_arguments,
    STATE(329), 1,
      sym_block,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9652] = 2,
    ACTIONS(371), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(373), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [9678] = 13,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_block,
    STATE(187), 1,
      sym_arguments,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9726] = 2,
    ACTIONS(379), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(381), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [9752] = 7,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_DOT_DOT,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    STATE(220), 1,
      sym_arguments,
    ACTIONS(583), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(595), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 12,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [9788] = 11,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_DOT_DOT,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(585), 1,
      anon_sym_AMP,
    ACTIONS(587), 1,
      anon_sym_PIPE,
    ACTIONS(589), 1,
      anon_sym_CARET,
    STATE(220), 1,
      sym_arguments,
    ACTIONS(583), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(593), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(595), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 7,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9832] = 12,
    ACTIONS(395), 1,
      anon_sym_SEMI,
    ACTIONS(409), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_DOT_DOT,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(585), 1,
      anon_sym_AMP,
    ACTIONS(587), 1,
      anon_sym_PIPE,
    ACTIONS(589), 1,
      anon_sym_CARET,
    STATE(220), 1,
      sym_arguments,
    ACTIONS(583), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(593), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(595), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(591), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9878] = 9,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_DOT_DOT,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(585), 1,
      anon_sym_AMP,
    STATE(220), 1,
      sym_arguments,
    ACTIONS(583), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(593), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(595), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 9,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9918] = 10,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_DOT_DOT,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(585), 1,
      anon_sym_AMP,
    ACTIONS(589), 1,
      anon_sym_CARET,
    STATE(220), 1,
      sym_arguments,
    ACTIONS(583), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(593), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(595), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 8,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9960] = 12,
    ACTIONS(413), 1,
      anon_sym_SEMI,
    ACTIONS(415), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_DOT_DOT,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(585), 1,
      anon_sym_AMP,
    ACTIONS(587), 1,
      anon_sym_PIPE,
    ACTIONS(589), 1,
      anon_sym_CARET,
    STATE(220), 1,
      sym_arguments,
    ACTIONS(583), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(593), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(595), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(591), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10006] = 2,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [10032] = 8,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_DOT_DOT,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    STATE(220), 1,
      sym_arguments,
    ACTIONS(583), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(593), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(595), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 10,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10070] = 5,
    ACTIONS(243), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_DOT_DOT,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    STATE(220), 1,
      sym_arguments,
    ACTIONS(241), 17,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10102] = 6,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_DOT_DOT,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    STATE(220), 1,
      sym_arguments,
    ACTIONS(595), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 14,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
  [10136] = 3,
    ACTIONS(175), 1,
      anon_sym_LF,
    STATE(220), 1,
      sym_arguments,
    ACTIONS(173), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10164] = 12,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    STATE(187), 1,
      sym_arguments,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(603), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10210] = 12,
    ACTIONS(417), 1,
      anon_sym_SEMI,
    ACTIONS(419), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_DOT_DOT,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(585), 1,
      anon_sym_AMP,
    ACTIONS(587), 1,
      anon_sym_PIPE,
    ACTIONS(589), 1,
      anon_sym_CARET,
    STATE(220), 1,
      sym_arguments,
    ACTIONS(583), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(593), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(595), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(591), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10256] = 2,
    ACTIONS(375), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(377), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [10282] = 13,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    STATE(105), 1,
      sym_block,
    STATE(187), 1,
      sym_arguments,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10330] = 13,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_DOT_DOT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_CARET,
    STATE(187), 1,
      sym_arguments,
    STATE(365), 1,
      sym_block,
    ACTIONS(513), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(529), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(527), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10378] = 2,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(345), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [10404] = 2,
    ACTIONS(351), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(353), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [10430] = 13,
    ACTIONS(465), 1,
      anon_sym_SEMI,
    ACTIONS(475), 1,
      anon_sym_LF,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_for,
    ACTIONS(609), 1,
      anon_sym_DOT_DOT,
    ACTIONS(611), 1,
      anon_sym_DASH,
    ACTIONS(615), 1,
      aux_sym_string_literal_token1,
    ACTIONS(619), 1,
      sym_float_literal,
    STATE(203), 1,
      sym__expression,
    ACTIONS(613), 2,
      sym_integer_literal,
      sym_char_literal,
    ACTIONS(617), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(231), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(228), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10478] = 2,
    ACTIONS(341), 1,
      anon_sym_LF,
    ACTIONS(339), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10503] = 2,
    ACTIONS(381), 1,
      anon_sym_LF,
    ACTIONS(379), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10528] = 2,
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(335), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10553] = 2,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(371), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10578] = 2,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(367), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10603] = 2,
    ACTIONS(317), 1,
      anon_sym_LF,
    ACTIONS(315), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10628] = 2,
    ACTIONS(321), 1,
      anon_sym_LF,
    ACTIONS(319), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10653] = 2,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(363), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10678] = 2,
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(343), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10703] = 2,
    ACTIONS(349), 1,
      anon_sym_LF,
    ACTIONS(347), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10728] = 2,
    ACTIONS(353), 1,
      anon_sym_LF,
    ACTIONS(351), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10753] = 2,
    ACTIONS(357), 1,
      anon_sym_LF,
    ACTIONS(355), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10778] = 2,
    ACTIONS(361), 1,
      anon_sym_LF,
    ACTIONS(359), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10803] = 2,
    ACTIONS(385), 1,
      anon_sym_LF,
    ACTIONS(383), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10828] = 2,
    ACTIONS(377), 1,
      anon_sym_LF,
    ACTIONS(375), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10853] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_DOT_DOT,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_string_literal_token1,
    STATE(126), 1,
      sym__expression,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(155), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(21), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(148), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10893] = 10,
    ACTIONS(451), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_for,
    ACTIONS(469), 1,
      anon_sym_DOT_DOT,
    ACTIONS(471), 1,
      anon_sym_DASH,
    STATE(77), 1,
      sym__expression,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(473), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(98), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10933] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(178), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10973] = 10,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_for,
    ACTIONS(627), 1,
      anon_sym_DOT_DOT,
    ACTIONS(629), 1,
      anon_sym_DASH,
    ACTIONS(631), 1,
      aux_sym_string_literal_token1,
    STATE(211), 1,
      sym__expression,
    ACTIONS(617), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(231), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(619), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(228), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11013] = 10,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_for,
    ACTIONS(627), 1,
      anon_sym_DOT_DOT,
    ACTIONS(629), 1,
      anon_sym_DASH,
    ACTIONS(631), 1,
      aux_sym_string_literal_token1,
    STATE(210), 1,
      sym__expression,
    ACTIONS(617), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(231), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(619), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(228), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11053] = 10,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_for,
    ACTIONS(627), 1,
      anon_sym_DOT_DOT,
    ACTIONS(629), 1,
      anon_sym_DASH,
    ACTIONS(631), 1,
      aux_sym_string_literal_token1,
    STATE(208), 1,
      sym__expression,
    ACTIONS(617), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(231), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(619), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(228), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11093] = 10,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_for,
    ACTIONS(627), 1,
      anon_sym_DOT_DOT,
    ACTIONS(629), 1,
      anon_sym_DASH,
    ACTIONS(631), 1,
      aux_sym_string_literal_token1,
    STATE(205), 1,
      sym__expression,
    ACTIONS(617), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(231), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(619), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(228), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11133] = 10,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_for,
    ACTIONS(627), 1,
      anon_sym_DOT_DOT,
    ACTIONS(629), 1,
      anon_sym_DASH,
    ACTIONS(631), 1,
      aux_sym_string_literal_token1,
    STATE(204), 1,
      sym__expression,
    ACTIONS(617), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(231), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(619), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(228), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11173] = 10,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_for,
    ACTIONS(627), 1,
      anon_sym_DOT_DOT,
    ACTIONS(629), 1,
      anon_sym_DASH,
    ACTIONS(631), 1,
      aux_sym_string_literal_token1,
    STATE(202), 1,
      sym__expression,
    ACTIONS(617), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(231), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(619), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(228), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11213] = 10,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_for,
    ACTIONS(627), 1,
      anon_sym_DOT_DOT,
    ACTIONS(629), 1,
      anon_sym_DASH,
    ACTIONS(631), 1,
      aux_sym_string_literal_token1,
    STATE(201), 1,
      sym__expression,
    ACTIONS(617), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(231), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(619), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(228), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11253] = 10,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_for,
    ACTIONS(627), 1,
      anon_sym_DOT_DOT,
    ACTIONS(629), 1,
      anon_sym_DASH,
    ACTIONS(631), 1,
      aux_sym_string_literal_token1,
    STATE(188), 1,
      sym__expression,
    ACTIONS(617), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(231), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(619), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(228), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11293] = 2,
    ACTIONS(633), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(575), 10,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [11317] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(139), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11357] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(216), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11397] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(175), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11437] = 10,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    STATE(51), 1,
      sym__expression,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11477] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_DOT_DOT,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_string_literal_token1,
    STATE(135), 1,
      sym__expression,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(155), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(21), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(148), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11517] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(153), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11557] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_DOT_DOT,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_string_literal_token1,
    STATE(133), 1,
      sym__expression,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(155), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(21), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(148), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11597] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(215), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11637] = 10,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    STATE(35), 1,
      sym__expression,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11677] = 10,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    STATE(56), 1,
      sym__expression,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11717] = 10,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    STATE(34), 1,
      sym__expression,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11757] = 10,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    STATE(53), 1,
      sym__expression,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11797] = 10,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    STATE(44), 1,
      sym__expression,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11837] = 10,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    STATE(41), 1,
      sym__expression,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11877] = 10,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    STATE(40), 1,
      sym__expression,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11917] = 10,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      aux_sym_string_literal_token1,
    STATE(39), 1,
      sym__expression,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(193), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(64), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11957] = 10,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_for,
    ACTIONS(627), 1,
      anon_sym_DOT_DOT,
    ACTIONS(629), 1,
      anon_sym_DASH,
    ACTIONS(631), 1,
      aux_sym_string_literal_token1,
    STATE(191), 1,
      sym__expression,
    ACTIONS(617), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(231), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(619), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(228), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11997] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(199), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12037] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_DOT_DOT,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_string_literal_token1,
    STATE(134), 1,
      sym__expression,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(155), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(21), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(148), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12077] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(197), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12117] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(195), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12157] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(173), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12197] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_DOT_DOT,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_string_literal_token1,
    STATE(125), 1,
      sym__expression,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(155), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(21), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(148), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12237] = 10,
    ACTIONS(451), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_for,
    ACTIONS(469), 1,
      anon_sym_DOT_DOT,
    ACTIONS(471), 1,
      anon_sym_DASH,
    STATE(87), 1,
      sym__expression,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(473), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(98), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12277] = 2,
    ACTIONS(635), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(581), 10,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [12301] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_DOT_DOT,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_string_literal_token1,
    STATE(124), 1,
      sym__expression,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(155), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(21), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(148), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12341] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(184), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12381] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(182), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12421] = 2,
    ACTIONS(637), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(639), 10,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [12445] = 10,
    ACTIONS(451), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_for,
    ACTIONS(469), 1,
      anon_sym_DOT_DOT,
    ACTIONS(471), 1,
      anon_sym_DASH,
    STATE(85), 1,
      sym__expression,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(473), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(98), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12485] = 2,
    ACTIONS(641), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(597), 10,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [12509] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(183), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12549] = 10,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_for,
    ACTIONS(627), 1,
      anon_sym_DOT_DOT,
    ACTIONS(629), 1,
      anon_sym_DASH,
    ACTIONS(631), 1,
      aux_sym_string_literal_token1,
    STATE(209), 1,
      sym__expression,
    ACTIONS(617), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(231), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(619), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(228), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12589] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(170), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12629] = 10,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_for,
    ACTIONS(627), 1,
      anon_sym_DOT_DOT,
    ACTIONS(629), 1,
      anon_sym_DASH,
    ACTIONS(631), 1,
      aux_sym_string_literal_token1,
    STATE(213), 1,
      sym__expression,
    ACTIONS(617), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(231), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(619), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(228), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12669] = 10,
    ACTIONS(451), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_for,
    ACTIONS(469), 1,
      anon_sym_DOT_DOT,
    ACTIONS(471), 1,
      anon_sym_DASH,
    STATE(92), 1,
      sym__expression,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(473), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(98), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12709] = 10,
    ACTIONS(451), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_for,
    ACTIONS(469), 1,
      anon_sym_DOT_DOT,
    ACTIONS(471), 1,
      anon_sym_DASH,
    STATE(78), 1,
      sym__expression,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(473), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(98), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12749] = 10,
    ACTIONS(451), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_for,
    ACTIONS(469), 1,
      anon_sym_DOT_DOT,
    ACTIONS(471), 1,
      anon_sym_DASH,
    STATE(89), 1,
      sym__expression,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(473), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(98), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12789] = 10,
    ACTIONS(451), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_for,
    ACTIONS(469), 1,
      anon_sym_DOT_DOT,
    ACTIONS(471), 1,
      anon_sym_DASH,
    STATE(90), 1,
      sym__expression,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(473), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(98), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12829] = 10,
    ACTIONS(451), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_for,
    ACTIONS(469), 1,
      anon_sym_DOT_DOT,
    ACTIONS(471), 1,
      anon_sym_DASH,
    STATE(93), 1,
      sym__expression,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(473), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(98), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12869] = 10,
    ACTIONS(451), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_for,
    ACTIONS(469), 1,
      anon_sym_DOT_DOT,
    ACTIONS(471), 1,
      anon_sym_DASH,
    STATE(91), 1,
      sym__expression,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(473), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(98), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12909] = 10,
    ACTIONS(451), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_for,
    ACTIONS(469), 1,
      anon_sym_DOT_DOT,
    ACTIONS(471), 1,
      anon_sym_DASH,
    STATE(86), 1,
      sym__expression,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(473), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(98), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12949] = 10,
    ACTIONS(451), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_for,
    ACTIONS(469), 1,
      anon_sym_DOT_DOT,
    ACTIONS(471), 1,
      anon_sym_DASH,
    STATE(94), 1,
      sym__expression,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(473), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(98), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12989] = 10,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_for,
    ACTIONS(627), 1,
      anon_sym_DOT_DOT,
    ACTIONS(629), 1,
      anon_sym_DASH,
    ACTIONS(631), 1,
      aux_sym_string_literal_token1,
    STATE(192), 1,
      sym__expression,
    ACTIONS(617), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(231), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(619), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(228), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13029] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_DOT_DOT,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_string_literal_token1,
    STATE(128), 1,
      sym__expression,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(155), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(21), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(148), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13069] = 4,
    ACTIONS(647), 1,
      anon_sym_COLON,
    ACTIONS(649), 1,
      anon_sym_EQ,
    ACTIONS(645), 8,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(643), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13097] = 10,
    ACTIONS(451), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_for,
    ACTIONS(469), 1,
      anon_sym_DOT_DOT,
    ACTIONS(471), 1,
      anon_sym_DASH,
    STATE(84), 1,
      sym__expression,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(473), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(98), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13137] = 4,
    ACTIONS(655), 1,
      anon_sym_COLON,
    ACTIONS(657), 1,
      anon_sym_EQ,
    ACTIONS(653), 8,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(651), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13165] = 11,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    ACTIONS(625), 1,
      sym_char_literal,
    STATE(153), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(659), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13207] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(177), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13247] = 10,
    ACTIONS(451), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_for,
    ACTIONS(469), 1,
      anon_sym_DOT_DOT,
    ACTIONS(471), 1,
      anon_sym_DASH,
    STATE(83), 1,
      sym__expression,
    ACTIONS(453), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(473), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(98), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13287] = 4,
    ACTIONS(665), 1,
      anon_sym_else,
    STATE(313), 1,
      sym_else_clause,
    ACTIONS(663), 8,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(661), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13315] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_DOT_DOT,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_string_literal_token1,
    STATE(132), 1,
      sym__expression,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(155), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(21), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(148), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13355] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_DOT_DOT,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_string_literal_token1,
    STATE(129), 1,
      sym__expression,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(155), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(21), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(148), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13395] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(176), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13435] = 10,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_for,
    ACTIONS(627), 1,
      anon_sym_DOT_DOT,
    ACTIONS(629), 1,
      anon_sym_DASH,
    ACTIONS(631), 1,
      aux_sym_string_literal_token1,
    STATE(206), 1,
      sym__expression,
    ACTIONS(617), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(231), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(619), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(228), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13475] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(174), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13515] = 10,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      aux_sym_string_literal_token1,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_DASH,
    STATE(196), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(181), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(625), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(217), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13555] = 2,
    ACTIONS(667), 8,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(669), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13578] = 3,
    ACTIONS(675), 1,
      anon_sym_EQ,
    ACTIONS(673), 8,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(671), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13603] = 2,
    ACTIONS(385), 8,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(383), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13626] = 2,
    ACTIONS(377), 8,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(375), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13649] = 3,
    ACTIONS(681), 1,
      anon_sym_EQ,
    ACTIONS(679), 8,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(677), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13674] = 2,
    ACTIONS(683), 8,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(685), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13697] = 2,
    ACTIONS(103), 8,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(687), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13720] = 2,
    ACTIONS(691), 8,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(689), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13742] = 2,
    ACTIONS(695), 8,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(693), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13764] = 2,
    ACTIONS(699), 8,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(697), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13786] = 2,
    ACTIONS(703), 8,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(701), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13808] = 2,
    ACTIONS(707), 8,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(705), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13830] = 2,
    ACTIONS(711), 8,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(709), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13852] = 2,
    ACTIONS(715), 8,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(713), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13874] = 3,
    ACTIONS(717), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(719), 2,
      sym__string_content,
      sym_escape_sequence,
  [13885] = 2,
    ACTIONS(597), 1,
      anon_sym_LF,
    ACTIONS(641), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [13894] = 3,
    ACTIONS(721), 1,
      anon_sym_DQUOTE,
    STATE(324), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(723), 2,
      sym__string_content,
      sym_escape_sequence,
  [13905] = 3,
    ACTIONS(725), 1,
      anon_sym_DQUOTE,
    STATE(330), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(727), 2,
      sym__string_content,
      sym_escape_sequence,
  [13916] = 1,
    ACTIONS(153), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [13923] = 3,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(719), 2,
      sym__string_content,
      sym_escape_sequence,
  [13934] = 3,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(731), 1,
      anon_sym_if,
    STATE(318), 2,
      sym_block,
      sym_if_statement,
  [13945] = 3,
    ACTIONS(733), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(735), 2,
      sym__string_content,
      sym_escape_sequence,
  [13956] = 2,
    ACTIONS(575), 1,
      anon_sym_LF,
    ACTIONS(633), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [13965] = 4,
    ACTIONS(643), 1,
      anon_sym_SEMI,
    ACTIONS(645), 1,
      anon_sym_LF,
    ACTIONS(738), 1,
      anon_sym_COLON,
    ACTIONS(740), 1,
      anon_sym_EQ,
  [13978] = 4,
    ACTIONS(661), 1,
      anon_sym_SEMI,
    ACTIONS(663), 1,
      anon_sym_LF,
    ACTIONS(742), 1,
      anon_sym_else,
    STATE(383), 1,
      sym_else_clause,
  [13991] = 3,
    ACTIONS(744), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(719), 2,
      sym__string_content,
      sym_escape_sequence,
  [14002] = 2,
    ACTIONS(639), 1,
      anon_sym_LF,
    ACTIONS(637), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [14011] = 1,
    ACTIONS(157), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [14018] = 3,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(746), 1,
      anon_sym_if,
    STATE(374), 2,
      sym_block,
      sym_if_statement,
  [14029] = 3,
    ACTIONS(748), 1,
      anon_sym_DQUOTE,
    STATE(336), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(750), 2,
      sym__string_content,
      sym_escape_sequence,
  [14040] = 2,
    ACTIONS(581), 1,
      anon_sym_LF,
    ACTIONS(635), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [14049] = 3,
    ACTIONS(752), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(719), 2,
      sym__string_content,
      sym_escape_sequence,
  [14060] = 4,
    ACTIONS(651), 1,
      anon_sym_SEMI,
    ACTIONS(653), 1,
      anon_sym_LF,
    ACTIONS(754), 1,
      anon_sym_COLON,
    ACTIONS(756), 1,
      anon_sym_EQ,
  [14073] = 3,
    ACTIONS(758), 1,
      anon_sym_DQUOTE,
    STATE(339), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(760), 2,
      sym__string_content,
      sym_escape_sequence,
  [14084] = 3,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(719), 2,
      sym__string_content,
      sym_escape_sequence,
  [14095] = 1,
    ACTIONS(149), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [14102] = 3,
    ACTIONS(764), 1,
      anon_sym_DQUOTE,
    STATE(319), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(766), 2,
      sym__string_content,
      sym_escape_sequence,
  [14113] = 3,
    ACTIONS(677), 1,
      anon_sym_SEMI,
    ACTIONS(679), 1,
      anon_sym_LF,
    ACTIONS(768), 1,
      anon_sym_EQ,
  [14123] = 3,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_arguments_repeat2,
  [14133] = 3,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    ACTIONS(770), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_arguments_repeat2,
  [14143] = 3,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_arguments_repeat2,
  [14153] = 3,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_parameters_repeat1,
  [14163] = 3,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_arguments_repeat2,
  [14173] = 3,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_arguments_repeat2,
  [14183] = 3,
    ACTIONS(671), 1,
      anon_sym_SEMI,
    ACTIONS(673), 1,
      anon_sym_LF,
    ACTIONS(777), 1,
      anon_sym_EQ,
  [14193] = 3,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_arguments_repeat2,
  [14203] = 3,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_arguments_repeat2,
  [14213] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      aux_sym_parameters_repeat1,
  [14223] = 3,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_arguments_repeat2,
  [14233] = 3,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
    STATE(354), 1,
      aux_sym_parameters_repeat1,
  [14243] = 2,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(155), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [14251] = 3,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_arguments_repeat2,
  [14261] = 3,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_arguments_repeat2,
  [14271] = 2,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(147), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [14279] = 3,
    ACTIONS(794), 1,
      anon_sym_DASH_GT,
    ACTIONS(796), 1,
      anon_sym_LBRACE,
    STATE(310), 1,
      sym_block,
  [14289] = 3,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_arguments_repeat2,
  [14299] = 2,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(151), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [14307] = 1,
    ACTIONS(800), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [14312] = 2,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    STATE(359), 1,
      sym_parameters,
  [14319] = 1,
    ACTIONS(804), 2,
      sym_float_literal,
      sym_integer_literal,
  [14324] = 2,
    ACTIONS(709), 1,
      anon_sym_SEMI,
    ACTIONS(711), 1,
      anon_sym_LF,
  [14331] = 1,
    ACTIONS(806), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [14336] = 1,
    ACTIONS(575), 2,
      anon_sym_in,
      anon_sym_COLON,
  [14341] = 2,
    ACTIONS(689), 1,
      anon_sym_SEMI,
    ACTIONS(691), 1,
      anon_sym_LF,
  [14348] = 2,
    ACTIONS(697), 1,
      anon_sym_SEMI,
    ACTIONS(699), 1,
      anon_sym_LF,
  [14355] = 1,
    ACTIONS(597), 2,
      anon_sym_in,
      anon_sym_COLON,
  [14360] = 1,
    ACTIONS(461), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14365] = 1,
    ACTIONS(808), 2,
      sym_float_literal,
      sym_integer_literal,
  [14370] = 1,
    ACTIONS(639), 2,
      anon_sym_in,
      anon_sym_COLON,
  [14375] = 2,
    ACTIONS(713), 1,
      anon_sym_SEMI,
    ACTIONS(715), 1,
      anon_sym_LF,
  [14382] = 1,
    ACTIONS(581), 2,
      anon_sym_in,
      anon_sym_COLON,
  [14387] = 1,
    ACTIONS(810), 2,
      sym_float_literal,
      sym_integer_literal,
  [14392] = 2,
    ACTIONS(796), 1,
      anon_sym_LBRACE,
    STATE(305), 1,
      sym_block,
  [14399] = 1,
    ACTIONS(457), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14404] = 1,
    ACTIONS(812), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [14409] = 2,
    ACTIONS(701), 1,
      anon_sym_SEMI,
    ACTIONS(703), 1,
      anon_sym_LF,
  [14416] = 2,
    ACTIONS(477), 1,
      anon_sym_LF,
    ACTIONS(479), 1,
      anon_sym_SEMI,
  [14423] = 2,
    ACTIONS(705), 1,
      anon_sym_SEMI,
    ACTIONS(707), 1,
      anon_sym_LF,
  [14430] = 2,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(695), 1,
      anon_sym_LF,
  [14437] = 1,
    ACTIONS(814), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [14442] = 1,
    ACTIONS(790), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14447] = 1,
    ACTIONS(816), 1,
      anon_sym_COLON,
  [14451] = 1,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
  [14455] = 1,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
  [14459] = 1,
    ACTIONS(818), 1,
      anon_sym_COLON,
  [14463] = 1,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
  [14467] = 1,
    ACTIONS(820), 1,
      anon_sym_COLON,
  [14471] = 1,
    ACTIONS(822), 1,
      anon_sym_RBRACK,
  [14475] = 1,
    ACTIONS(824), 1,
      ts_builtin_sym_end,
  [14479] = 1,
    ACTIONS(826), 1,
      sym_identifier,
  [14483] = 1,
    ACTIONS(828), 1,
      anon_sym_RBRACK,
  [14487] = 1,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
  [14491] = 1,
    ACTIONS(830), 1,
      anon_sym_in,
  [14495] = 1,
    ACTIONS(832), 1,
      anon_sym_RBRACK,
  [14499] = 1,
    ACTIONS(834), 1,
      anon_sym_in,
  [14503] = 1,
    ACTIONS(836), 1,
      anon_sym_in,
  [14507] = 1,
    ACTIONS(838), 1,
      anon_sym_in,
  [14511] = 1,
    ACTIONS(840), 1,
      anon_sym_COLON,
  [14515] = 1,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
  [14519] = 1,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
  [14523] = 1,
    ACTIONS(842), 1,
      anon_sym_in,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 246,
  [SMALL_STATE(6)] = 328,
  [SMALL_STATE(7)] = 410,
  [SMALL_STATE(8)] = 489,
  [SMALL_STATE(9)] = 568,
  [SMALL_STATE(10)] = 647,
  [SMALL_STATE(11)] = 726,
  [SMALL_STATE(12)] = 805,
  [SMALL_STATE(13)] = 884,
  [SMALL_STATE(14)] = 963,
  [SMALL_STATE(15)] = 1042,
  [SMALL_STATE(16)] = 1121,
  [SMALL_STATE(17)] = 1200,
  [SMALL_STATE(18)] = 1279,
  [SMALL_STATE(19)] = 1358,
  [SMALL_STATE(20)] = 1437,
  [SMALL_STATE(21)] = 1516,
  [SMALL_STATE(22)] = 1595,
  [SMALL_STATE(23)] = 1671,
  [SMALL_STATE(24)] = 1747,
  [SMALL_STATE(25)] = 1823,
  [SMALL_STATE(26)] = 1899,
  [SMALL_STATE(27)] = 1975,
  [SMALL_STATE(28)] = 2051,
  [SMALL_STATE(29)] = 2127,
  [SMALL_STATE(30)] = 2209,
  [SMALL_STATE(31)] = 2291,
  [SMALL_STATE(32)] = 2333,
  [SMALL_STATE(33)] = 2375,
  [SMALL_STATE(34)] = 2417,
  [SMALL_STATE(35)] = 2470,
  [SMALL_STATE(36)] = 2513,
  [SMALL_STATE(37)] = 2588,
  [SMALL_STATE(38)] = 2663,
  [SMALL_STATE(39)] = 2738,
  [SMALL_STATE(40)] = 2785,
  [SMALL_STATE(41)] = 2836,
  [SMALL_STATE(42)] = 2895,
  [SMALL_STATE(43)] = 2970,
  [SMALL_STATE(44)] = 3045,
  [SMALL_STATE(45)] = 3100,
  [SMALL_STATE(46)] = 3167,
  [SMALL_STATE(47)] = 3242,
  [SMALL_STATE(48)] = 3317,
  [SMALL_STATE(49)] = 3392,
  [SMALL_STATE(50)] = 3467,
  [SMALL_STATE(51)] = 3542,
  [SMALL_STATE(52)] = 3589,
  [SMALL_STATE(53)] = 3664,
  [SMALL_STATE(54)] = 3721,
  [SMALL_STATE(55)] = 3796,
  [SMALL_STATE(56)] = 3871,
  [SMALL_STATE(57)] = 3920,
  [SMALL_STATE(58)] = 3983,
  [SMALL_STATE(59)] = 4023,
  [SMALL_STATE(60)] = 4063,
  [SMALL_STATE(61)] = 4125,
  [SMALL_STATE(62)] = 4165,
  [SMALL_STATE(63)] = 4205,
  [SMALL_STATE(64)] = 4245,
  [SMALL_STATE(65)] = 4285,
  [SMALL_STATE(66)] = 4325,
  [SMALL_STATE(67)] = 4365,
  [SMALL_STATE(68)] = 4405,
  [SMALL_STATE(69)] = 4445,
  [SMALL_STATE(70)] = 4485,
  [SMALL_STATE(71)] = 4525,
  [SMALL_STATE(72)] = 4565,
  [SMALL_STATE(73)] = 4605,
  [SMALL_STATE(74)] = 4645,
  [SMALL_STATE(75)] = 4685,
  [SMALL_STATE(76)] = 4725,
  [SMALL_STATE(77)] = 4765,
  [SMALL_STATE(78)] = 4814,
  [SMALL_STATE(79)] = 4861,
  [SMALL_STATE(80)] = 4922,
  [SMALL_STATE(81)] = 4961,
  [SMALL_STATE(82)] = 5020,
  [SMALL_STATE(83)] = 5059,
  [SMALL_STATE(84)] = 5120,
  [SMALL_STATE(85)] = 5181,
  [SMALL_STATE(86)] = 5226,
  [SMALL_STATE(87)] = 5287,
  [SMALL_STATE(88)] = 5348,
  [SMALL_STATE(89)] = 5407,
  [SMALL_STATE(90)] = 5458,
  [SMALL_STATE(91)] = 5513,
  [SMALL_STATE(92)] = 5570,
  [SMALL_STATE(93)] = 5611,
  [SMALL_STATE(94)] = 5664,
  [SMALL_STATE(95)] = 5709,
  [SMALL_STATE(96)] = 5747,
  [SMALL_STATE(97)] = 5785,
  [SMALL_STATE(98)] = 5823,
  [SMALL_STATE(99)] = 5861,
  [SMALL_STATE(100)] = 5899,
  [SMALL_STATE(101)] = 5937,
  [SMALL_STATE(102)] = 5975,
  [SMALL_STATE(103)] = 6031,
  [SMALL_STATE(104)] = 6069,
  [SMALL_STATE(105)] = 6107,
  [SMALL_STATE(106)] = 6145,
  [SMALL_STATE(107)] = 6198,
  [SMALL_STATE(108)] = 6251,
  [SMALL_STATE(109)] = 6301,
  [SMALL_STATE(110)] = 6351,
  [SMALL_STATE(111)] = 6401,
  [SMALL_STATE(112)] = 6451,
  [SMALL_STATE(113)] = 6501,
  [SMALL_STATE(114)] = 6551,
  [SMALL_STATE(115)] = 6601,
  [SMALL_STATE(116)] = 6651,
  [SMALL_STATE(117)] = 6701,
  [SMALL_STATE(118)] = 6735,
  [SMALL_STATE(119)] = 6769,
  [SMALL_STATE(120)] = 6820,
  [SMALL_STATE(121)] = 6849,
  [SMALL_STATE(122)] = 6878,
  [SMALL_STATE(123)] = 6907,
  [SMALL_STATE(124)] = 6959,
  [SMALL_STATE(125)] = 7001,
  [SMALL_STATE(126)] = 7045,
  [SMALL_STATE(127)] = 7085,
  [SMALL_STATE(128)] = 7113,
  [SMALL_STATE(129)] = 7159,
  [SMALL_STATE(130)] = 7193,
  [SMALL_STATE(131)] = 7221,
  [SMALL_STATE(132)] = 7249,
  [SMALL_STATE(133)] = 7287,
  [SMALL_STATE(134)] = 7317,
  [SMALL_STATE(135)] = 7353,
  [SMALL_STATE(136)] = 7387,
  [SMALL_STATE(137)] = 7415,
  [SMALL_STATE(138)] = 7443,
  [SMALL_STATE(139)] = 7476,
  [SMALL_STATE(140)] = 7517,
  [SMALL_STATE(141)] = 7544,
  [SMALL_STATE(142)] = 7571,
  [SMALL_STATE(143)] = 7598,
  [SMALL_STATE(144)] = 7649,
  [SMALL_STATE(145)] = 7676,
  [SMALL_STATE(146)] = 7709,
  [SMALL_STATE(147)] = 7742,
  [SMALL_STATE(148)] = 7775,
  [SMALL_STATE(149)] = 7802,
  [SMALL_STATE(150)] = 7829,
  [SMALL_STATE(151)] = 7880,
  [SMALL_STATE(152)] = 7913,
  [SMALL_STATE(153)] = 7964,
  [SMALL_STATE(154)] = 7997,
  [SMALL_STATE(155)] = 8024,
  [SMALL_STATE(156)] = 8051,
  [SMALL_STATE(157)] = 8102,
  [SMALL_STATE(158)] = 8135,
  [SMALL_STATE(159)] = 8168,
  [SMALL_STATE(160)] = 8219,
  [SMALL_STATE(161)] = 8270,
  [SMALL_STATE(162)] = 8321,
  [SMALL_STATE(163)] = 8348,
  [SMALL_STATE(164)] = 8399,
  [SMALL_STATE(165)] = 8432,
  [SMALL_STATE(166)] = 8465,
  [SMALL_STATE(167)] = 8516,
  [SMALL_STATE(168)] = 8543,
  [SMALL_STATE(169)] = 8576,
  [SMALL_STATE(170)] = 8609,
  [SMALL_STATE(171)] = 8642,
  [SMALL_STATE(172)] = 8693,
  [SMALL_STATE(173)] = 8726,
  [SMALL_STATE(174)] = 8763,
  [SMALL_STATE(175)] = 8792,
  [SMALL_STATE(176)] = 8837,
  [SMALL_STATE(177)] = 8872,
  [SMALL_STATE(178)] = 8911,
  [SMALL_STATE(179)] = 8954,
  [SMALL_STATE(180)] = 8980,
  [SMALL_STATE(181)] = 9026,
  [SMALL_STATE(182)] = 9052,
  [SMALL_STATE(183)] = 9100,
  [SMALL_STATE(184)] = 9148,
  [SMALL_STATE(185)] = 9196,
  [SMALL_STATE(186)] = 9224,
  [SMALL_STATE(187)] = 9250,
  [SMALL_STATE(188)] = 9276,
  [SMALL_STATE(189)] = 9308,
  [SMALL_STATE(190)] = 9334,
  [SMALL_STATE(191)] = 9362,
  [SMALL_STATE(192)] = 9408,
  [SMALL_STATE(193)] = 9454,
  [SMALL_STATE(194)] = 9480,
  [SMALL_STATE(195)] = 9508,
  [SMALL_STATE(196)] = 9556,
  [SMALL_STATE(197)] = 9604,
  [SMALL_STATE(198)] = 9652,
  [SMALL_STATE(199)] = 9678,
  [SMALL_STATE(200)] = 9726,
  [SMALL_STATE(201)] = 9752,
  [SMALL_STATE(202)] = 9788,
  [SMALL_STATE(203)] = 9832,
  [SMALL_STATE(204)] = 9878,
  [SMALL_STATE(205)] = 9918,
  [SMALL_STATE(206)] = 9960,
  [SMALL_STATE(207)] = 10006,
  [SMALL_STATE(208)] = 10032,
  [SMALL_STATE(209)] = 10070,
  [SMALL_STATE(210)] = 10102,
  [SMALL_STATE(211)] = 10136,
  [SMALL_STATE(212)] = 10164,
  [SMALL_STATE(213)] = 10210,
  [SMALL_STATE(214)] = 10256,
  [SMALL_STATE(215)] = 10282,
  [SMALL_STATE(216)] = 10330,
  [SMALL_STATE(217)] = 10378,
  [SMALL_STATE(218)] = 10404,
  [SMALL_STATE(219)] = 10430,
  [SMALL_STATE(220)] = 10478,
  [SMALL_STATE(221)] = 10503,
  [SMALL_STATE(222)] = 10528,
  [SMALL_STATE(223)] = 10553,
  [SMALL_STATE(224)] = 10578,
  [SMALL_STATE(225)] = 10603,
  [SMALL_STATE(226)] = 10628,
  [SMALL_STATE(227)] = 10653,
  [SMALL_STATE(228)] = 10678,
  [SMALL_STATE(229)] = 10703,
  [SMALL_STATE(230)] = 10728,
  [SMALL_STATE(231)] = 10753,
  [SMALL_STATE(232)] = 10778,
  [SMALL_STATE(233)] = 10803,
  [SMALL_STATE(234)] = 10828,
  [SMALL_STATE(235)] = 10853,
  [SMALL_STATE(236)] = 10893,
  [SMALL_STATE(237)] = 10933,
  [SMALL_STATE(238)] = 10973,
  [SMALL_STATE(239)] = 11013,
  [SMALL_STATE(240)] = 11053,
  [SMALL_STATE(241)] = 11093,
  [SMALL_STATE(242)] = 11133,
  [SMALL_STATE(243)] = 11173,
  [SMALL_STATE(244)] = 11213,
  [SMALL_STATE(245)] = 11253,
  [SMALL_STATE(246)] = 11293,
  [SMALL_STATE(247)] = 11317,
  [SMALL_STATE(248)] = 11357,
  [SMALL_STATE(249)] = 11397,
  [SMALL_STATE(250)] = 11437,
  [SMALL_STATE(251)] = 11477,
  [SMALL_STATE(252)] = 11517,
  [SMALL_STATE(253)] = 11557,
  [SMALL_STATE(254)] = 11597,
  [SMALL_STATE(255)] = 11637,
  [SMALL_STATE(256)] = 11677,
  [SMALL_STATE(257)] = 11717,
  [SMALL_STATE(258)] = 11757,
  [SMALL_STATE(259)] = 11797,
  [SMALL_STATE(260)] = 11837,
  [SMALL_STATE(261)] = 11877,
  [SMALL_STATE(262)] = 11917,
  [SMALL_STATE(263)] = 11957,
  [SMALL_STATE(264)] = 11997,
  [SMALL_STATE(265)] = 12037,
  [SMALL_STATE(266)] = 12077,
  [SMALL_STATE(267)] = 12117,
  [SMALL_STATE(268)] = 12157,
  [SMALL_STATE(269)] = 12197,
  [SMALL_STATE(270)] = 12237,
  [SMALL_STATE(271)] = 12277,
  [SMALL_STATE(272)] = 12301,
  [SMALL_STATE(273)] = 12341,
  [SMALL_STATE(274)] = 12381,
  [SMALL_STATE(275)] = 12421,
  [SMALL_STATE(276)] = 12445,
  [SMALL_STATE(277)] = 12485,
  [SMALL_STATE(278)] = 12509,
  [SMALL_STATE(279)] = 12549,
  [SMALL_STATE(280)] = 12589,
  [SMALL_STATE(281)] = 12629,
  [SMALL_STATE(282)] = 12669,
  [SMALL_STATE(283)] = 12709,
  [SMALL_STATE(284)] = 12749,
  [SMALL_STATE(285)] = 12789,
  [SMALL_STATE(286)] = 12829,
  [SMALL_STATE(287)] = 12869,
  [SMALL_STATE(288)] = 12909,
  [SMALL_STATE(289)] = 12949,
  [SMALL_STATE(290)] = 12989,
  [SMALL_STATE(291)] = 13029,
  [SMALL_STATE(292)] = 13069,
  [SMALL_STATE(293)] = 13097,
  [SMALL_STATE(294)] = 13137,
  [SMALL_STATE(295)] = 13165,
  [SMALL_STATE(296)] = 13207,
  [SMALL_STATE(297)] = 13247,
  [SMALL_STATE(298)] = 13287,
  [SMALL_STATE(299)] = 13315,
  [SMALL_STATE(300)] = 13355,
  [SMALL_STATE(301)] = 13395,
  [SMALL_STATE(302)] = 13435,
  [SMALL_STATE(303)] = 13475,
  [SMALL_STATE(304)] = 13515,
  [SMALL_STATE(305)] = 13555,
  [SMALL_STATE(306)] = 13578,
  [SMALL_STATE(307)] = 13603,
  [SMALL_STATE(308)] = 13626,
  [SMALL_STATE(309)] = 13649,
  [SMALL_STATE(310)] = 13674,
  [SMALL_STATE(311)] = 13697,
  [SMALL_STATE(312)] = 13720,
  [SMALL_STATE(313)] = 13742,
  [SMALL_STATE(314)] = 13764,
  [SMALL_STATE(315)] = 13786,
  [SMALL_STATE(316)] = 13808,
  [SMALL_STATE(317)] = 13830,
  [SMALL_STATE(318)] = 13852,
  [SMALL_STATE(319)] = 13874,
  [SMALL_STATE(320)] = 13885,
  [SMALL_STATE(321)] = 13894,
  [SMALL_STATE(322)] = 13905,
  [SMALL_STATE(323)] = 13916,
  [SMALL_STATE(324)] = 13923,
  [SMALL_STATE(325)] = 13934,
  [SMALL_STATE(326)] = 13945,
  [SMALL_STATE(327)] = 13956,
  [SMALL_STATE(328)] = 13965,
  [SMALL_STATE(329)] = 13978,
  [SMALL_STATE(330)] = 13991,
  [SMALL_STATE(331)] = 14002,
  [SMALL_STATE(332)] = 14011,
  [SMALL_STATE(333)] = 14018,
  [SMALL_STATE(334)] = 14029,
  [SMALL_STATE(335)] = 14040,
  [SMALL_STATE(336)] = 14049,
  [SMALL_STATE(337)] = 14060,
  [SMALL_STATE(338)] = 14073,
  [SMALL_STATE(339)] = 14084,
  [SMALL_STATE(340)] = 14095,
  [SMALL_STATE(341)] = 14102,
  [SMALL_STATE(342)] = 14113,
  [SMALL_STATE(343)] = 14123,
  [SMALL_STATE(344)] = 14133,
  [SMALL_STATE(345)] = 14143,
  [SMALL_STATE(346)] = 14153,
  [SMALL_STATE(347)] = 14163,
  [SMALL_STATE(348)] = 14173,
  [SMALL_STATE(349)] = 14183,
  [SMALL_STATE(350)] = 14193,
  [SMALL_STATE(351)] = 14203,
  [SMALL_STATE(352)] = 14213,
  [SMALL_STATE(353)] = 14223,
  [SMALL_STATE(354)] = 14233,
  [SMALL_STATE(355)] = 14243,
  [SMALL_STATE(356)] = 14251,
  [SMALL_STATE(357)] = 14261,
  [SMALL_STATE(358)] = 14271,
  [SMALL_STATE(359)] = 14279,
  [SMALL_STATE(360)] = 14289,
  [SMALL_STATE(361)] = 14299,
  [SMALL_STATE(362)] = 14307,
  [SMALL_STATE(363)] = 14312,
  [SMALL_STATE(364)] = 14319,
  [SMALL_STATE(365)] = 14324,
  [SMALL_STATE(366)] = 14331,
  [SMALL_STATE(367)] = 14336,
  [SMALL_STATE(368)] = 14341,
  [SMALL_STATE(369)] = 14348,
  [SMALL_STATE(370)] = 14355,
  [SMALL_STATE(371)] = 14360,
  [SMALL_STATE(372)] = 14365,
  [SMALL_STATE(373)] = 14370,
  [SMALL_STATE(374)] = 14375,
  [SMALL_STATE(375)] = 14382,
  [SMALL_STATE(376)] = 14387,
  [SMALL_STATE(377)] = 14392,
  [SMALL_STATE(378)] = 14399,
  [SMALL_STATE(379)] = 14404,
  [SMALL_STATE(380)] = 14409,
  [SMALL_STATE(381)] = 14416,
  [SMALL_STATE(382)] = 14423,
  [SMALL_STATE(383)] = 14430,
  [SMALL_STATE(384)] = 14437,
  [SMALL_STATE(385)] = 14442,
  [SMALL_STATE(386)] = 14447,
  [SMALL_STATE(387)] = 14451,
  [SMALL_STATE(388)] = 14455,
  [SMALL_STATE(389)] = 14459,
  [SMALL_STATE(390)] = 14463,
  [SMALL_STATE(391)] = 14467,
  [SMALL_STATE(392)] = 14471,
  [SMALL_STATE(393)] = 14475,
  [SMALL_STATE(394)] = 14479,
  [SMALL_STATE(395)] = 14483,
  [SMALL_STATE(396)] = 14487,
  [SMALL_STATE(397)] = 14491,
  [SMALL_STATE(398)] = 14495,
  [SMALL_STATE(399)] = 14499,
  [SMALL_STATE(400)] = 14503,
  [SMALL_STATE(401)] = 14507,
  [SMALL_STATE(402)] = 14511,
  [SMALL_STATE(403)] = 14515,
  [SMALL_STATE(404)] = 14519,
  [SMALL_STATE(405)] = 14523,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(248),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(369),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(338),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(394),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(266),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, .production_id = 8),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 8),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 17),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 17),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(278),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(314),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(110),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(250),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(119),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(322),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(50),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(274),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(370),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(373),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(116),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(372),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(375),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(341),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(136),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 1),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 5, .production_id = 13),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 5, .production_id = 13),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 5),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 5),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 6),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 6),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 10),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 10),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 15),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 15),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 18),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 18),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 20),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 20),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 4, .production_id = 9),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 9),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3, .production_id = 16),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 16),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_literal, 2),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_pattern, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_literal, 2),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_pattern, 1),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3, .production_id = 5),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3, .production_id = 5),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 6),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 6),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 19),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 19),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 14),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 14),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 9),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 9),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 11),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 11),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement_statement, 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement_statement, 2),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 12),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 12),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment_statement, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment_statement, 2),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 4),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(326),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(28),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(102),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [824] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_jakt_external_scanner_create(void);
void tree_sitter_jakt_external_scanner_destroy(void *);
bool tree_sitter_jakt_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_jakt_external_scanner_serialize(void *, char *);
void tree_sitter_jakt_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jakt(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_jakt_external_scanner_create,
      tree_sitter_jakt_external_scanner_destroy,
      tree_sitter_jakt_external_scanner_scan,
      tree_sitter_jakt_external_scanner_serialize,
      tree_sitter_jakt_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
