#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 413
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 2
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 27

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
  anon_sym_enum = 37,
  anon_sym_LBRACE = 38,
  anon_sym_BSLASHn = 39,
  anon_sym_RBRACE = 40,
  sym_mutable_specifier = 41,
  anon_sym_DASH = 42,
  anon_sym_return = 43,
  anon_sym_AMP = 44,
  anon_sym_PIPE = 45,
  anon_sym_CARET = 46,
  anon_sym_EQ_EQ = 47,
  anon_sym_BANG_EQ = 48,
  anon_sym_LT = 49,
  anon_sym_LT_EQ = 50,
  anon_sym_GT = 51,
  anon_sym_GT_EQ = 52,
  anon_sym_LT_LT = 53,
  anon_sym_GT_GT = 54,
  anon_sym_PLUS = 55,
  anon_sym_STAR = 56,
  anon_sym_SLASH = 57,
  anon_sym_PERCENT = 58,
  sym_integer_literal = 59,
  aux_sym_string_literal_token1 = 60,
  anon_sym_DQUOTE = 61,
  sym_char_literal = 62,
  sym_escape_sequence = 63,
  anon_sym_function = 64,
  anon_sym_DASH_GT = 65,
  anon_sym_if = 66,
  anon_sym_else = 67,
  anon_sym_true = 68,
  anon_sym_false = 69,
  sym_line_comment = 70,
  sym__string_content = 71,
  sym_float_literal = 72,
  sym_source_file = 73,
  sym__expression = 74,
  sym_while_statement = 75,
  sym_increment_statement = 76,
  sym_decrement_statement = 77,
  sym_continue_statement = 78,
  sym_for_expression = 79,
  sym_call_expression = 80,
  sym_range_expression = 81,
  sym_arguments = 82,
  sym__top_level_declaration = 83,
  sym__type = 84,
  sym_array_type = 85,
  sym_let_declaration = 86,
  sym_enum_declaration = 87,
  sym_enum_variant_list = 88,
  sym_enum_variant = 89,
  sym_field_declaration_list = 90,
  sym_field_declaration = 91,
  sym__field_identifier = 92,
  sym_ordered_field_declaration_list = 93,
  sym_unary_expression = 94,
  sym_return_statement = 95,
  sym_binary_expression = 96,
  sym__literal = 97,
  sym__pattern = 98,
  sym__literal_pattern = 99,
  sym_negative_literal = 100,
  sym_string_literal = 101,
  sym_function_declaration = 102,
  sym_parameters = 103,
  sym_parameter = 104,
  sym_block = 105,
  sym_if_statement = 106,
  sym_else_clause = 107,
  sym_boolean_literal = 108,
  aux_sym_source_file_repeat1 = 109,
  aux_sym_arguments_repeat1 = 110,
  aux_sym_arguments_repeat2 = 111,
  aux_sym_enum_variant_list_repeat1 = 112,
  aux_sym_enum_variant_list_repeat2 = 113,
  aux_sym_field_declaration_list_repeat1 = 114,
  aux_sym_field_declaration_list_repeat2 = 115,
  aux_sym_string_literal_repeat1 = 116,
  aux_sym_parameters_repeat1 = 117,
  aux_sym_block_repeat1 = 118,
  alias_sym_field_identifier = 119,
  alias_sym_type_identifier = 120,
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
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_line_comment] = "line_comment",
  [sym__string_content] = "_string_content",
  [sym_float_literal] = "float_literal",
  [sym_source_file] = "source_file",
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
  [sym_enum_declaration] = "enum_declaration",
  [sym_enum_variant_list] = "enum_variant_list",
  [sym_enum_variant] = "enum_variant",
  [sym_field_declaration_list] = "field_declaration_list",
  [sym_field_declaration] = "field_declaration",
  [sym__field_identifier] = "_field_identifier",
  [sym_ordered_field_declaration_list] = "ordered_field_declaration_list",
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
  [aux_sym_enum_variant_list_repeat1] = "enum_variant_list_repeat1",
  [aux_sym_enum_variant_list_repeat2] = "enum_variant_list_repeat2",
  [aux_sym_field_declaration_list_repeat1] = "field_declaration_list_repeat1",
  [aux_sym_field_declaration_list_repeat2] = "field_declaration_list_repeat2",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [alias_sym_field_identifier] = "field_identifier",
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
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_line_comment] = sym_line_comment,
  [sym__string_content] = sym__string_content,
  [sym_float_literal] = sym_float_literal,
  [sym_source_file] = sym_source_file,
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
  [sym_enum_declaration] = sym_enum_declaration,
  [sym_enum_variant_list] = sym_enum_variant_list,
  [sym_enum_variant] = sym_enum_variant,
  [sym_field_declaration_list] = sym_field_declaration_list,
  [sym_field_declaration] = sym_field_declaration,
  [sym__field_identifier] = sym__field_identifier,
  [sym_ordered_field_declaration_list] = sym_ordered_field_declaration_list,
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
  [aux_sym_enum_variant_list_repeat1] = aux_sym_enum_variant_list_repeat1,
  [aux_sym_enum_variant_list_repeat2] = aux_sym_enum_variant_list_repeat2,
  [aux_sym_field_declaration_list_repeat1] = aux_sym_field_declaration_list_repeat1,
  [aux_sym_field_declaration_list_repeat2] = aux_sym_field_declaration_list_repeat2,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
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
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_enum_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_variant_list] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration_list] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__field_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_ordered_field_declaration_list] = {
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
  [aux_sym_enum_variant_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_variant_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_declaration_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_declaration_list_repeat2] = {
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
  [alias_sym_field_identifier] = {
    .visible = true,
    .named = true,
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
  field_type_parameters = 16,
  field_value = 17,
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
  [field_type_parameters] = "type_parameters",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 3},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 1},
  [13] = {.index = 18, .length = 3},
  [14] = {.index = 21, .length = 3},
  [15] = {.index = 24, .length = 3},
  [16] = {.index = 27, .length = 3},
  [17] = {.index = 30, .length = 2},
  [18] = {.index = 32, .length = 2},
  [19] = {.index = 34, .length = 2},
  [20] = {.index = 36, .length = 2},
  [21] = {.index = 38, .length = 1},
  [22] = {.index = 39, .length = 3},
  [24] = {.index = 42, .length = 4},
  [25] = {.index = 46, .length = 3},
  [26] = {.index = 49, .length = 2},
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
    {field_body, 2},
    {field_name, 1},
  [8] =
    {field_condition, 1},
    {field_consequence, 2},
  [10] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [13] =
    {field_pattern, 1},
    {field_type, 3},
  [15] =
    {field_pattern, 1},
    {field_value, 3},
  [17] =
    {field_name, 0},
  [18] =
    {field_body, 3},
    {field_name, 1},
    {field_type_parameters, 2},
  [21] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [24] =
    {field_alternative, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [27] =
    {field_body, 4},
    {field_pattern, 1},
    {field_value, 3},
  [30] =
    {field_pattern, 2},
    {field_type, 4},
  [32] =
    {field_pattern, 2},
    {field_value, 4},
  [34] =
    {field_body, 1},
    {field_name, 0},
  [36] =
    {field_pattern, 0},
    {field_type, 2},
  [38] =
    {field_element, 1},
  [39] =
    {field_pattern, 1},
    {field_type, 3},
    {field_value, 5},
  [42] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [46] =
    {field_pattern, 2},
    {field_type, 4},
    {field_value, 6},
  [49] =
    {field_name, 0},
    {field_type, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_identifier,
  },
  [6] = {
    [1] = alias_sym_type_identifier,
  },
  [9] = {
    [0] = alias_sym_type_identifier,
  },
  [13] = {
    [1] = alias_sym_type_identifier,
  },
  [23] = {
    [0] = alias_sym_field_identifier,
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
      if (eof) ADVANCE(53);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(108);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(108);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(103);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(90);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(90);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(21);
      if (lookahead == '6') ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(90);
      END_STATE();
    case 21:
      if (lookahead == '8') ADVANCE(90);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(105);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(47);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(47);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(48);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 35:
      if (lookahead == 'z') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == '{') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == '{') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == '}') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '}') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(96);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(97);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 51:
      if (eof) ADVANCE(53);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(108);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '>') ADVANCE(105);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(56);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(106);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '2') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '3') ADVANCE(91);
      if (lookahead == '6') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '4') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(11);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(108);
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
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == '6') ADVANCE(26);
      if (lookahead == '8') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '3') ADVANCE(36);
      if (lookahead == '6') ADVANCE(37);
      if (lookahead == '8') ADVANCE(38);
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(53);
      if (lookahead == '6') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == '4') ADVANCE(56);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(62);
      if (lookahead == '6') ADVANCE(63);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == '4') ADVANCE(65);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == '8') ADVANCE(77);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 57:
      if (lookahead == 'z') ADVANCE(78);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 62:
      if (lookahead == '8') ADVANCE(82);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 66:
      if (lookahead == 'z') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_c_char);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_mutable_specifier);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 52, .external_lex_state = 2},
  [2] = {.lex_state = 6, .external_lex_state = 2},
  [3] = {.lex_state = 6, .external_lex_state = 2},
  [4] = {.lex_state = 6, .external_lex_state = 2},
  [5] = {.lex_state = 6, .external_lex_state = 2},
  [6] = {.lex_state = 6, .external_lex_state = 2},
  [7] = {.lex_state = 6, .external_lex_state = 2},
  [8] = {.lex_state = 6, .external_lex_state = 2},
  [9] = {.lex_state = 6, .external_lex_state = 2},
  [10] = {.lex_state = 6, .external_lex_state = 2},
  [11] = {.lex_state = 6, .external_lex_state = 2},
  [12] = {.lex_state = 6, .external_lex_state = 2},
  [13] = {.lex_state = 6, .external_lex_state = 2},
  [14] = {.lex_state = 6, .external_lex_state = 2},
  [15] = {.lex_state = 6, .external_lex_state = 2},
  [16] = {.lex_state = 6, .external_lex_state = 2},
  [17] = {.lex_state = 6, .external_lex_state = 2},
  [18] = {.lex_state = 6, .external_lex_state = 2},
  [19] = {.lex_state = 6, .external_lex_state = 2},
  [20] = {.lex_state = 6, .external_lex_state = 2},
  [21] = {.lex_state = 6, .external_lex_state = 2},
  [22] = {.lex_state = 6, .external_lex_state = 2},
  [23] = {.lex_state = 6, .external_lex_state = 2},
  [24] = {.lex_state = 52, .external_lex_state = 2},
  [25] = {.lex_state = 52, .external_lex_state = 2},
  [26] = {.lex_state = 52, .external_lex_state = 2},
  [27] = {.lex_state = 52, .external_lex_state = 2},
  [28] = {.lex_state = 52, .external_lex_state = 2},
  [29] = {.lex_state = 52, .external_lex_state = 2},
  [30] = {.lex_state = 52, .external_lex_state = 2},
  [31] = {.lex_state = 52, .external_lex_state = 2},
  [32] = {.lex_state = 52, .external_lex_state = 2},
  [33] = {.lex_state = 52, .external_lex_state = 2},
  [34] = {.lex_state = 52, .external_lex_state = 2},
  [35] = {.lex_state = 52, .external_lex_state = 2},
  [36] = {.lex_state = 52, .external_lex_state = 2},
  [37] = {.lex_state = 52, .external_lex_state = 2},
  [38] = {.lex_state = 52, .external_lex_state = 2},
  [39] = {.lex_state = 52, .external_lex_state = 2},
  [40] = {.lex_state = 7, .external_lex_state = 2},
  [41] = {.lex_state = 7, .external_lex_state = 2},
  [42] = {.lex_state = 7, .external_lex_state = 2},
  [43] = {.lex_state = 7, .external_lex_state = 2},
  [44] = {.lex_state = 7, .external_lex_state = 2},
  [45] = {.lex_state = 7, .external_lex_state = 2},
  [46] = {.lex_state = 7, .external_lex_state = 2},
  [47] = {.lex_state = 7, .external_lex_state = 2},
  [48] = {.lex_state = 7, .external_lex_state = 2},
  [49] = {.lex_state = 7, .external_lex_state = 2},
  [50] = {.lex_state = 7, .external_lex_state = 2},
  [51] = {.lex_state = 7, .external_lex_state = 2},
  [52] = {.lex_state = 7, .external_lex_state = 2},
  [53] = {.lex_state = 7, .external_lex_state = 2},
  [54] = {.lex_state = 7, .external_lex_state = 2},
  [55] = {.lex_state = 7, .external_lex_state = 2},
  [56] = {.lex_state = 7, .external_lex_state = 2},
  [57] = {.lex_state = 7, .external_lex_state = 2},
  [58] = {.lex_state = 7, .external_lex_state = 2},
  [59] = {.lex_state = 7, .external_lex_state = 2},
  [60] = {.lex_state = 7, .external_lex_state = 2},
  [61] = {.lex_state = 7, .external_lex_state = 2},
  [62] = {.lex_state = 7, .external_lex_state = 2},
  [63] = {.lex_state = 7, .external_lex_state = 2},
  [64] = {.lex_state = 7, .external_lex_state = 2},
  [65] = {.lex_state = 7, .external_lex_state = 2},
  [66] = {.lex_state = 7, .external_lex_state = 2},
  [67] = {.lex_state = 7, .external_lex_state = 2},
  [68] = {.lex_state = 6, .external_lex_state = 2},
  [69] = {.lex_state = 7, .external_lex_state = 2},
  [70] = {.lex_state = 6, .external_lex_state = 2},
  [71] = {.lex_state = 6, .external_lex_state = 2},
  [72] = {.lex_state = 6, .external_lex_state = 2},
  [73] = {.lex_state = 6, .external_lex_state = 2},
  [74] = {.lex_state = 6, .external_lex_state = 2},
  [75] = {.lex_state = 6, .external_lex_state = 2},
  [76] = {.lex_state = 6, .external_lex_state = 2},
  [77] = {.lex_state = 6, .external_lex_state = 2},
  [78] = {.lex_state = 6, .external_lex_state = 2},
  [79] = {.lex_state = 6, .external_lex_state = 2},
  [80] = {.lex_state = 6, .external_lex_state = 2},
  [81] = {.lex_state = 6, .external_lex_state = 2},
  [82] = {.lex_state = 6, .external_lex_state = 2},
  [83] = {.lex_state = 6, .external_lex_state = 2},
  [84] = {.lex_state = 6, .external_lex_state = 2},
  [85] = {.lex_state = 6, .external_lex_state = 2},
  [86] = {.lex_state = 6, .external_lex_state = 2},
  [87] = {.lex_state = 52, .external_lex_state = 2},
  [88] = {.lex_state = 6, .external_lex_state = 2},
  [89] = {.lex_state = 6, .external_lex_state = 2},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 9, .external_lex_state = 2},
  [113] = {.lex_state = 9, .external_lex_state = 2},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 9, .external_lex_state = 2},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 9, .external_lex_state = 2},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 52, .external_lex_state = 2},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 9, .external_lex_state = 2},
  [156] = {.lex_state = 9, .external_lex_state = 2},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 52, .external_lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 9, .external_lex_state = 2},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 9, .external_lex_state = 2},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 9, .external_lex_state = 2},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 52, .external_lex_state = 2},
  [183] = {.lex_state = 52, .external_lex_state = 2},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 52, .external_lex_state = 2},
  [188] = {.lex_state = 9, .external_lex_state = 2},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 2, .external_lex_state = 2},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 9, .external_lex_state = 2},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 52, .external_lex_state = 2},
  [209] = {.lex_state = 52, .external_lex_state = 2},
  [210] = {.lex_state = 52, .external_lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 52, .external_lex_state = 2},
  [223] = {.lex_state = 52, .external_lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 52, .external_lex_state = 2},
  [227] = {.lex_state = 52, .external_lex_state = 2},
  [228] = {.lex_state = 52, .external_lex_state = 2},
  [229] = {.lex_state = 52, .external_lex_state = 2},
  [230] = {.lex_state = 52, .external_lex_state = 2},
  [231] = {.lex_state = 52, .external_lex_state = 2},
  [232] = {.lex_state = 52, .external_lex_state = 2},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 6, .external_lex_state = 2},
  [236] = {.lex_state = 6, .external_lex_state = 2},
  [237] = {.lex_state = 6, .external_lex_state = 2},
  [238] = {.lex_state = 6, .external_lex_state = 2},
  [239] = {.lex_state = 6, .external_lex_state = 2},
  [240] = {.lex_state = 6, .external_lex_state = 2},
  [241] = {.lex_state = 6, .external_lex_state = 2},
  [242] = {.lex_state = 6, .external_lex_state = 2},
  [243] = {.lex_state = 6, .external_lex_state = 2},
  [244] = {.lex_state = 6, .external_lex_state = 2},
  [245] = {.lex_state = 6, .external_lex_state = 2},
  [246] = {.lex_state = 6, .external_lex_state = 2},
  [247] = {.lex_state = 6, .external_lex_state = 2},
  [248] = {.lex_state = 6, .external_lex_state = 2},
  [249] = {.lex_state = 6, .external_lex_state = 2},
  [250] = {.lex_state = 6, .external_lex_state = 2},
  [251] = {.lex_state = 6, .external_lex_state = 2},
  [252] = {.lex_state = 6, .external_lex_state = 2},
  [253] = {.lex_state = 6, .external_lex_state = 2},
  [254] = {.lex_state = 6, .external_lex_state = 2},
  [255] = {.lex_state = 6, .external_lex_state = 2},
  [256] = {.lex_state = 6, .external_lex_state = 2},
  [257] = {.lex_state = 6, .external_lex_state = 2},
  [258] = {.lex_state = 6, .external_lex_state = 2},
  [259] = {.lex_state = 6, .external_lex_state = 2},
  [260] = {.lex_state = 6, .external_lex_state = 2},
  [261] = {.lex_state = 6, .external_lex_state = 2},
  [262] = {.lex_state = 6, .external_lex_state = 2},
  [263] = {.lex_state = 6, .external_lex_state = 2},
  [264] = {.lex_state = 6, .external_lex_state = 2},
  [265] = {.lex_state = 6, .external_lex_state = 2},
  [266] = {.lex_state = 6, .external_lex_state = 2},
  [267] = {.lex_state = 6, .external_lex_state = 2},
  [268] = {.lex_state = 6, .external_lex_state = 2},
  [269] = {.lex_state = 6, .external_lex_state = 2},
  [270] = {.lex_state = 6, .external_lex_state = 2},
  [271] = {.lex_state = 6, .external_lex_state = 2},
  [272] = {.lex_state = 6, .external_lex_state = 2},
  [273] = {.lex_state = 6, .external_lex_state = 2},
  [274] = {.lex_state = 6, .external_lex_state = 2},
  [275] = {.lex_state = 6, .external_lex_state = 2},
  [276] = {.lex_state = 6, .external_lex_state = 2},
  [277] = {.lex_state = 6, .external_lex_state = 2},
  [278] = {.lex_state = 6, .external_lex_state = 2},
  [279] = {.lex_state = 6, .external_lex_state = 2},
  [280] = {.lex_state = 6, .external_lex_state = 2},
  [281] = {.lex_state = 6, .external_lex_state = 2},
  [282] = {.lex_state = 6, .external_lex_state = 2},
  [283] = {.lex_state = 6, .external_lex_state = 2},
  [284] = {.lex_state = 6, .external_lex_state = 2},
  [285] = {.lex_state = 6, .external_lex_state = 2},
  [286] = {.lex_state = 6, .external_lex_state = 2},
  [287] = {.lex_state = 6, .external_lex_state = 2},
  [288] = {.lex_state = 6, .external_lex_state = 2},
  [289] = {.lex_state = 6, .external_lex_state = 2},
  [290] = {.lex_state = 6, .external_lex_state = 2},
  [291] = {.lex_state = 6, .external_lex_state = 2},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 8},
  [294] = {.lex_state = 8},
  [295] = {.lex_state = 8},
  [296] = {.lex_state = 8},
  [297] = {.lex_state = 8},
  [298] = {.lex_state = 8},
  [299] = {.lex_state = 8},
  [300] = {.lex_state = 8},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 8},
  [303] = {.lex_state = 8},
  [304] = {.lex_state = 8},
  [305] = {.lex_state = 8},
  [306] = {.lex_state = 8},
  [307] = {.lex_state = 1, .external_lex_state = 3},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 8},
  [311] = {.lex_state = 1, .external_lex_state = 3},
  [312] = {.lex_state = 1, .external_lex_state = 3},
  [313] = {.lex_state = 1, .external_lex_state = 3},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 1, .external_lex_state = 3},
  [316] = {.lex_state = 5},
  [317] = {.lex_state = 5},
  [318] = {.lex_state = 8},
  [319] = {.lex_state = 1, .external_lex_state = 3},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 5},
  [322] = {.lex_state = 1, .external_lex_state = 3},
  [323] = {.lex_state = 5},
  [324] = {.lex_state = 1, .external_lex_state = 3},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 1, .external_lex_state = 3},
  [327] = {.lex_state = 5},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 5},
  [330] = {.lex_state = 8},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 13},
  [333] = {.lex_state = 8},
  [334] = {.lex_state = 5},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 52},
  [337] = {.lex_state = 52},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 8},
  [340] = {.lex_state = 52},
  [341] = {.lex_state = 52},
  [342] = {.lex_state = 52},
  [343] = {.lex_state = 5},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 52},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 5},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 8},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 8},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 52},
  [356] = {.lex_state = 52},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 8},
  [359] = {.lex_state = 1},
  [360] = {.lex_state = 8},
  [361] = {.lex_state = 0, .external_lex_state = 2},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 13},
  [364] = {.lex_state = 13},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 1},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 1},
  [370] = {.lex_state = 0, .external_lex_state = 2},
  [371] = {.lex_state = 1},
  [372] = {.lex_state = 1},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0, .external_lex_state = 2},
  [375] = {.lex_state = 1},
  [376] = {.lex_state = 1},
  [377] = {.lex_state = 1},
  [378] = {.lex_state = 1},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 13},
  [381] = {.lex_state = 1},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 8},
  [384] = {.lex_state = 13},
  [385] = {.lex_state = 1},
  [386] = {.lex_state = 8},
  [387] = {.lex_state = 8},
  [388] = {.lex_state = 1},
  [389] = {.lex_state = 8},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 8},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 8},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 8},
  [407] = {.lex_state = 8},
  [408] = {.lex_state = 8},
  [409] = {.lex_state = 8},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
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
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(398),
    [sym__expression] = STATE(107),
    [sym_while_statement] = STATE(371),
    [sym_increment_statement] = STATE(371),
    [sym_decrement_statement] = STATE(371),
    [sym_continue_statement] = STATE(371),
    [sym_for_expression] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_range_expression] = STATE(122),
    [sym__top_level_declaration] = STATE(25),
    [sym_let_declaration] = STATE(371),
    [sym_enum_declaration] = STATE(371),
    [sym_unary_expression] = STATE(122),
    [sym_return_statement] = STATE(371),
    [sym_binary_expression] = STATE(122),
    [sym__literal] = STATE(122),
    [sym_string_literal] = STATE(118),
    [sym_function_declaration] = STATE(25),
    [sym_block] = STATE(371),
    [sym_if_statement] = STATE(371),
    [sym_boolean_literal] = STATE(118),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_PLUS_PLUS] = ACTIONS(9),
    [anon_sym_DASH_DASH] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_DOT_DOT] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(19),
    [anon_sym_enum] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(29),
    [aux_sym_string_literal_token1] = ACTIONS(31),
    [sym_char_literal] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_float_literal] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(128), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [328] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [407] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [486] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [565] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [644] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [723] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [802] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [881] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [960] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [1039] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [1118] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [1197] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [1276] = 16,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(161), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [1352] = 16,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(120), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [1428] = 16,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(153), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [1504] = 16,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(126), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [1580] = 16,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(176), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [1656] = 16,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(129), 1,
      sym__expression,
    STATE(383), 1,
      sym_negative_literal,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(49), 18,
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
  [1732] = 23,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_while,
    ACTIONS(105), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(108), 1,
      anon_sym_DASH_DASH,
    ACTIONS(111), 1,
      anon_sym_continue,
    ACTIONS(114), 1,
      anon_sym_for,
    ACTIONS(117), 1,
      anon_sym_DOT_DOT,
    ACTIONS(120), 1,
      anon_sym_let,
    ACTIONS(123), 1,
      anon_sym_enum,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      anon_sym_DASH,
    ACTIONS(132), 1,
      anon_sym_return,
    ACTIONS(138), 1,
      aux_sym_string_literal_token1,
    ACTIONS(141), 1,
      anon_sym_function,
    ACTIONS(144), 1,
      anon_sym_if,
    STATE(107), 1,
      sym__expression,
    ACTIONS(147), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(135), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(24), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(122), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(371), 9,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [1821] = 23,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_while,
    ACTIONS(9), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(11), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_continue,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(107), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(24), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(122), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(371), 9,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [1910] = 21,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_while,
    ACTIONS(156), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(158), 1,
      anon_sym_DASH_DASH,
    ACTIONS(160), 1,
      anon_sym_continue,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(166), 1,
      anon_sym_let,
    ACTIONS(168), 1,
      anon_sym_enum,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_return,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(182), 1,
      anon_sym_if,
    STATE(55), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(33), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1992] = 21,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_while,
    ACTIONS(156), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(158), 1,
      anon_sym_DASH_DASH,
    ACTIONS(160), 1,
      anon_sym_continue,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(166), 1,
      anon_sym_let,
    ACTIONS(168), 1,
      anon_sym_enum,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_return,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(182), 1,
      anon_sym_if,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(29), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2074] = 21,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_while,
    ACTIONS(156), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(158), 1,
      anon_sym_DASH_DASH,
    ACTIONS(160), 1,
      anon_sym_continue,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(166), 1,
      anon_sym_let,
    ACTIONS(168), 1,
      anon_sym_enum,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_return,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(182), 1,
      anon_sym_if,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(32), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2156] = 21,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_while,
    ACTIONS(196), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(199), 1,
      anon_sym_DASH_DASH,
    ACTIONS(202), 1,
      anon_sym_continue,
    ACTIONS(205), 1,
      anon_sym_for,
    ACTIONS(208), 1,
      anon_sym_DOT_DOT,
    ACTIONS(211), 1,
      anon_sym_let,
    ACTIONS(214), 1,
      anon_sym_enum,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    ACTIONS(222), 1,
      anon_sym_DASH,
    ACTIONS(225), 1,
      anon_sym_return,
    ACTIONS(231), 1,
      aux_sym_string_literal_token1,
    ACTIONS(234), 1,
      anon_sym_if,
    STATE(55), 1,
      sym__expression,
    ACTIONS(237), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(29), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2238] = 21,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_while,
    ACTIONS(156), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(158), 1,
      anon_sym_DASH_DASH,
    ACTIONS(160), 1,
      anon_sym_continue,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(166), 1,
      anon_sym_let,
    ACTIONS(168), 1,
      anon_sym_enum,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_return,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(182), 1,
      anon_sym_if,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(29), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2320] = 21,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_while,
    ACTIONS(156), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(158), 1,
      anon_sym_DASH_DASH,
    ACTIONS(160), 1,
      anon_sym_continue,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(166), 1,
      anon_sym_let,
    ACTIONS(168), 1,
      anon_sym_enum,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_return,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(182), 1,
      anon_sym_if,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(27), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2402] = 21,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_while,
    ACTIONS(156), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(158), 1,
      anon_sym_DASH_DASH,
    ACTIONS(160), 1,
      anon_sym_continue,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(166), 1,
      anon_sym_let,
    ACTIONS(168), 1,
      anon_sym_enum,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_return,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(182), 1,
      anon_sym_if,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(29), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2484] = 21,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_while,
    ACTIONS(156), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(158), 1,
      anon_sym_DASH_DASH,
    ACTIONS(160), 1,
      anon_sym_continue,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(166), 1,
      anon_sym_let,
    ACTIONS(168), 1,
      anon_sym_enum,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_return,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(182), 1,
      anon_sym_if,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(29), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2566] = 21,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_while,
    ACTIONS(156), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(158), 1,
      anon_sym_DASH_DASH,
    ACTIONS(160), 1,
      anon_sym_continue,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(166), 1,
      anon_sym_let,
    ACTIONS(168), 1,
      anon_sym_enum,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_return,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(182), 1,
      anon_sym_if,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(30), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2648] = 21,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_while,
    ACTIONS(156), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(158), 1,
      anon_sym_DASH_DASH,
    ACTIONS(160), 1,
      anon_sym_continue,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(166), 1,
      anon_sym_let,
    ACTIONS(168), 1,
      anon_sym_enum,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_return,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(182), 1,
      anon_sym_if,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(29), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2730] = 21,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_while,
    ACTIONS(156), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(158), 1,
      anon_sym_DASH_DASH,
    ACTIONS(160), 1,
      anon_sym_continue,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(166), 1,
      anon_sym_let,
    ACTIONS(168), 1,
      anon_sym_enum,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_return,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(182), 1,
      anon_sym_if,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(35), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2812] = 2,
    ACTIONS(254), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(256), 23,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [2855] = 2,
    ACTIONS(258), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(260), 23,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [2898] = 2,
    ACTIONS(262), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(264), 23,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [2941] = 7,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(276), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(268), 17,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [2993] = 13,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_AMP,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(290), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(276), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(288), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(278), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3057] = 6,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(276), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(268), 17,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [3107] = 13,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_AMP,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(290), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(276), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(288), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(296), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(294), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3171] = 9,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_AMP,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(292), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(276), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(268), 14,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3227] = 13,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_AMP,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(290), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(276), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(288), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(300), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(298), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3291] = 11,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_AMP,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(292), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(276), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(268), 12,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3351] = 5,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(302), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(304), 20,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [3399] = 13,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_AMP,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(290), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(276), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(288), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(308), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(306), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3463] = 2,
    ACTIONS(310), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(312), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [3505] = 5,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(266), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(268), 20,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [3553] = 2,
    ACTIONS(314), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(316), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [3595] = 13,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_AMP,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(290), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(276), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(288), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(320), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(318), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3659] = 13,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_AMP,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(290), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(276), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(288), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(324), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(322), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3723] = 10,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_CARET,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(292), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(276), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(268), 13,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3781] = 15,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_AMP,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(328), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(330), 1,
      anon_sym_DASH_DASH,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(290), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(276), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(288), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(332), 6,
      sym_float_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(326), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3849] = 3,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(334), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(336), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [3893] = 13,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_AMP,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(290), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(276), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(288), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(338), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3957] = 8,
    ACTIONS(270), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(292), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(276), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(268), 15,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4011] = 2,
    ACTIONS(342), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(344), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4052] = 2,
    ACTIONS(346), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(348), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4093] = 2,
    ACTIONS(350), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(352), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4134] = 2,
    ACTIONS(354), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(356), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4175] = 2,
    ACTIONS(358), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(360), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4216] = 2,
    ACTIONS(362), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(364), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4257] = 2,
    ACTIONS(366), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(368), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4298] = 2,
    ACTIONS(370), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(372), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4339] = 2,
    ACTIONS(374), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(376), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4380] = 13,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(381), 1,
      anon_sym_for,
    ACTIONS(383), 1,
      anon_sym_DOT_DOT,
    ACTIONS(388), 1,
      sym_mutable_specifier,
    ACTIONS(391), 1,
      anon_sym_DASH,
    ACTIONS(397), 1,
      aux_sym_string_literal_token1,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(397), 1,
      sym__pattern,
    ACTIONS(400), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    ACTIONS(394), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(383), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(385), 18,
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
  [4443] = 2,
    ACTIONS(403), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(405), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4484] = 13,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      sym_mutable_specifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(344), 1,
      sym_parameter,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(396), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(383), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 18,
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
  [4546] = 12,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(413), 1,
      sym_mutable_specifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      sym_parameter,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(396), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(383), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 18,
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
  [4605] = 12,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(413), 1,
      sym_mutable_specifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      sym_parameter,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(396), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(383), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 18,
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
  [4664] = 11,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(413), 1,
      sym_mutable_specifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(373), 1,
      sym_parameter,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(396), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(383), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 18,
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
  [4720] = 10,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(423), 1,
      sym_identifier,
    ACTIONS(427), 1,
      sym_mutable_specifier,
    ACTIONS(429), 1,
      anon_sym_DASH,
    STATE(127), 1,
      sym__pattern,
    STATE(156), 1,
      sym__literal_pattern,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(431), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(117), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(425), 18,
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
  [4773] = 10,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(433), 1,
      sym_identifier,
    ACTIONS(437), 1,
      sym_mutable_specifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(317), 1,
      sym__pattern,
    STATE(321), 1,
      sym__literal_pattern,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(309), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(435), 18,
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
  [4826] = 9,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(389), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(383), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 18,
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
  [4876] = 9,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(406), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(383), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 18,
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
  [4926] = 9,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(409), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(383), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 18,
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
  [4976] = 9,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(383), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 18,
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
  [5026] = 9,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(399), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(383), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 18,
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
  [5076] = 9,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(423), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_DASH,
    STATE(113), 1,
      sym__pattern,
    STATE(156), 1,
      sym__literal_pattern,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(431), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(117), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(425), 18,
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
  [5126] = 9,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(433), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(316), 1,
      sym__pattern,
    STATE(321), 1,
      sym__literal_pattern,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(309), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(435), 18,
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
  [5176] = 9,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(387), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(383), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(49), 18,
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
  [5226] = 2,
    ACTIONS(445), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(443), 23,
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
  [5260] = 2,
    ACTIONS(449), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(447), 23,
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
  [5294] = 2,
    ACTIONS(453), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(451), 23,
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
  [5328] = 12,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    STATE(48), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    ACTIONS(457), 4,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(455), 6,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [5382] = 2,
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
  [5416] = 2,
    ACTIONS(465), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(463), 23,
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
  [5450] = 7,
    ACTIONS(467), 1,
      sym_identifier,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    ACTIONS(473), 1,
      anon_sym_BSLASHn,
    STATE(341), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(403), 1,
      sym__field_identifier,
    STATE(292), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
    ACTIONS(471), 18,
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
  [5490] = 2,
    ACTIONS(264), 1,
      anon_sym_LF,
    ACTIONS(262), 23,
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
  [5519] = 2,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(258), 23,
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
  [5548] = 2,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(254), 23,
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
  [5577] = 8,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(481), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(483), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 12,
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
  [5617] = 2,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(314), 22,
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
  [5645] = 2,
    ACTIONS(262), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(264), 21,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
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
  [5673] = 2,
    ACTIONS(258), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(260), 21,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
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
  [5701] = 5,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym_arguments,
    ACTIONS(266), 19,
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
  [5735] = 7,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(483), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 14,
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
  [5773] = 5,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym_arguments,
    ACTIONS(302), 19,
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
  [5807] = 2,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(310), 22,
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
  [5835] = 11,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      anon_sym_PIPE,
    ACTIONS(489), 1,
      anon_sym_CARET,
    STATE(150), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(481), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(483), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 9,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5881] = 9,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_AMP,
    STATE(150), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(481), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(483), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 11,
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
  [5923] = 10,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_AMP,
    ACTIONS(489), 1,
      anon_sym_CARET,
    STATE(150), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(481), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(483), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 10,
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
  [5967] = 3,
    ACTIONS(336), 1,
      anon_sym_LF,
    STATE(150), 1,
      sym_arguments,
    ACTIONS(334), 21,
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
  [5997] = 2,
    ACTIONS(254), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 21,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
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
  [6025] = 14,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      anon_sym_PIPE,
    ACTIONS(489), 1,
      anon_sym_CARET,
    ACTIONS(491), 1,
      anon_sym_LF,
    ACTIONS(493), 1,
      anon_sym_SEMI,
    ACTIONS(495), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(497), 1,
      anon_sym_DASH_DASH,
    STATE(150), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(481), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(483), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(499), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6077] = 6,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym_arguments,
    ACTIONS(483), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 16,
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
  [6113] = 14,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(206), 1,
      sym_arguments,
    STATE(347), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6164] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(298), 1,
      sym_array_type,
    STATE(365), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [6197] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(298), 1,
      sym_array_type,
    STATE(392), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [6230] = 2,
    ACTIONS(531), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(533), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [6257] = 4,
    ACTIONS(539), 1,
      anon_sym_COLON,
    ACTIONS(541), 1,
      anon_sym_EQ,
    ACTIONS(537), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(535), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6288] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(298), 1,
      sym_array_type,
    STATE(382), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [6321] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(298), 1,
      sym_array_type,
    STATE(411), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [6354] = 2,
    ACTIONS(364), 1,
      anon_sym_LF,
    ACTIONS(362), 21,
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
  [6381] = 2,
    ACTIONS(543), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(545), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [6408] = 2,
    ACTIONS(405), 1,
      anon_sym_LF,
    ACTIONS(403), 21,
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
  [6435] = 5,
    ACTIONS(547), 1,
      sym_identifier,
    ACTIONS(551), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym_array_type,
    STATE(88), 1,
      sym__type,
    ACTIONS(549), 18,
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
  [6468] = 14,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      sym_arguments,
    STATE(335), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6519] = 2,
    ACTIONS(360), 1,
      anon_sym_LF,
    ACTIONS(358), 21,
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
  [6546] = 2,
    ACTIONS(376), 1,
      anon_sym_LF,
    ACTIONS(374), 21,
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
  [6573] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(298), 1,
      sym_array_type,
    STATE(391), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [6606] = 5,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(302), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(304), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [6639] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(298), 1,
      sym_array_type,
    STATE(404), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [6672] = 14,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      sym_arguments,
    STATE(352), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6723] = 4,
    ACTIONS(561), 1,
      anon_sym_COLON,
    ACTIONS(563), 1,
      anon_sym_EQ,
    ACTIONS(559), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(557), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6754] = 14,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      sym_arguments,
    STATE(331), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6805] = 14,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      sym_arguments,
    STATE(357), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6856] = 5,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(266), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(268), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [6889] = 2,
    ACTIONS(372), 1,
      anon_sym_LF,
    ACTIONS(370), 21,
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
  [6916] = 2,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(350), 21,
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
  [6943] = 7,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(266), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(268), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6980] = 5,
    ACTIONS(571), 1,
      sym_identifier,
    ACTIONS(575), 1,
      anon_sym_LBRACK,
    STATE(327), 1,
      sym_array_type,
    STATE(348), 1,
      sym__type,
    ACTIONS(573), 18,
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
  [7013] = 11,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(266), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(268), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7058] = 5,
    ACTIONS(547), 1,
      sym_identifier,
    ACTIONS(551), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym_array_type,
    STATE(89), 1,
      sym__type,
    ACTIONS(549), 18,
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
  [7091] = 2,
    ACTIONS(356), 1,
      anon_sym_LF,
    ACTIONS(354), 21,
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
  [7118] = 2,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(346), 21,
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
  [7145] = 5,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(581), 1,
      anon_sym_LBRACK,
    STATE(173), 1,
      sym_array_type,
    STATE(188), 1,
      sym__type,
    ACTIONS(579), 18,
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
  [7178] = 14,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      sym_arguments,
    STATE(338), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7229] = 9,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(266), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(268), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7270] = 10,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(266), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(268), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7313] = 8,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(266), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(268), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7352] = 6,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(266), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(268), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [7387] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(298), 1,
      sym_array_type,
    STATE(353), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [7420] = 3,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(334), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [7449] = 14,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      sym_arguments,
    STATE(354), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7500] = 4,
    ACTIONS(595), 1,
      anon_sym_else,
    STATE(230), 1,
      sym_else_clause,
    ACTIONS(593), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(591), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7531] = 5,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(581), 1,
      anon_sym_LBRACK,
    STATE(173), 1,
      sym_array_type,
    STATE(201), 1,
      sym__type,
    ACTIONS(579), 18,
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
  [7564] = 2,
    ACTIONS(368), 1,
      anon_sym_LF,
    ACTIONS(366), 21,
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
  [7591] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(298), 1,
      sym_array_type,
    STATE(367), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [7624] = 2,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(342), 21,
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
  [7651] = 14,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      sym_arguments,
    STATE(345), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7702] = 5,
    ACTIONS(571), 1,
      sym_identifier,
    ACTIONS(575), 1,
      anon_sym_LBRACK,
    STATE(327), 1,
      sym_array_type,
    STATE(343), 1,
      sym__type,
    ACTIONS(573), 18,
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
  [7735] = 2,
    ACTIONS(599), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(601), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [7762] = 2,
    ACTIONS(603), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(605), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [7789] = 3,
    ACTIONS(545), 1,
      anon_sym_COLON,
    ACTIONS(403), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(405), 18,
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
  [7817] = 2,
    ACTIONS(310), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [7843] = 2,
    ACTIONS(607), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(609), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7869] = 12,
    ACTIONS(318), 1,
      anon_sym_SEMI,
    ACTIONS(320), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_DOT_DOT,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym_AMP,
    ACTIONS(619), 1,
      anon_sym_PIPE,
    ACTIONS(621), 1,
      anon_sym_CARET,
    STATE(225), 1,
      sym_arguments,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(625), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(627), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7915] = 12,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(629), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7961] = 3,
    ACTIONS(336), 1,
      anon_sym_LF,
    STATE(225), 1,
      sym_arguments,
    ACTIONS(334), 19,
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
  [7989] = 6,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_DOT_DOT,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    STATE(225), 1,
      sym_arguments,
    ACTIONS(627), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 14,
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
  [8023] = 8,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_DOT_DOT,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    STATE(225), 1,
      sym_arguments,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(625), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(627), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 10,
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
  [8061] = 12,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_DOT_DOT,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym_AMP,
    ACTIONS(619), 1,
      anon_sym_PIPE,
    ACTIONS(621), 1,
      anon_sym_CARET,
    STATE(225), 1,
      sym_arguments,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(625), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(627), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8107] = 10,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_DOT_DOT,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym_AMP,
    ACTIONS(621), 1,
      anon_sym_CARET,
    STATE(225), 1,
      sym_arguments,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(625), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(627), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 8,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8149] = 9,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_DOT_DOT,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym_AMP,
    STATE(225), 1,
      sym_arguments,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(625), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(627), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 9,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8189] = 11,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_DOT_DOT,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym_AMP,
    ACTIONS(619), 1,
      anon_sym_PIPE,
    ACTIONS(621), 1,
      anon_sym_CARET,
    STATE(225), 1,
      sym_arguments,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(625), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(627), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 7,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8233] = 2,
    ACTIONS(370), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(372), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [8259] = 12,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(340), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_DOT_DOT,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym_AMP,
    ACTIONS(619), 1,
      anon_sym_PIPE,
    ACTIONS(621), 1,
      anon_sym_CARET,
    STATE(225), 1,
      sym_arguments,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(625), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(627), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8305] = 7,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_DOT_DOT,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    STATE(225), 1,
      sym_arguments,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(627), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(266), 12,
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
  [8341] = 5,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_DOT_DOT,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    STATE(225), 1,
      sym_arguments,
    ACTIONS(266), 17,
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
  [8373] = 2,
    ACTIONS(445), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(443), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8399] = 13,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    ACTIONS(631), 1,
      anon_sym_LBRACE,
    STATE(200), 1,
      sym_block,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8447] = 2,
    ACTIONS(449), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(447), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8473] = 12,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(633), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8519] = 2,
    ACTIONS(453), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(451), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8545] = 2,
    ACTIONS(403), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(405), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [8571] = 13,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(148), 1,
      sym_block,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8619] = 2,
    ACTIONS(350), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(352), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [8645] = 13,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    ACTIONS(635), 1,
      anon_sym_LBRACE,
    STATE(206), 1,
      sym_arguments,
    STATE(216), 1,
      sym_block,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8693] = 2,
    ACTIONS(316), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(314), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8719] = 2,
    ACTIONS(97), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(637), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8745] = 2,
    ACTIONS(374), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [8771] = 13,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(206), 1,
      sym_arguments,
    STATE(308), 1,
      sym_block,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8819] = 12,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_DOT_DOT,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym_AMP,
    ACTIONS(619), 1,
      anon_sym_PIPE,
    ACTIONS(621), 1,
      anon_sym_CARET,
    STATE(225), 1,
      sym_arguments,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(625), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(627), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8865] = 2,
    ACTIONS(312), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(310), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8891] = 3,
    ACTIONS(643), 1,
      anon_sym_EQ,
    ACTIONS(641), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(639), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8919] = 3,
    ACTIONS(605), 1,
      anon_sym_COLON,
    ACTIONS(374), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 18,
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
  [8947] = 13,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(63), 1,
      sym_block,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8995] = 13,
    ACTIONS(455), 1,
      anon_sym_SEMI,
    ACTIONS(457), 1,
      anon_sym_LF,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(649), 1,
      anon_sym_DOT_DOT,
    ACTIONS(651), 1,
      anon_sym_DASH,
    ACTIONS(655), 1,
      aux_sym_string_literal_token1,
    ACTIONS(659), 1,
      sym_float_literal,
    STATE(186), 1,
      sym__expression,
    ACTIONS(653), 2,
      sym_integer_literal,
      sym_char_literal,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(234), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9043] = 13,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(206), 1,
      sym_arguments,
    STATE(209), 1,
      sym_block,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9091] = 13,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(121), 1,
      sym_block,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9139] = 12,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    ACTIONS(324), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_DOT_DOT,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym_AMP,
    ACTIONS(619), 1,
      anon_sym_PIPE,
    ACTIONS(621), 1,
      anon_sym_CARET,
    STATE(225), 1,
      sym_arguments,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(625), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(627), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9185] = 12,
    ACTIONS(278), 1,
      anon_sym_SEMI,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_DOT_DOT,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym_AMP,
    ACTIONS(619), 1,
      anon_sym_PIPE,
    ACTIONS(621), 1,
      anon_sym_CARET,
    STATE(225), 1,
      sym_arguments,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(625), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(627), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9231] = 5,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_DOT_DOT,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    STATE(225), 1,
      sym_arguments,
    ACTIONS(302), 17,
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
  [9263] = 2,
    ACTIONS(342), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(344), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [9289] = 13,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_DOT_DOT,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(515), 1,
      anon_sym_CARET,
    STATE(206), 1,
      sym_arguments,
    STATE(376), 1,
      sym_block,
    ACTIONS(509), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(521), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(517), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9337] = 2,
    ACTIONS(362), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(364), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [9363] = 2,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [9389] = 3,
    ACTIONS(665), 1,
      anon_sym_EQ,
    ACTIONS(663), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(661), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9417] = 2,
    ACTIONS(314), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(316), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [9443] = 2,
    ACTIONS(346), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(348), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [9469] = 12,
    ACTIONS(294), 1,
      anon_sym_SEMI,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_DOT_DOT,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym_AMP,
    ACTIONS(619), 1,
      anon_sym_PIPE,
    ACTIONS(621), 1,
      anon_sym_CARET,
    STATE(225), 1,
      sym_arguments,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(625), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(627), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9515] = 2,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [9541] = 2,
    ACTIONS(366), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(368), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [9567] = 3,
    ACTIONS(601), 1,
      anon_sym_COLON,
    ACTIONS(403), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(405), 18,
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
  [9595] = 2,
    ACTIONS(667), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(669), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9621] = 2,
    ACTIONS(673), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(671), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9646] = 2,
    ACTIONS(677), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(675), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9671] = 2,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(314), 19,
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
  [9696] = 2,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(310), 19,
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
  [9721] = 2,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(346), 19,
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
  [9746] = 2,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(342), 19,
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
  [9771] = 2,
    ACTIONS(356), 1,
      anon_sym_LF,
    ACTIONS(354), 19,
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
  [9796] = 2,
    ACTIONS(360), 1,
      anon_sym_LF,
    ACTIONS(358), 19,
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
  [9821] = 2,
    ACTIONS(364), 1,
      anon_sym_LF,
    ACTIONS(362), 19,
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
  [9846] = 2,
    ACTIONS(372), 1,
      anon_sym_LF,
    ACTIONS(370), 19,
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
  [9871] = 2,
    ACTIONS(264), 1,
      anon_sym_LF,
    ACTIONS(262), 19,
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
  [9896] = 2,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(254), 19,
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
  [9921] = 2,
    ACTIONS(405), 1,
      anon_sym_LF,
    ACTIONS(403), 19,
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
  [9946] = 2,
    ACTIONS(681), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(679), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9971] = 2,
    ACTIONS(685), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(683), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9996] = 2,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(350), 19,
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
  [10021] = 2,
    ACTIONS(368), 1,
      anon_sym_LF,
    ACTIONS(366), 19,
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
  [10046] = 2,
    ACTIONS(689), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(687), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10071] = 2,
    ACTIONS(280), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(278), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10096] = 2,
    ACTIONS(324), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(322), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10121] = 2,
    ACTIONS(693), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(691), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10146] = 2,
    ACTIONS(697), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(695), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10171] = 2,
    ACTIONS(701), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(699), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10196] = 2,
    ACTIONS(705), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(703), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10221] = 2,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(258), 19,
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
  [10246] = 2,
    ACTIONS(376), 1,
      anon_sym_LF,
    ACTIONS(374), 19,
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
  [10271] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(707), 1,
      anon_sym_DASH,
    STATE(100), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(122), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10311] = 10,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(709), 1,
      anon_sym_DASH,
    STATE(54), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10351] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(707), 1,
      anon_sym_DASH,
    STATE(105), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(122), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10391] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(124), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10431] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(707), 1,
      anon_sym_DASH,
    STATE(108), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(122), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10471] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(707), 1,
      anon_sym_DASH,
    STATE(94), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(122), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10511] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(707), 1,
      anon_sym_DASH,
    STATE(104), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(122), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10551] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(146), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10591] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(144), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10631] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(143), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10671] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(142), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10711] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(141), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10751] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(135), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10791] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(133), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10831] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(130), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10871] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(707), 1,
      anon_sym_DASH,
    STATE(103), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(122), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10911] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(707), 1,
      anon_sym_DASH,
    STATE(102), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(122), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10951] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(707), 1,
      anon_sym_DASH,
    STATE(99), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(122), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10991] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(707), 1,
      anon_sym_DASH,
    STATE(98), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(122), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11031] = 10,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(709), 1,
      anon_sym_DASH,
    STATE(45), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11071] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(193), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11111] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(717), 1,
      anon_sym_DOT_DOT,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_string_literal_token1,
    STATE(196), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(234), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11151] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(717), 1,
      anon_sym_DOT_DOT,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_string_literal_token1,
    STATE(162), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(234), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11191] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(717), 1,
      anon_sym_DOT_DOT,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_string_literal_token1,
    STATE(163), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(234), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11231] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(717), 1,
      anon_sym_DOT_DOT,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_string_literal_token1,
    STATE(164), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(234), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11271] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(717), 1,
      anon_sym_DOT_DOT,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_string_literal_token1,
    STATE(166), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(234), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11311] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(717), 1,
      anon_sym_DOT_DOT,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_string_literal_token1,
    STATE(167), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(234), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11351] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(717), 1,
      anon_sym_DOT_DOT,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_string_literal_token1,
    STATE(168), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(234), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11391] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(717), 1,
      anon_sym_DOT_DOT,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_string_literal_token1,
    STATE(171), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(234), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11431] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(717), 1,
      anon_sym_DOT_DOT,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_string_literal_token1,
    STATE(172), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(234), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11471] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(190), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11511] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(185), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11551] = 10,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(709), 1,
      anon_sym_DASH,
    STATE(57), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11591] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(181), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11631] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(717), 1,
      anon_sym_DOT_DOT,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_string_literal_token1,
    STATE(160), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(234), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11671] = 10,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(709), 1,
      anon_sym_DASH,
    STATE(43), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11711] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(174), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11751] = 10,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(709), 1,
      anon_sym_DASH,
    STATE(52), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11791] = 11,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    ACTIONS(715), 1,
      sym_char_literal,
    STATE(124), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(723), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11833] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(179), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11873] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(192), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11913] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(717), 1,
      anon_sym_DOT_DOT,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_string_literal_token1,
    STATE(204), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(234), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11953] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(717), 1,
      anon_sym_DOT_DOT,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_string_literal_token1,
    STATE(165), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(234), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11993] = 10,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(709), 1,
      anon_sym_DASH,
    STATE(53), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12033] = 10,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(709), 1,
      anon_sym_DASH,
    STATE(41), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12073] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(717), 1,
      anon_sym_DOT_DOT,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_string_literal_token1,
    STATE(195), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(234), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12113] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(717), 1,
      anon_sym_DOT_DOT,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_string_literal_token1,
    STATE(194), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(234), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12153] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(717), 1,
      anon_sym_DOT_DOT,
    ACTIONS(719), 1,
      anon_sym_DASH,
    ACTIONS(721), 1,
      aux_sym_string_literal_token1,
    STATE(170), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(234), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12193] = 10,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(709), 1,
      anon_sym_DASH,
    STATE(50), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12233] = 10,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(709), 1,
      anon_sym_DASH,
    STATE(40), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12273] = 10,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(709), 1,
      anon_sym_DASH,
    STATE(46), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12313] = 10,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(709), 1,
      anon_sym_DASH,
    STATE(44), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12353] = 10,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(709), 1,
      anon_sym_DASH,
    STATE(47), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12393] = 10,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(709), 1,
      anon_sym_DASH,
    STATE(58), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12433] = 10,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(709), 1,
      anon_sym_DASH,
    STATE(42), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12473] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_DASH,
    STATE(198), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(715), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12513] = 10,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_for,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(709), 1,
      anon_sym_DASH,
    STATE(56), 1,
      sym__expression,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(178), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(67), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12553] = 6,
    ACTIONS(473), 1,
      anon_sym_BSLASHn,
    ACTIONS(725), 1,
      sym_identifier,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    STATE(337), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(403), 1,
      sym__field_identifier,
    STATE(297), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [12573] = 1,
    ACTIONS(453), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [12582] = 5,
    ACTIONS(729), 1,
      sym_identifier,
    ACTIONS(731), 1,
      anon_sym_BSLASHn,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(296), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [12599] = 4,
    ACTIONS(725), 1,
      sym_identifier,
    STATE(403), 1,
      sym__field_identifier,
    ACTIONS(735), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(300), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [12614] = 5,
    ACTIONS(729), 1,
      sym_identifier,
    ACTIONS(731), 1,
      anon_sym_BSLASHn,
    ACTIONS(737), 1,
      anon_sym_RBRACE,
    STATE(342), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(304), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [12631] = 4,
    ACTIONS(739), 1,
      sym_identifier,
    STATE(403), 1,
      sym__field_identifier,
    ACTIONS(742), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(297), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [12646] = 1,
    ACTIONS(445), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [12655] = 1,
    ACTIONS(449), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [12664] = 4,
    ACTIONS(725), 1,
      sym_identifier,
    STATE(403), 1,
      sym__field_identifier,
    ACTIONS(744), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(297), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [12679] = 5,
    ACTIONS(729), 1,
      sym_identifier,
    ACTIONS(731), 1,
      anon_sym_BSLASHn,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
    STATE(346), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(303), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [12696] = 3,
    ACTIONS(750), 1,
      anon_sym_LPAREN,
    STATE(333), 2,
      sym_field_declaration_list,
      sym_ordered_field_declaration_list,
    ACTIONS(748), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [12709] = 5,
    ACTIONS(729), 1,
      sym_identifier,
    ACTIONS(731), 1,
      anon_sym_BSLASHn,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(304), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [12726] = 3,
    ACTIONS(754), 1,
      sym_identifier,
    ACTIONS(757), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(304), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [12738] = 3,
    ACTIONS(729), 1,
      sym_identifier,
    ACTIONS(759), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(304), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [12750] = 3,
    ACTIONS(729), 1,
      sym_identifier,
    ACTIONS(761), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(305), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [12762] = 3,
    ACTIONS(763), 1,
      anon_sym_DQUOTE,
    STATE(322), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(765), 2,
      sym__string_content,
      sym_escape_sequence,
  [12773] = 4,
    ACTIONS(591), 1,
      anon_sym_SEMI,
    ACTIONS(593), 1,
      anon_sym_LF,
    ACTIONS(767), 1,
      anon_sym_else,
    STATE(359), 1,
      sym_else_clause,
  [12786] = 2,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(543), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [12795] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(769), 1,
      anon_sym_if,
    STATE(369), 2,
      sym_block,
      sym_if_statement,
  [12806] = 3,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    STATE(322), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(765), 2,
      sym__string_content,
      sym_escape_sequence,
  [12817] = 3,
    ACTIONS(773), 1,
      anon_sym_DQUOTE,
    STATE(307), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(775), 2,
      sym__string_content,
      sym_escape_sequence,
  [12828] = 3,
    ACTIONS(777), 1,
      anon_sym_DQUOTE,
    STATE(319), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(779), 2,
      sym__string_content,
      sym_escape_sequence,
  [12839] = 4,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_LBRACE,
    STATE(368), 1,
      sym_parameters,
    STATE(385), 1,
      sym_enum_variant_list,
  [12852] = 3,
    ACTIONS(785), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(787), 2,
      sym__string_content,
      sym_escape_sequence,
  [12863] = 4,
    ACTIONS(535), 1,
      anon_sym_SEMI,
    ACTIONS(537), 1,
      anon_sym_LF,
    ACTIONS(789), 1,
      anon_sym_COLON,
    ACTIONS(791), 1,
      anon_sym_EQ,
  [12876] = 4,
    ACTIONS(557), 1,
      anon_sym_SEMI,
    ACTIONS(559), 1,
      anon_sym_LF,
    ACTIONS(793), 1,
      anon_sym_COLON,
    ACTIONS(795), 1,
      anon_sym_EQ,
  [12889] = 3,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(797), 1,
      anon_sym_if,
    STATE(232), 2,
      sym_block,
      sym_if_statement,
  [12900] = 3,
    ACTIONS(799), 1,
      anon_sym_DQUOTE,
    STATE(322), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(765), 2,
      sym__string_content,
      sym_escape_sequence,
  [12911] = 2,
    ACTIONS(601), 1,
      anon_sym_LF,
    ACTIONS(599), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [12920] = 2,
    ACTIONS(605), 1,
      anon_sym_LF,
    ACTIONS(603), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [12929] = 3,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    STATE(322), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(803), 2,
      sym__string_content,
      sym_escape_sequence,
  [12940] = 2,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(531), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [12949] = 3,
    ACTIONS(806), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(808), 2,
      sym__string_content,
      sym_escape_sequence,
  [12960] = 4,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    STATE(223), 1,
      sym_enum_variant_list,
    STATE(362), 1,
      sym_parameters,
  [12973] = 3,
    ACTIONS(812), 1,
      anon_sym_DQUOTE,
    STATE(322), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(765), 2,
      sym__string_content,
      sym_escape_sequence,
  [12984] = 2,
    ACTIONS(445), 1,
      anon_sym_LF,
    ACTIONS(443), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [12992] = 3,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      aux_sym_parameters_repeat1,
  [13002] = 2,
    ACTIONS(453), 1,
      anon_sym_LF,
    ACTIONS(451), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [13010] = 1,
    ACTIONS(819), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13016] = 3,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_arguments_repeat2,
  [13026] = 3,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
    ACTIONS(823), 1,
      anon_sym_DASH_GT,
    STATE(208), 1,
      sym_block,
  [13036] = 1,
    ACTIONS(825), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13042] = 2,
    ACTIONS(449), 1,
      anon_sym_LF,
    ACTIONS(447), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [13050] = 3,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_arguments_repeat2,
  [13060] = 3,
    ACTIONS(731), 1,
      anon_sym_BSLASHn,
    ACTIONS(737), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_enum_variant_list_repeat2,
  [13070] = 3,
    ACTIONS(473), 1,
      anon_sym_BSLASHn,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      aux_sym_field_declaration_list_repeat2,
  [13080] = 3,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_arguments_repeat2,
  [13090] = 1,
    ACTIONS(831), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13096] = 3,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    ACTIONS(833), 1,
      anon_sym_BSLASHn,
    STATE(340), 1,
      aux_sym_field_declaration_list_repeat2,
  [13106] = 3,
    ACTIONS(473), 1,
      anon_sym_BSLASHn,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      aux_sym_field_declaration_list_repeat2,
  [13116] = 3,
    ACTIONS(731), 1,
      anon_sym_BSLASHn,
    ACTIONS(836), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_enum_variant_list_repeat2,
  [13126] = 3,
    ACTIONS(639), 1,
      anon_sym_SEMI,
    ACTIONS(641), 1,
      anon_sym_LF,
    ACTIONS(838), 1,
      anon_sym_EQ,
  [13136] = 3,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      aux_sym_parameters_repeat1,
  [13146] = 3,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_arguments_repeat2,
  [13156] = 3,
    ACTIONS(731), 1,
      anon_sym_BSLASHn,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_enum_variant_list_repeat2,
  [13166] = 3,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_arguments_repeat2,
  [13176] = 3,
    ACTIONS(661), 1,
      anon_sym_SEMI,
    ACTIONS(663), 1,
      anon_sym_LF,
    ACTIONS(846), 1,
      anon_sym_EQ,
  [13186] = 3,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_arguments_repeat2,
  [13196] = 3,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_parameters_repeat1,
  [13206] = 1,
    ACTIONS(853), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13212] = 3,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_arguments_repeat2,
  [13222] = 1,
    ACTIONS(857), 3,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
      sym_identifier,
  [13228] = 3,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_arguments_repeat2,
  [13238] = 3,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
    ACTIONS(859), 1,
      anon_sym_BSLASHn,
    STATE(355), 1,
      aux_sym_enum_variant_list_repeat2,
  [13248] = 3,
    ACTIONS(731), 1,
      anon_sym_BSLASHn,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_enum_variant_list_repeat2,
  [13258] = 3,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(864), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_arguments_repeat2,
  [13268] = 1,
    ACTIONS(866), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13274] = 2,
    ACTIONS(695), 1,
      anon_sym_SEMI,
    ACTIONS(697), 1,
      anon_sym_LF,
  [13281] = 1,
    ACTIONS(601), 2,
      anon_sym_in,
      anon_sym_COLON,
  [13286] = 1,
    ACTIONS(868), 2,
      sym_float_literal,
      sym_integer_literal,
  [13291] = 2,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    STATE(229), 1,
      sym_enum_variant_list,
  [13298] = 1,
    ACTIONS(870), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [13303] = 1,
    ACTIONS(872), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [13308] = 1,
    ACTIONS(461), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13313] = 2,
    ACTIONS(679), 1,
      anon_sym_SEMI,
    ACTIONS(681), 1,
      anon_sym_LF,
  [13320] = 1,
    ACTIONS(465), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13325] = 2,
    ACTIONS(783), 1,
      anon_sym_LBRACE,
    STATE(381), 1,
      sym_enum_variant_list,
  [13332] = 2,
    ACTIONS(703), 1,
      anon_sym_SEMI,
    ACTIONS(705), 1,
      anon_sym_LF,
  [13339] = 1,
    ACTIONS(874), 2,
      sym_float_literal,
      sym_integer_literal,
  [13344] = 2,
    ACTIONS(491), 1,
      anon_sym_LF,
    ACTIONS(493), 1,
      anon_sym_SEMI,
  [13351] = 2,
    ACTIONS(687), 1,
      anon_sym_SEMI,
    ACTIONS(689), 1,
      anon_sym_LF,
  [13358] = 1,
    ACTIONS(817), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13363] = 1,
    ACTIONS(876), 2,
      sym_float_literal,
      sym_integer_literal,
  [13368] = 2,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    ACTIONS(324), 1,
      anon_sym_LF,
  [13375] = 2,
    ACTIONS(671), 1,
      anon_sym_SEMI,
    ACTIONS(673), 1,
      anon_sym_LF,
  [13382] = 2,
    ACTIONS(278), 1,
      anon_sym_SEMI,
    ACTIONS(280), 1,
      anon_sym_LF,
  [13389] = 2,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    ACTIONS(677), 1,
      anon_sym_LF,
  [13396] = 2,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    STATE(332), 1,
      sym_parameters,
  [13403] = 1,
    ACTIONS(878), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [13408] = 2,
    ACTIONS(691), 1,
      anon_sym_SEMI,
    ACTIONS(693), 1,
      anon_sym_LF,
  [13415] = 2,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym_block,
  [13422] = 1,
    ACTIONS(545), 2,
      anon_sym_in,
      anon_sym_COLON,
  [13427] = 1,
    ACTIONS(880), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [13432] = 2,
    ACTIONS(683), 1,
      anon_sym_SEMI,
    ACTIONS(685), 1,
      anon_sym_LF,
  [13439] = 1,
    ACTIONS(533), 2,
      anon_sym_in,
      anon_sym_COLON,
  [13444] = 1,
    ACTIONS(605), 2,
      anon_sym_in,
      anon_sym_COLON,
  [13449] = 2,
    ACTIONS(699), 1,
      anon_sym_SEMI,
    ACTIONS(701), 1,
      anon_sym_LF,
  [13456] = 1,
    ACTIONS(882), 1,
      anon_sym_in,
  [13460] = 1,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
  [13464] = 1,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
  [13468] = 1,
    ACTIONS(886), 1,
      anon_sym_RBRACK,
  [13472] = 1,
    ACTIONS(888), 1,
      sym_identifier,
  [13476] = 1,
    ACTIONS(890), 1,
      anon_sym_COLON,
  [13480] = 1,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
  [13484] = 1,
    ACTIONS(892), 1,
      anon_sym_COLON,
  [13488] = 1,
    ACTIONS(894), 1,
      anon_sym_COLON,
  [13492] = 1,
    ACTIONS(896), 1,
      ts_builtin_sym_end,
  [13496] = 1,
    ACTIONS(898), 1,
      anon_sym_COLON,
  [13500] = 1,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
  [13504] = 1,
    ACTIONS(902), 1,
      anon_sym_COLON,
  [13508] = 1,
    ACTIONS(904), 1,
      sym_identifier,
  [13512] = 1,
    ACTIONS(906), 1,
      anon_sym_COLON,
  [13516] = 1,
    ACTIONS(908), 1,
      anon_sym_RBRACK,
  [13520] = 1,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
  [13524] = 1,
    ACTIONS(910), 1,
      anon_sym_in,
  [13528] = 1,
    ACTIONS(912), 1,
      sym_identifier,
  [13532] = 1,
    ACTIONS(914), 1,
      anon_sym_in,
  [13536] = 1,
    ACTIONS(916), 1,
      anon_sym_in,
  [13540] = 1,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
  [13544] = 1,
    ACTIONS(918), 1,
      anon_sym_RBRACK,
  [13548] = 1,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 246,
  [SMALL_STATE(6)] = 328,
  [SMALL_STATE(7)] = 407,
  [SMALL_STATE(8)] = 486,
  [SMALL_STATE(9)] = 565,
  [SMALL_STATE(10)] = 644,
  [SMALL_STATE(11)] = 723,
  [SMALL_STATE(12)] = 802,
  [SMALL_STATE(13)] = 881,
  [SMALL_STATE(14)] = 960,
  [SMALL_STATE(15)] = 1039,
  [SMALL_STATE(16)] = 1118,
  [SMALL_STATE(17)] = 1197,
  [SMALL_STATE(18)] = 1276,
  [SMALL_STATE(19)] = 1352,
  [SMALL_STATE(20)] = 1428,
  [SMALL_STATE(21)] = 1504,
  [SMALL_STATE(22)] = 1580,
  [SMALL_STATE(23)] = 1656,
  [SMALL_STATE(24)] = 1732,
  [SMALL_STATE(25)] = 1821,
  [SMALL_STATE(26)] = 1910,
  [SMALL_STATE(27)] = 1992,
  [SMALL_STATE(28)] = 2074,
  [SMALL_STATE(29)] = 2156,
  [SMALL_STATE(30)] = 2238,
  [SMALL_STATE(31)] = 2320,
  [SMALL_STATE(32)] = 2402,
  [SMALL_STATE(33)] = 2484,
  [SMALL_STATE(34)] = 2566,
  [SMALL_STATE(35)] = 2648,
  [SMALL_STATE(36)] = 2730,
  [SMALL_STATE(37)] = 2812,
  [SMALL_STATE(38)] = 2855,
  [SMALL_STATE(39)] = 2898,
  [SMALL_STATE(40)] = 2941,
  [SMALL_STATE(41)] = 2993,
  [SMALL_STATE(42)] = 3057,
  [SMALL_STATE(43)] = 3107,
  [SMALL_STATE(44)] = 3171,
  [SMALL_STATE(45)] = 3227,
  [SMALL_STATE(46)] = 3291,
  [SMALL_STATE(47)] = 3351,
  [SMALL_STATE(48)] = 3399,
  [SMALL_STATE(49)] = 3463,
  [SMALL_STATE(50)] = 3505,
  [SMALL_STATE(51)] = 3553,
  [SMALL_STATE(52)] = 3595,
  [SMALL_STATE(53)] = 3659,
  [SMALL_STATE(54)] = 3723,
  [SMALL_STATE(55)] = 3781,
  [SMALL_STATE(56)] = 3849,
  [SMALL_STATE(57)] = 3893,
  [SMALL_STATE(58)] = 3957,
  [SMALL_STATE(59)] = 4011,
  [SMALL_STATE(60)] = 4052,
  [SMALL_STATE(61)] = 4093,
  [SMALL_STATE(62)] = 4134,
  [SMALL_STATE(63)] = 4175,
  [SMALL_STATE(64)] = 4216,
  [SMALL_STATE(65)] = 4257,
  [SMALL_STATE(66)] = 4298,
  [SMALL_STATE(67)] = 4339,
  [SMALL_STATE(68)] = 4380,
  [SMALL_STATE(69)] = 4443,
  [SMALL_STATE(70)] = 4484,
  [SMALL_STATE(71)] = 4546,
  [SMALL_STATE(72)] = 4605,
  [SMALL_STATE(73)] = 4664,
  [SMALL_STATE(74)] = 4720,
  [SMALL_STATE(75)] = 4773,
  [SMALL_STATE(76)] = 4826,
  [SMALL_STATE(77)] = 4876,
  [SMALL_STATE(78)] = 4926,
  [SMALL_STATE(79)] = 4976,
  [SMALL_STATE(80)] = 5026,
  [SMALL_STATE(81)] = 5076,
  [SMALL_STATE(82)] = 5126,
  [SMALL_STATE(83)] = 5176,
  [SMALL_STATE(84)] = 5226,
  [SMALL_STATE(85)] = 5260,
  [SMALL_STATE(86)] = 5294,
  [SMALL_STATE(87)] = 5328,
  [SMALL_STATE(88)] = 5382,
  [SMALL_STATE(89)] = 5416,
  [SMALL_STATE(90)] = 5450,
  [SMALL_STATE(91)] = 5490,
  [SMALL_STATE(92)] = 5519,
  [SMALL_STATE(93)] = 5548,
  [SMALL_STATE(94)] = 5577,
  [SMALL_STATE(95)] = 5617,
  [SMALL_STATE(96)] = 5645,
  [SMALL_STATE(97)] = 5673,
  [SMALL_STATE(98)] = 5701,
  [SMALL_STATE(99)] = 5735,
  [SMALL_STATE(100)] = 5773,
  [SMALL_STATE(101)] = 5807,
  [SMALL_STATE(102)] = 5835,
  [SMALL_STATE(103)] = 5881,
  [SMALL_STATE(104)] = 5923,
  [SMALL_STATE(105)] = 5967,
  [SMALL_STATE(106)] = 5997,
  [SMALL_STATE(107)] = 6025,
  [SMALL_STATE(108)] = 6077,
  [SMALL_STATE(109)] = 6113,
  [SMALL_STATE(110)] = 6164,
  [SMALL_STATE(111)] = 6197,
  [SMALL_STATE(112)] = 6230,
  [SMALL_STATE(113)] = 6257,
  [SMALL_STATE(114)] = 6288,
  [SMALL_STATE(115)] = 6321,
  [SMALL_STATE(116)] = 6354,
  [SMALL_STATE(117)] = 6381,
  [SMALL_STATE(118)] = 6408,
  [SMALL_STATE(119)] = 6435,
  [SMALL_STATE(120)] = 6468,
  [SMALL_STATE(121)] = 6519,
  [SMALL_STATE(122)] = 6546,
  [SMALL_STATE(123)] = 6573,
  [SMALL_STATE(124)] = 6606,
  [SMALL_STATE(125)] = 6639,
  [SMALL_STATE(126)] = 6672,
  [SMALL_STATE(127)] = 6723,
  [SMALL_STATE(128)] = 6754,
  [SMALL_STATE(129)] = 6805,
  [SMALL_STATE(130)] = 6856,
  [SMALL_STATE(131)] = 6889,
  [SMALL_STATE(132)] = 6916,
  [SMALL_STATE(133)] = 6943,
  [SMALL_STATE(134)] = 6980,
  [SMALL_STATE(135)] = 7013,
  [SMALL_STATE(136)] = 7058,
  [SMALL_STATE(137)] = 7091,
  [SMALL_STATE(138)] = 7118,
  [SMALL_STATE(139)] = 7145,
  [SMALL_STATE(140)] = 7178,
  [SMALL_STATE(141)] = 7229,
  [SMALL_STATE(142)] = 7270,
  [SMALL_STATE(143)] = 7313,
  [SMALL_STATE(144)] = 7352,
  [SMALL_STATE(145)] = 7387,
  [SMALL_STATE(146)] = 7420,
  [SMALL_STATE(147)] = 7449,
  [SMALL_STATE(148)] = 7500,
  [SMALL_STATE(149)] = 7531,
  [SMALL_STATE(150)] = 7564,
  [SMALL_STATE(151)] = 7591,
  [SMALL_STATE(152)] = 7624,
  [SMALL_STATE(153)] = 7651,
  [SMALL_STATE(154)] = 7702,
  [SMALL_STATE(155)] = 7735,
  [SMALL_STATE(156)] = 7762,
  [SMALL_STATE(157)] = 7789,
  [SMALL_STATE(158)] = 7817,
  [SMALL_STATE(159)] = 7843,
  [SMALL_STATE(160)] = 7869,
  [SMALL_STATE(161)] = 7915,
  [SMALL_STATE(162)] = 7961,
  [SMALL_STATE(163)] = 7989,
  [SMALL_STATE(164)] = 8023,
  [SMALL_STATE(165)] = 8061,
  [SMALL_STATE(166)] = 8107,
  [SMALL_STATE(167)] = 8149,
  [SMALL_STATE(168)] = 8189,
  [SMALL_STATE(169)] = 8233,
  [SMALL_STATE(170)] = 8259,
  [SMALL_STATE(171)] = 8305,
  [SMALL_STATE(172)] = 8341,
  [SMALL_STATE(173)] = 8373,
  [SMALL_STATE(174)] = 8399,
  [SMALL_STATE(175)] = 8447,
  [SMALL_STATE(176)] = 8473,
  [SMALL_STATE(177)] = 8519,
  [SMALL_STATE(178)] = 8545,
  [SMALL_STATE(179)] = 8571,
  [SMALL_STATE(180)] = 8619,
  [SMALL_STATE(181)] = 8645,
  [SMALL_STATE(182)] = 8693,
  [SMALL_STATE(183)] = 8719,
  [SMALL_STATE(184)] = 8745,
  [SMALL_STATE(185)] = 8771,
  [SMALL_STATE(186)] = 8819,
  [SMALL_STATE(187)] = 8865,
  [SMALL_STATE(188)] = 8891,
  [SMALL_STATE(189)] = 8919,
  [SMALL_STATE(190)] = 8947,
  [SMALL_STATE(191)] = 8995,
  [SMALL_STATE(192)] = 9043,
  [SMALL_STATE(193)] = 9091,
  [SMALL_STATE(194)] = 9139,
  [SMALL_STATE(195)] = 9185,
  [SMALL_STATE(196)] = 9231,
  [SMALL_STATE(197)] = 9263,
  [SMALL_STATE(198)] = 9289,
  [SMALL_STATE(199)] = 9337,
  [SMALL_STATE(200)] = 9363,
  [SMALL_STATE(201)] = 9389,
  [SMALL_STATE(202)] = 9417,
  [SMALL_STATE(203)] = 9443,
  [SMALL_STATE(204)] = 9469,
  [SMALL_STATE(205)] = 9515,
  [SMALL_STATE(206)] = 9541,
  [SMALL_STATE(207)] = 9567,
  [SMALL_STATE(208)] = 9595,
  [SMALL_STATE(209)] = 9621,
  [SMALL_STATE(210)] = 9646,
  [SMALL_STATE(211)] = 9671,
  [SMALL_STATE(212)] = 9696,
  [SMALL_STATE(213)] = 9721,
  [SMALL_STATE(214)] = 9746,
  [SMALL_STATE(215)] = 9771,
  [SMALL_STATE(216)] = 9796,
  [SMALL_STATE(217)] = 9821,
  [SMALL_STATE(218)] = 9846,
  [SMALL_STATE(219)] = 9871,
  [SMALL_STATE(220)] = 9896,
  [SMALL_STATE(221)] = 9921,
  [SMALL_STATE(222)] = 9946,
  [SMALL_STATE(223)] = 9971,
  [SMALL_STATE(224)] = 9996,
  [SMALL_STATE(225)] = 10021,
  [SMALL_STATE(226)] = 10046,
  [SMALL_STATE(227)] = 10071,
  [SMALL_STATE(228)] = 10096,
  [SMALL_STATE(229)] = 10121,
  [SMALL_STATE(230)] = 10146,
  [SMALL_STATE(231)] = 10171,
  [SMALL_STATE(232)] = 10196,
  [SMALL_STATE(233)] = 10221,
  [SMALL_STATE(234)] = 10246,
  [SMALL_STATE(235)] = 10271,
  [SMALL_STATE(236)] = 10311,
  [SMALL_STATE(237)] = 10351,
  [SMALL_STATE(238)] = 10391,
  [SMALL_STATE(239)] = 10431,
  [SMALL_STATE(240)] = 10471,
  [SMALL_STATE(241)] = 10511,
  [SMALL_STATE(242)] = 10551,
  [SMALL_STATE(243)] = 10591,
  [SMALL_STATE(244)] = 10631,
  [SMALL_STATE(245)] = 10671,
  [SMALL_STATE(246)] = 10711,
  [SMALL_STATE(247)] = 10751,
  [SMALL_STATE(248)] = 10791,
  [SMALL_STATE(249)] = 10831,
  [SMALL_STATE(250)] = 10871,
  [SMALL_STATE(251)] = 10911,
  [SMALL_STATE(252)] = 10951,
  [SMALL_STATE(253)] = 10991,
  [SMALL_STATE(254)] = 11031,
  [SMALL_STATE(255)] = 11071,
  [SMALL_STATE(256)] = 11111,
  [SMALL_STATE(257)] = 11151,
  [SMALL_STATE(258)] = 11191,
  [SMALL_STATE(259)] = 11231,
  [SMALL_STATE(260)] = 11271,
  [SMALL_STATE(261)] = 11311,
  [SMALL_STATE(262)] = 11351,
  [SMALL_STATE(263)] = 11391,
  [SMALL_STATE(264)] = 11431,
  [SMALL_STATE(265)] = 11471,
  [SMALL_STATE(266)] = 11511,
  [SMALL_STATE(267)] = 11551,
  [SMALL_STATE(268)] = 11591,
  [SMALL_STATE(269)] = 11631,
  [SMALL_STATE(270)] = 11671,
  [SMALL_STATE(271)] = 11711,
  [SMALL_STATE(272)] = 11751,
  [SMALL_STATE(273)] = 11791,
  [SMALL_STATE(274)] = 11833,
  [SMALL_STATE(275)] = 11873,
  [SMALL_STATE(276)] = 11913,
  [SMALL_STATE(277)] = 11953,
  [SMALL_STATE(278)] = 11993,
  [SMALL_STATE(279)] = 12033,
  [SMALL_STATE(280)] = 12073,
  [SMALL_STATE(281)] = 12113,
  [SMALL_STATE(282)] = 12153,
  [SMALL_STATE(283)] = 12193,
  [SMALL_STATE(284)] = 12233,
  [SMALL_STATE(285)] = 12273,
  [SMALL_STATE(286)] = 12313,
  [SMALL_STATE(287)] = 12353,
  [SMALL_STATE(288)] = 12393,
  [SMALL_STATE(289)] = 12433,
  [SMALL_STATE(290)] = 12473,
  [SMALL_STATE(291)] = 12513,
  [SMALL_STATE(292)] = 12553,
  [SMALL_STATE(293)] = 12573,
  [SMALL_STATE(294)] = 12582,
  [SMALL_STATE(295)] = 12599,
  [SMALL_STATE(296)] = 12614,
  [SMALL_STATE(297)] = 12631,
  [SMALL_STATE(298)] = 12646,
  [SMALL_STATE(299)] = 12655,
  [SMALL_STATE(300)] = 12664,
  [SMALL_STATE(301)] = 12679,
  [SMALL_STATE(302)] = 12696,
  [SMALL_STATE(303)] = 12709,
  [SMALL_STATE(304)] = 12726,
  [SMALL_STATE(305)] = 12738,
  [SMALL_STATE(306)] = 12750,
  [SMALL_STATE(307)] = 12762,
  [SMALL_STATE(308)] = 12773,
  [SMALL_STATE(309)] = 12786,
  [SMALL_STATE(310)] = 12795,
  [SMALL_STATE(311)] = 12806,
  [SMALL_STATE(312)] = 12817,
  [SMALL_STATE(313)] = 12828,
  [SMALL_STATE(314)] = 12839,
  [SMALL_STATE(315)] = 12852,
  [SMALL_STATE(316)] = 12863,
  [SMALL_STATE(317)] = 12876,
  [SMALL_STATE(318)] = 12889,
  [SMALL_STATE(319)] = 12900,
  [SMALL_STATE(320)] = 12911,
  [SMALL_STATE(321)] = 12920,
  [SMALL_STATE(322)] = 12929,
  [SMALL_STATE(323)] = 12940,
  [SMALL_STATE(324)] = 12949,
  [SMALL_STATE(325)] = 12960,
  [SMALL_STATE(326)] = 12973,
  [SMALL_STATE(327)] = 12984,
  [SMALL_STATE(328)] = 12992,
  [SMALL_STATE(329)] = 13002,
  [SMALL_STATE(330)] = 13010,
  [SMALL_STATE(331)] = 13016,
  [SMALL_STATE(332)] = 13026,
  [SMALL_STATE(333)] = 13036,
  [SMALL_STATE(334)] = 13042,
  [SMALL_STATE(335)] = 13050,
  [SMALL_STATE(336)] = 13060,
  [SMALL_STATE(337)] = 13070,
  [SMALL_STATE(338)] = 13080,
  [SMALL_STATE(339)] = 13090,
  [SMALL_STATE(340)] = 13096,
  [SMALL_STATE(341)] = 13106,
  [SMALL_STATE(342)] = 13116,
  [SMALL_STATE(343)] = 13126,
  [SMALL_STATE(344)] = 13136,
  [SMALL_STATE(345)] = 13146,
  [SMALL_STATE(346)] = 13156,
  [SMALL_STATE(347)] = 13166,
  [SMALL_STATE(348)] = 13176,
  [SMALL_STATE(349)] = 13186,
  [SMALL_STATE(350)] = 13196,
  [SMALL_STATE(351)] = 13206,
  [SMALL_STATE(352)] = 13212,
  [SMALL_STATE(353)] = 13222,
  [SMALL_STATE(354)] = 13228,
  [SMALL_STATE(355)] = 13238,
  [SMALL_STATE(356)] = 13248,
  [SMALL_STATE(357)] = 13258,
  [SMALL_STATE(358)] = 13268,
  [SMALL_STATE(359)] = 13274,
  [SMALL_STATE(360)] = 13281,
  [SMALL_STATE(361)] = 13286,
  [SMALL_STATE(362)] = 13291,
  [SMALL_STATE(363)] = 13298,
  [SMALL_STATE(364)] = 13303,
  [SMALL_STATE(365)] = 13308,
  [SMALL_STATE(366)] = 13313,
  [SMALL_STATE(367)] = 13320,
  [SMALL_STATE(368)] = 13325,
  [SMALL_STATE(369)] = 13332,
  [SMALL_STATE(370)] = 13339,
  [SMALL_STATE(371)] = 13344,
  [SMALL_STATE(372)] = 13351,
  [SMALL_STATE(373)] = 13358,
  [SMALL_STATE(374)] = 13363,
  [SMALL_STATE(375)] = 13368,
  [SMALL_STATE(376)] = 13375,
  [SMALL_STATE(377)] = 13382,
  [SMALL_STATE(378)] = 13389,
  [SMALL_STATE(379)] = 13396,
  [SMALL_STATE(380)] = 13403,
  [SMALL_STATE(381)] = 13408,
  [SMALL_STATE(382)] = 13415,
  [SMALL_STATE(383)] = 13422,
  [SMALL_STATE(384)] = 13427,
  [SMALL_STATE(385)] = 13432,
  [SMALL_STATE(386)] = 13439,
  [SMALL_STATE(387)] = 13444,
  [SMALL_STATE(388)] = 13449,
  [SMALL_STATE(389)] = 13456,
  [SMALL_STATE(390)] = 13460,
  [SMALL_STATE(391)] = 13464,
  [SMALL_STATE(392)] = 13468,
  [SMALL_STATE(393)] = 13472,
  [SMALL_STATE(394)] = 13476,
  [SMALL_STATE(395)] = 13480,
  [SMALL_STATE(396)] = 13484,
  [SMALL_STATE(397)] = 13488,
  [SMALL_STATE(398)] = 13492,
  [SMALL_STATE(399)] = 13496,
  [SMALL_STATE(400)] = 13500,
  [SMALL_STATE(401)] = 13504,
  [SMALL_STATE(402)] = 13508,
  [SMALL_STATE(403)] = 13512,
  [SMALL_STATE(404)] = 13516,
  [SMALL_STATE(405)] = 13520,
  [SMALL_STATE(406)] = 13524,
  [SMALL_STATE(407)] = 13528,
  [SMALL_STATE(408)] = 13532,
  [SMALL_STATE(409)] = 13536,
  [SMALL_STATE(410)] = 13540,
  [SMALL_STATE(411)] = 13544,
  [SMALL_STATE(412)] = 13548,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(290),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(281),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(366),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(407),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(235),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(312),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(402),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(266),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(275),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(279),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(278),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(222),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(393),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(287),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(87),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(69),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(315),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(274),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment_statement, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment_statement, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 18),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 18),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 25),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 25),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 11),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 11),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement_statement, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement_statement, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 22),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 22),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 5),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 5),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 6),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 6),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 5, .production_id = 16),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 5, .production_id = 16),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(387),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(386),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(79),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(374),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(383),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(324),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(97),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, .production_id = 9),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 9),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 21),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 21),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3, .production_id = 20),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 20),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 4, .production_id = 10),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 10),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3, .production_id = 5),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3, .production_id = 5),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_pattern, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_pattern, 1),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 7),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 7),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_literal, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_literal, 2),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 24),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 24),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 10),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 10),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 17),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 17),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 14),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 14),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 4),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 4),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 4),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 4),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 6),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 6),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 2),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 13),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 13),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 15),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 15),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 3),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(401),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, .production_id = 12),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2), SHIFT_REPEAT(302),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(322),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(73),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 2),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 19),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2), SHIFT_REPEAT(295),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(22),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 26),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2), SHIFT_REPEAT(306),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [896] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 23),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
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
