#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 443
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 2
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 29

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
  anon_sym_mut = 37,
  anon_sym_boxed = 38,
  anon_sym_enum = 39,
  anon_sym_LBRACE = 40,
  anon_sym_BSLASHn = 41,
  anon_sym_RBRACE = 42,
  anon_sym_DASH = 43,
  anon_sym_return = 44,
  anon_sym_AMP = 45,
  anon_sym_PIPE = 46,
  anon_sym_CARET = 47,
  anon_sym_EQ_EQ = 48,
  anon_sym_BANG_EQ = 49,
  anon_sym_LT = 50,
  anon_sym_LT_EQ = 51,
  anon_sym_GT = 52,
  anon_sym_GT_EQ = 53,
  anon_sym_LT_LT = 54,
  anon_sym_GT_GT = 55,
  anon_sym_PLUS = 56,
  anon_sym_PLUS_EQ = 57,
  anon_sym_STAR = 58,
  anon_sym_SLASH = 59,
  anon_sym_PERCENT = 60,
  sym_integer_literal = 61,
  sym_binary_literal = 62,
  aux_sym_string_literal_token1 = 63,
  anon_sym_DQUOTE = 64,
  sym_char_literal = 65,
  sym_escape_sequence = 66,
  anon_sym_function = 67,
  anon_sym_DASH_GT = 68,
  anon_sym_if = 69,
  anon_sym_else = 70,
  anon_sym_true = 71,
  anon_sym_false = 72,
  sym_line_comment = 73,
  sym__string_content = 74,
  sym_float_literal = 75,
  sym_source_file = 76,
  sym__expression = 77,
  sym_while_statement = 78,
  sym_increment_statement = 79,
  sym_decrement_statement = 80,
  sym_continue_statement = 81,
  sym_for_expression = 82,
  sym_call_expression = 83,
  sym_range_expression = 84,
  sym_arguments = 85,
  sym__top_level_declaration = 86,
  sym__type = 87,
  sym_array_type = 88,
  sym_let_declaration = 89,
  sym_mutable_declaration = 90,
  sym_boxed_modifier = 91,
  sym_enum_declaration = 92,
  sym_enum_integral_type = 93,
  sym_enum_variant_list = 94,
  sym_enum_variant = 95,
  sym_field_declaration_list = 96,
  sym_field_declaration = 97,
  sym__field_identifier = 98,
  sym_ordered_field_declaration_list = 99,
  sym_mutable_specifier = 100,
  sym_unary_expression = 101,
  sym_return_statement = 102,
  sym_binary_expression = 103,
  sym__literal = 104,
  sym__pattern = 105,
  sym__literal_pattern = 106,
  sym_negative_literal = 107,
  sym_string_literal = 108,
  sym_function_declaration = 109,
  sym_parameters = 110,
  sym_parameter = 111,
  sym_block = 112,
  sym_if_statement = 113,
  sym_else_clause = 114,
  sym_boolean_literal = 115,
  aux_sym_source_file_repeat1 = 116,
  aux_sym_arguments_repeat1 = 117,
  aux_sym_arguments_repeat2 = 118,
  aux_sym_enum_variant_list_repeat1 = 119,
  aux_sym_enum_variant_list_repeat2 = 120,
  aux_sym_field_declaration_list_repeat1 = 121,
  aux_sym_field_declaration_list_repeat2 = 122,
  aux_sym_ordered_field_declaration_list_repeat1 = 123,
  aux_sym_string_literal_repeat1 = 124,
  aux_sym_parameters_repeat1 = 125,
  aux_sym_block_repeat1 = 126,
  alias_sym_field_identifier = 127,
  alias_sym_type_identifier = 128,
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
  [anon_sym_mut] = "mut",
  [anon_sym_boxed] = "boxed",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [sym_integer_literal] = "integer_literal",
  [sym_binary_literal] = "binary_literal",
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
  [sym_mutable_declaration] = "mutable_declaration",
  [sym_boxed_modifier] = "boxed_modifier",
  [sym_enum_declaration] = "enum_declaration",
  [sym_enum_integral_type] = "enum_integral_type",
  [sym_enum_variant_list] = "enum_variant_list",
  [sym_enum_variant] = "enum_variant",
  [sym_field_declaration_list] = "field_declaration_list",
  [sym_field_declaration] = "field_declaration",
  [sym__field_identifier] = "_field_identifier",
  [sym_ordered_field_declaration_list] = "ordered_field_declaration_list",
  [sym_mutable_specifier] = "mutable_specifier",
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
  [aux_sym_ordered_field_declaration_list_repeat1] = "ordered_field_declaration_list_repeat1",
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
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_boxed] = anon_sym_boxed,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_integer_literal] = sym_integer_literal,
  [sym_binary_literal] = sym_binary_literal,
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
  [sym_mutable_declaration] = sym_mutable_declaration,
  [sym_boxed_modifier] = sym_boxed_modifier,
  [sym_enum_declaration] = sym_enum_declaration,
  [sym_enum_integral_type] = sym_enum_integral_type,
  [sym_enum_variant_list] = sym_enum_variant_list,
  [sym_enum_variant] = sym_enum_variant,
  [sym_field_declaration_list] = sym_field_declaration_list,
  [sym_field_declaration] = sym_field_declaration,
  [sym__field_identifier] = sym__field_identifier,
  [sym_ordered_field_declaration_list] = sym_ordered_field_declaration_list,
  [sym_mutable_specifier] = sym_mutable_specifier,
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
  [aux_sym_ordered_field_declaration_list_repeat1] = aux_sym_ordered_field_declaration_list_repeat1,
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
  [anon_sym_mut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boxed] = {
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
  [anon_sym_PLUS_EQ] = {
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
  [sym_binary_literal] = {
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
  [sym_mutable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_boxed_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_integral_type] = {
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
  [sym_mutable_specifier] = {
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
  [aux_sym_ordered_field_declaration_list_repeat1] = {
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
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 3},
  [11] = {.index = 14, .length = 1},
  [13] = {.index = 15, .length = 2},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 3},
  [17] = {.index = 24, .length = 3},
  [18] = {.index = 27, .length = 2},
  [19] = {.index = 27, .length = 2},
  [20] = {.index = 29, .length = 3},
  [22] = {.index = 32, .length = 2},
  [23] = {.index = 34, .length = 2},
  [24] = {.index = 36, .length = 1},
  [25] = {.index = 37, .length = 3},
  [26] = {.index = 40, .length = 3},
  [27] = {.index = 43, .length = 4},
  [28] = {.index = 47, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_pattern, 1},
  [1] =
    {field_body, 1},
  [2] =
    {field_arguments, 1},
    {field_function, 0},
  [4] =
    {field_body, 2},
    {field_condition, 1},
  [6] =
    {field_name, 0},
  [7] =
    {field_body, 2},
    {field_name, 1},
  [9] =
    {field_condition, 1},
    {field_consequence, 2},
  [11] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [14] =
    {field_body, 2},
  [15] =
    {field_pattern, 1},
    {field_type, 3},
  [17] =
    {field_pattern, 1},
    {field_value, 3},
  [19] =
    {field_body, 1},
    {field_name, 0},
  [21] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [24] =
    {field_alternative, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [27] =
    {field_body, 3},
    {field_name, 2},
  [29] =
    {field_body, 4},
    {field_pattern, 1},
    {field_value, 3},
  [32] =
    {field_name, 0},
    {field_value, 2},
  [34] =
    {field_pattern, 0},
    {field_type, 2},
  [36] =
    {field_element, 1},
  [37] =
    {field_pattern, 1},
    {field_type, 3},
    {field_value, 5},
  [40] =
    {field_body, 1},
    {field_name, 0},
    {field_value, 3},
  [43] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [47] =
    {field_name, 0},
    {field_type, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_identifier,
  },
  [7] = {
    [1] = alias_sym_type_identifier,
  },
  [12] = {
    [0] = alias_sym_type_identifier,
  },
  [18] = {
    [2] = alias_sym_type_identifier,
  },
  [21] = {
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
      if (eof) ADVANCE(56);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(107);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(59);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead == '8') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead == '8') ADVANCE(93);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(93);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(24);
      if (lookahead == '6') ADVANCE(93);
      END_STATE();
    case 22:
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(93);
      END_STATE();
    case 24:
      if (lookahead == '8') ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(109);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(50);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(50);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(51);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'z') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == '{') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == '{') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == '}') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '}') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(104);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(100);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 54:
      if (eof) ADVANCE(56);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '>') ADVANCE(109);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '2') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '3') ADVANCE(94);
      if (lookahead == '6') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '4') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(103);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'b') ADVANCE(43);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_binary_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(12);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
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
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(54);
      if (lookahead == '6') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == '4') ADVANCE(57);
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
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(63);
      if (lookahead == '6') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == '4') ADVANCE(66);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == '8') ADVANCE(79);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 58:
      if (lookahead == 'z') ADVANCE(80);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 63:
      if (lookahead == '8') ADVANCE(83);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 67:
      if (lookahead == 'z') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_boxed);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_c_char);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 55, .external_lex_state = 2},
  [2] = {.lex_state = 5, .external_lex_state = 2},
  [3] = {.lex_state = 5, .external_lex_state = 2},
  [4] = {.lex_state = 55, .external_lex_state = 2},
  [5] = {.lex_state = 55, .external_lex_state = 2},
  [6] = {.lex_state = 5, .external_lex_state = 2},
  [7] = {.lex_state = 5, .external_lex_state = 2},
  [8] = {.lex_state = 5, .external_lex_state = 2},
  [9] = {.lex_state = 5, .external_lex_state = 2},
  [10] = {.lex_state = 5, .external_lex_state = 2},
  [11] = {.lex_state = 5, .external_lex_state = 2},
  [12] = {.lex_state = 5, .external_lex_state = 2},
  [13] = {.lex_state = 5, .external_lex_state = 2},
  [14] = {.lex_state = 5, .external_lex_state = 2},
  [15] = {.lex_state = 5, .external_lex_state = 2},
  [16] = {.lex_state = 5, .external_lex_state = 2},
  [17] = {.lex_state = 5, .external_lex_state = 2},
  [18] = {.lex_state = 5, .external_lex_state = 2},
  [19] = {.lex_state = 5, .external_lex_state = 2},
  [20] = {.lex_state = 5, .external_lex_state = 2},
  [21] = {.lex_state = 5, .external_lex_state = 2},
  [22] = {.lex_state = 5, .external_lex_state = 2},
  [23] = {.lex_state = 5, .external_lex_state = 2},
  [24] = {.lex_state = 5, .external_lex_state = 2},
  [25] = {.lex_state = 5, .external_lex_state = 2},
  [26] = {.lex_state = 55, .external_lex_state = 2},
  [27] = {.lex_state = 55, .external_lex_state = 2},
  [28] = {.lex_state = 55, .external_lex_state = 2},
  [29] = {.lex_state = 55, .external_lex_state = 2},
  [30] = {.lex_state = 55, .external_lex_state = 2},
  [31] = {.lex_state = 55, .external_lex_state = 2},
  [32] = {.lex_state = 55, .external_lex_state = 2},
  [33] = {.lex_state = 55, .external_lex_state = 2},
  [34] = {.lex_state = 55, .external_lex_state = 2},
  [35] = {.lex_state = 55, .external_lex_state = 2},
  [36] = {.lex_state = 55, .external_lex_state = 2},
  [37] = {.lex_state = 55, .external_lex_state = 2},
  [38] = {.lex_state = 55, .external_lex_state = 2},
  [39] = {.lex_state = 55, .external_lex_state = 2},
  [40] = {.lex_state = 6, .external_lex_state = 2},
  [41] = {.lex_state = 6, .external_lex_state = 2},
  [42] = {.lex_state = 6, .external_lex_state = 2},
  [43] = {.lex_state = 6, .external_lex_state = 2},
  [44] = {.lex_state = 6, .external_lex_state = 2},
  [45] = {.lex_state = 6, .external_lex_state = 2},
  [46] = {.lex_state = 6, .external_lex_state = 2},
  [47] = {.lex_state = 6, .external_lex_state = 2},
  [48] = {.lex_state = 6, .external_lex_state = 2},
  [49] = {.lex_state = 6, .external_lex_state = 2},
  [50] = {.lex_state = 6, .external_lex_state = 2},
  [51] = {.lex_state = 6, .external_lex_state = 2},
  [52] = {.lex_state = 6, .external_lex_state = 2},
  [53] = {.lex_state = 6, .external_lex_state = 2},
  [54] = {.lex_state = 6, .external_lex_state = 2},
  [55] = {.lex_state = 6, .external_lex_state = 2},
  [56] = {.lex_state = 6, .external_lex_state = 2},
  [57] = {.lex_state = 6, .external_lex_state = 2},
  [58] = {.lex_state = 6, .external_lex_state = 2},
  [59] = {.lex_state = 6, .external_lex_state = 2},
  [60] = {.lex_state = 6, .external_lex_state = 2},
  [61] = {.lex_state = 6, .external_lex_state = 2},
  [62] = {.lex_state = 6, .external_lex_state = 2},
  [63] = {.lex_state = 6, .external_lex_state = 2},
  [64] = {.lex_state = 6, .external_lex_state = 2},
  [65] = {.lex_state = 6, .external_lex_state = 2},
  [66] = {.lex_state = 6, .external_lex_state = 2},
  [67] = {.lex_state = 6, .external_lex_state = 2},
  [68] = {.lex_state = 6, .external_lex_state = 2},
  [69] = {.lex_state = 5, .external_lex_state = 2},
  [70] = {.lex_state = 9, .external_lex_state = 2},
  [71] = {.lex_state = 9, .external_lex_state = 2},
  [72] = {.lex_state = 9, .external_lex_state = 2},
  [73] = {.lex_state = 9, .external_lex_state = 2},
  [74] = {.lex_state = 55, .external_lex_state = 2},
  [75] = {.lex_state = 9, .external_lex_state = 2},
  [76] = {.lex_state = 9, .external_lex_state = 2},
  [77] = {.lex_state = 9, .external_lex_state = 2},
  [78] = {.lex_state = 9, .external_lex_state = 2},
  [79] = {.lex_state = 9, .external_lex_state = 2},
  [80] = {.lex_state = 9, .external_lex_state = 2},
  [81] = {.lex_state = 9, .external_lex_state = 2},
  [82] = {.lex_state = 9, .external_lex_state = 2},
  [83] = {.lex_state = 9, .external_lex_state = 2},
  [84] = {.lex_state = 9, .external_lex_state = 2},
  [85] = {.lex_state = 5, .external_lex_state = 2},
  [86] = {.lex_state = 5, .external_lex_state = 2},
  [87] = {.lex_state = 5, .external_lex_state = 2},
  [88] = {.lex_state = 5, .external_lex_state = 2},
  [89] = {.lex_state = 5, .external_lex_state = 2},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 9, .external_lex_state = 2},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 10, .external_lex_state = 2},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 10, .external_lex_state = 2},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 10, .external_lex_state = 2},
  [118] = {.lex_state = 55, .external_lex_state = 2},
  [119] = {.lex_state = 10, .external_lex_state = 2},
  [120] = {.lex_state = 10, .external_lex_state = 2},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 10, .external_lex_state = 2},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 55, .external_lex_state = 2},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 55, .external_lex_state = 2},
  [135] = {.lex_state = 10, .external_lex_state = 2},
  [136] = {.lex_state = 55, .external_lex_state = 2},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 10, .external_lex_state = 2},
  [140] = {.lex_state = 10, .external_lex_state = 2},
  [141] = {.lex_state = 10, .external_lex_state = 2},
  [142] = {.lex_state = 55, .external_lex_state = 2},
  [143] = {.lex_state = 55, .external_lex_state = 2},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 10, .external_lex_state = 2},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 55, .external_lex_state = 2},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 55, .external_lex_state = 2},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 55, .external_lex_state = 2},
  [154] = {.lex_state = 55, .external_lex_state = 2},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 55, .external_lex_state = 2},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 55, .external_lex_state = 2},
  [163] = {.lex_state = 55, .external_lex_state = 2},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 55, .external_lex_state = 2},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 55, .external_lex_state = 2},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 55, .external_lex_state = 2},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 55, .external_lex_state = 2},
  [174] = {.lex_state = 55, .external_lex_state = 2},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 55, .external_lex_state = 2},
  [177] = {.lex_state = 55, .external_lex_state = 2},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 55, .external_lex_state = 2},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 1, .external_lex_state = 2},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 5, .external_lex_state = 2},
  [244] = {.lex_state = 5, .external_lex_state = 2},
  [245] = {.lex_state = 5, .external_lex_state = 2},
  [246] = {.lex_state = 5, .external_lex_state = 2},
  [247] = {.lex_state = 5, .external_lex_state = 2},
  [248] = {.lex_state = 5, .external_lex_state = 2},
  [249] = {.lex_state = 5, .external_lex_state = 2},
  [250] = {.lex_state = 5, .external_lex_state = 2},
  [251] = {.lex_state = 5, .external_lex_state = 2},
  [252] = {.lex_state = 5, .external_lex_state = 2},
  [253] = {.lex_state = 5, .external_lex_state = 2},
  [254] = {.lex_state = 5, .external_lex_state = 2},
  [255] = {.lex_state = 5, .external_lex_state = 2},
  [256] = {.lex_state = 5, .external_lex_state = 2},
  [257] = {.lex_state = 5, .external_lex_state = 2},
  [258] = {.lex_state = 5, .external_lex_state = 2},
  [259] = {.lex_state = 5, .external_lex_state = 2},
  [260] = {.lex_state = 5, .external_lex_state = 2},
  [261] = {.lex_state = 5, .external_lex_state = 2},
  [262] = {.lex_state = 5, .external_lex_state = 2},
  [263] = {.lex_state = 5, .external_lex_state = 2},
  [264] = {.lex_state = 5, .external_lex_state = 2},
  [265] = {.lex_state = 5, .external_lex_state = 2},
  [266] = {.lex_state = 5, .external_lex_state = 2},
  [267] = {.lex_state = 5, .external_lex_state = 2},
  [268] = {.lex_state = 5, .external_lex_state = 2},
  [269] = {.lex_state = 5, .external_lex_state = 2},
  [270] = {.lex_state = 5, .external_lex_state = 2},
  [271] = {.lex_state = 5, .external_lex_state = 2},
  [272] = {.lex_state = 5, .external_lex_state = 2},
  [273] = {.lex_state = 5, .external_lex_state = 2},
  [274] = {.lex_state = 5, .external_lex_state = 2},
  [275] = {.lex_state = 5, .external_lex_state = 2},
  [276] = {.lex_state = 5, .external_lex_state = 2},
  [277] = {.lex_state = 5, .external_lex_state = 2},
  [278] = {.lex_state = 5, .external_lex_state = 2},
  [279] = {.lex_state = 5, .external_lex_state = 2},
  [280] = {.lex_state = 5, .external_lex_state = 2},
  [281] = {.lex_state = 5, .external_lex_state = 2},
  [282] = {.lex_state = 5, .external_lex_state = 2},
  [283] = {.lex_state = 5, .external_lex_state = 2},
  [284] = {.lex_state = 5, .external_lex_state = 2},
  [285] = {.lex_state = 5, .external_lex_state = 2},
  [286] = {.lex_state = 5, .external_lex_state = 2},
  [287] = {.lex_state = 5, .external_lex_state = 2},
  [288] = {.lex_state = 5, .external_lex_state = 2},
  [289] = {.lex_state = 5, .external_lex_state = 2},
  [290] = {.lex_state = 5, .external_lex_state = 2},
  [291] = {.lex_state = 5, .external_lex_state = 2},
  [292] = {.lex_state = 5, .external_lex_state = 2},
  [293] = {.lex_state = 5, .external_lex_state = 2},
  [294] = {.lex_state = 5, .external_lex_state = 2},
  [295] = {.lex_state = 5, .external_lex_state = 2},
  [296] = {.lex_state = 5, .external_lex_state = 2},
  [297] = {.lex_state = 5, .external_lex_state = 2},
  [298] = {.lex_state = 5, .external_lex_state = 2},
  [299] = {.lex_state = 5, .external_lex_state = 2},
  [300] = {.lex_state = 5, .external_lex_state = 2},
  [301] = {.lex_state = 5, .external_lex_state = 2},
  [302] = {.lex_state = 7},
  [303] = {.lex_state = 13},
  [304] = {.lex_state = 7},
  [305] = {.lex_state = 7},
  [306] = {.lex_state = 7},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 7},
  [309] = {.lex_state = 7},
  [310] = {.lex_state = 7},
  [311] = {.lex_state = 7},
  [312] = {.lex_state = 7},
  [313] = {.lex_state = 7},
  [314] = {.lex_state = 7},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 7},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 8, .external_lex_state = 3},
  [321] = {.lex_state = 8, .external_lex_state = 3},
  [322] = {.lex_state = 7},
  [323] = {.lex_state = 8, .external_lex_state = 3},
  [324] = {.lex_state = 8, .external_lex_state = 3},
  [325] = {.lex_state = 2},
  [326] = {.lex_state = 8, .external_lex_state = 3},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 7},
  [329] = {.lex_state = 7},
  [330] = {.lex_state = 8, .external_lex_state = 3},
  [331] = {.lex_state = 4},
  [332] = {.lex_state = 8, .external_lex_state = 3},
  [333] = {.lex_state = 7},
  [334] = {.lex_state = 13},
  [335] = {.lex_state = 13},
  [336] = {.lex_state = 13},
  [337] = {.lex_state = 13},
  [338] = {.lex_state = 13},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 7},
  [341] = {.lex_state = 7},
  [342] = {.lex_state = 8, .external_lex_state = 3},
  [343] = {.lex_state = 8, .external_lex_state = 3},
  [344] = {.lex_state = 13},
  [345] = {.lex_state = 7},
  [346] = {.lex_state = 4},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 55},
  [350] = {.lex_state = 55},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 4},
  [353] = {.lex_state = 4},
  [354] = {.lex_state = 4},
  [355] = {.lex_state = 55},
  [356] = {.lex_state = 4},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 13},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 55},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 4},
  [369] = {.lex_state = 55},
  [370] = {.lex_state = 55},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 7},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 55},
  [376] = {.lex_state = 55},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 13},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 13},
  [383] = {.lex_state = 13},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 2},
  [386] = {.lex_state = 2},
  [387] = {.lex_state = 2},
  [388] = {.lex_state = 2},
  [389] = {.lex_state = 2},
  [390] = {.lex_state = 7},
  [391] = {.lex_state = 9, .external_lex_state = 2},
  [392] = {.lex_state = 7},
  [393] = {.lex_state = 9, .external_lex_state = 2},
  [394] = {.lex_state = 7},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 2},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 13},
  [401] = {.lex_state = 9, .external_lex_state = 2},
  [402] = {.lex_state = 2},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 2},
  [405] = {.lex_state = 2},
  [406] = {.lex_state = 2},
  [407] = {.lex_state = 2},
  [408] = {.lex_state = 2},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 7},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 2},
  [414] = {.lex_state = 2},
  [415] = {.lex_state = 2},
  [416] = {.lex_state = 2},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 7},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 7},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 7},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 7},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 7},
  [439] = {.lex_state = 7},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 7},
  [442] = {.lex_state = 7},
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
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_boxed] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_binary_literal] = ACTIONS(1),
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
    [sym_line_comment] = ACTIONS(3),
    [sym__string_content] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(427),
    [sym__expression] = STATE(147),
    [sym_while_statement] = STATE(405),
    [sym_increment_statement] = STATE(405),
    [sym_decrement_statement] = STATE(405),
    [sym_continue_statement] = STATE(405),
    [sym_for_expression] = STATE(158),
    [sym_call_expression] = STATE(158),
    [sym_range_expression] = STATE(158),
    [sym__top_level_declaration] = STATE(4),
    [sym_let_declaration] = STATE(405),
    [sym_mutable_declaration] = STATE(405),
    [sym_boxed_modifier] = STATE(433),
    [sym_enum_declaration] = STATE(405),
    [sym_unary_expression] = STATE(158),
    [sym_return_statement] = STATE(405),
    [sym_binary_expression] = STATE(158),
    [sym__literal] = STATE(158),
    [sym_string_literal] = STATE(179),
    [sym_function_declaration] = STATE(4),
    [sym_block] = STATE(405),
    [sym_if_statement] = STATE(405),
    [sym_boolean_literal] = STATE(179),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_while] = ACTIONS(9),
    [anon_sym_PLUS_PLUS] = ACTIONS(11),
    [anon_sym_DASH_DASH] = ACTIONS(13),
    [anon_sym_continue] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(17),
    [anon_sym_DOT_DOT] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
    [anon_sym_mut] = ACTIONS(23),
    [anon_sym_boxed] = ACTIONS(25),
    [anon_sym_enum] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_return] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(35),
    [sym_binary_literal] = ACTIONS(37),
    [aux_sym_string_literal_token1] = ACTIONS(39),
    [sym_char_literal] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(41),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [sym_line_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(157), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [93] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(156), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [186] = 28,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_while,
    ACTIONS(11), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(13), 1,
      anon_sym_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_continue,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(23), 1,
      anon_sym_mut,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(27), 1,
      anon_sym_enum,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(41), 1,
      anon_sym_function,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(147), 1,
      sym__expression,
    STATE(433), 1,
      sym_boxed_modifier,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(179), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(5), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(158), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(405), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [291] = 28,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(90), 1,
      anon_sym_DASH_DASH,
    ACTIONS(93), 1,
      anon_sym_continue,
    ACTIONS(96), 1,
      anon_sym_for,
    ACTIONS(99), 1,
      anon_sym_DOT_DOT,
    ACTIONS(102), 1,
      anon_sym_let,
    ACTIONS(105), 1,
      anon_sym_mut,
    ACTIONS(108), 1,
      anon_sym_boxed,
    ACTIONS(111), 1,
      anon_sym_enum,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_DASH,
    ACTIONS(120), 1,
      anon_sym_return,
    ACTIONS(123), 1,
      sym_integer_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(132), 1,
      anon_sym_function,
    ACTIONS(135), 1,
      anon_sym_if,
    STATE(147), 1,
      sym__expression,
    STATE(433), 1,
      sym_boxed_modifier,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(179), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(126), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(5), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(158), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(405), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [396] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(175), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [489] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(164), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [582] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(211), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [672] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(211), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [762] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(211), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [852] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(211), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [942] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(211), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [1032] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(211), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [1122] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(211), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [1212] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(211), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [1302] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(211), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [1392] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(211), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [1482] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(211), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [1572] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(211), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [1662] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(161), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [1749] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(169), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [1836] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(188), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [1923] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(170), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [2010] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(211), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [2097] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_integer_literal,
    ACTIONS(65), 1,
      sym_binary_literal,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(155), 1,
      sym__expression,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(394), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(69), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(224), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(57), 18,
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
  [2184] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_while,
    ACTIONS(177), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH_DASH,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_mut,
    ACTIONS(191), 1,
      anon_sym_enum,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      anon_sym_return,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(207), 1,
      anon_sym_if,
    STATE(42), 1,
      sym__expression,
    STATE(424), 1,
      sym_boxed_modifier,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(36), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2282] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_while,
    ACTIONS(177), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH_DASH,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_mut,
    ACTIONS(191), 1,
      anon_sym_enum,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      anon_sym_return,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(207), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym__expression,
    STATE(424), 1,
      sym_boxed_modifier,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(36), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2380] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_while,
    ACTIONS(177), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH_DASH,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_mut,
    ACTIONS(191), 1,
      anon_sym_enum,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      anon_sym_return,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(207), 1,
      anon_sym_if,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym__expression,
    STATE(424), 1,
      sym_boxed_modifier,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(31), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2478] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_while,
    ACTIONS(177), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH_DASH,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_mut,
    ACTIONS(191), 1,
      anon_sym_enum,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      anon_sym_return,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(207), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym__expression,
    STATE(424), 1,
      sym_boxed_modifier,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(26), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2576] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_while,
    ACTIONS(177), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH_DASH,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_mut,
    ACTIONS(191), 1,
      anon_sym_enum,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      anon_sym_return,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(207), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym__expression,
    STATE(424), 1,
      sym_boxed_modifier,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(36), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2674] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_while,
    ACTIONS(177), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH_DASH,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_mut,
    ACTIONS(191), 1,
      anon_sym_enum,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      anon_sym_return,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(207), 1,
      anon_sym_if,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym__expression,
    STATE(424), 1,
      sym_boxed_modifier,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(36), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2772] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_while,
    ACTIONS(177), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH_DASH,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_mut,
    ACTIONS(191), 1,
      anon_sym_enum,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      anon_sym_return,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(207), 1,
      anon_sym_if,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym__expression,
    STATE(424), 1,
      sym_boxed_modifier,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(27), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2870] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_while,
    ACTIONS(177), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH_DASH,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_mut,
    ACTIONS(191), 1,
      anon_sym_enum,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      anon_sym_return,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(207), 1,
      anon_sym_if,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym__expression,
    STATE(424), 1,
      sym_boxed_modifier,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(30), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2968] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_while,
    ACTIONS(177), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH_DASH,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_mut,
    ACTIONS(191), 1,
      anon_sym_enum,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      anon_sym_return,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(207), 1,
      anon_sym_if,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym__expression,
    STATE(424), 1,
      sym_boxed_modifier,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(36), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [3066] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_while,
    ACTIONS(177), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH_DASH,
    ACTIONS(181), 1,
      anon_sym_continue,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(187), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_mut,
    ACTIONS(191), 1,
      anon_sym_enum,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      anon_sym_return,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(207), 1,
      anon_sym_if,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym__expression,
    STATE(424), 1,
      sym_boxed_modifier,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(34), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [3164] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_while,
    ACTIONS(235), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(238), 1,
      anon_sym_DASH_DASH,
    ACTIONS(241), 1,
      anon_sym_continue,
    ACTIONS(244), 1,
      anon_sym_for,
    ACTIONS(247), 1,
      anon_sym_DOT_DOT,
    ACTIONS(250), 1,
      anon_sym_let,
    ACTIONS(253), 1,
      anon_sym_mut,
    ACTIONS(256), 1,
      anon_sym_boxed,
    ACTIONS(259), 1,
      anon_sym_enum,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    ACTIONS(267), 1,
      anon_sym_DASH,
    ACTIONS(270), 1,
      anon_sym_return,
    ACTIONS(273), 1,
      sym_integer_literal,
    ACTIONS(279), 1,
      aux_sym_string_literal_token1,
    ACTIONS(282), 1,
      anon_sym_if,
    STATE(42), 1,
      sym__expression,
    STATE(424), 1,
      sym_boxed_modifier,
    ACTIONS(285), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(276), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(36), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [3262] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(288), 19,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(290), 23,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3312] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(292), 19,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(294), 23,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3362] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(296), 19,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(298), 23,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3412] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      anon_sym_CARET,
    ACTIONS(322), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(308), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(320), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(324), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(316), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(302), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(300), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3487] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 19,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(330), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3536] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      anon_sym_CARET,
    ACTIONS(322), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 1,
      anon_sym_SLASH,
    ACTIONS(334), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(336), 1,
      anon_sym_DASH_DASH,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(308), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(320), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(324), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(316), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(338), 6,
      sym_float_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(332), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3615] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(340), 19,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(342), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3664] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(344), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(346), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3719] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      anon_sym_CARET,
    ACTIONS(322), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(308), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(320), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(324), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(316), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(348), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3794] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      anon_sym_CARET,
    ACTIONS(322), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(308), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(320), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(324), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(316), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(354), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(352), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3869] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(356), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(358), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3924] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      anon_sym_CARET,
    ACTIONS(322), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(308), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(320), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(324), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(316), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(362), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(360), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3999] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(308), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(324), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(356), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(358), 17,
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
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4062] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      anon_sym_CARET,
    ACTIONS(322), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(308), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(320), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(324), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(358), 12,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(356), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4133] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(322), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(308), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(320), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(324), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(358), 14,
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
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(356), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4200] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(314), 1,
      anon_sym_CARET,
    ACTIONS(322), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(308), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(320), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(324), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(358), 13,
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
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(356), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4269] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(308), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(320), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(324), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(356), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(358), 15,
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
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4334] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(324), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(356), 17,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(358), 18,
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
      anon_sym_PLUS_EQ,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4393] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(364), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(366), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4444] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      anon_sym_CARET,
    ACTIONS(322), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(308), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(320), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(324), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(316), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(370), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(368), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4519] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      anon_sym_CARET,
    ACTIONS(322), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(308), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(320), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(324), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(316), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(374), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(372), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4594] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DOT_DOT,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      anon_sym_CARET,
    ACTIONS(322), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(308), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(320), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(324), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(316), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(378), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(376), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4669] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(380), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(382), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4717] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(384), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(386), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4765] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(388), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(390), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4813] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(394), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4861] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(396), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(398), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4909] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(400), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(402), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4957] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(404), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(406), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [5005] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(410), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [5053] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(412), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(414), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [5101] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(416), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(418), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [5149] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_for,
    ACTIONS(430), 1,
      anon_sym_mut,
    ACTIONS(433), 1,
      anon_sym_DASH,
    ACTIONS(436), 1,
      sym_integer_literal,
    ACTIONS(439), 1,
      aux_sym_string_literal_token1,
    STATE(80), 1,
      sym_mutable_specifier,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(425), 2,
      anon_sym_DOT_DOT,
      sym_binary_literal,
    ACTIONS(442), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(445), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(394), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(427), 18,
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
  [5221] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    ACTIONS(454), 1,
      anon_sym_DASH,
    STATE(82), 1,
      sym_mutable_specifier,
    STATE(377), 1,
      sym_parameter,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(426), 1,
      sym__pattern,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(456), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(394), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 18,
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
  [5289] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_mutable_specifier,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(395), 1,
      sym_parameter,
    STATE(426), 1,
      sym__pattern,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(456), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(394), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 18,
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
  [5354] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_DASH,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_mutable_specifier,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(395), 1,
      sym_parameter,
    STATE(426), 1,
      sym__pattern,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(456), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(394), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 18,
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
  [5419] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      anon_sym_mut,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_DASH,
    STATE(82), 1,
      sym_mutable_specifier,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(395), 1,
      sym_parameter,
    STATE(426), 1,
      sym__pattern,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(456), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(394), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 18,
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
  [5481] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    STATE(45), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    ACTIONS(464), 4,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(462), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
  [5543] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(470), 1,
      anon_sym_DASH,
    STATE(319), 1,
      sym__literal_pattern,
    STATE(339), 1,
      sym__pattern,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(472), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(331), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(468), 18,
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
  [5596] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(474), 1,
      sym_identifier,
    ACTIONS(478), 1,
      anon_sym_DASH,
    STATE(117), 1,
      sym__pattern,
    STATE(124), 1,
      sym__literal_pattern,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(480), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(119), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(476), 18,
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
  [5649] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(474), 1,
      sym_identifier,
    ACTIONS(478), 1,
      anon_sym_DASH,
    STATE(120), 1,
      sym__pattern,
    STATE(124), 1,
      sym__literal_pattern,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(480), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(119), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(476), 18,
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
  [5702] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_DASH,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(439), 1,
      sym__pattern,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(456), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(394), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 18,
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
  [5755] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(470), 1,
      anon_sym_DASH,
    STATE(319), 1,
      sym__literal_pattern,
    STATE(327), 1,
      sym__pattern,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(472), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(331), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(468), 18,
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
  [5808] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_DASH,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(437), 1,
      sym__pattern,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(456), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(394), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 18,
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
  [5861] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_DASH,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(441), 1,
      sym__pattern,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(456), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(394), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 18,
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
  [5914] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_DASH,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(417), 1,
      sym__pattern,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(456), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(394), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 18,
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
  [5967] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_DASH,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(436), 1,
      sym__pattern,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(456), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(394), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 18,
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
  [6020] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_DASH,
    STATE(390), 1,
      sym__literal_pattern,
    STATE(438), 1,
      sym__pattern,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(456), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(394), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 18,
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
  [6073] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(482), 24,
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
      anon_sym_mut,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6111] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(488), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(486), 24,
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
      anon_sym_mut,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6149] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(492), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(490), 24,
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
      anon_sym_mut,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6187] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(496), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(494), 24,
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
      anon_sym_mut,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6225] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(498), 24,
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
      anon_sym_mut,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6263] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(288), 6,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_identifier,
    ACTIONS(290), 21,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6298] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(292), 6,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_identifier,
    ACTIONS(294), 21,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6333] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(296), 6,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_identifier,
    ACTIONS(298), 21,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6368] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(358), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [6420] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(358), 15,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
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
      sym_identifier,
  [6468] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(344), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(346), 19,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [6508] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(364), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(366), 21,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [6544] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(356), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(358), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      sym_identifier,
  [6588] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(358), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [6638] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(358), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [6692] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(522), 5,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(520), 21,
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
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6726] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(358), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [6782] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(356), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(358), 19,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [6822] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(380), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(382), 21,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [6855] = 3,
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(296), 24,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6888] = 3,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(292), 24,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6921] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(410), 21,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [6954] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(340), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(342), 21,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [6987] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(530), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(528), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7020] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(330), 21,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [7053] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(394), 21,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [7086] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(416), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(418), 21,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [7119] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(412), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(414), 21,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [7152] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(534), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(532), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7185] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(404), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(406), 21,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [7218] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(384), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(386), 21,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [7251] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 1,
      sym_identifier,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      anon_sym_BSLASHn,
    STATE(302), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(315), 1,
      sym_field_declaration,
    STATE(363), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(429), 1,
      sym__field_identifier,
    ACTIONS(540), 18,
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
  [7296] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(548), 1,
      anon_sym_COLON,
    ACTIONS(550), 1,
      anon_sym_EQ,
    ACTIONS(546), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(544), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7333] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(556), 1,
      anon_sym_else,
    STATE(174), 1,
      sym_else_clause,
    ACTIONS(554), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(552), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7370] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(560), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(558), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7403] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(566), 1,
      anon_sym_COLON,
    ACTIONS(568), 1,
      anon_sym_EQ,
    ACTIONS(564), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(562), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7440] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(396), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(398), 21,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [7473] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(388), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(390), 21,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [7506] = 3,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(288), 24,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7539] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(572), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(570), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7572] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(400), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(402), 21,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [7605] = 10,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(574), 1,
      anon_sym_DOT_DOT,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      anon_sym_AMP,
    STATE(180), 1,
      sym_arguments,
    ACTIONS(582), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(578), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(584), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(356), 11,
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
  [7651] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(330), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(328), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7683] = 8,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(574), 1,
      anon_sym_DOT_DOT,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_arguments,
    ACTIONS(578), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(584), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(356), 14,
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
  [7725] = 7,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(574), 1,
      anon_sym_DOT_DOT,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_arguments,
    ACTIONS(584), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(356), 17,
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
      anon_sym_PLUS_EQ,
  [7765] = 3,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(340), 23,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_else,
  [7797] = 12,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(574), 1,
      anon_sym_DOT_DOT,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      anon_sym_AMP,
    ACTIONS(586), 1,
      anon_sym_PIPE,
    ACTIONS(588), 1,
      anon_sym_CARET,
    STATE(180), 1,
      sym_arguments,
    ACTIONS(582), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(578), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(584), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(356), 9,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7847] = 9,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(574), 1,
      anon_sym_DOT_DOT,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_arguments,
    ACTIONS(582), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(578), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(584), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(356), 12,
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
  [7891] = 11,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(574), 1,
      anon_sym_DOT_DOT,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      anon_sym_AMP,
    ACTIONS(588), 1,
      anon_sym_CARET,
    STATE(180), 1,
      sym_arguments,
    ACTIONS(582), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(578), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(584), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(356), 10,
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
  [7939] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(342), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(340), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7971] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(498), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8003] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(590), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(592), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8035] = 4,
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    STATE(180), 1,
      sym_arguments,
    ACTIONS(364), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8069] = 3,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(328), 23,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_else,
  [8101] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(492), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(490), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8133] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(598), 1,
      anon_sym_EQ,
    ACTIONS(596), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(594), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8167] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(604), 1,
      anon_sym_EQ,
    ACTIONS(602), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(600), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8201] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(606), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8233] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(608), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(610), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8265] = 6,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(574), 1,
      anon_sym_DOT_DOT,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_arguments,
    ACTIONS(356), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8303] = 6,
    ACTIONS(346), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(574), 1,
      anon_sym_DOT_DOT,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_arguments,
    ACTIONS(344), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8341] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(488), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(486), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8373] = 15,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(574), 1,
      anon_sym_DOT_DOT,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      anon_sym_AMP,
    ACTIONS(586), 1,
      anon_sym_PIPE,
    ACTIONS(588), 1,
      anon_sym_CARET,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(614), 1,
      anon_sym_SEMI,
    ACTIONS(616), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(618), 1,
      anon_sym_DASH_DASH,
    STATE(180), 1,
      sym_arguments,
    ACTIONS(582), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(578), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(584), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(620), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8429] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(360), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8460] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(622), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8515] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(630), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(628), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8546] = 3,
    ACTIONS(414), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(412), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8577] = 3,
    ACTIONS(386), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(384), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8608] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(634), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(632), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8639] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(638), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(636), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8670] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      sym_arguments,
    STATE(360), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8729] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_arguments,
    STATE(374), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8788] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_arguments,
    STATE(361), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8847] = 3,
    ACTIONS(406), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(404), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8878] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(650), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8933] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(654), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(652), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8964] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      sym_arguments,
    STATE(364), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9023] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(370), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(368), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9054] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(660), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(658), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9085] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_arguments,
    STATE(365), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9144] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(668), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(666), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9175] = 3,
    ACTIONS(382), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(380), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9206] = 3,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(392), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9237] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(672), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(670), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9268] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    ACTIONS(674), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      sym_arguments,
    STATE(378), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9327] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      sym_arguments,
    STATE(348), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9386] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(680), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(678), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9417] = 3,
    ACTIONS(402), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(400), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9448] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(684), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(682), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9479] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(688), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(686), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9510] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_arguments,
    STATE(379), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9569] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(696), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(694), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9600] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(700), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(698), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9631] = 3,
    ACTIONS(390), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(388), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9662] = 3,
    ACTIONS(418), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(416), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9693] = 3,
    ACTIONS(398), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(396), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9724] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(702), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9755] = 3,
    ACTIONS(410), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(408), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9786] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(706), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_LBRACK,
    STATE(309), 1,
      sym_array_type,
    STATE(412), 1,
      sym__type,
    ACTIONS(708), 18,
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
  [9822] = 11,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 1,
      anon_sym_AMP,
    ACTIONS(720), 1,
      anon_sym_CARET,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(722), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(716), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(724), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(356), 8,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9868] = 13,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    ACTIONS(374), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 1,
      anon_sym_AMP,
    ACTIONS(720), 1,
      anon_sym_CARET,
    ACTIONS(726), 1,
      anon_sym_PIPE,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(722), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(716), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(724), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(728), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9918] = 13,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    ACTIONS(350), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 1,
      anon_sym_AMP,
    ACTIONS(720), 1,
      anon_sym_CARET,
    ACTIONS(726), 1,
      anon_sym_PIPE,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(722), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(716), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(724), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(728), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9968] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    STATE(121), 1,
      sym_arguments,
    STATE(325), 1,
      sym_block,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10024] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(730), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10078] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(732), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_LBRACK,
    STATE(353), 1,
      sym__type,
    STATE(356), 1,
      sym_array_type,
    ACTIONS(734), 18,
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
  [10114] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(706), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_LBRACK,
    STATE(309), 1,
      sym_array_type,
    STATE(430), 1,
      sym__type,
    ACTIONS(708), 18,
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
  [10150] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    STATE(118), 1,
      sym_block,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10206] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(706), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_LBRACK,
    STATE(309), 1,
      sym_array_type,
    STATE(340), 1,
      sym__type,
    ACTIONS(708), 18,
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
  [10242] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(738), 1,
      sym_identifier,
    ACTIONS(742), 1,
      anon_sym_LBRACK,
    STATE(135), 1,
      sym_array_type,
    STATE(140), 1,
      sym__type,
    ACTIONS(740), 18,
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
  [10278] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(738), 1,
      sym_identifier,
    ACTIONS(742), 1,
      anon_sym_LBRACK,
    STATE(135), 1,
      sym_array_type,
    STATE(141), 1,
      sym__type,
    ACTIONS(740), 18,
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
  [10314] = 13,
    ACTIONS(376), 1,
      anon_sym_SEMI,
    ACTIONS(378), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 1,
      anon_sym_AMP,
    ACTIONS(720), 1,
      anon_sym_CARET,
    ACTIONS(726), 1,
      anon_sym_PIPE,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(722), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(716), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(724), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(728), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10364] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym_arguments,
    STATE(122), 1,
      sym_block,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10420] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(706), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_LBRACK,
    STATE(309), 1,
      sym_array_type,
    STATE(421), 1,
      sym__type,
    ACTIONS(708), 18,
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
  [10456] = 6,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(356), 18,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10492] = 13,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    ACTIONS(354), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 1,
      anon_sym_AMP,
    ACTIONS(720), 1,
      anon_sym_CARET,
    ACTIONS(726), 1,
      anon_sym_PIPE,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(722), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(716), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(724), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(728), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10542] = 8,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(716), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(724), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(356), 12,
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
  [10582] = 13,
    ACTIONS(300), 1,
      anon_sym_SEMI,
    ACTIONS(302), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 1,
      anon_sym_AMP,
    ACTIONS(720), 1,
      anon_sym_CARET,
    ACTIONS(726), 1,
      anon_sym_PIPE,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(722), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(716), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(724), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(728), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10632] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(706), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_LBRACK,
    STATE(309), 1,
      sym_array_type,
    STATE(410), 1,
      sym__type,
    ACTIONS(708), 18,
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
  [10668] = 12,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 1,
      anon_sym_AMP,
    ACTIONS(720), 1,
      anon_sym_CARET,
    ACTIONS(726), 1,
      anon_sym_PIPE,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(722), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(716), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(724), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(356), 7,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10716] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(746), 1,
      sym_identifier,
    ACTIONS(750), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym__type,
    STATE(89), 1,
      sym_array_type,
    ACTIONS(748), 18,
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
  [10752] = 10,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 1,
      anon_sym_AMP,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(722), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(716), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(724), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(356), 9,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10796] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    STATE(121), 1,
      sym_arguments,
    STATE(153), 1,
      sym_block,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10852] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(534), 1,
      anon_sym_COLON,
    ACTIONS(416), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(418), 17,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [10884] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(746), 1,
      sym_identifier,
    ACTIONS(750), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym__type,
    STATE(89), 1,
      sym_array_type,
    ACTIONS(748), 18,
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
  [10920] = 9,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(722), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(716), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(724), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(356), 10,
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
  [10962] = 7,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(724), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(356), 15,
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
      anon_sym_PLUS_EQ,
  [11000] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(752), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11054] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(732), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_LBRACK,
    STATE(352), 1,
      sym__type,
    STATE(356), 1,
      sym_array_type,
    ACTIONS(734), 18,
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
  [11090] = 4,
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(364), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11122] = 13,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    ACTIONS(362), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 1,
      anon_sym_AMP,
    ACTIONS(720), 1,
      anon_sym_CARET,
    ACTIONS(726), 1,
      anon_sym_PIPE,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(722), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(716), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(724), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(728), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11172] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(706), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_LBRACK,
    STATE(309), 1,
      sym_array_type,
    STATE(397), 1,
      sym__type,
    ACTIONS(708), 18,
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
  [11208] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    ACTIONS(754), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym_arguments,
    STATE(228), 1,
      sym_block,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11264] = 6,
    ACTIONS(346), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(344), 18,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11300] = 13,
    ACTIONS(368), 1,
      anon_sym_SEMI,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 1,
      anon_sym_AMP,
    ACTIONS(720), 1,
      anon_sym_CARET,
    ACTIONS(726), 1,
      anon_sym_PIPE,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(722), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(716), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(724), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(728), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11350] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    STATE(121), 1,
      sym_arguments,
    STATE(413), 1,
      sym_block,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11406] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(706), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_LBRACK,
    STATE(309), 1,
      sym_array_type,
    STATE(432), 1,
      sym__type,
    ACTIONS(708), 18,
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
  [11442] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    STATE(61), 1,
      sym_block,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11498] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(572), 1,
      anon_sym_COLON,
    ACTIONS(404), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(406), 17,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [11530] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(502), 1,
      anon_sym_DOT_DOT,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(512), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    STATE(121), 1,
      sym_arguments,
    STATE(178), 1,
      sym_block,
    ACTIONS(506), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(510), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(626), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11586] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      anon_sym_COLON,
    ACTIONS(416), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(418), 17,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [11618] = 14,
    ACTIONS(462), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_for,
    ACTIONS(760), 1,
      anon_sym_DOT_DOT,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(766), 1,
      aux_sym_string_literal_token1,
    ACTIONS(770), 1,
      sym_float_literal,
    STATE(186), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(764), 3,
      sym_integer_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(240), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11670] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(706), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_LBRACK,
    STATE(309), 1,
      sym_array_type,
    STATE(440), 1,
      sym__type,
    ACTIONS(708), 18,
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
  [11706] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(706), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_LBRACK,
    STATE(309), 1,
      sym_array_type,
    STATE(418), 1,
      sym__type,
    ACTIONS(708), 18,
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
  [11742] = 3,
    ACTIONS(390), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(388), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11771] = 3,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(292), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11800] = 3,
    ACTIONS(418), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(416), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11829] = 3,
    ACTIONS(414), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(412), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11858] = 3,
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(296), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11887] = 3,
    ACTIONS(398), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(396), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11916] = 3,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(340), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11945] = 3,
    ACTIONS(386), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(384), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11974] = 3,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(392), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [12003] = 3,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(288), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [12032] = 3,
    ACTIONS(382), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(380), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [12061] = 3,
    ACTIONS(410), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(408), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [12090] = 3,
    ACTIONS(406), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(404), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [12119] = 3,
    ACTIONS(402), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(400), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [12148] = 3,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(328), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [12177] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(97), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12223] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(778), 1,
      anon_sym_DASH,
    STATE(54), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12269] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_for,
    ACTIONS(764), 1,
      sym_integer_literal,
    ACTIONS(780), 1,
      anon_sym_DOT_DOT,
    ACTIONS(782), 1,
      anon_sym_DASH,
    ACTIONS(784), 1,
      aux_sym_string_literal_token1,
    STATE(201), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(770), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(240), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12315] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(98), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12361] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(99), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12407] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(93), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12453] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(101), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12499] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(94), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12545] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(102), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12591] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(219), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12637] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(778), 1,
      anon_sym_DASH,
    STATE(48), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12683] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_for,
    ACTIONS(764), 1,
      sym_integer_literal,
    ACTIONS(780), 1,
      anon_sym_DOT_DOT,
    ACTIONS(782), 1,
      anon_sym_DASH,
    ACTIONS(784), 1,
      aux_sym_string_literal_token1,
    STATE(218), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(770), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(240), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12729] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(96), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12775] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_for,
    ACTIONS(764), 1,
      sym_integer_literal,
    ACTIONS(780), 1,
      anon_sym_DOT_DOT,
    ACTIONS(782), 1,
      anon_sym_DASH,
    ACTIONS(784), 1,
      aux_sym_string_literal_token1,
    STATE(214), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(770), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(240), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12821] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(786), 1,
      anon_sym_DASH,
    STATE(137), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(179), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(158), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12867] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(159), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12913] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(786), 1,
      anon_sym_DASH,
    STATE(129), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(179), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(158), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12959] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(786), 1,
      anon_sym_DASH,
    STATE(132), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(179), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(158), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13005] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(221), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13051] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(786), 1,
      anon_sym_DASH,
    STATE(133), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(179), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(158), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13097] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(786), 1,
      anon_sym_DASH,
    STATE(126), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(179), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(158), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13143] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(786), 1,
      anon_sym_DASH,
    STATE(131), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(179), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(158), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13189] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(216), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13235] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(786), 1,
      anon_sym_DASH,
    STATE(128), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(179), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(158), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13281] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(196), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13327] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(191), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13373] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(206), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13419] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(786), 1,
      anon_sym_DASH,
    STATE(145), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(179), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(158), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13465] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(786), 1,
      anon_sym_DASH,
    STATE(144), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(179), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(158), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13511] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(788), 1,
      sym_integer_literal,
    ACTIONS(790), 1,
      sym_float_literal,
    STATE(95), 1,
      sym__expression,
    ACTIONS(65), 2,
      sym_binary_literal,
      sym_char_literal,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13559] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(223), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13605] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(778), 1,
      anon_sym_DASH,
    STATE(47), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13651] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_for,
    ACTIONS(764), 1,
      sym_integer_literal,
    ACTIONS(780), 1,
      anon_sym_DOT_DOT,
    ACTIONS(782), 1,
      anon_sym_DASH,
    ACTIONS(784), 1,
      aux_sym_string_literal_token1,
    STATE(217), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(770), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(240), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13697] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(778), 1,
      anon_sym_DASH,
    STATE(49), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13743] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(187), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13789] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(778), 1,
      anon_sym_DASH,
    STATE(50), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13835] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(778), 1,
      anon_sym_DASH,
    STATE(51), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13881] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(149), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13927] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_for,
    ACTIONS(764), 1,
      sym_integer_literal,
    ACTIONS(780), 1,
      anon_sym_DOT_DOT,
    ACTIONS(782), 1,
      anon_sym_DASH,
    ACTIONS(784), 1,
      aux_sym_string_literal_token1,
    STATE(213), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(770), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(240), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13973] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_for,
    ACTIONS(764), 1,
      sym_integer_literal,
    ACTIONS(780), 1,
      anon_sym_DOT_DOT,
    ACTIONS(782), 1,
      anon_sym_DASH,
    ACTIONS(784), 1,
      aux_sym_string_literal_token1,
    STATE(210), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(770), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(240), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14019] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_for,
    ACTIONS(764), 1,
      sym_integer_literal,
    ACTIONS(780), 1,
      anon_sym_DOT_DOT,
    ACTIONS(782), 1,
      anon_sym_DASH,
    ACTIONS(784), 1,
      aux_sym_string_literal_token1,
    STATE(209), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(770), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(240), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14065] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_for,
    ACTIONS(764), 1,
      sym_integer_literal,
    ACTIONS(780), 1,
      anon_sym_DOT_DOT,
    ACTIONS(782), 1,
      anon_sym_DASH,
    ACTIONS(784), 1,
      aux_sym_string_literal_token1,
    STATE(184), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(770), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(240), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14111] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_for,
    ACTIONS(764), 1,
      sym_integer_literal,
    ACTIONS(780), 1,
      anon_sym_DOT_DOT,
    ACTIONS(782), 1,
      anon_sym_DASH,
    ACTIONS(784), 1,
      aux_sym_string_literal_token1,
    STATE(205), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(770), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(240), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14157] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_for,
    ACTIONS(764), 1,
      sym_integer_literal,
    ACTIONS(780), 1,
      anon_sym_DOT_DOT,
    ACTIONS(782), 1,
      anon_sym_DASH,
    ACTIONS(784), 1,
      aux_sym_string_literal_token1,
    STATE(203), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(770), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(240), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14203] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_for,
    ACTIONS(764), 1,
      sym_integer_literal,
    ACTIONS(780), 1,
      anon_sym_DOT_DOT,
    ACTIONS(782), 1,
      anon_sym_DASH,
    ACTIONS(784), 1,
      aux_sym_string_literal_token1,
    STATE(200), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(770), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(240), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14249] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_for,
    ACTIONS(764), 1,
      sym_integer_literal,
    ACTIONS(780), 1,
      anon_sym_DOT_DOT,
    ACTIONS(782), 1,
      anon_sym_DASH,
    ACTIONS(784), 1,
      aux_sym_string_literal_token1,
    STATE(198), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(770), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(240), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14295] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(778), 1,
      anon_sym_DASH,
    STATE(52), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14341] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(778), 1,
      anon_sym_DASH,
    STATE(53), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14387] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(778), 1,
      anon_sym_DASH,
    STATE(56), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14433] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(778), 1,
      anon_sym_DASH,
    STATE(55), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14479] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(778), 1,
      anon_sym_DASH,
    STATE(46), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14525] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_for,
    ACTIONS(764), 1,
      sym_integer_literal,
    ACTIONS(780), 1,
      anon_sym_DOT_DOT,
    ACTIONS(782), 1,
      anon_sym_DASH,
    ACTIONS(784), 1,
      aux_sym_string_literal_token1,
    STATE(195), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(770), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(240), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14571] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_for,
    ACTIONS(764), 1,
      sym_integer_literal,
    ACTIONS(780), 1,
      anon_sym_DOT_DOT,
    ACTIONS(782), 1,
      anon_sym_DASH,
    ACTIONS(784), 1,
      aux_sym_string_literal_token1,
    STATE(185), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(770), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(240), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14617] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(778), 1,
      anon_sym_DASH,
    STATE(44), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14663] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(778), 1,
      anon_sym_DASH,
    STATE(58), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14709] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(778), 1,
      anon_sym_DASH,
    STATE(40), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14755] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_for,
    ACTIONS(764), 1,
      sym_integer_literal,
    ACTIONS(780), 1,
      anon_sym_DOT_DOT,
    ACTIONS(782), 1,
      anon_sym_DASH,
    ACTIONS(784), 1,
      aux_sym_string_literal_token1,
    STATE(199), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(230), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(770), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(240), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14801] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_for,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      aux_sym_string_literal_token1,
    ACTIONS(772), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    STATE(95), 1,
      sym__expression,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(65), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(114), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14847] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_for,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(205), 1,
      aux_sym_string_literal_token1,
    ACTIONS(778), 1,
      anon_sym_DASH,
    STATE(57), 1,
      sym__expression,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(203), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(65), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14893] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      anon_sym_BSLASHn,
    ACTIONS(792), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(429), 1,
      sym__field_identifier,
    STATE(312), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [14916] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(798), 1,
      anon_sym_LPAREN,
    ACTIONS(800), 1,
      anon_sym_EQ,
    STATE(338), 2,
      sym_field_declaration_list,
      sym_ordered_field_declaration_list,
    ACTIONS(796), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [14935] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(802), 1,
      sym_identifier,
    ACTIONS(804), 1,
      anon_sym_BSLASHn,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
    STATE(376), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(316), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14955] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(802), 1,
      sym_identifier,
    ACTIONS(804), 1,
      anon_sym_BSLASHn,
    ACTIONS(808), 1,
      anon_sym_RBRACE,
    STATE(375), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(308), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14975] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(802), 1,
      sym_identifier,
    ACTIONS(804), 1,
      anon_sym_BSLASHn,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
    STATE(370), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(304), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14995] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      sym_identifier,
    STATE(429), 1,
      sym__field_identifier,
    ACTIONS(812), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(313), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [15013] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(802), 1,
      sym_identifier,
    ACTIONS(804), 1,
      anon_sym_BSLASHn,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(316), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15033] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [15045] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(488), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [15057] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(492), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [15069] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(816), 1,
      sym_identifier,
    STATE(429), 1,
      sym__field_identifier,
    ACTIONS(819), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(312), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [15087] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      sym_identifier,
    STATE(429), 1,
      sym__field_identifier,
    ACTIONS(821), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(312), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [15105] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(802), 1,
      sym_identifier,
    ACTIONS(823), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(317), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15120] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
    ACTIONS(825), 2,
      anon_sym_BSLASHn,
      sym_identifier,
  [15137] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(835), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(316), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15152] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(802), 1,
      sym_identifier,
    ACTIONS(837), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(316), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15167] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(528), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [15179] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(570), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [15191] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 1,
      anon_sym_DQUOTE,
    STATE(321), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(841), 2,
      sym__string_content,
      sym_escape_sequence,
  [15205] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 1,
      anon_sym_DQUOTE,
    STATE(324), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(845), 2,
      sym__string_content,
      sym_escape_sequence,
  [15219] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 1,
      sym_identifier,
    ACTIONS(849), 1,
      anon_sym_LBRACE,
    STATE(388), 1,
      sym_enum_variant_list,
    STATE(398), 1,
      sym_enum_integral_type,
  [15235] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(851), 1,
      anon_sym_DQUOTE,
    STATE(324), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(845), 2,
      sym__string_content,
      sym_escape_sequence,
  [15249] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    STATE(324), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(855), 2,
      sym__string_content,
      sym_escape_sequence,
  [15263] = 5,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    ACTIONS(554), 1,
      anon_sym_LF,
    ACTIONS(858), 1,
      anon_sym_else,
    STATE(414), 1,
      sym_else_clause,
  [15279] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(860), 1,
      anon_sym_DQUOTE,
    STATE(343), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(862), 2,
      sym__string_content,
      sym_escape_sequence,
  [15293] = 5,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(544), 1,
      anon_sym_SEMI,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(864), 1,
      anon_sym_COLON,
    ACTIONS(866), 1,
      anon_sym_EQ,
  [15309] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(868), 1,
      anon_sym_if,
    STATE(160), 2,
      sym_block,
      sym_if_statement,
  [15323] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(849), 1,
      anon_sym_LBRACE,
    ACTIONS(870), 1,
      sym_identifier,
    STATE(381), 1,
      sym_enum_integral_type,
    STATE(404), 1,
      sym_enum_variant_list,
  [15339] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(872), 1,
      anon_sym_DQUOTE,
    STATE(324), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(845), 2,
      sym__string_content,
      sym_escape_sequence,
  [15353] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      anon_sym_LF,
    ACTIONS(558), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [15365] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(874), 1,
      anon_sym_DQUOTE,
    STATE(323), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(876), 2,
      sym__string_content,
      sym_escape_sequence,
  [15379] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(878), 1,
      sym_identifier,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_enum_variant_list,
    STATE(384), 1,
      sym_enum_integral_type,
  [15395] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(882), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15405] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(884), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15415] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(886), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15425] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(889), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15435] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(893), 1,
      anon_sym_EQ,
    ACTIONS(891), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15447] = 5,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      anon_sym_SEMI,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(895), 1,
      anon_sym_COLON,
    ACTIONS(897), 1,
      anon_sym_EQ,
  [15463] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(899), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
      sym_identifier,
  [15473] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(901), 1,
      anon_sym_if,
    STATE(396), 2,
      sym_block,
      sym_if_statement,
  [15487] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(903), 1,
      anon_sym_DQUOTE,
    STATE(330), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(905), 2,
      sym__string_content,
      sym_escape_sequence,
  [15501] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(907), 1,
      anon_sym_DQUOTE,
    STATE(324), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(845), 2,
      sym__string_content,
      sym_escape_sequence,
  [15515] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(909), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15525] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    ACTIONS(911), 1,
      sym_identifier,
    STATE(163), 1,
      sym_enum_variant_list,
    STATE(409), 1,
      sym_enum_integral_type,
  [15541] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(534), 1,
      anon_sym_LF,
    ACTIONS(532), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [15553] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(913), 1,
      anon_sym_COMMA,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      aux_sym_parameters_repeat1,
  [15566] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_arguments_repeat2,
  [15579] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(837), 1,
      anon_sym_RBRACE,
    ACTIONS(920), 1,
      anon_sym_BSLASHn,
    STATE(349), 1,
      aux_sym_enum_variant_list_repeat2,
  [15592] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(804), 1,
      anon_sym_BSLASHn,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
    STATE(349), 1,
      aux_sym_enum_variant_list_repeat2,
  [15605] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(849), 1,
      anon_sym_LBRACE,
    ACTIONS(925), 1,
      anon_sym_COLON,
    STATE(406), 1,
      sym_enum_variant_list,
  [15618] = 4,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(600), 1,
      anon_sym_SEMI,
    ACTIONS(602), 1,
      anon_sym_LF,
    ACTIONS(927), 1,
      anon_sym_EQ,
  [15631] = 4,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(594), 1,
      anon_sym_SEMI,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(929), 1,
      anon_sym_EQ,
  [15644] = 3,
    ACTIONS(488), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(486), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [15655] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      anon_sym_BSLASHn,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      aux_sym_field_declaration_list_repeat2,
  [15668] = 3,
    ACTIONS(500), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(498), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [15679] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(849), 1,
      anon_sym_LBRACE,
    ACTIONS(925), 1,
      anon_sym_COLON,
    STATE(387), 1,
      sym_enum_variant_list,
  [15692] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    ACTIONS(925), 1,
      anon_sym_COLON,
    STATE(168), 1,
      sym_enum_variant_list,
  [15705] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(933), 1,
      anon_sym_LBRACE,
    ACTIONS(935), 1,
      anon_sym_DASH_GT,
    STATE(136), 1,
      sym_block,
  [15718] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_arguments_repeat2,
  [15731] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_arguments_repeat2,
  [15744] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(939), 1,
      anon_sym_COMMA,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
  [15757] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      anon_sym_BSLASHn,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      aux_sym_field_declaration_list_repeat2,
  [15770] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_arguments_repeat2,
  [15783] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_arguments_repeat2,
  [15796] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_parameters_repeat1,
  [15809] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
  [15822] = 3,
    ACTIONS(492), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(490), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [15833] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
    ACTIONS(950), 1,
      anon_sym_BSLASHn,
    STATE(369), 1,
      aux_sym_field_declaration_list_repeat2,
  [15846] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(804), 1,
      anon_sym_BSLASHn,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
    STATE(349), 1,
      aux_sym_enum_variant_list_repeat2,
  [15859] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_arguments_repeat2,
  [15872] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      sym_identifier,
    STATE(399), 1,
      sym_field_declaration,
    STATE(429), 1,
      sym__field_identifier,
  [15885] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    ACTIONS(925), 1,
      anon_sym_COLON,
    STATE(176), 1,
      sym_enum_variant_list,
  [15898] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(674), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_arguments_repeat2,
  [15911] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(804), 1,
      anon_sym_BSLASHn,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
    STATE(349), 1,
      aux_sym_enum_variant_list_repeat2,
  [15924] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(804), 1,
      anon_sym_BSLASHn,
    ACTIONS(956), 1,
      anon_sym_RBRACE,
    STATE(349), 1,
      aux_sym_enum_variant_list_repeat2,
  [15937] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    ACTIONS(960), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_parameters_repeat1,
  [15950] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(962), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_arguments_repeat2,
  [15963] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_arguments_repeat2,
  [15976] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(964), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [15984] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(849), 1,
      anon_sym_LBRACE,
    STATE(385), 1,
      sym_enum_variant_list,
  [15994] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(966), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [16002] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(968), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [16010] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym_enum_variant_list,
  [16020] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(698), 1,
      anon_sym_SEMI,
    ACTIONS(700), 1,
      anon_sym_LF,
  [16030] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(682), 1,
      anon_sym_SEMI,
    ACTIONS(684), 1,
      anon_sym_LF,
  [16040] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      anon_sym_SEMI,
    ACTIONS(696), 1,
      anon_sym_LF,
  [16050] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(658), 1,
      anon_sym_SEMI,
    ACTIONS(660), 1,
      anon_sym_LF,
  [16060] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(678), 1,
      anon_sym_SEMI,
    ACTIONS(680), 1,
      anon_sym_LF,
  [16070] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(572), 2,
      anon_sym_in,
      anon_sym_COLON,
  [16078] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 2,
      sym_float_literal,
      sym_integer_literal,
  [16086] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(530), 2,
      anon_sym_in,
      anon_sym_COLON,
  [16094] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(972), 2,
      sym_float_literal,
      sym_integer_literal,
  [16102] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(560), 2,
      anon_sym_in,
      anon_sym_COLON,
  [16110] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(916), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16118] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(652), 1,
      anon_sym_SEMI,
    ACTIONS(654), 1,
      anon_sym_LF,
  [16128] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(933), 1,
      anon_sym_LBRACE,
    STATE(143), 1,
      sym_block,
  [16138] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(849), 1,
      anon_sym_LBRACE,
    STATE(408), 1,
      sym_enum_variant_list,
  [16148] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(942), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16156] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(974), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [16164] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(976), 2,
      sym_float_literal,
      sym_integer_literal,
  [16172] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(702), 1,
      anon_sym_SEMI,
    ACTIONS(704), 1,
      anon_sym_LF,
  [16182] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(978), 1,
      anon_sym_LPAREN,
    STATE(359), 1,
      sym_parameters,
  [16192] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(636), 1,
      anon_sym_SEMI,
    ACTIONS(638), 1,
      anon_sym_LF,
  [16202] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(614), 1,
      anon_sym_SEMI,
  [16212] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(670), 1,
      anon_sym_SEMI,
    ACTIONS(672), 1,
      anon_sym_LF,
  [16222] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_SEMI,
    ACTIONS(630), 1,
      anon_sym_LF,
  [16232] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(666), 1,
      anon_sym_SEMI,
    ACTIONS(668), 1,
      anon_sym_LF,
  [16242] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      sym_enum_variant_list,
  [16252] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16260] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(534), 2,
      anon_sym_in,
      anon_sym_COLON,
  [16268] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(496), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16276] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(632), 1,
      anon_sym_SEMI,
    ACTIONS(634), 1,
      anon_sym_LF,
  [16286] = 3,
    ACTIONS(526), 1,
      sym_line_comment,
    ACTIONS(686), 1,
      anon_sym_SEMI,
    ACTIONS(688), 1,
      anon_sym_LF,
  [16296] = 3,
    ACTIONS(368), 1,
      anon_sym_SEMI,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
  [16306] = 3,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    ACTIONS(362), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      sym_line_comment,
  [16316] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(980), 1,
      anon_sym_COLON,
  [16323] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(982), 1,
      anon_sym_RBRACK,
  [16330] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(984), 1,
      sym_identifier,
  [16337] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
  [16344] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(986), 1,
      anon_sym_LBRACE,
  [16351] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
  [16358] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(988), 1,
      anon_sym_COLON,
  [16365] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(990), 1,
      anon_sym_enum,
  [16372] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(960), 1,
      anon_sym_RPAREN,
  [16379] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(992), 1,
      anon_sym_COLON,
  [16386] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(994), 1,
      ts_builtin_sym_end,
  [16393] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      anon_sym_COLON,
  [16400] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(998), 1,
      anon_sym_COLON,
  [16407] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1000), 1,
      anon_sym_RBRACK,
  [16414] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
  [16421] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_RBRACK,
  [16428] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1004), 1,
      anon_sym_enum,
  [16435] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
  [16442] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
  [16449] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1008), 1,
      anon_sym_in,
  [16456] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1010), 1,
      anon_sym_COLON,
  [16463] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1012), 1,
      anon_sym_in,
  [16470] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1014), 1,
      anon_sym_in,
  [16477] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1016), 1,
      anon_sym_RBRACK,
  [16484] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1018), 1,
      anon_sym_in,
  [16491] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1020), 1,
      anon_sym_enum,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 186,
  [SMALL_STATE(5)] = 291,
  [SMALL_STATE(6)] = 396,
  [SMALL_STATE(7)] = 489,
  [SMALL_STATE(8)] = 582,
  [SMALL_STATE(9)] = 672,
  [SMALL_STATE(10)] = 762,
  [SMALL_STATE(11)] = 852,
  [SMALL_STATE(12)] = 942,
  [SMALL_STATE(13)] = 1032,
  [SMALL_STATE(14)] = 1122,
  [SMALL_STATE(15)] = 1212,
  [SMALL_STATE(16)] = 1302,
  [SMALL_STATE(17)] = 1392,
  [SMALL_STATE(18)] = 1482,
  [SMALL_STATE(19)] = 1572,
  [SMALL_STATE(20)] = 1662,
  [SMALL_STATE(21)] = 1749,
  [SMALL_STATE(22)] = 1836,
  [SMALL_STATE(23)] = 1923,
  [SMALL_STATE(24)] = 2010,
  [SMALL_STATE(25)] = 2097,
  [SMALL_STATE(26)] = 2184,
  [SMALL_STATE(27)] = 2282,
  [SMALL_STATE(28)] = 2380,
  [SMALL_STATE(29)] = 2478,
  [SMALL_STATE(30)] = 2576,
  [SMALL_STATE(31)] = 2674,
  [SMALL_STATE(32)] = 2772,
  [SMALL_STATE(33)] = 2870,
  [SMALL_STATE(34)] = 2968,
  [SMALL_STATE(35)] = 3066,
  [SMALL_STATE(36)] = 3164,
  [SMALL_STATE(37)] = 3262,
  [SMALL_STATE(38)] = 3312,
  [SMALL_STATE(39)] = 3362,
  [SMALL_STATE(40)] = 3412,
  [SMALL_STATE(41)] = 3487,
  [SMALL_STATE(42)] = 3536,
  [SMALL_STATE(43)] = 3615,
  [SMALL_STATE(44)] = 3664,
  [SMALL_STATE(45)] = 3719,
  [SMALL_STATE(46)] = 3794,
  [SMALL_STATE(47)] = 3869,
  [SMALL_STATE(48)] = 3924,
  [SMALL_STATE(49)] = 3999,
  [SMALL_STATE(50)] = 4062,
  [SMALL_STATE(51)] = 4133,
  [SMALL_STATE(52)] = 4200,
  [SMALL_STATE(53)] = 4269,
  [SMALL_STATE(54)] = 4334,
  [SMALL_STATE(55)] = 4393,
  [SMALL_STATE(56)] = 4444,
  [SMALL_STATE(57)] = 4519,
  [SMALL_STATE(58)] = 4594,
  [SMALL_STATE(59)] = 4669,
  [SMALL_STATE(60)] = 4717,
  [SMALL_STATE(61)] = 4765,
  [SMALL_STATE(62)] = 4813,
  [SMALL_STATE(63)] = 4861,
  [SMALL_STATE(64)] = 4909,
  [SMALL_STATE(65)] = 4957,
  [SMALL_STATE(66)] = 5005,
  [SMALL_STATE(67)] = 5053,
  [SMALL_STATE(68)] = 5101,
  [SMALL_STATE(69)] = 5149,
  [SMALL_STATE(70)] = 5221,
  [SMALL_STATE(71)] = 5289,
  [SMALL_STATE(72)] = 5354,
  [SMALL_STATE(73)] = 5419,
  [SMALL_STATE(74)] = 5481,
  [SMALL_STATE(75)] = 5543,
  [SMALL_STATE(76)] = 5596,
  [SMALL_STATE(77)] = 5649,
  [SMALL_STATE(78)] = 5702,
  [SMALL_STATE(79)] = 5755,
  [SMALL_STATE(80)] = 5808,
  [SMALL_STATE(81)] = 5861,
  [SMALL_STATE(82)] = 5914,
  [SMALL_STATE(83)] = 5967,
  [SMALL_STATE(84)] = 6020,
  [SMALL_STATE(85)] = 6073,
  [SMALL_STATE(86)] = 6111,
  [SMALL_STATE(87)] = 6149,
  [SMALL_STATE(88)] = 6187,
  [SMALL_STATE(89)] = 6225,
  [SMALL_STATE(90)] = 6263,
  [SMALL_STATE(91)] = 6298,
  [SMALL_STATE(92)] = 6333,
  [SMALL_STATE(93)] = 6368,
  [SMALL_STATE(94)] = 6420,
  [SMALL_STATE(95)] = 6468,
  [SMALL_STATE(96)] = 6508,
  [SMALL_STATE(97)] = 6544,
  [SMALL_STATE(98)] = 6588,
  [SMALL_STATE(99)] = 6638,
  [SMALL_STATE(100)] = 6692,
  [SMALL_STATE(101)] = 6726,
  [SMALL_STATE(102)] = 6782,
  [SMALL_STATE(103)] = 6822,
  [SMALL_STATE(104)] = 6855,
  [SMALL_STATE(105)] = 6888,
  [SMALL_STATE(106)] = 6921,
  [SMALL_STATE(107)] = 6954,
  [SMALL_STATE(108)] = 6987,
  [SMALL_STATE(109)] = 7020,
  [SMALL_STATE(110)] = 7053,
  [SMALL_STATE(111)] = 7086,
  [SMALL_STATE(112)] = 7119,
  [SMALL_STATE(113)] = 7152,
  [SMALL_STATE(114)] = 7185,
  [SMALL_STATE(115)] = 7218,
  [SMALL_STATE(116)] = 7251,
  [SMALL_STATE(117)] = 7296,
  [SMALL_STATE(118)] = 7333,
  [SMALL_STATE(119)] = 7370,
  [SMALL_STATE(120)] = 7403,
  [SMALL_STATE(121)] = 7440,
  [SMALL_STATE(122)] = 7473,
  [SMALL_STATE(123)] = 7506,
  [SMALL_STATE(124)] = 7539,
  [SMALL_STATE(125)] = 7572,
  [SMALL_STATE(126)] = 7605,
  [SMALL_STATE(127)] = 7651,
  [SMALL_STATE(128)] = 7683,
  [SMALL_STATE(129)] = 7725,
  [SMALL_STATE(130)] = 7765,
  [SMALL_STATE(131)] = 7797,
  [SMALL_STATE(132)] = 7847,
  [SMALL_STATE(133)] = 7891,
  [SMALL_STATE(134)] = 7939,
  [SMALL_STATE(135)] = 7971,
  [SMALL_STATE(136)] = 8003,
  [SMALL_STATE(137)] = 8035,
  [SMALL_STATE(138)] = 8069,
  [SMALL_STATE(139)] = 8101,
  [SMALL_STATE(140)] = 8133,
  [SMALL_STATE(141)] = 8167,
  [SMALL_STATE(142)] = 8201,
  [SMALL_STATE(143)] = 8233,
  [SMALL_STATE(144)] = 8265,
  [SMALL_STATE(145)] = 8303,
  [SMALL_STATE(146)] = 8341,
  [SMALL_STATE(147)] = 8373,
  [SMALL_STATE(148)] = 8429,
  [SMALL_STATE(149)] = 8460,
  [SMALL_STATE(150)] = 8515,
  [SMALL_STATE(151)] = 8546,
  [SMALL_STATE(152)] = 8577,
  [SMALL_STATE(153)] = 8608,
  [SMALL_STATE(154)] = 8639,
  [SMALL_STATE(155)] = 8670,
  [SMALL_STATE(156)] = 8729,
  [SMALL_STATE(157)] = 8788,
  [SMALL_STATE(158)] = 8847,
  [SMALL_STATE(159)] = 8878,
  [SMALL_STATE(160)] = 8933,
  [SMALL_STATE(161)] = 8964,
  [SMALL_STATE(162)] = 9023,
  [SMALL_STATE(163)] = 9054,
  [SMALL_STATE(164)] = 9085,
  [SMALL_STATE(165)] = 9144,
  [SMALL_STATE(166)] = 9175,
  [SMALL_STATE(167)] = 9206,
  [SMALL_STATE(168)] = 9237,
  [SMALL_STATE(169)] = 9268,
  [SMALL_STATE(170)] = 9327,
  [SMALL_STATE(171)] = 9386,
  [SMALL_STATE(172)] = 9417,
  [SMALL_STATE(173)] = 9448,
  [SMALL_STATE(174)] = 9479,
  [SMALL_STATE(175)] = 9510,
  [SMALL_STATE(176)] = 9569,
  [SMALL_STATE(177)] = 9600,
  [SMALL_STATE(178)] = 9631,
  [SMALL_STATE(179)] = 9662,
  [SMALL_STATE(180)] = 9693,
  [SMALL_STATE(181)] = 9724,
  [SMALL_STATE(182)] = 9755,
  [SMALL_STATE(183)] = 9786,
  [SMALL_STATE(184)] = 9822,
  [SMALL_STATE(185)] = 9868,
  [SMALL_STATE(186)] = 9918,
  [SMALL_STATE(187)] = 9968,
  [SMALL_STATE(188)] = 10024,
  [SMALL_STATE(189)] = 10078,
  [SMALL_STATE(190)] = 10114,
  [SMALL_STATE(191)] = 10150,
  [SMALL_STATE(192)] = 10206,
  [SMALL_STATE(193)] = 10242,
  [SMALL_STATE(194)] = 10278,
  [SMALL_STATE(195)] = 10314,
  [SMALL_STATE(196)] = 10364,
  [SMALL_STATE(197)] = 10420,
  [SMALL_STATE(198)] = 10456,
  [SMALL_STATE(199)] = 10492,
  [SMALL_STATE(200)] = 10542,
  [SMALL_STATE(201)] = 10582,
  [SMALL_STATE(202)] = 10632,
  [SMALL_STATE(203)] = 10668,
  [SMALL_STATE(204)] = 10716,
  [SMALL_STATE(205)] = 10752,
  [SMALL_STATE(206)] = 10796,
  [SMALL_STATE(207)] = 10852,
  [SMALL_STATE(208)] = 10884,
  [SMALL_STATE(209)] = 10920,
  [SMALL_STATE(210)] = 10962,
  [SMALL_STATE(211)] = 11000,
  [SMALL_STATE(212)] = 11054,
  [SMALL_STATE(213)] = 11090,
  [SMALL_STATE(214)] = 11122,
  [SMALL_STATE(215)] = 11172,
  [SMALL_STATE(216)] = 11208,
  [SMALL_STATE(217)] = 11264,
  [SMALL_STATE(218)] = 11300,
  [SMALL_STATE(219)] = 11350,
  [SMALL_STATE(220)] = 11406,
  [SMALL_STATE(221)] = 11442,
  [SMALL_STATE(222)] = 11498,
  [SMALL_STATE(223)] = 11530,
  [SMALL_STATE(224)] = 11586,
  [SMALL_STATE(225)] = 11618,
  [SMALL_STATE(226)] = 11670,
  [SMALL_STATE(227)] = 11706,
  [SMALL_STATE(228)] = 11742,
  [SMALL_STATE(229)] = 11771,
  [SMALL_STATE(230)] = 11800,
  [SMALL_STATE(231)] = 11829,
  [SMALL_STATE(232)] = 11858,
  [SMALL_STATE(233)] = 11887,
  [SMALL_STATE(234)] = 11916,
  [SMALL_STATE(235)] = 11945,
  [SMALL_STATE(236)] = 11974,
  [SMALL_STATE(237)] = 12003,
  [SMALL_STATE(238)] = 12032,
  [SMALL_STATE(239)] = 12061,
  [SMALL_STATE(240)] = 12090,
  [SMALL_STATE(241)] = 12119,
  [SMALL_STATE(242)] = 12148,
  [SMALL_STATE(243)] = 12177,
  [SMALL_STATE(244)] = 12223,
  [SMALL_STATE(245)] = 12269,
  [SMALL_STATE(246)] = 12315,
  [SMALL_STATE(247)] = 12361,
  [SMALL_STATE(248)] = 12407,
  [SMALL_STATE(249)] = 12453,
  [SMALL_STATE(250)] = 12499,
  [SMALL_STATE(251)] = 12545,
  [SMALL_STATE(252)] = 12591,
  [SMALL_STATE(253)] = 12637,
  [SMALL_STATE(254)] = 12683,
  [SMALL_STATE(255)] = 12729,
  [SMALL_STATE(256)] = 12775,
  [SMALL_STATE(257)] = 12821,
  [SMALL_STATE(258)] = 12867,
  [SMALL_STATE(259)] = 12913,
  [SMALL_STATE(260)] = 12959,
  [SMALL_STATE(261)] = 13005,
  [SMALL_STATE(262)] = 13051,
  [SMALL_STATE(263)] = 13097,
  [SMALL_STATE(264)] = 13143,
  [SMALL_STATE(265)] = 13189,
  [SMALL_STATE(266)] = 13235,
  [SMALL_STATE(267)] = 13281,
  [SMALL_STATE(268)] = 13327,
  [SMALL_STATE(269)] = 13373,
  [SMALL_STATE(270)] = 13419,
  [SMALL_STATE(271)] = 13465,
  [SMALL_STATE(272)] = 13511,
  [SMALL_STATE(273)] = 13559,
  [SMALL_STATE(274)] = 13605,
  [SMALL_STATE(275)] = 13651,
  [SMALL_STATE(276)] = 13697,
  [SMALL_STATE(277)] = 13743,
  [SMALL_STATE(278)] = 13789,
  [SMALL_STATE(279)] = 13835,
  [SMALL_STATE(280)] = 13881,
  [SMALL_STATE(281)] = 13927,
  [SMALL_STATE(282)] = 13973,
  [SMALL_STATE(283)] = 14019,
  [SMALL_STATE(284)] = 14065,
  [SMALL_STATE(285)] = 14111,
  [SMALL_STATE(286)] = 14157,
  [SMALL_STATE(287)] = 14203,
  [SMALL_STATE(288)] = 14249,
  [SMALL_STATE(289)] = 14295,
  [SMALL_STATE(290)] = 14341,
  [SMALL_STATE(291)] = 14387,
  [SMALL_STATE(292)] = 14433,
  [SMALL_STATE(293)] = 14479,
  [SMALL_STATE(294)] = 14525,
  [SMALL_STATE(295)] = 14571,
  [SMALL_STATE(296)] = 14617,
  [SMALL_STATE(297)] = 14663,
  [SMALL_STATE(298)] = 14709,
  [SMALL_STATE(299)] = 14755,
  [SMALL_STATE(300)] = 14801,
  [SMALL_STATE(301)] = 14847,
  [SMALL_STATE(302)] = 14893,
  [SMALL_STATE(303)] = 14916,
  [SMALL_STATE(304)] = 14935,
  [SMALL_STATE(305)] = 14955,
  [SMALL_STATE(306)] = 14975,
  [SMALL_STATE(307)] = 14995,
  [SMALL_STATE(308)] = 15013,
  [SMALL_STATE(309)] = 15033,
  [SMALL_STATE(310)] = 15045,
  [SMALL_STATE(311)] = 15057,
  [SMALL_STATE(312)] = 15069,
  [SMALL_STATE(313)] = 15087,
  [SMALL_STATE(314)] = 15105,
  [SMALL_STATE(315)] = 15120,
  [SMALL_STATE(316)] = 15137,
  [SMALL_STATE(317)] = 15152,
  [SMALL_STATE(318)] = 15167,
  [SMALL_STATE(319)] = 15179,
  [SMALL_STATE(320)] = 15191,
  [SMALL_STATE(321)] = 15205,
  [SMALL_STATE(322)] = 15219,
  [SMALL_STATE(323)] = 15235,
  [SMALL_STATE(324)] = 15249,
  [SMALL_STATE(325)] = 15263,
  [SMALL_STATE(326)] = 15279,
  [SMALL_STATE(327)] = 15293,
  [SMALL_STATE(328)] = 15309,
  [SMALL_STATE(329)] = 15323,
  [SMALL_STATE(330)] = 15339,
  [SMALL_STATE(331)] = 15353,
  [SMALL_STATE(332)] = 15365,
  [SMALL_STATE(333)] = 15379,
  [SMALL_STATE(334)] = 15395,
  [SMALL_STATE(335)] = 15405,
  [SMALL_STATE(336)] = 15415,
  [SMALL_STATE(337)] = 15425,
  [SMALL_STATE(338)] = 15435,
  [SMALL_STATE(339)] = 15447,
  [SMALL_STATE(340)] = 15463,
  [SMALL_STATE(341)] = 15473,
  [SMALL_STATE(342)] = 15487,
  [SMALL_STATE(343)] = 15501,
  [SMALL_STATE(344)] = 15515,
  [SMALL_STATE(345)] = 15525,
  [SMALL_STATE(346)] = 15541,
  [SMALL_STATE(347)] = 15553,
  [SMALL_STATE(348)] = 15566,
  [SMALL_STATE(349)] = 15579,
  [SMALL_STATE(350)] = 15592,
  [SMALL_STATE(351)] = 15605,
  [SMALL_STATE(352)] = 15618,
  [SMALL_STATE(353)] = 15631,
  [SMALL_STATE(354)] = 15644,
  [SMALL_STATE(355)] = 15655,
  [SMALL_STATE(356)] = 15668,
  [SMALL_STATE(357)] = 15679,
  [SMALL_STATE(358)] = 15692,
  [SMALL_STATE(359)] = 15705,
  [SMALL_STATE(360)] = 15718,
  [SMALL_STATE(361)] = 15731,
  [SMALL_STATE(362)] = 15744,
  [SMALL_STATE(363)] = 15757,
  [SMALL_STATE(364)] = 15770,
  [SMALL_STATE(365)] = 15783,
  [SMALL_STATE(366)] = 15796,
  [SMALL_STATE(367)] = 15809,
  [SMALL_STATE(368)] = 15822,
  [SMALL_STATE(369)] = 15833,
  [SMALL_STATE(370)] = 15846,
  [SMALL_STATE(371)] = 15859,
  [SMALL_STATE(372)] = 15872,
  [SMALL_STATE(373)] = 15885,
  [SMALL_STATE(374)] = 15898,
  [SMALL_STATE(375)] = 15911,
  [SMALL_STATE(376)] = 15924,
  [SMALL_STATE(377)] = 15937,
  [SMALL_STATE(378)] = 15950,
  [SMALL_STATE(379)] = 15963,
  [SMALL_STATE(380)] = 15976,
  [SMALL_STATE(381)] = 15984,
  [SMALL_STATE(382)] = 15994,
  [SMALL_STATE(383)] = 16002,
  [SMALL_STATE(384)] = 16010,
  [SMALL_STATE(385)] = 16020,
  [SMALL_STATE(386)] = 16030,
  [SMALL_STATE(387)] = 16040,
  [SMALL_STATE(388)] = 16050,
  [SMALL_STATE(389)] = 16060,
  [SMALL_STATE(390)] = 16070,
  [SMALL_STATE(391)] = 16078,
  [SMALL_STATE(392)] = 16086,
  [SMALL_STATE(393)] = 16094,
  [SMALL_STATE(394)] = 16102,
  [SMALL_STATE(395)] = 16110,
  [SMALL_STATE(396)] = 16118,
  [SMALL_STATE(397)] = 16128,
  [SMALL_STATE(398)] = 16138,
  [SMALL_STATE(399)] = 16148,
  [SMALL_STATE(400)] = 16156,
  [SMALL_STATE(401)] = 16164,
  [SMALL_STATE(402)] = 16172,
  [SMALL_STATE(403)] = 16182,
  [SMALL_STATE(404)] = 16192,
  [SMALL_STATE(405)] = 16202,
  [SMALL_STATE(406)] = 16212,
  [SMALL_STATE(407)] = 16222,
  [SMALL_STATE(408)] = 16232,
  [SMALL_STATE(409)] = 16242,
  [SMALL_STATE(410)] = 16252,
  [SMALL_STATE(411)] = 16260,
  [SMALL_STATE(412)] = 16268,
  [SMALL_STATE(413)] = 16276,
  [SMALL_STATE(414)] = 16286,
  [SMALL_STATE(415)] = 16296,
  [SMALL_STATE(416)] = 16306,
  [SMALL_STATE(417)] = 16316,
  [SMALL_STATE(418)] = 16323,
  [SMALL_STATE(419)] = 16330,
  [SMALL_STATE(420)] = 16337,
  [SMALL_STATE(421)] = 16344,
  [SMALL_STATE(422)] = 16351,
  [SMALL_STATE(423)] = 16358,
  [SMALL_STATE(424)] = 16365,
  [SMALL_STATE(425)] = 16372,
  [SMALL_STATE(426)] = 16379,
  [SMALL_STATE(427)] = 16386,
  [SMALL_STATE(428)] = 16393,
  [SMALL_STATE(429)] = 16400,
  [SMALL_STATE(430)] = 16407,
  [SMALL_STATE(431)] = 16414,
  [SMALL_STATE(432)] = 16421,
  [SMALL_STATE(433)] = 16428,
  [SMALL_STATE(434)] = 16435,
  [SMALL_STATE(435)] = 16442,
  [SMALL_STATE(436)] = 16449,
  [SMALL_STATE(437)] = 16456,
  [SMALL_STATE(438)] = 16463,
  [SMALL_STATE(439)] = 16470,
  [SMALL_STATE(440)] = 16477,
  [SMALL_STATE(441)] = 16484,
  [SMALL_STATE(442)] = 16491,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(254),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(256),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(389),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(442),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(322),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(270),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(326),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(419),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(277),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(123),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(269),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(291),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(253),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(171),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(76),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(442),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(345),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(35),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(296),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(332),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(268),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 25),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 25),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 6, .production_id = 25),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 6, .production_id = 25),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement_statement, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement_statement, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment_statement, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment_statement, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 4, .production_id = 14),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 4, .production_id = 14),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 14),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 14),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 5, .production_id = 20),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 5, .production_id = 20),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 6),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 6),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 5),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 5),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(390),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(392),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(100),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(391),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(394),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(342),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(394),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(90),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3, .production_id = 23),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 23),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, .production_id = 12),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 12),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 24),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 24),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 4, .production_id = 13),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 13),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_specifier, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_specifier, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_literal, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_literal, 2),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 9),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 9),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_pattern, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_pattern, 1),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 2, .production_id = 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 2, .production_id = 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 16),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 16),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 13),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 13),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 4, .production_id = 13),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 4, .production_id = 13),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 27),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 27),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 26),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 2),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 5),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 5),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 11),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 11),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 22),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 2, .production_id = 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 2, .production_id = 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 8),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 8),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 7),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 7),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 3),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 3),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 17),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 17),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 18),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 18),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 19),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 19),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 4),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 4),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 3),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, .production_id = 6),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(428),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 1),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1), SHIFT(335),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2), SHIFT_REPEAT(303),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(324),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 4),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 3),
  [886] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_field_declaration_list, 2), REDUCE(sym_ordered_field_declaration_list, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 15),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 28),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [913] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(73),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [920] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2), SHIFT_REPEAT(314),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [939] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_field_declaration_list_repeat1, 2), SHIFT_REPEAT(372),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_field_declaration_list_repeat1, 2),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [950] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2), SHIFT_REPEAT(307),
  [953] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(24),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_integral_type, 3),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [994] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 21),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boxed_modifier, 1),
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
