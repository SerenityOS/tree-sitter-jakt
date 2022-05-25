#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 354
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 1
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 20

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_while = 4,
  anon_sym_PLUS_PLUS = 5,
  anon_sym_DASH_DASH = 6,
  anon_sym_continue = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  anon_sym_u8 = 11,
  anon_sym_i8 = 12,
  anon_sym_u16 = 13,
  anon_sym_i16 = 14,
  anon_sym_u32 = 15,
  anon_sym_i32 = 16,
  anon_sym_u64 = 17,
  anon_sym_i64 = 18,
  anon_sym_u128 = 19,
  anon_sym_i128 = 20,
  anon_sym_isize = 21,
  anon_sym_usize = 22,
  anon_sym_f32 = 23,
  anon_sym_f64 = 24,
  anon_sym_c_int = 25,
  anon_sym_bool = 26,
  anon_sym_String = 27,
  anon_sym_c_char = 28,
  anon_sym_LBRACK = 29,
  anon_sym_RBRACK = 30,
  anon_sym_let = 31,
  anon_sym_COLON = 32,
  anon_sym_EQ = 33,
  sym_mutable_specifier = 34,
  anon_sym_DASH = 35,
  anon_sym_return = 36,
  anon_sym_AMP = 37,
  anon_sym_PIPE = 38,
  anon_sym_CARET = 39,
  anon_sym_EQ_EQ = 40,
  anon_sym_BANG_EQ = 41,
  anon_sym_LT = 42,
  anon_sym_LT_EQ = 43,
  anon_sym_GT = 44,
  anon_sym_GT_EQ = 45,
  anon_sym_LT_LT = 46,
  anon_sym_GT_GT = 47,
  anon_sym_PLUS = 48,
  anon_sym_STAR = 49,
  anon_sym_SLASH = 50,
  anon_sym_PERCENT = 51,
  sym_integer_literal = 52,
  aux_sym_string_literal_token1 = 53,
  anon_sym_DQUOTE = 54,
  sym_char_literal = 55,
  sym_escape_sequence = 56,
  anon_sym_function = 57,
  anon_sym_DASH_GT = 58,
  anon_sym_LBRACE = 59,
  anon_sym_RBRACE = 60,
  anon_sym_if = 61,
  anon_sym_else = 62,
  anon_sym_true = 63,
  anon_sym_false = 64,
  sym_line_comment = 65,
  sym__string_content = 66,
  sym_float_literal = 67,
  sym_source_file = 68,
  sym_declaration = 69,
  sym__expression = 70,
  sym_while_statement = 71,
  sym_increment_statement = 72,
  sym_decrement_statement = 73,
  sym_continue_statement = 74,
  sym_call_expression = 75,
  sym_arguments = 76,
  sym__top_level_declaration = 77,
  sym__type = 78,
  sym_array_type = 79,
  sym_let_declaration = 80,
  sym_unary_expression = 81,
  sym_return_statement = 82,
  sym_binary_expression = 83,
  sym__literal = 84,
  sym__pattern = 85,
  sym__literal_pattern = 86,
  sym_negative_literal = 87,
  sym_string_literal = 88,
  sym_function_declaration = 89,
  sym_parameters = 90,
  sym_parameter = 91,
  sym_block = 92,
  sym_if_statement = 93,
  sym_else_clause = 94,
  sym_boolean_literal = 95,
  aux_sym_source_file_repeat1 = 96,
  aux_sym_arguments_repeat1 = 97,
  aux_sym_arguments_repeat2 = 98,
  aux_sym_string_literal_repeat1 = 99,
  aux_sym_parameters_repeat1 = 100,
  aux_sym_block_repeat1 = 101,
  alias_sym_type_identifier = 102,
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
  [sym_call_expression] = "call_expression",
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
  [sym_call_expression] = sym_call_expression,
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
  [sym_call_expression] = {
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
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 25, .length = 2},
  [16] = {.index = 27, .length = 1},
  [17] = {.index = 28, .length = 3},
  [18] = {.index = 31, .length = 4},
  [19] = {.index = 35, .length = 3},
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
    {field_pattern, 2},
    {field_type, 4},
  [23] =
    {field_pattern, 2},
    {field_value, 4},
  [25] =
    {field_pattern, 0},
    {field_type, 2},
  [27] =
    {field_element, 1},
  [28] =
    {field_pattern, 1},
    {field_type, 3},
    {field_value, 5},
  [31] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [35] =
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
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(101);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(94);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(15);
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == '8') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(15);
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == '8') ADVANCE(81);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(81);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(18);
      if (lookahead == '6') ADVANCE(81);
      END_STATE();
    case 16:
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == '6') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(81);
      END_STATE();
    case 18:
      if (lookahead == '8') ADVANCE(81);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(42);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(43);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == 'z') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == '{') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '{') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == '}') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '}') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 46:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(52);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '>') ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(51);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(99);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '2') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(90);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '3') ADVANCE(82);
      if (lookahead == '6') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(90);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '4') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(90);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(90);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(10);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(101);
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
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '3') ADVANCE(23);
      if (lookahead == '6') ADVANCE(24);
      if (lookahead == '8') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(32);
      if (lookahead == '3') ADVANCE(33);
      if (lookahead == '6') ADVANCE(34);
      if (lookahead == '8') ADVANCE(35);
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == '4') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(48);
      if (lookahead == '6') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == '4') ADVANCE(51);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(57);
      if (lookahead == '6') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == '2') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == '4') ADVANCE(60);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == '8') ADVANCE(71);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 52:
      if (lookahead == 'z') ADVANCE(72);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == '8') ADVANCE(76);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 61:
      if (lookahead == 'z') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_c_char);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_mutable_specifier);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 47, .external_lex_state = 2},
  [2] = {.lex_state = 47, .external_lex_state = 2},
  [3] = {.lex_state = 47, .external_lex_state = 2},
  [4] = {.lex_state = 47, .external_lex_state = 2},
  [5] = {.lex_state = 47, .external_lex_state = 2},
  [6] = {.lex_state = 47, .external_lex_state = 2},
  [7] = {.lex_state = 47, .external_lex_state = 2},
  [8] = {.lex_state = 47, .external_lex_state = 2},
  [9] = {.lex_state = 47, .external_lex_state = 2},
  [10] = {.lex_state = 47, .external_lex_state = 2},
  [11] = {.lex_state = 47, .external_lex_state = 2},
  [12] = {.lex_state = 47, .external_lex_state = 2},
  [13] = {.lex_state = 47, .external_lex_state = 2},
  [14] = {.lex_state = 47, .external_lex_state = 2},
  [15] = {.lex_state = 47, .external_lex_state = 2},
  [16] = {.lex_state = 47, .external_lex_state = 2},
  [17] = {.lex_state = 47, .external_lex_state = 2},
  [18] = {.lex_state = 47, .external_lex_state = 2},
  [19] = {.lex_state = 47, .external_lex_state = 2},
  [20] = {.lex_state = 47, .external_lex_state = 2},
  [21] = {.lex_state = 47, .external_lex_state = 2},
  [22] = {.lex_state = 47, .external_lex_state = 2},
  [23] = {.lex_state = 47, .external_lex_state = 2},
  [24] = {.lex_state = 47, .external_lex_state = 2},
  [25] = {.lex_state = 47, .external_lex_state = 2},
  [26] = {.lex_state = 47, .external_lex_state = 2},
  [27] = {.lex_state = 47, .external_lex_state = 2},
  [28] = {.lex_state = 47, .external_lex_state = 2},
  [29] = {.lex_state = 47, .external_lex_state = 2},
  [30] = {.lex_state = 47, .external_lex_state = 2},
  [31] = {.lex_state = 47, .external_lex_state = 2},
  [32] = {.lex_state = 47, .external_lex_state = 2},
  [33] = {.lex_state = 47, .external_lex_state = 2},
  [34] = {.lex_state = 47, .external_lex_state = 2},
  [35] = {.lex_state = 7, .external_lex_state = 2},
  [36] = {.lex_state = 7, .external_lex_state = 2},
  [37] = {.lex_state = 47, .external_lex_state = 2},
  [38] = {.lex_state = 47, .external_lex_state = 2},
  [39] = {.lex_state = 7, .external_lex_state = 2},
  [40] = {.lex_state = 7, .external_lex_state = 2},
  [41] = {.lex_state = 7, .external_lex_state = 2},
  [42] = {.lex_state = 7, .external_lex_state = 2},
  [43] = {.lex_state = 7, .external_lex_state = 2},
  [44] = {.lex_state = 7, .external_lex_state = 2},
  [45] = {.lex_state = 7, .external_lex_state = 2},
  [46] = {.lex_state = 47, .external_lex_state = 2},
  [47] = {.lex_state = 7, .external_lex_state = 2},
  [48] = {.lex_state = 8, .external_lex_state = 2},
  [49] = {.lex_state = 7, .external_lex_state = 2},
  [50] = {.lex_state = 7, .external_lex_state = 2},
  [51] = {.lex_state = 8, .external_lex_state = 2},
  [52] = {.lex_state = 7, .external_lex_state = 2},
  [53] = {.lex_state = 7, .external_lex_state = 2},
  [54] = {.lex_state = 7, .external_lex_state = 2},
  [55] = {.lex_state = 7, .external_lex_state = 2},
  [56] = {.lex_state = 8, .external_lex_state = 2},
  [57] = {.lex_state = 7, .external_lex_state = 2},
  [58] = {.lex_state = 7, .external_lex_state = 2},
  [59] = {.lex_state = 7, .external_lex_state = 2},
  [60] = {.lex_state = 7, .external_lex_state = 2},
  [61] = {.lex_state = 47, .external_lex_state = 2},
  [62] = {.lex_state = 6, .external_lex_state = 2},
  [63] = {.lex_state = 47, .external_lex_state = 2},
  [64] = {.lex_state = 47, .external_lex_state = 2},
  [65] = {.lex_state = 47, .external_lex_state = 2},
  [66] = {.lex_state = 47, .external_lex_state = 2},
  [67] = {.lex_state = 6, .external_lex_state = 2},
  [68] = {.lex_state = 47, .external_lex_state = 2},
  [69] = {.lex_state = 6, .external_lex_state = 2},
  [70] = {.lex_state = 6, .external_lex_state = 2},
  [71] = {.lex_state = 6, .external_lex_state = 2},
  [72] = {.lex_state = 47, .external_lex_state = 2},
  [73] = {.lex_state = 6, .external_lex_state = 2},
  [74] = {.lex_state = 6, .external_lex_state = 2},
  [75] = {.lex_state = 6, .external_lex_state = 2},
  [76] = {.lex_state = 6, .external_lex_state = 2},
  [77] = {.lex_state = 6, .external_lex_state = 2},
  [78] = {.lex_state = 6, .external_lex_state = 2},
  [79] = {.lex_state = 6, .external_lex_state = 2},
  [80] = {.lex_state = 47, .external_lex_state = 2},
  [81] = {.lex_state = 47, .external_lex_state = 2},
  [82] = {.lex_state = 47, .external_lex_state = 2},
  [83] = {.lex_state = 6, .external_lex_state = 2},
  [84] = {.lex_state = 47, .external_lex_state = 2},
  [85] = {.lex_state = 47, .external_lex_state = 2},
  [86] = {.lex_state = 6, .external_lex_state = 2},
  [87] = {.lex_state = 6, .external_lex_state = 2},
  [88] = {.lex_state = 6, .external_lex_state = 2},
  [89] = {.lex_state = 6, .external_lex_state = 2},
  [90] = {.lex_state = 6, .external_lex_state = 2},
  [91] = {.lex_state = 6, .external_lex_state = 2},
  [92] = {.lex_state = 47, .external_lex_state = 2},
  [93] = {.lex_state = 6, .external_lex_state = 2},
  [94] = {.lex_state = 47, .external_lex_state = 2},
  [95] = {.lex_state = 6, .external_lex_state = 2},
  [96] = {.lex_state = 47, .external_lex_state = 2},
  [97] = {.lex_state = 47, .external_lex_state = 2},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 47, .external_lex_state = 2},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 47, .external_lex_state = 2},
  [194] = {.lex_state = 2, .external_lex_state = 2},
  [195] = {.lex_state = 47, .external_lex_state = 2},
  [196] = {.lex_state = 47, .external_lex_state = 2},
  [197] = {.lex_state = 47, .external_lex_state = 2},
  [198] = {.lex_state = 47, .external_lex_state = 2},
  [199] = {.lex_state = 47, .external_lex_state = 2},
  [200] = {.lex_state = 47, .external_lex_state = 2},
  [201] = {.lex_state = 47, .external_lex_state = 2},
  [202] = {.lex_state = 47, .external_lex_state = 2},
  [203] = {.lex_state = 47, .external_lex_state = 2},
  [204] = {.lex_state = 47, .external_lex_state = 2},
  [205] = {.lex_state = 47, .external_lex_state = 2},
  [206] = {.lex_state = 47, .external_lex_state = 2},
  [207] = {.lex_state = 47, .external_lex_state = 2},
  [208] = {.lex_state = 47, .external_lex_state = 2},
  [209] = {.lex_state = 47, .external_lex_state = 2},
  [210] = {.lex_state = 47, .external_lex_state = 2},
  [211] = {.lex_state = 47, .external_lex_state = 2},
  [212] = {.lex_state = 47, .external_lex_state = 2},
  [213] = {.lex_state = 47, .external_lex_state = 2},
  [214] = {.lex_state = 47, .external_lex_state = 2},
  [215] = {.lex_state = 47, .external_lex_state = 2},
  [216] = {.lex_state = 47, .external_lex_state = 2},
  [217] = {.lex_state = 47, .external_lex_state = 2},
  [218] = {.lex_state = 47, .external_lex_state = 2},
  [219] = {.lex_state = 47, .external_lex_state = 2},
  [220] = {.lex_state = 47, .external_lex_state = 2},
  [221] = {.lex_state = 47, .external_lex_state = 2},
  [222] = {.lex_state = 47, .external_lex_state = 2},
  [223] = {.lex_state = 47, .external_lex_state = 2},
  [224] = {.lex_state = 47, .external_lex_state = 2},
  [225] = {.lex_state = 47, .external_lex_state = 2},
  [226] = {.lex_state = 47, .external_lex_state = 2},
  [227] = {.lex_state = 47, .external_lex_state = 2},
  [228] = {.lex_state = 47, .external_lex_state = 2},
  [229] = {.lex_state = 47, .external_lex_state = 2},
  [230] = {.lex_state = 47, .external_lex_state = 2},
  [231] = {.lex_state = 47, .external_lex_state = 2},
  [232] = {.lex_state = 47, .external_lex_state = 2},
  [233] = {.lex_state = 47, .external_lex_state = 2},
  [234] = {.lex_state = 47, .external_lex_state = 2},
  [235] = {.lex_state = 47, .external_lex_state = 2},
  [236] = {.lex_state = 47, .external_lex_state = 2},
  [237] = {.lex_state = 47, .external_lex_state = 2},
  [238] = {.lex_state = 47, .external_lex_state = 2},
  [239] = {.lex_state = 47, .external_lex_state = 2},
  [240] = {.lex_state = 47, .external_lex_state = 2},
  [241] = {.lex_state = 47, .external_lex_state = 2},
  [242] = {.lex_state = 47, .external_lex_state = 2},
  [243] = {.lex_state = 47, .external_lex_state = 2},
  [244] = {.lex_state = 47, .external_lex_state = 2},
  [245] = {.lex_state = 47, .external_lex_state = 2},
  [246] = {.lex_state = 47, .external_lex_state = 2},
  [247] = {.lex_state = 47, .external_lex_state = 2},
  [248] = {.lex_state = 47, .external_lex_state = 2},
  [249] = {.lex_state = 47, .external_lex_state = 2},
  [250] = {.lex_state = 47, .external_lex_state = 2},
  [251] = {.lex_state = 47, .external_lex_state = 2},
  [252] = {.lex_state = 47, .external_lex_state = 2},
  [253] = {.lex_state = 47, .external_lex_state = 2},
  [254] = {.lex_state = 47, .external_lex_state = 2},
  [255] = {.lex_state = 47, .external_lex_state = 2},
  [256] = {.lex_state = 47, .external_lex_state = 2},
  [257] = {.lex_state = 47, .external_lex_state = 2},
  [258] = {.lex_state = 47, .external_lex_state = 2},
  [259] = {.lex_state = 47, .external_lex_state = 2},
  [260] = {.lex_state = 47, .external_lex_state = 2},
  [261] = {.lex_state = 47, .external_lex_state = 2},
  [262] = {.lex_state = 47, .external_lex_state = 2},
  [263] = {.lex_state = 47, .external_lex_state = 2},
  [264] = {.lex_state = 47, .external_lex_state = 2},
  [265] = {.lex_state = 47, .external_lex_state = 2},
  [266] = {.lex_state = 47, .external_lex_state = 2},
  [267] = {.lex_state = 47, .external_lex_state = 2},
  [268] = {.lex_state = 47, .external_lex_state = 2},
  [269] = {.lex_state = 47, .external_lex_state = 2},
  [270] = {.lex_state = 1, .external_lex_state = 3},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 1, .external_lex_state = 3},
  [273] = {.lex_state = 1, .external_lex_state = 3},
  [274] = {.lex_state = 1, .external_lex_state = 3},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 11},
  [278] = {.lex_state = 1, .external_lex_state = 3},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 1, .external_lex_state = 3},
  [283] = {.lex_state = 1, .external_lex_state = 3},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 5},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 1, .external_lex_state = 3},
  [288] = {.lex_state = 11},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 1, .external_lex_state = 3},
  [291] = {.lex_state = 1, .external_lex_state = 3},
  [292] = {.lex_state = 1, .external_lex_state = 3},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 11},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 5},
  [315] = {.lex_state = 11},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 1},
  [318] = {.lex_state = 1},
  [319] = {.lex_state = 1},
  [320] = {.lex_state = 11},
  [321] = {.lex_state = 11},
  [322] = {.lex_state = 1},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 1},
  [326] = {.lex_state = 1},
  [327] = {.lex_state = 1},
  [328] = {.lex_state = 0, .external_lex_state = 2},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0, .external_lex_state = 2},
  [331] = {.lex_state = 1},
  [332] = {.lex_state = 0, .external_lex_state = 2},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 11},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 11},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
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
    [sym_source_file] = STATE(347),
    [sym_declaration] = STATE(319),
    [sym__expression] = STATE(116),
    [sym_while_statement] = STATE(319),
    [sym_increment_statement] = STATE(319),
    [sym_decrement_statement] = STATE(319),
    [sym_continue_statement] = STATE(319),
    [sym_call_expression] = STATE(135),
    [sym__top_level_declaration] = STATE(29),
    [sym_let_declaration] = STATE(322),
    [sym_unary_expression] = STATE(135),
    [sym_return_statement] = STATE(319),
    [sym_binary_expression] = STATE(135),
    [sym__literal] = STATE(135),
    [sym_string_literal] = STATE(150),
    [sym_function_declaration] = STATE(29),
    [sym_block] = STATE(319),
    [sym_if_statement] = STATE(319),
    [sym_boolean_literal] = STATE(150),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_continue] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [sym_integer_literal] = ACTIONS(17),
    [aux_sym_string_literal_token1] = ACTIONS(19),
    [sym_char_literal] = ACTIONS(17),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [sym_float_literal] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    STATE(130), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [74] = 16,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [148] = 16,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [222] = 16,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [296] = 16,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [370] = 15,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [441] = 15,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [512] = 15,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [583] = 15,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [654] = 15,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [725] = 15,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [796] = 15,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [867] = 15,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [938] = 15,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [1009] = 15,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [1080] = 15,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [1151] = 15,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [1222] = 15,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [1293] = 15,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [1364] = 15,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [1435] = 14,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    STATE(141), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [1503] = 14,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    STATE(145), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [1571] = 14,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    STATE(147), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [1639] = 14,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    STATE(155), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [1707] = 14,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    STATE(149), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [1775] = 14,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    STATE(158), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [1843] = 14,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    STATE(131), 1,
      sym__expression,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(352), 1,
      sym_negative_literal,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(35), 18,
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
  [1911] = 19,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_while,
    ACTIONS(9), 1,
      anon_sym_continue,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      sym__expression,
    STATE(322), 1,
      sym_let_declaration,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(150), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(17), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(34), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(135), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(319), 8,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [1985] = 2,
    ACTIONS(97), 8,
      sym_float_literal,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(95), 27,
      anon_sym_while,
      anon_sym_continue,
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
  [2025] = 13,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      sym_mutable_specifier,
    ACTIONS(107), 1,
      anon_sym_DASH,
    STATE(311), 1,
      sym_parameter,
    STATE(345), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(109), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(352), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 18,
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
  [2087] = 2,
    ACTIONS(113), 8,
      sym_float_literal,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(111), 27,
      anon_sym_while,
      anon_sym_continue,
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
  [2127] = 2,
    ACTIONS(117), 8,
      sym_float_literal,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(115), 27,
      anon_sym_while,
      anon_sym_continue,
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
  [2167] = 19,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(124), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_continue,
    ACTIONS(130), 1,
      anon_sym_let,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(136), 1,
      anon_sym_return,
    ACTIONS(142), 1,
      aux_sym_string_literal_token1,
    ACTIONS(145), 1,
      anon_sym_function,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_if,
    STATE(116), 1,
      sym__expression,
    STATE(322), 1,
      sym_let_declaration,
    ACTIONS(154), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(150), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(139), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(34), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(135), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(319), 8,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [2241] = 14,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_CARET,
    STATE(59), 1,
      sym_arguments,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(181), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(157), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2304] = 6,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_arguments,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(185), 17,
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
  [2351] = 11,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_mutable_specifier,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(202), 1,
      aux_sym_string_literal_token1,
    STATE(338), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    ACTIONS(199), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(352), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(190), 18,
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
  [2408] = 12,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_mutable_specifier,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      sym_parameter,
    STATE(345), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(109), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(352), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 18,
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
  [2467] = 7,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_arguments,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(177), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(185), 15,
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
  [2516] = 9,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_AMP,
    ACTIONS(171), 1,
      anon_sym_CARET,
    STATE(59), 1,
      sym_arguments,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(177), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(185), 13,
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
  [2569] = 8,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_AMP,
    STATE(59), 1,
      sym_arguments,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(177), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(185), 14,
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
  [2620] = 4,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_arguments,
    ACTIONS(210), 12,
      anon_sym_while,
      anon_sym_continue,
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
    ACTIONS(212), 20,
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
  [2663] = 10,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_CARET,
    STATE(59), 1,
      sym_arguments,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(177), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(185), 12,
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
  [2718] = 5,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_arguments,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 12,
      anon_sym_while,
      anon_sym_continue,
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
    ACTIONS(185), 17,
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
  [2763] = 4,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_arguments,
    ACTIONS(183), 12,
      anon_sym_while,
      anon_sym_continue,
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
    ACTIONS(185), 20,
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
  [2806] = 12,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_mutable_specifier,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      sym_parameter,
    STATE(345), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(109), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(352), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 18,
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
  [2865] = 2,
    ACTIONS(216), 12,
      anon_sym_while,
      anon_sym_continue,
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
    ACTIONS(218), 21,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [2903] = 2,
    ACTIONS(220), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(222), 22,
      sym_float_literal,
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
  [2941] = 2,
    ACTIONS(220), 12,
      anon_sym_while,
      anon_sym_continue,
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
    ACTIONS(222), 21,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [2979] = 2,
    ACTIONS(224), 12,
      anon_sym_while,
      anon_sym_continue,
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
    ACTIONS(226), 21,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [3017] = 2,
    ACTIONS(228), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(230), 22,
      sym_float_literal,
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
  [3055] = 2,
    ACTIONS(232), 12,
      anon_sym_while,
      anon_sym_continue,
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
    ACTIONS(234), 21,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [3093] = 2,
    ACTIONS(236), 12,
      anon_sym_while,
      anon_sym_continue,
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
    ACTIONS(238), 21,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [3131] = 2,
    ACTIONS(240), 12,
      anon_sym_while,
      anon_sym_continue,
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
    ACTIONS(242), 21,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [3169] = 2,
    ACTIONS(244), 12,
      anon_sym_while,
      anon_sym_continue,
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
    ACTIONS(246), 21,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [3207] = 2,
    ACTIONS(248), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(250), 22,
      sym_float_literal,
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
  [3245] = 2,
    ACTIONS(252), 12,
      anon_sym_while,
      anon_sym_continue,
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
    ACTIONS(254), 21,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [3283] = 2,
    ACTIONS(228), 12,
      anon_sym_while,
      anon_sym_continue,
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
    ACTIONS(230), 21,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [3321] = 2,
    ACTIONS(256), 12,
      anon_sym_while,
      anon_sym_continue,
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
    ACTIONS(258), 21,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [3359] = 2,
    ACTIONS(248), 12,
      anon_sym_while,
      anon_sym_continue,
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
    ACTIONS(250), 21,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [3397] = 11,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_mutable_specifier,
    ACTIONS(107), 1,
      anon_sym_DASH,
    STATE(324), 1,
      sym_parameter,
    STATE(345), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(109), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(352), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 18,
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
  [3453] = 5,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_arguments,
    ACTIONS(262), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(185), 17,
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
  [3496] = 17,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_while,
    ACTIONS(268), 1,
      anon_sym_continue,
    ACTIONS(270), 1,
      anon_sym_let,
    ACTIONS(272), 1,
      anon_sym_DASH,
    ACTIONS(274), 1,
      anon_sym_return,
    ACTIONS(278), 1,
      aux_sym_string_literal_token1,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    ACTIONS(284), 1,
      anon_sym_if,
    STATE(35), 1,
      sym__expression,
    STATE(249), 1,
      sym_let_declaration,
    ACTIONS(286), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(276), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(55), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(81), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [3563] = 17,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_while,
    ACTIONS(268), 1,
      anon_sym_continue,
    ACTIONS(270), 1,
      anon_sym_let,
    ACTIONS(272), 1,
      anon_sym_DASH,
    ACTIONS(274), 1,
      anon_sym_return,
    ACTIONS(278), 1,
      aux_sym_string_literal_token1,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_if,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__expression,
    STATE(249), 1,
      sym_let_declaration,
    ACTIONS(286), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(276), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(55), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(68), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [3630] = 17,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_while,
    ACTIONS(268), 1,
      anon_sym_continue,
    ACTIONS(270), 1,
      anon_sym_let,
    ACTIONS(272), 1,
      anon_sym_DASH,
    ACTIONS(274), 1,
      anon_sym_return,
    ACTIONS(278), 1,
      aux_sym_string_literal_token1,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_if,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__expression,
    STATE(249), 1,
      sym_let_declaration,
    ACTIONS(286), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(276), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(55), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(64), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [3697] = 10,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(296), 1,
      sym_mutable_specifier,
    ACTIONS(298), 1,
      anon_sym_DASH,
    STATE(275), 1,
      sym__pattern,
    STATE(276), 1,
      sym__literal_pattern,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(300), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(285), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(294), 18,
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
  [3750] = 4,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_arguments,
    ACTIONS(210), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(212), 20,
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
  [3791] = 17,
    ACTIONS(302), 1,
      sym_identifier,
    ACTIONS(305), 1,
      anon_sym_while,
    ACTIONS(308), 1,
      anon_sym_continue,
    ACTIONS(311), 1,
      anon_sym_let,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      anon_sym_return,
    ACTIONS(323), 1,
      aux_sym_string_literal_token1,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    ACTIONS(331), 1,
      anon_sym_if,
    STATE(35), 1,
      sym__expression,
    STATE(249), 1,
      sym_let_declaration,
    ACTIONS(334), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(320), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(55), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(68), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [3858] = 12,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_AMP,
    ACTIONS(343), 1,
      anon_sym_PIPE,
    ACTIONS(345), 1,
      anon_sym_CARET,
    STATE(93), 1,
      sym_arguments,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(349), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(351), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(262), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(347), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(353), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(337), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3915] = 12,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_AMP,
    ACTIONS(343), 1,
      anon_sym_PIPE,
    ACTIONS(345), 1,
      anon_sym_CARET,
    STATE(93), 1,
      sym_arguments,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(349), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(351), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(262), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(347), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(357), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(355), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3972] = 12,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_AMP,
    ACTIONS(343), 1,
      anon_sym_PIPE,
    ACTIONS(345), 1,
      anon_sym_CARET,
    STATE(93), 1,
      sym_arguments,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(349), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(351), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(262), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(347), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(361), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(359), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4029] = 17,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_while,
    ACTIONS(268), 1,
      anon_sym_continue,
    ACTIONS(270), 1,
      anon_sym_let,
    ACTIONS(272), 1,
      anon_sym_DASH,
    ACTIONS(274), 1,
      anon_sym_return,
    ACTIONS(278), 1,
      aux_sym_string_literal_token1,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_if,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__expression,
    STATE(249), 1,
      sym_let_declaration,
    ACTIONS(286), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(276), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(55), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(68), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [4096] = 7,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_arguments,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(351), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(262), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(185), 13,
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
  [4143] = 9,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_AMP,
    ACTIONS(345), 1,
      anon_sym_CARET,
    STATE(93), 1,
      sym_arguments,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(351), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(262), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(185), 11,
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
  [4194] = 8,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_AMP,
    STATE(93), 1,
      sym_arguments,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(351), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(262), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(185), 12,
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
  [4243] = 10,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_AMP,
    ACTIONS(343), 1,
      anon_sym_PIPE,
    ACTIONS(345), 1,
      anon_sym_CARET,
    STATE(93), 1,
      sym_arguments,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(351), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(262), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(185), 10,
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
  [4296] = 6,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_arguments,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(185), 15,
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
  [4341] = 4,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_arguments,
    ACTIONS(183), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(185), 20,
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
  [4382] = 12,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_AMP,
    ACTIONS(343), 1,
      anon_sym_PIPE,
    ACTIONS(345), 1,
      anon_sym_CARET,
    STATE(93), 1,
      sym_arguments,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(349), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(351), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(262), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(347), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(367), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(365), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4439] = 17,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_while,
    ACTIONS(268), 1,
      anon_sym_continue,
    ACTIONS(270), 1,
      anon_sym_let,
    ACTIONS(272), 1,
      anon_sym_DASH,
    ACTIONS(274), 1,
      anon_sym_return,
    ACTIONS(278), 1,
      aux_sym_string_literal_token1,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_if,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__expression,
    STATE(249), 1,
      sym_let_declaration,
    ACTIONS(286), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(276), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(55), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(72), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [4506] = 17,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_while,
    ACTIONS(268), 1,
      anon_sym_continue,
    ACTIONS(270), 1,
      anon_sym_let,
    ACTIONS(272), 1,
      anon_sym_DASH,
    ACTIONS(274), 1,
      anon_sym_return,
    ACTIONS(278), 1,
      aux_sym_string_literal_token1,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_if,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__expression,
    STATE(249), 1,
      sym_let_declaration,
    ACTIONS(286), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(276), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(55), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(68), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [4573] = 10,
    ACTIONS(373), 1,
      sym_identifier,
    ACTIONS(377), 1,
      sym_mutable_specifier,
    ACTIONS(379), 1,
      anon_sym_DASH,
    ACTIONS(383), 1,
      aux_sym_string_literal_token1,
    STATE(196), 1,
      sym__literal_pattern,
    STATE(199), 1,
      sym__pattern,
    ACTIONS(385), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(381), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(198), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(375), 18,
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
  [4626] = 12,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_AMP,
    ACTIONS(343), 1,
      anon_sym_PIPE,
    ACTIONS(345), 1,
      anon_sym_CARET,
    STATE(93), 1,
      sym_arguments,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(349), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(351), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(262), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(347), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(389), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(387), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4683] = 9,
    ACTIONS(373), 1,
      sym_identifier,
    ACTIONS(379), 1,
      anon_sym_DASH,
    ACTIONS(383), 1,
      aux_sym_string_literal_token1,
    STATE(193), 1,
      sym__pattern,
    STATE(196), 1,
      sym__literal_pattern,
    ACTIONS(385), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(381), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(198), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(375), 18,
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
  [4733] = 9,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_DASH,
    STATE(348), 1,
      sym__pattern,
    STATE(349), 1,
      sym__literal_pattern,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(109), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(352), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 18,
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
  [4783] = 2,
    ACTIONS(232), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(234), 21,
      sym_float_literal,
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
  [4819] = 2,
    ACTIONS(252), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(254), 21,
      sym_float_literal,
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
  [4855] = 2,
    ACTIONS(240), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(242), 21,
      sym_float_literal,
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
  [4891] = 2,
    ACTIONS(244), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(246), 21,
      sym_float_literal,
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
  [4927] = 2,
    ACTIONS(236), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(238), 21,
      sym_float_literal,
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
  [4963] = 2,
    ACTIONS(216), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(218), 21,
      sym_float_literal,
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
  [4999] = 9,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_DASH,
    STATE(349), 1,
      sym__literal_pattern,
    STATE(353), 1,
      sym__pattern,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(109), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(352), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 18,
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
  [5049] = 2,
    ACTIONS(256), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(258), 21,
      sym_float_literal,
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
  [5085] = 9,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_DASH,
    STATE(276), 1,
      sym__literal_pattern,
    STATE(279), 1,
      sym__pattern,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(300), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(285), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(294), 18,
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
  [5135] = 2,
    ACTIONS(224), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(226), 21,
      sym_float_literal,
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
  [5171] = 2,
    ACTIONS(393), 5,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(391), 22,
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
  [5203] = 2,
    ACTIONS(397), 5,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(395), 22,
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
  [5235] = 2,
    ACTIONS(230), 1,
      anon_sym_LF,
    ACTIONS(228), 22,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [5263] = 2,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(220), 22,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [5291] = 2,
    ACTIONS(250), 1,
      anon_sym_LF,
    ACTIONS(248), 22,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [5319] = 5,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_array_type,
    STATE(204), 1,
      sym__type,
    ACTIONS(401), 18,
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
  [5352] = 6,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_arguments,
    ACTIONS(407), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 14,
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
  [5387] = 9,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      anon_sym_AMP,
    ACTIONS(413), 1,
      anon_sym_CARET,
    STATE(128), 1,
      sym_arguments,
    ACTIONS(407), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 10,
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
  [5428] = 5,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_LBRACK,
    STATE(286), 1,
      sym_array_type,
    STATE(343), 1,
      sym__type,
    ACTIONS(419), 18,
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
  [5461] = 10,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      anon_sym_AMP,
    ACTIONS(413), 1,
      anon_sym_CARET,
    ACTIONS(423), 1,
      anon_sym_PIPE,
    STATE(128), 1,
      sym_arguments,
    ACTIONS(407), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 9,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5504] = 7,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_arguments,
    ACTIONS(407), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 12,
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
  [5541] = 5,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_array_type,
    STATE(97), 1,
      sym__type,
    ACTIONS(401), 18,
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
  [5574] = 5,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_arguments,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 16,
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
  [5607] = 4,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_arguments,
    ACTIONS(210), 19,
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
  [5638] = 5,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_LBRACK,
    STATE(286), 1,
      sym_array_type,
    STATE(333), 1,
      sym__type,
    ACTIONS(419), 18,
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
  [5671] = 5,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_array_type,
    STATE(205), 1,
      sym__type,
    ACTIONS(401), 18,
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
  [5704] = 8,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      anon_sym_AMP,
    STATE(128), 1,
      sym_arguments,
    ACTIONS(407), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 11,
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
  [5743] = 5,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_array_type,
    STATE(96), 1,
      sym__type,
    ACTIONS(401), 18,
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
  [5776] = 4,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_arguments,
    ACTIONS(183), 19,
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
  [5807] = 5,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_LBRACK,
    STATE(286), 1,
      sym_array_type,
    STATE(316), 1,
      sym__type,
    ACTIONS(419), 18,
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
  [5840] = 13,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      anon_sym_AMP,
    ACTIONS(413), 1,
      anon_sym_CARET,
    ACTIONS(423), 1,
      anon_sym_PIPE,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(427), 1,
      anon_sym_SEMI,
    ACTIONS(429), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(431), 1,
      anon_sym_DASH_DASH,
    STATE(128), 1,
      sym_arguments,
    ACTIONS(407), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(415), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(433), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5889] = 10,
    ACTIONS(383), 1,
      aux_sym_string_literal_token1,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(69), 1,
      sym__expression,
    ACTIONS(385), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(443), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    STATE(86), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(89), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(437), 5,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
  [5932] = 5,
    ACTIONS(445), 1,
      sym_identifier,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    STATE(301), 1,
      sym_array_type,
    STATE(314), 1,
      sym__type,
    ACTIONS(447), 18,
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
  [5965] = 5,
    ACTIONS(445), 1,
      sym_identifier,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    STATE(293), 1,
      sym__type,
    STATE(301), 1,
      sym_array_type,
    ACTIONS(447), 18,
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
  [5998] = 5,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_LBRACK,
    STATE(286), 1,
      sym_array_type,
    STATE(346), 1,
      sym__type,
    ACTIONS(419), 18,
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
  [6031] = 5,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_LBRACK,
    STATE(286), 1,
      sym_array_type,
    STATE(323), 1,
      sym__type,
    ACTIONS(419), 18,
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
  [6064] = 5,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_LBRACK,
    STATE(286), 1,
      sym_array_type,
    STATE(342), 1,
      sym__type,
    ACTIONS(419), 18,
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
  [6097] = 2,
    ACTIONS(220), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 19,
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
  [6123] = 7,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_arguments,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(185), 10,
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
  [6159] = 13,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    STATE(157), 1,
      sym_arguments,
    STATE(296), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(469), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6207] = 2,
    ACTIONS(226), 1,
      anon_sym_LF,
    ACTIONS(224), 20,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [6233] = 2,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(240), 20,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [6259] = 2,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(256), 20,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [6285] = 13,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_arguments,
    STATE(312), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(469), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6333] = 13,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_arguments,
    STATE(294), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(469), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6381] = 13,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      sym_arguments,
    STATE(313), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(469), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6429] = 2,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(252), 20,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [6455] = 2,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(216), 20,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [6481] = 13,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_arguments,
    STATE(309), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(469), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6529] = 2,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(244), 20,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [6555] = 4,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_arguments,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 17,
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
  [6585] = 6,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_arguments,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(185), 12,
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
  [6619] = 10,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    STATE(157), 1,
      sym_arguments,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(185), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
  [6661] = 8,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    STATE(157), 1,
      sym_arguments,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(185), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
  [6699] = 9,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(467), 1,
      anon_sym_CARET,
    STATE(157), 1,
      sym_arguments,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(185), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
  [6739] = 13,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      sym_arguments,
    STATE(303), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(469), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6787] = 5,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_arguments,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(185), 14,
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
  [6819] = 2,
    ACTIONS(248), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(250), 19,
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
  [6845] = 4,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_arguments,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(212), 17,
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
  [6875] = 13,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      sym_arguments,
    STATE(305), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(469), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6923] = 2,
    ACTIONS(228), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(230), 19,
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
  [6949] = 13,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      sym_arguments,
    STATE(299), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(469), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6997] = 2,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(236), 20,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [7023] = 13,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      sym_arguments,
    STATE(307), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(469), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7071] = 2,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(232), 20,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [7097] = 13,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_arguments,
    STATE(302), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(469), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7145] = 6,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(501), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 12,
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
  [7178] = 4,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(210), 17,
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
  [7207] = 5,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 14,
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
  [7238] = 11,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    STATE(157), 1,
      sym_arguments,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(505), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(469), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7281] = 12,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    STATE(157), 1,
      sym_arguments,
    STATE(239), 1,
      sym_block,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(469), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7326] = 2,
    ACTIONS(256), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 18,
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
  [7351] = 11,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    STATE(157), 1,
      sym_arguments,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(507), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(469), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7394] = 3,
    ACTIONS(509), 1,
      anon_sym_COLON,
    ACTIONS(244), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(246), 17,
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
  [7421] = 11,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    ACTIONS(353), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(501), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7464] = 4,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(183), 17,
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
  [7493] = 10,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(501), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 7,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7534] = 8,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(501), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 9,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7571] = 2,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 18,
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
  [7596] = 2,
    ACTIONS(252), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(254), 18,
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
  [7621] = 11,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    ACTIONS(361), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(501), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7664] = 11,
    ACTIONS(355), 1,
      anon_sym_SEMI,
    ACTIONS(357), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(501), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7707] = 2,
    ACTIONS(240), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(242), 18,
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
  [7732] = 12,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    STATE(157), 1,
      sym_arguments,
    STATE(289), 1,
      sym_block,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(469), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7777] = 2,
    ACTIONS(244), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(246), 18,
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
  [7802] = 3,
    ACTIONS(521), 1,
      anon_sym_COLON,
    ACTIONS(232), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 17,
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
  [7829] = 2,
    ACTIONS(236), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(238), 18,
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
  [7854] = 3,
    ACTIONS(523), 1,
      anon_sym_COLON,
    ACTIONS(232), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 17,
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
  [7881] = 9,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(501), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 8,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7920] = 2,
    ACTIONS(232), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 18,
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
  [7945] = 12,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    STATE(157), 1,
      sym_arguments,
    STATE(195), 1,
      sym_block,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(469), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7990] = 2,
    ACTIONS(216), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(218), 18,
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
  [8015] = 7,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(501), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(183), 10,
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
  [8050] = 11,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(367), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(501), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8093] = 12,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AMP,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_CARET,
    STATE(157), 1,
      sym_arguments,
    STATE(327), 1,
      sym_block,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(455), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(469), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8138] = 11,
    ACTIONS(387), 1,
      anon_sym_SEMI,
    ACTIONS(389), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(501), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8181] = 2,
    ACTIONS(226), 1,
      anon_sym_LF,
    ACTIONS(224), 18,
      anon_sym_SEMI,
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
  [8205] = 2,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(244), 18,
      anon_sym_SEMI,
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
  [8229] = 2,
    ACTIONS(250), 1,
      anon_sym_LF,
    ACTIONS(248), 18,
      anon_sym_SEMI,
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
  [8253] = 2,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(256), 18,
      anon_sym_SEMI,
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
  [8277] = 2,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(252), 18,
      anon_sym_SEMI,
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
  [8301] = 2,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(240), 18,
      anon_sym_SEMI,
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
  [8325] = 2,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(236), 18,
      anon_sym_SEMI,
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
  [8349] = 2,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(232), 18,
      anon_sym_SEMI,
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
  [8373] = 2,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(216), 18,
      anon_sym_SEMI,
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
  [8397] = 2,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(220), 18,
      anon_sym_SEMI,
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
  [8421] = 2,
    ACTIONS(230), 1,
      anon_sym_LF,
    ACTIONS(228), 18,
      anon_sym_SEMI,
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
  [8445] = 4,
    ACTIONS(527), 1,
      anon_sym_COLON,
    ACTIONS(529), 1,
      anon_sym_EQ,
    ACTIONS(531), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(525), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8471] = 11,
    ACTIONS(437), 1,
      anon_sym_SEMI,
    ACTIONS(443), 1,
      anon_sym_LF,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(535), 1,
      anon_sym_DASH,
    ACTIONS(539), 1,
      aux_sym_string_literal_token1,
    ACTIONS(543), 1,
      sym_float_literal,
    STATE(160), 1,
      sym__expression,
    ACTIONS(537), 2,
      sym_integer_literal,
      sym_char_literal,
    ACTIONS(541), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(183), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [8511] = 4,
    ACTIONS(549), 1,
      anon_sym_else,
    STATE(229), 1,
      sym_else_clause,
    ACTIONS(547), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(545), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8537] = 2,
    ACTIONS(551), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(509), 9,
      sym_float_literal,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [8559] = 2,
    ACTIONS(553), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(555), 9,
      sym_float_literal,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [8581] = 2,
    ACTIONS(557), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(521), 9,
      sym_float_literal,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [8603] = 4,
    ACTIONS(561), 1,
      anon_sym_COLON,
    ACTIONS(563), 1,
      anon_sym_EQ,
    ACTIONS(565), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(559), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8629] = 2,
    ACTIONS(567), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(523), 9,
      sym_float_literal,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [8651] = 2,
    ACTIONS(571), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(569), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8672] = 2,
    ACTIONS(573), 7,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(575), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8693] = 2,
    ACTIONS(119), 7,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(577), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8714] = 3,
    ACTIONS(581), 1,
      anon_sym_EQ,
    ACTIONS(583), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(579), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8737] = 3,
    ACTIONS(587), 1,
      anon_sym_EQ,
    ACTIONS(589), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(585), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8760] = 2,
    ACTIONS(591), 7,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(593), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8781] = 2,
    ACTIONS(591), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(593), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8802] = 2,
    ACTIONS(595), 7,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(597), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8823] = 2,
    ACTIONS(571), 7,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(569), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8844] = 8,
    ACTIONS(383), 1,
      aux_sym_string_literal_token1,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(77), 1,
      sym__expression,
    ACTIONS(385), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(89), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [8876] = 8,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_DASH,
    STATE(180), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(603), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [8908] = 8,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_DASH,
    ACTIONS(607), 1,
      aux_sym_string_literal_token1,
    STATE(179), 1,
      sym__expression,
    ACTIONS(541), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(543), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(183), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [8940] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    STATE(109), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(150), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(17), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(135), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [8972] = 8,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_DASH,
    ACTIONS(607), 1,
      aux_sym_string_literal_token1,
    STATE(153), 1,
      sym__expression,
    ACTIONS(541), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(543), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(183), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9004] = 8,
    ACTIONS(383), 1,
      aux_sym_string_literal_token1,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(71), 1,
      sym__expression,
    ACTIONS(385), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(89), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9036] = 8,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_DASH,
    STATE(169), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(603), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9068] = 8,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_DASH,
    STATE(176), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(603), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9100] = 8,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_DASH,
    ACTIONS(607), 1,
      aux_sym_string_literal_token1,
    STATE(154), 1,
      sym__expression,
    ACTIONS(541), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(543), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(183), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9132] = 8,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_DASH,
    ACTIONS(607), 1,
      aux_sym_string_literal_token1,
    STATE(178), 1,
      sym__expression,
    ACTIONS(541), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(543), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(183), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9164] = 8,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_DASH,
    ACTIONS(607), 1,
      aux_sym_string_literal_token1,
    STATE(174), 1,
      sym__expression,
    ACTIONS(541), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(543), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(183), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9196] = 8,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_DASH,
    ACTIONS(607), 1,
      aux_sym_string_literal_token1,
    STATE(163), 1,
      sym__expression,
    ACTIONS(541), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(543), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(183), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9228] = 8,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_DASH,
    ACTIONS(607), 1,
      aux_sym_string_literal_token1,
    STATE(162), 1,
      sym__expression,
    ACTIONS(541), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(543), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(183), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9260] = 8,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_DASH,
    ACTIONS(607), 1,
      aux_sym_string_literal_token1,
    STATE(152), 1,
      sym__expression,
    ACTIONS(541), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(543), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(183), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9292] = 8,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_DASH,
    ACTIONS(607), 1,
      aux_sym_string_literal_token1,
    STATE(161), 1,
      sym__expression,
    ACTIONS(541), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(543), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(183), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9324] = 8,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_DASH,
    STATE(156), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(603), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9356] = 8,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_DASH,
    ACTIONS(278), 1,
      aux_sym_string_literal_token1,
    STATE(42), 1,
      sym__expression,
    ACTIONS(286), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(276), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(55), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9388] = 2,
    ACTIONS(611), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(609), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9408] = 2,
    ACTIONS(615), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(613), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9428] = 2,
    ACTIONS(619), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(617), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9448] = 8,
    ACTIONS(383), 1,
      aux_sym_string_literal_token1,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(83), 1,
      sym__expression,
    ACTIONS(385), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(89), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9480] = 8,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_DASH,
    ACTIONS(278), 1,
      aux_sym_string_literal_token1,
    STATE(44), 1,
      sym__expression,
    ACTIONS(286), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(276), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(55), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9512] = 8,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_DASH,
    ACTIONS(278), 1,
      aux_sym_string_literal_token1,
    STATE(39), 1,
      sym__expression,
    ACTIONS(286), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(276), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(55), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9544] = 8,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_DASH,
    ACTIONS(278), 1,
      aux_sym_string_literal_token1,
    STATE(40), 1,
      sym__expression,
    ACTIONS(286), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(276), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(55), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9576] = 8,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_DASH,
    ACTIONS(278), 1,
      aux_sym_string_literal_token1,
    STATE(41), 1,
      sym__expression,
    ACTIONS(286), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(276), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(55), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9608] = 8,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_DASH,
    ACTIONS(278), 1,
      aux_sym_string_literal_token1,
    STATE(43), 1,
      sym__expression,
    ACTIONS(286), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(276), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(55), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9640] = 8,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_DASH,
    ACTIONS(278), 1,
      aux_sym_string_literal_token1,
    STATE(36), 1,
      sym__expression,
    ACTIONS(286), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(276), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(55), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9672] = 8,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_DASH,
    ACTIONS(278), 1,
      aux_sym_string_literal_token1,
    STATE(45), 1,
      sym__expression,
    ACTIONS(286), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(276), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(55), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9704] = 9,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_DASH,
    ACTIONS(603), 1,
      sym_char_literal,
    STATE(144), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(621), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(175), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9738] = 2,
    ACTIONS(625), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(623), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9758] = 8,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_DASH,
    STATE(136), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(603), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9790] = 8,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_DASH,
    STATE(137), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(603), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9822] = 8,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_DASH,
    STATE(138), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(603), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9854] = 8,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_DASH,
    STATE(139), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(603), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9886] = 8,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_DASH,
    STATE(140), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(603), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9918] = 8,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_DASH,
    STATE(124), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(603), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9950] = 8,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_DASH,
    STATE(142), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(603), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9982] = 2,
    ACTIONS(629), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(627), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10002] = 2,
    ACTIONS(633), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(631), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10022] = 2,
    ACTIONS(637), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(635), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10042] = 8,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_DASH,
    STATE(144), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(603), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(170), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10074] = 8,
    ACTIONS(383), 1,
      aux_sym_string_literal_token1,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(70), 1,
      sym__expression,
    ACTIONS(385), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(89), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10106] = 8,
    ACTIONS(383), 1,
      aux_sym_string_literal_token1,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(79), 1,
      sym__expression,
    ACTIONS(385), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(89), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10138] = 8,
    ACTIONS(383), 1,
      aux_sym_string_literal_token1,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(67), 1,
      sym__expression,
    ACTIONS(385), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(89), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10170] = 8,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_DASH,
    ACTIONS(607), 1,
      aux_sym_string_literal_token1,
    STATE(181), 1,
      sym__expression,
    ACTIONS(541), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(543), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(183), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10202] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    STATE(114), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(150), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(17), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(135), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10234] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    STATE(102), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(150), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(17), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(135), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10266] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    STATE(105), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(150), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(17), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(135), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10298] = 8,
    ACTIONS(383), 1,
      aux_sym_string_literal_token1,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(62), 1,
      sym__expression,
    ACTIONS(385), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(89), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10330] = 8,
    ACTIONS(383), 1,
      aux_sym_string_literal_token1,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(73), 1,
      sym__expression,
    ACTIONS(385), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(89), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10362] = 8,
    ACTIONS(383), 1,
      aux_sym_string_literal_token1,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(74), 1,
      sym__expression,
    ACTIONS(385), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(89), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10394] = 8,
    ACTIONS(383), 1,
      aux_sym_string_literal_token1,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(75), 1,
      sym__expression,
    ACTIONS(385), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(89), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10426] = 8,
    ACTIONS(383), 1,
      aux_sym_string_literal_token1,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(76), 1,
      sym__expression,
    ACTIONS(385), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(89), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10458] = 8,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_DASH,
    ACTIONS(607), 1,
      aux_sym_string_literal_token1,
    STATE(167), 1,
      sym__expression,
    ACTIONS(541), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(543), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(183), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10490] = 8,
    ACTIONS(383), 1,
      aux_sym_string_literal_token1,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(78), 1,
      sym__expression,
    ACTIONS(385), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(86), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(89), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10522] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    STATE(112), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(150), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(17), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(135), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10554] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    STATE(103), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(150), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(17), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(135), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10586] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    STATE(108), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(150), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(17), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(135), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10618] = 8,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_DASH,
    ACTIONS(607), 1,
      aux_sym_string_literal_token1,
    STATE(166), 1,
      sym__expression,
    ACTIONS(541), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(189), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(543), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(183), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10650] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    STATE(106), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(150), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(17), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(135), 4,
      sym_call_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10682] = 3,
    ACTIONS(639), 1,
      anon_sym_DQUOTE,
    STATE(283), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(641), 2,
      sym__string_content,
      sym_escape_sequence,
  [10693] = 1,
    ACTIONS(113), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [10700] = 3,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(645), 2,
      sym__string_content,
      sym_escape_sequence,
  [10711] = 3,
    ACTIONS(647), 1,
      anon_sym_DQUOTE,
    STATE(274), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(649), 2,
      sym__string_content,
      sym_escape_sequence,
  [10722] = 3,
    ACTIONS(651), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(645), 2,
      sym__string_content,
      sym_escape_sequence,
  [10733] = 4,
    ACTIONS(559), 1,
      anon_sym_SEMI,
    ACTIONS(565), 1,
      anon_sym_LF,
    ACTIONS(653), 1,
      anon_sym_COLON,
    ACTIONS(655), 1,
      anon_sym_EQ,
  [10746] = 2,
    ACTIONS(509), 1,
      anon_sym_LF,
    ACTIONS(551), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [10755] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(657), 1,
      anon_sym_if,
    STATE(331), 2,
      sym_block,
      sym_if_statement,
  [10766] = 3,
    ACTIONS(659), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(645), 2,
      sym__string_content,
      sym_escape_sequence,
  [10777] = 4,
    ACTIONS(525), 1,
      anon_sym_SEMI,
    ACTIONS(531), 1,
      anon_sym_LF,
    ACTIONS(661), 1,
      anon_sym_COLON,
    ACTIONS(663), 1,
      anon_sym_EQ,
  [10790] = 1,
    ACTIONS(97), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [10797] = 2,
    ACTIONS(523), 1,
      anon_sym_LF,
    ACTIONS(567), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [10806] = 3,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(645), 2,
      sym__string_content,
      sym_escape_sequence,
  [10817] = 3,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(645), 2,
      sym__string_content,
      sym_escape_sequence,
  [10828] = 2,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(553), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [10837] = 2,
    ACTIONS(521), 1,
      anon_sym_LF,
    ACTIONS(557), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [10846] = 1,
    ACTIONS(117), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [10853] = 3,
    ACTIONS(669), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(671), 2,
      sym__string_content,
      sym_escape_sequence,
  [10864] = 3,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(673), 1,
      anon_sym_if,
    STATE(228), 2,
      sym_block,
      sym_if_statement,
  [10875] = 4,
    ACTIONS(545), 1,
      anon_sym_SEMI,
    ACTIONS(547), 1,
      anon_sym_LF,
    ACTIONS(675), 1,
      anon_sym_else,
    STATE(317), 1,
      sym_else_clause,
  [10888] = 3,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    STATE(272), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(679), 2,
      sym__string_content,
      sym_escape_sequence,
  [10899] = 3,
    ACTIONS(681), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(683), 2,
      sym__string_content,
      sym_escape_sequence,
  [10910] = 3,
    ACTIONS(686), 1,
      anon_sym_DQUOTE,
    STATE(282), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(688), 2,
      sym__string_content,
      sym_escape_sequence,
  [10921] = 3,
    ACTIONS(585), 1,
      anon_sym_SEMI,
    ACTIONS(589), 1,
      anon_sym_LF,
    ACTIONS(690), 1,
      anon_sym_EQ,
  [10931] = 3,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_arguments_repeat2,
  [10941] = 2,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(111), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [10949] = 3,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_arguments_repeat2,
  [10959] = 2,
    ACTIONS(571), 1,
      anon_sym_LF,
    ACTIONS(569), 2,
      anon_sym_SEMI,
      anon_sym_else,
  [10967] = 3,
    ACTIONS(692), 1,
      anon_sym_DASH_GT,
    ACTIONS(694), 1,
      anon_sym_LBRACE,
    STATE(208), 1,
      sym_block,
  [10977] = 3,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_arguments_repeat2,
  [10987] = 3,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_parameters_repeat1,
  [10997] = 2,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(115), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [11005] = 3,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_arguments_repeat2,
  [11015] = 3,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_arguments_repeat2,
  [11025] = 2,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(95), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [11033] = 3,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_arguments_repeat2,
  [11043] = 3,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    ACTIONS(707), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_arguments_repeat2,
  [11053] = 3,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_arguments_repeat2,
  [11063] = 2,
    ACTIONS(591), 1,
      anon_sym_LF,
    ACTIONS(593), 2,
      anon_sym_SEMI,
      anon_sym_else,
  [11071] = 3,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_arguments_repeat2,
  [11081] = 3,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_parameters_repeat1,
  [11091] = 3,
    ACTIONS(714), 1,
      anon_sym_COMMA,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      aux_sym_parameters_repeat1,
  [11101] = 3,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_arguments_repeat2,
  [11111] = 3,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_arguments_repeat2,
  [11121] = 3,
    ACTIONS(579), 1,
      anon_sym_SEMI,
    ACTIONS(583), 1,
      anon_sym_LF,
    ACTIONS(720), 1,
      anon_sym_EQ,
  [11131] = 1,
    ACTIONS(722), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [11136] = 1,
    ACTIONS(397), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11141] = 2,
    ACTIONS(617), 1,
      anon_sym_SEMI,
    ACTIONS(619), 1,
      anon_sym_LF,
  [11148] = 2,
    ACTIONS(609), 1,
      anon_sym_SEMI,
    ACTIONS(611), 1,
      anon_sym_LF,
  [11155] = 2,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(427), 1,
      anon_sym_SEMI,
  [11162] = 1,
    ACTIONS(724), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [11167] = 1,
    ACTIONS(726), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [11172] = 2,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    ACTIONS(637), 1,
      anon_sym_LF,
  [11179] = 2,
    ACTIONS(694), 1,
      anon_sym_LBRACE,
    STATE(202), 1,
      sym_block,
  [11186] = 1,
    ACTIONS(701), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11191] = 2,
    ACTIONS(627), 1,
      anon_sym_SEMI,
    ACTIONS(629), 1,
      anon_sym_LF,
  [11198] = 2,
    ACTIONS(631), 1,
      anon_sym_SEMI,
    ACTIONS(633), 1,
      anon_sym_LF,
  [11205] = 2,
    ACTIONS(623), 1,
      anon_sym_SEMI,
    ACTIONS(625), 1,
      anon_sym_LF,
  [11212] = 1,
    ACTIONS(728), 2,
      sym_float_literal,
      sym_integer_literal,
  [11217] = 2,
    ACTIONS(730), 1,
      anon_sym_LPAREN,
    STATE(298), 1,
      sym_parameters,
  [11224] = 1,
    ACTIONS(732), 2,
      sym_float_literal,
      sym_integer_literal,
  [11229] = 2,
    ACTIONS(613), 1,
      anon_sym_SEMI,
    ACTIONS(615), 1,
      anon_sym_LF,
  [11236] = 1,
    ACTIONS(734), 2,
      sym_float_literal,
      sym_integer_literal,
  [11241] = 1,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11246] = 1,
    ACTIONS(736), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [11251] = 1,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
  [11255] = 1,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
  [11259] = 1,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
  [11263] = 1,
    ACTIONS(738), 1,
      anon_sym_COLON,
  [11267] = 1,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
  [11271] = 1,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
  [11275] = 1,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
  [11279] = 1,
    ACTIONS(740), 1,
      anon_sym_RBRACK,
  [11283] = 1,
    ACTIONS(742), 1,
      anon_sym_RBRACK,
  [11287] = 1,
    ACTIONS(523), 1,
      anon_sym_COLON,
  [11291] = 1,
    ACTIONS(744), 1,
      anon_sym_COLON,
  [11295] = 1,
    ACTIONS(746), 1,
      anon_sym_RBRACK,
  [11299] = 1,
    ACTIONS(748), 1,
      ts_builtin_sym_end,
  [11303] = 1,
    ACTIONS(750), 1,
      anon_sym_COLON,
  [11307] = 1,
    ACTIONS(509), 1,
      anon_sym_COLON,
  [11311] = 1,
    ACTIONS(752), 1,
      sym_identifier,
  [11315] = 1,
    ACTIONS(555), 1,
      anon_sym_COLON,
  [11319] = 1,
    ACTIONS(521), 1,
      anon_sym_COLON,
  [11323] = 1,
    ACTIONS(754), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 222,
  [SMALL_STATE(6)] = 296,
  [SMALL_STATE(7)] = 370,
  [SMALL_STATE(8)] = 441,
  [SMALL_STATE(9)] = 512,
  [SMALL_STATE(10)] = 583,
  [SMALL_STATE(11)] = 654,
  [SMALL_STATE(12)] = 725,
  [SMALL_STATE(13)] = 796,
  [SMALL_STATE(14)] = 867,
  [SMALL_STATE(15)] = 938,
  [SMALL_STATE(16)] = 1009,
  [SMALL_STATE(17)] = 1080,
  [SMALL_STATE(18)] = 1151,
  [SMALL_STATE(19)] = 1222,
  [SMALL_STATE(20)] = 1293,
  [SMALL_STATE(21)] = 1364,
  [SMALL_STATE(22)] = 1435,
  [SMALL_STATE(23)] = 1503,
  [SMALL_STATE(24)] = 1571,
  [SMALL_STATE(25)] = 1639,
  [SMALL_STATE(26)] = 1707,
  [SMALL_STATE(27)] = 1775,
  [SMALL_STATE(28)] = 1843,
  [SMALL_STATE(29)] = 1911,
  [SMALL_STATE(30)] = 1985,
  [SMALL_STATE(31)] = 2025,
  [SMALL_STATE(32)] = 2087,
  [SMALL_STATE(33)] = 2127,
  [SMALL_STATE(34)] = 2167,
  [SMALL_STATE(35)] = 2241,
  [SMALL_STATE(36)] = 2304,
  [SMALL_STATE(37)] = 2351,
  [SMALL_STATE(38)] = 2408,
  [SMALL_STATE(39)] = 2467,
  [SMALL_STATE(40)] = 2516,
  [SMALL_STATE(41)] = 2569,
  [SMALL_STATE(42)] = 2620,
  [SMALL_STATE(43)] = 2663,
  [SMALL_STATE(44)] = 2718,
  [SMALL_STATE(45)] = 2763,
  [SMALL_STATE(46)] = 2806,
  [SMALL_STATE(47)] = 2865,
  [SMALL_STATE(48)] = 2903,
  [SMALL_STATE(49)] = 2941,
  [SMALL_STATE(50)] = 2979,
  [SMALL_STATE(51)] = 3017,
  [SMALL_STATE(52)] = 3055,
  [SMALL_STATE(53)] = 3093,
  [SMALL_STATE(54)] = 3131,
  [SMALL_STATE(55)] = 3169,
  [SMALL_STATE(56)] = 3207,
  [SMALL_STATE(57)] = 3245,
  [SMALL_STATE(58)] = 3283,
  [SMALL_STATE(59)] = 3321,
  [SMALL_STATE(60)] = 3359,
  [SMALL_STATE(61)] = 3397,
  [SMALL_STATE(62)] = 3453,
  [SMALL_STATE(63)] = 3496,
  [SMALL_STATE(64)] = 3563,
  [SMALL_STATE(65)] = 3630,
  [SMALL_STATE(66)] = 3697,
  [SMALL_STATE(67)] = 3750,
  [SMALL_STATE(68)] = 3791,
  [SMALL_STATE(69)] = 3858,
  [SMALL_STATE(70)] = 3915,
  [SMALL_STATE(71)] = 3972,
  [SMALL_STATE(72)] = 4029,
  [SMALL_STATE(73)] = 4096,
  [SMALL_STATE(74)] = 4143,
  [SMALL_STATE(75)] = 4194,
  [SMALL_STATE(76)] = 4243,
  [SMALL_STATE(77)] = 4296,
  [SMALL_STATE(78)] = 4341,
  [SMALL_STATE(79)] = 4382,
  [SMALL_STATE(80)] = 4439,
  [SMALL_STATE(81)] = 4506,
  [SMALL_STATE(82)] = 4573,
  [SMALL_STATE(83)] = 4626,
  [SMALL_STATE(84)] = 4683,
  [SMALL_STATE(85)] = 4733,
  [SMALL_STATE(86)] = 4783,
  [SMALL_STATE(87)] = 4819,
  [SMALL_STATE(88)] = 4855,
  [SMALL_STATE(89)] = 4891,
  [SMALL_STATE(90)] = 4927,
  [SMALL_STATE(91)] = 4963,
  [SMALL_STATE(92)] = 4999,
  [SMALL_STATE(93)] = 5049,
  [SMALL_STATE(94)] = 5085,
  [SMALL_STATE(95)] = 5135,
  [SMALL_STATE(96)] = 5171,
  [SMALL_STATE(97)] = 5203,
  [SMALL_STATE(98)] = 5235,
  [SMALL_STATE(99)] = 5263,
  [SMALL_STATE(100)] = 5291,
  [SMALL_STATE(101)] = 5319,
  [SMALL_STATE(102)] = 5352,
  [SMALL_STATE(103)] = 5387,
  [SMALL_STATE(104)] = 5428,
  [SMALL_STATE(105)] = 5461,
  [SMALL_STATE(106)] = 5504,
  [SMALL_STATE(107)] = 5541,
  [SMALL_STATE(108)] = 5574,
  [SMALL_STATE(109)] = 5607,
  [SMALL_STATE(110)] = 5638,
  [SMALL_STATE(111)] = 5671,
  [SMALL_STATE(112)] = 5704,
  [SMALL_STATE(113)] = 5743,
  [SMALL_STATE(114)] = 5776,
  [SMALL_STATE(115)] = 5807,
  [SMALL_STATE(116)] = 5840,
  [SMALL_STATE(117)] = 5889,
  [SMALL_STATE(118)] = 5932,
  [SMALL_STATE(119)] = 5965,
  [SMALL_STATE(120)] = 5998,
  [SMALL_STATE(121)] = 6031,
  [SMALL_STATE(122)] = 6064,
  [SMALL_STATE(123)] = 6097,
  [SMALL_STATE(124)] = 6123,
  [SMALL_STATE(125)] = 6159,
  [SMALL_STATE(126)] = 6207,
  [SMALL_STATE(127)] = 6233,
  [SMALL_STATE(128)] = 6259,
  [SMALL_STATE(129)] = 6285,
  [SMALL_STATE(130)] = 6333,
  [SMALL_STATE(131)] = 6381,
  [SMALL_STATE(132)] = 6429,
  [SMALL_STATE(133)] = 6455,
  [SMALL_STATE(134)] = 6481,
  [SMALL_STATE(135)] = 6529,
  [SMALL_STATE(136)] = 6555,
  [SMALL_STATE(137)] = 6585,
  [SMALL_STATE(138)] = 6619,
  [SMALL_STATE(139)] = 6661,
  [SMALL_STATE(140)] = 6699,
  [SMALL_STATE(141)] = 6739,
  [SMALL_STATE(142)] = 6787,
  [SMALL_STATE(143)] = 6819,
  [SMALL_STATE(144)] = 6845,
  [SMALL_STATE(145)] = 6875,
  [SMALL_STATE(146)] = 6923,
  [SMALL_STATE(147)] = 6949,
  [SMALL_STATE(148)] = 6997,
  [SMALL_STATE(149)] = 7023,
  [SMALL_STATE(150)] = 7071,
  [SMALL_STATE(151)] = 7097,
  [SMALL_STATE(152)] = 7145,
  [SMALL_STATE(153)] = 7178,
  [SMALL_STATE(154)] = 7207,
  [SMALL_STATE(155)] = 7238,
  [SMALL_STATE(156)] = 7281,
  [SMALL_STATE(157)] = 7326,
  [SMALL_STATE(158)] = 7351,
  [SMALL_STATE(159)] = 7394,
  [SMALL_STATE(160)] = 7421,
  [SMALL_STATE(161)] = 7464,
  [SMALL_STATE(162)] = 7493,
  [SMALL_STATE(163)] = 7534,
  [SMALL_STATE(164)] = 7571,
  [SMALL_STATE(165)] = 7596,
  [SMALL_STATE(166)] = 7621,
  [SMALL_STATE(167)] = 7664,
  [SMALL_STATE(168)] = 7707,
  [SMALL_STATE(169)] = 7732,
  [SMALL_STATE(170)] = 7777,
  [SMALL_STATE(171)] = 7802,
  [SMALL_STATE(172)] = 7829,
  [SMALL_STATE(173)] = 7854,
  [SMALL_STATE(174)] = 7881,
  [SMALL_STATE(175)] = 7920,
  [SMALL_STATE(176)] = 7945,
  [SMALL_STATE(177)] = 7990,
  [SMALL_STATE(178)] = 8015,
  [SMALL_STATE(179)] = 8050,
  [SMALL_STATE(180)] = 8093,
  [SMALL_STATE(181)] = 8138,
  [SMALL_STATE(182)] = 8181,
  [SMALL_STATE(183)] = 8205,
  [SMALL_STATE(184)] = 8229,
  [SMALL_STATE(185)] = 8253,
  [SMALL_STATE(186)] = 8277,
  [SMALL_STATE(187)] = 8301,
  [SMALL_STATE(188)] = 8325,
  [SMALL_STATE(189)] = 8349,
  [SMALL_STATE(190)] = 8373,
  [SMALL_STATE(191)] = 8397,
  [SMALL_STATE(192)] = 8421,
  [SMALL_STATE(193)] = 8445,
  [SMALL_STATE(194)] = 8471,
  [SMALL_STATE(195)] = 8511,
  [SMALL_STATE(196)] = 8537,
  [SMALL_STATE(197)] = 8559,
  [SMALL_STATE(198)] = 8581,
  [SMALL_STATE(199)] = 8603,
  [SMALL_STATE(200)] = 8629,
  [SMALL_STATE(201)] = 8651,
  [SMALL_STATE(202)] = 8672,
  [SMALL_STATE(203)] = 8693,
  [SMALL_STATE(204)] = 8714,
  [SMALL_STATE(205)] = 8737,
  [SMALL_STATE(206)] = 8760,
  [SMALL_STATE(207)] = 8781,
  [SMALL_STATE(208)] = 8802,
  [SMALL_STATE(209)] = 8823,
  [SMALL_STATE(210)] = 8844,
  [SMALL_STATE(211)] = 8876,
  [SMALL_STATE(212)] = 8908,
  [SMALL_STATE(213)] = 8940,
  [SMALL_STATE(214)] = 8972,
  [SMALL_STATE(215)] = 9004,
  [SMALL_STATE(216)] = 9036,
  [SMALL_STATE(217)] = 9068,
  [SMALL_STATE(218)] = 9100,
  [SMALL_STATE(219)] = 9132,
  [SMALL_STATE(220)] = 9164,
  [SMALL_STATE(221)] = 9196,
  [SMALL_STATE(222)] = 9228,
  [SMALL_STATE(223)] = 9260,
  [SMALL_STATE(224)] = 9292,
  [SMALL_STATE(225)] = 9324,
  [SMALL_STATE(226)] = 9356,
  [SMALL_STATE(227)] = 9388,
  [SMALL_STATE(228)] = 9408,
  [SMALL_STATE(229)] = 9428,
  [SMALL_STATE(230)] = 9448,
  [SMALL_STATE(231)] = 9480,
  [SMALL_STATE(232)] = 9512,
  [SMALL_STATE(233)] = 9544,
  [SMALL_STATE(234)] = 9576,
  [SMALL_STATE(235)] = 9608,
  [SMALL_STATE(236)] = 9640,
  [SMALL_STATE(237)] = 9672,
  [SMALL_STATE(238)] = 9704,
  [SMALL_STATE(239)] = 9738,
  [SMALL_STATE(240)] = 9758,
  [SMALL_STATE(241)] = 9790,
  [SMALL_STATE(242)] = 9822,
  [SMALL_STATE(243)] = 9854,
  [SMALL_STATE(244)] = 9886,
  [SMALL_STATE(245)] = 9918,
  [SMALL_STATE(246)] = 9950,
  [SMALL_STATE(247)] = 9982,
  [SMALL_STATE(248)] = 10002,
  [SMALL_STATE(249)] = 10022,
  [SMALL_STATE(250)] = 10042,
  [SMALL_STATE(251)] = 10074,
  [SMALL_STATE(252)] = 10106,
  [SMALL_STATE(253)] = 10138,
  [SMALL_STATE(254)] = 10170,
  [SMALL_STATE(255)] = 10202,
  [SMALL_STATE(256)] = 10234,
  [SMALL_STATE(257)] = 10266,
  [SMALL_STATE(258)] = 10298,
  [SMALL_STATE(259)] = 10330,
  [SMALL_STATE(260)] = 10362,
  [SMALL_STATE(261)] = 10394,
  [SMALL_STATE(262)] = 10426,
  [SMALL_STATE(263)] = 10458,
  [SMALL_STATE(264)] = 10490,
  [SMALL_STATE(265)] = 10522,
  [SMALL_STATE(266)] = 10554,
  [SMALL_STATE(267)] = 10586,
  [SMALL_STATE(268)] = 10618,
  [SMALL_STATE(269)] = 10650,
  [SMALL_STATE(270)] = 10682,
  [SMALL_STATE(271)] = 10693,
  [SMALL_STATE(272)] = 10700,
  [SMALL_STATE(273)] = 10711,
  [SMALL_STATE(274)] = 10722,
  [SMALL_STATE(275)] = 10733,
  [SMALL_STATE(276)] = 10746,
  [SMALL_STATE(277)] = 10755,
  [SMALL_STATE(278)] = 10766,
  [SMALL_STATE(279)] = 10777,
  [SMALL_STATE(280)] = 10790,
  [SMALL_STATE(281)] = 10797,
  [SMALL_STATE(282)] = 10806,
  [SMALL_STATE(283)] = 10817,
  [SMALL_STATE(284)] = 10828,
  [SMALL_STATE(285)] = 10837,
  [SMALL_STATE(286)] = 10846,
  [SMALL_STATE(287)] = 10853,
  [SMALL_STATE(288)] = 10864,
  [SMALL_STATE(289)] = 10875,
  [SMALL_STATE(290)] = 10888,
  [SMALL_STATE(291)] = 10899,
  [SMALL_STATE(292)] = 10910,
  [SMALL_STATE(293)] = 10921,
  [SMALL_STATE(294)] = 10931,
  [SMALL_STATE(295)] = 10941,
  [SMALL_STATE(296)] = 10949,
  [SMALL_STATE(297)] = 10959,
  [SMALL_STATE(298)] = 10967,
  [SMALL_STATE(299)] = 10977,
  [SMALL_STATE(300)] = 10987,
  [SMALL_STATE(301)] = 10997,
  [SMALL_STATE(302)] = 11005,
  [SMALL_STATE(303)] = 11015,
  [SMALL_STATE(304)] = 11025,
  [SMALL_STATE(305)] = 11033,
  [SMALL_STATE(306)] = 11043,
  [SMALL_STATE(307)] = 11053,
  [SMALL_STATE(308)] = 11063,
  [SMALL_STATE(309)] = 11071,
  [SMALL_STATE(310)] = 11081,
  [SMALL_STATE(311)] = 11091,
  [SMALL_STATE(312)] = 11101,
  [SMALL_STATE(313)] = 11111,
  [SMALL_STATE(314)] = 11121,
  [SMALL_STATE(315)] = 11131,
  [SMALL_STATE(316)] = 11136,
  [SMALL_STATE(317)] = 11141,
  [SMALL_STATE(318)] = 11148,
  [SMALL_STATE(319)] = 11155,
  [SMALL_STATE(320)] = 11162,
  [SMALL_STATE(321)] = 11167,
  [SMALL_STATE(322)] = 11172,
  [SMALL_STATE(323)] = 11179,
  [SMALL_STATE(324)] = 11186,
  [SMALL_STATE(325)] = 11191,
  [SMALL_STATE(326)] = 11198,
  [SMALL_STATE(327)] = 11205,
  [SMALL_STATE(328)] = 11212,
  [SMALL_STATE(329)] = 11217,
  [SMALL_STATE(330)] = 11224,
  [SMALL_STATE(331)] = 11229,
  [SMALL_STATE(332)] = 11236,
  [SMALL_STATE(333)] = 11241,
  [SMALL_STATE(334)] = 11246,
  [SMALL_STATE(335)] = 11251,
  [SMALL_STATE(336)] = 11255,
  [SMALL_STATE(337)] = 11259,
  [SMALL_STATE(338)] = 11263,
  [SMALL_STATE(339)] = 11267,
  [SMALL_STATE(340)] = 11271,
  [SMALL_STATE(341)] = 11275,
  [SMALL_STATE(342)] = 11279,
  [SMALL_STATE(343)] = 11283,
  [SMALL_STATE(344)] = 11287,
  [SMALL_STATE(345)] = 11291,
  [SMALL_STATE(346)] = 11295,
  [SMALL_STATE(347)] = 11299,
  [SMALL_STATE(348)] = 11303,
  [SMALL_STATE(349)] = 11307,
  [SMALL_STATE(350)] = 11311,
  [SMALL_STATE(351)] = 11315,
  [SMALL_STATE(352)] = 11319,
  [SMALL_STATE(353)] = 11323,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 16),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 16),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, .production_id = 8),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 8),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(318),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(194),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(290),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(350),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(349),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(351),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(92),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(330),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(352),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(270),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(123),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 5),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 6),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 6),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(55),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(225),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(227),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(82),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(226),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(117),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(52),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(292),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(63),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(217),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(49),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 19),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 19),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 17),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 17),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 10),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 10),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 14),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 14),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 4, .production_id = 9),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 9),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_pattern, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_literal, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3, .production_id = 5),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3, .production_id = 5),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 6),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 6),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_pattern, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_literal, 2),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 18),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 18),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 13),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 13),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 9),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 9),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 11),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 11),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 12),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 12),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 4),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 4),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement_statement, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement_statement, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment_statement, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment_statement, 2),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(291),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(61),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(27),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [748] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
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
