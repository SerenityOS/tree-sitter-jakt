#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 449
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 2
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 30

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
  anon_sym_COLON = 14,
  anon_sym_u8 = 15,
  anon_sym_i8 = 16,
  anon_sym_u16 = 17,
  anon_sym_i16 = 18,
  anon_sym_u32 = 19,
  anon_sym_i32 = 20,
  anon_sym_u64 = 21,
  anon_sym_i64 = 22,
  anon_sym_u128 = 23,
  anon_sym_i128 = 24,
  anon_sym_isize = 25,
  anon_sym_usize = 26,
  anon_sym_f32 = 27,
  anon_sym_f64 = 28,
  anon_sym_c_int = 29,
  anon_sym_bool = 30,
  anon_sym_String = 31,
  anon_sym_c_char = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_let = 35,
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
  sym_argument = 86,
  sym__top_level_declaration = 87,
  sym__type = 88,
  sym_array_type = 89,
  sym_let_declaration = 90,
  sym_mutable_declaration = 91,
  sym_boxed_modifier = 92,
  sym_enum_declaration = 93,
  sym_enum_integral_type = 94,
  sym_enum_variant_list = 95,
  sym_enum_variant = 96,
  sym_field_declaration_list = 97,
  sym_field_declaration = 98,
  sym__field_identifier = 99,
  sym_ordered_field_declaration_list = 100,
  sym_mutable_specifier = 101,
  sym_unary_expression = 102,
  sym_return_statement = 103,
  sym_binary_expression = 104,
  sym__literal = 105,
  sym__pattern = 106,
  sym__literal_pattern = 107,
  sym_negative_literal = 108,
  sym_string_literal = 109,
  sym_function_declaration = 110,
  sym_parameters = 111,
  sym_parameter = 112,
  sym_block = 113,
  sym_if_statement = 114,
  sym_else_clause = 115,
  sym_boolean_literal = 116,
  aux_sym_source_file_repeat1 = 117,
  aux_sym_arguments_repeat1 = 118,
  aux_sym_arguments_repeat2 = 119,
  aux_sym_enum_variant_list_repeat1 = 120,
  aux_sym_enum_variant_list_repeat2 = 121,
  aux_sym_field_declaration_list_repeat1 = 122,
  aux_sym_field_declaration_list_repeat2 = 123,
  aux_sym_ordered_field_declaration_list_repeat1 = 124,
  aux_sym_string_literal_repeat1 = 125,
  aux_sym_parameters_repeat1 = 126,
  aux_sym_block_repeat1 = 127,
  alias_sym_field_identifier = 128,
  alias_sym_type_identifier = 129,
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
  [anon_sym_COLON] = ":",
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
  [sym_argument] = "argument",
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
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_argument] = sym_argument,
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
  [anon_sym_COLON] = {
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
  [sym_argument] = {
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
  field_label = 8,
  field_left = 9,
  field_name = 10,
  field_operator = 11,
  field_parameters = 12,
  field_pattern = 13,
  field_return_type = 14,
  field_right = 15,
  field_type = 16,
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
  [field_label] = "label",
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
  [23] = {.index = 34, .length = 1},
  [24] = {.index = 35, .length = 1},
  [25] = {.index = 36, .length = 3},
  [26] = {.index = 39, .length = 3},
  [27] = {.index = 42, .length = 2},
  [28] = {.index = 44, .length = 4},
  [29] = {.index = 48, .length = 2},
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
    {field_label, 0},
  [35] =
    {field_element, 1},
  [36] =
    {field_pattern, 1},
    {field_type, 3},
    {field_value, 5},
  [39] =
    {field_body, 1},
    {field_name, 0},
    {field_value, 3},
  [42] =
    {field_pattern, 0},
    {field_type, 2},
  [44] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [48] =
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
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == ']') ADVANCE(67);
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
      if (lookahead == ':') ADVANCE(65);
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
      if (lookahead == ':') ADVANCE(65);
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
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == ':') ADVANCE(65);
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
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(67);
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
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(98);
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
      if (lookahead == ':') ADVANCE(65);
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
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(67);
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
      if (lookahead == ':') ADVANCE(65);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
  [2] = {.lex_state = 55, .external_lex_state = 2},
  [3] = {.lex_state = 5, .external_lex_state = 2},
  [4] = {.lex_state = 55, .external_lex_state = 2},
  [5] = {.lex_state = 5, .external_lex_state = 2},
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
  [18] = {.lex_state = 9, .external_lex_state = 2},
  [19] = {.lex_state = 5, .external_lex_state = 2},
  [20] = {.lex_state = 5, .external_lex_state = 2},
  [21] = {.lex_state = 5, .external_lex_state = 2},
  [22] = {.lex_state = 5, .external_lex_state = 2},
  [23] = {.lex_state = 9, .external_lex_state = 2},
  [24] = {.lex_state = 5, .external_lex_state = 2},
  [25] = {.lex_state = 9, .external_lex_state = 2},
  [26] = {.lex_state = 5, .external_lex_state = 2},
  [27] = {.lex_state = 9, .external_lex_state = 2},
  [28] = {.lex_state = 5, .external_lex_state = 2},
  [29] = {.lex_state = 5, .external_lex_state = 2},
  [30] = {.lex_state = 5, .external_lex_state = 2},
  [31] = {.lex_state = 9, .external_lex_state = 2},
  [32] = {.lex_state = 9, .external_lex_state = 2},
  [33] = {.lex_state = 55, .external_lex_state = 2},
  [34] = {.lex_state = 55, .external_lex_state = 2},
  [35] = {.lex_state = 55, .external_lex_state = 2},
  [36] = {.lex_state = 55, .external_lex_state = 2},
  [37] = {.lex_state = 55, .external_lex_state = 2},
  [38] = {.lex_state = 55, .external_lex_state = 2},
  [39] = {.lex_state = 55, .external_lex_state = 2},
  [40] = {.lex_state = 55, .external_lex_state = 2},
  [41] = {.lex_state = 55, .external_lex_state = 2},
  [42] = {.lex_state = 55, .external_lex_state = 2},
  [43] = {.lex_state = 55, .external_lex_state = 2},
  [44] = {.lex_state = 55, .external_lex_state = 2},
  [45] = {.lex_state = 55, .external_lex_state = 2},
  [46] = {.lex_state = 55, .external_lex_state = 2},
  [47] = {.lex_state = 55, .external_lex_state = 2},
  [48] = {.lex_state = 55, .external_lex_state = 2},
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
  [69] = {.lex_state = 6, .external_lex_state = 2},
  [70] = {.lex_state = 6, .external_lex_state = 2},
  [71] = {.lex_state = 6, .external_lex_state = 2},
  [72] = {.lex_state = 6, .external_lex_state = 2},
  [73] = {.lex_state = 6, .external_lex_state = 2},
  [74] = {.lex_state = 6, .external_lex_state = 2},
  [75] = {.lex_state = 6, .external_lex_state = 2},
  [76] = {.lex_state = 5, .external_lex_state = 2},
  [77] = {.lex_state = 5, .external_lex_state = 2},
  [78] = {.lex_state = 5, .external_lex_state = 2},
  [79] = {.lex_state = 5, .external_lex_state = 2},
  [80] = {.lex_state = 5, .external_lex_state = 2},
  [81] = {.lex_state = 5, .external_lex_state = 2},
  [82] = {.lex_state = 5, .external_lex_state = 2},
  [83] = {.lex_state = 5, .external_lex_state = 2},
  [84] = {.lex_state = 5, .external_lex_state = 2},
  [85] = {.lex_state = 5, .external_lex_state = 2},
  [86] = {.lex_state = 5, .external_lex_state = 2},
  [87] = {.lex_state = 55, .external_lex_state = 2},
  [88] = {.lex_state = 5, .external_lex_state = 2},
  [89] = {.lex_state = 5, .external_lex_state = 2},
  [90] = {.lex_state = 5, .external_lex_state = 2},
  [91] = {.lex_state = 5, .external_lex_state = 2},
  [92] = {.lex_state = 5, .external_lex_state = 2},
  [93] = {.lex_state = 5, .external_lex_state = 2},
  [94] = {.lex_state = 5, .external_lex_state = 2},
  [95] = {.lex_state = 5, .external_lex_state = 2},
  [96] = {.lex_state = 5, .external_lex_state = 2},
  [97] = {.lex_state = 5, .external_lex_state = 2},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 5, .external_lex_state = 2},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 10, .external_lex_state = 2},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 10, .external_lex_state = 2},
  [124] = {.lex_state = 10, .external_lex_state = 2},
  [125] = {.lex_state = 10, .external_lex_state = 2},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 10, .external_lex_state = 2},
  [128] = {.lex_state = 10, .external_lex_state = 2},
  [129] = {.lex_state = 55, .external_lex_state = 2},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 55, .external_lex_state = 2},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 55, .external_lex_state = 2},
  [138] = {.lex_state = 55, .external_lex_state = 2},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 55, .external_lex_state = 2},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 10, .external_lex_state = 2},
  [147] = {.lex_state = 10, .external_lex_state = 2},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 10, .external_lex_state = 2},
  [150] = {.lex_state = 10, .external_lex_state = 2},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 10, .external_lex_state = 2},
  [153] = {.lex_state = 55, .external_lex_state = 2},
  [154] = {.lex_state = 55, .external_lex_state = 2},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 55, .external_lex_state = 2},
  [157] = {.lex_state = 55, .external_lex_state = 2},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 55, .external_lex_state = 2},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 55, .external_lex_state = 2},
  [163] = {.lex_state = 55, .external_lex_state = 2},
  [164] = {.lex_state = 55, .external_lex_state = 2},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 55, .external_lex_state = 2},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 55, .external_lex_state = 2},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 55, .external_lex_state = 2},
  [173] = {.lex_state = 55, .external_lex_state = 2},
  [174] = {.lex_state = 55, .external_lex_state = 2},
  [175] = {.lex_state = 55, .external_lex_state = 2},
  [176] = {.lex_state = 55, .external_lex_state = 2},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 55, .external_lex_state = 2},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 1, .external_lex_state = 2},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
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
  [239] = {.lex_state = 9, .external_lex_state = 2},
  [240] = {.lex_state = 9, .external_lex_state = 2},
  [241] = {.lex_state = 9, .external_lex_state = 2},
  [242] = {.lex_state = 9, .external_lex_state = 2},
  [243] = {.lex_state = 9, .external_lex_state = 2},
  [244] = {.lex_state = 9, .external_lex_state = 2},
  [245] = {.lex_state = 9, .external_lex_state = 2},
  [246] = {.lex_state = 9, .external_lex_state = 2},
  [247] = {.lex_state = 9, .external_lex_state = 2},
  [248] = {.lex_state = 9, .external_lex_state = 2},
  [249] = {.lex_state = 9, .external_lex_state = 2},
  [250] = {.lex_state = 9, .external_lex_state = 2},
  [251] = {.lex_state = 9, .external_lex_state = 2},
  [252] = {.lex_state = 9, .external_lex_state = 2},
  [253] = {.lex_state = 9, .external_lex_state = 2},
  [254] = {.lex_state = 9, .external_lex_state = 2},
  [255] = {.lex_state = 9, .external_lex_state = 2},
  [256] = {.lex_state = 9, .external_lex_state = 2},
  [257] = {.lex_state = 9, .external_lex_state = 2},
  [258] = {.lex_state = 9, .external_lex_state = 2},
  [259] = {.lex_state = 9, .external_lex_state = 2},
  [260] = {.lex_state = 9, .external_lex_state = 2},
  [261] = {.lex_state = 9, .external_lex_state = 2},
  [262] = {.lex_state = 9, .external_lex_state = 2},
  [263] = {.lex_state = 9, .external_lex_state = 2},
  [264] = {.lex_state = 9, .external_lex_state = 2},
  [265] = {.lex_state = 9, .external_lex_state = 2},
  [266] = {.lex_state = 9, .external_lex_state = 2},
  [267] = {.lex_state = 9, .external_lex_state = 2},
  [268] = {.lex_state = 9, .external_lex_state = 2},
  [269] = {.lex_state = 9, .external_lex_state = 2},
  [270] = {.lex_state = 9, .external_lex_state = 2},
  [271] = {.lex_state = 9, .external_lex_state = 2},
  [272] = {.lex_state = 9, .external_lex_state = 2},
  [273] = {.lex_state = 9, .external_lex_state = 2},
  [274] = {.lex_state = 9, .external_lex_state = 2},
  [275] = {.lex_state = 9, .external_lex_state = 2},
  [276] = {.lex_state = 9, .external_lex_state = 2},
  [277] = {.lex_state = 9, .external_lex_state = 2},
  [278] = {.lex_state = 9, .external_lex_state = 2},
  [279] = {.lex_state = 9, .external_lex_state = 2},
  [280] = {.lex_state = 9, .external_lex_state = 2},
  [281] = {.lex_state = 9, .external_lex_state = 2},
  [282] = {.lex_state = 9, .external_lex_state = 2},
  [283] = {.lex_state = 9, .external_lex_state = 2},
  [284] = {.lex_state = 9, .external_lex_state = 2},
  [285] = {.lex_state = 9, .external_lex_state = 2},
  [286] = {.lex_state = 9, .external_lex_state = 2},
  [287] = {.lex_state = 9, .external_lex_state = 2},
  [288] = {.lex_state = 9, .external_lex_state = 2},
  [289] = {.lex_state = 9, .external_lex_state = 2},
  [290] = {.lex_state = 9, .external_lex_state = 2},
  [291] = {.lex_state = 9, .external_lex_state = 2},
  [292] = {.lex_state = 9, .external_lex_state = 2},
  [293] = {.lex_state = 9, .external_lex_state = 2},
  [294] = {.lex_state = 9, .external_lex_state = 2},
  [295] = {.lex_state = 9, .external_lex_state = 2},
  [296] = {.lex_state = 9, .external_lex_state = 2},
  [297] = {.lex_state = 9, .external_lex_state = 2},
  [298] = {.lex_state = 9, .external_lex_state = 2},
  [299] = {.lex_state = 9, .external_lex_state = 2},
  [300] = {.lex_state = 9, .external_lex_state = 2},
  [301] = {.lex_state = 9, .external_lex_state = 2},
  [302] = {.lex_state = 9, .external_lex_state = 2},
  [303] = {.lex_state = 9, .external_lex_state = 2},
  [304] = {.lex_state = 9, .external_lex_state = 2},
  [305] = {.lex_state = 9, .external_lex_state = 2},
  [306] = {.lex_state = 9, .external_lex_state = 2},
  [307] = {.lex_state = 9, .external_lex_state = 2},
  [308] = {.lex_state = 9, .external_lex_state = 2},
  [309] = {.lex_state = 7},
  [310] = {.lex_state = 13},
  [311] = {.lex_state = 7},
  [312] = {.lex_state = 7},
  [313] = {.lex_state = 7},
  [314] = {.lex_state = 7},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 7},
  [318] = {.lex_state = 7},
  [319] = {.lex_state = 7},
  [320] = {.lex_state = 7},
  [321] = {.lex_state = 7},
  [322] = {.lex_state = 7},
  [323] = {.lex_state = 7},
  [324] = {.lex_state = 7},
  [325] = {.lex_state = 7},
  [326] = {.lex_state = 4},
  [327] = {.lex_state = 7},
  [328] = {.lex_state = 13},
  [329] = {.lex_state = 8, .external_lex_state = 3},
  [330] = {.lex_state = 13},
  [331] = {.lex_state = 7},
  [332] = {.lex_state = 8, .external_lex_state = 3},
  [333] = {.lex_state = 7},
  [334] = {.lex_state = 2},
  [335] = {.lex_state = 8, .external_lex_state = 3},
  [336] = {.lex_state = 13},
  [337] = {.lex_state = 4},
  [338] = {.lex_state = 8, .external_lex_state = 3},
  [339] = {.lex_state = 8, .external_lex_state = 3},
  [340] = {.lex_state = 8, .external_lex_state = 3},
  [341] = {.lex_state = 4},
  [342] = {.lex_state = 4},
  [343] = {.lex_state = 13},
  [344] = {.lex_state = 8, .external_lex_state = 3},
  [345] = {.lex_state = 7},
  [346] = {.lex_state = 8, .external_lex_state = 3},
  [347] = {.lex_state = 8, .external_lex_state = 3},
  [348] = {.lex_state = 7},
  [349] = {.lex_state = 4},
  [350] = {.lex_state = 4},
  [351] = {.lex_state = 13},
  [352] = {.lex_state = 13},
  [353] = {.lex_state = 8, .external_lex_state = 3},
  [354] = {.lex_state = 8, .external_lex_state = 3},
  [355] = {.lex_state = 7},
  [356] = {.lex_state = 55},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 4},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 55},
  [362] = {.lex_state = 55},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 4},
  [368] = {.lex_state = 4},
  [369] = {.lex_state = 55},
  [370] = {.lex_state = 55},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 4},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 13},
  [380] = {.lex_state = 4},
  [381] = {.lex_state = 55},
  [382] = {.lex_state = 55},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 55},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 7},
  [391] = {.lex_state = 13},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 2},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 13},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 2},
  [398] = {.lex_state = 2},
  [399] = {.lex_state = 2},
  [400] = {.lex_state = 2},
  [401] = {.lex_state = 5, .external_lex_state = 2},
  [402] = {.lex_state = 2},
  [403] = {.lex_state = 2},
  [404] = {.lex_state = 2},
  [405] = {.lex_state = 2},
  [406] = {.lex_state = 7},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 7},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 2},
  [411] = {.lex_state = 2},
  [412] = {.lex_state = 2},
  [413] = {.lex_state = 7},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 13},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 5, .external_lex_state = 2},
  [419] = {.lex_state = 13},
  [420] = {.lex_state = 2},
  [421] = {.lex_state = 5, .external_lex_state = 2},
  [422] = {.lex_state = 2},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 7},
  [425] = {.lex_state = 2},
  [426] = {.lex_state = 2},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 7},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 7},
  [435] = {.lex_state = 7},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 7},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 7},
  [441] = {.lex_state = 7},
  [442] = {.lex_state = 7},
  [443] = {.lex_state = 7},
  [444] = {.lex_state = 7},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
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
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_source_file] = STATE(428),
    [sym__expression] = STATE(132),
    [sym_while_statement] = STATE(405),
    [sym_increment_statement] = STATE(405),
    [sym_decrement_statement] = STATE(405),
    [sym_continue_statement] = STATE(405),
    [sym_for_expression] = STATE(166),
    [sym_call_expression] = STATE(166),
    [sym_range_expression] = STATE(166),
    [sym__top_level_declaration] = STATE(2),
    [sym_let_declaration] = STATE(405),
    [sym_mutable_declaration] = STATE(405),
    [sym_boxed_modifier] = STATE(440),
    [sym_enum_declaration] = STATE(405),
    [sym_unary_expression] = STATE(166),
    [sym_return_statement] = STATE(405),
    [sym_binary_expression] = STATE(166),
    [sym__literal] = STATE(166),
    [sym_string_literal] = STATE(183),
    [sym_function_declaration] = STATE(2),
    [sym_block] = STATE(405),
    [sym_if_statement] = STATE(405),
    [sym_boolean_literal] = STATE(183),
    [aux_sym_source_file_repeat1] = STATE(2),
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
  [0] = 28,
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
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(132), 1,
      sym__expression,
    STATE(440), 1,
      sym_boxed_modifier,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(4), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(166), 6,
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
  [105] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(71), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      sym_arguments,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(55), 6,
      sym_float_literal,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(49), 21,
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
  [186] = 28,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_while,
    ACTIONS(85), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(88), 1,
      anon_sym_DASH_DASH,
    ACTIONS(91), 1,
      anon_sym_continue,
    ACTIONS(94), 1,
      anon_sym_for,
    ACTIONS(97), 1,
      anon_sym_DOT_DOT,
    ACTIONS(100), 1,
      anon_sym_let,
    ACTIONS(103), 1,
      anon_sym_mut,
    ACTIONS(106), 1,
      anon_sym_boxed,
    ACTIONS(109), 1,
      anon_sym_enum,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_return,
    ACTIONS(121), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      aux_sym_string_literal_token1,
    ACTIONS(130), 1,
      anon_sym_function,
    ACTIONS(133), 1,
      anon_sym_if,
    STATE(132), 1,
      sym__expression,
    STATE(440), 1,
      sym_boxed_modifier,
    ACTIONS(136), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(124), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(4), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(166), 6,
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
  [291] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_arguments,
    ACTIONS(141), 19,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(139), 25,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [352] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(24), 1,
      sym_arguments,
    ACTIONS(145), 21,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(143), 25,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [409] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      sym_arguments,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 17,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(147), 24,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [474] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      sym_arguments,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 13,
      sym_float_literal,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
    ACTIONS(147), 23,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [545] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(71), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      sym_arguments,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 11,
      sym_float_literal,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(147), 23,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [620] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(71), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      sym_arguments,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 12,
      sym_float_literal,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(147), 23,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [693] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(71), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      sym_arguments,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 10,
      sym_float_literal,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(147), 23,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [770] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      sym_arguments,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 15,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(147), 23,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [839] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_arguments,
    ACTIONS(149), 19,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(147), 25,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [900] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(153), 21,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(151), 25,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [954] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(157), 21,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(155), 25,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1008] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(161), 21,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(159), 25,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1062] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 21,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(163), 25,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1116] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      sym_integer_literal,
    ACTIONS(183), 1,
      sym_binary_literal,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    STATE(165), 1,
      sym__expression,
    STATE(373), 1,
      aux_sym_arguments_repeat2,
    STATE(406), 1,
      sym_negative_literal,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(445), 1,
      sym__pattern,
    ACTIONS(187), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(195), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(177), 18,
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
  [1206] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 21,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(191), 25,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1260] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 21,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(195), 25,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1314] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 21,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(199), 25,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1368] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 21,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(203), 25,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1422] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      sym_integer_literal,
    ACTIONS(183), 1,
      sym_binary_literal,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      sym__expression,
    STATE(377), 1,
      aux_sym_arguments_repeat2,
    STATE(406), 1,
      sym_negative_literal,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(445), 1,
      sym__pattern,
    ACTIONS(187), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(195), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(177), 18,
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
  [1512] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(211), 21,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(209), 25,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1566] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      sym_integer_literal,
    ACTIONS(183), 1,
      sym_binary_literal,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym__expression,
    STATE(387), 1,
      aux_sym_arguments_repeat2,
    STATE(406), 1,
      sym_negative_literal,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(445), 1,
      sym__pattern,
    ACTIONS(187), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(81), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(195), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(177), 18,
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
  [1656] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 21,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(215), 25,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1710] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      sym_integer_literal,
    ACTIONS(183), 1,
      sym_binary_literal,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym__expression,
    STATE(388), 1,
      aux_sym_arguments_repeat2,
    STATE(406), 1,
      sym_negative_literal,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(445), 1,
      sym__pattern,
    ACTIONS(187), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(76), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(195), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(177), 18,
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
  [1800] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 21,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(221), 25,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1854] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(227), 21,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(225), 25,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1908] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 21,
      sym_float_literal,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(229), 25,
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
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1962] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      sym_integer_literal,
    ACTIONS(183), 1,
      sym_binary_literal,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym__expression,
    STATE(364), 1,
      aux_sym_arguments_repeat2,
    STATE(406), 1,
      sym_negative_literal,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(445), 1,
      sym__pattern,
    ACTIONS(187), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(77), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(195), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(177), 18,
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
  [2052] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      sym_integer_literal,
    ACTIONS(183), 1,
      sym_binary_literal,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    STATE(225), 1,
      sym__expression,
    STATE(406), 1,
      sym_negative_literal,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(445), 1,
      sym__pattern,
    ACTIONS(187), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(235), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(85), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(195), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(177), 18,
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
  [2137] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_while,
    ACTIONS(241), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(243), 1,
      anon_sym_DASH_DASH,
    ACTIONS(245), 1,
      anon_sym_continue,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(251), 1,
      anon_sym_let,
    ACTIONS(253), 1,
      anon_sym_mut,
    ACTIONS(255), 1,
      anon_sym_enum,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_return,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      anon_sym_if,
    STATE(54), 1,
      sym__expression,
    STATE(434), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
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
  [2235] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_while,
    ACTIONS(241), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(243), 1,
      anon_sym_DASH_DASH,
    ACTIONS(245), 1,
      anon_sym_continue,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(251), 1,
      anon_sym_let,
    ACTIONS(253), 1,
      anon_sym_mut,
    ACTIONS(255), 1,
      anon_sym_enum,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_return,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      anon_sym_if,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__expression,
    STATE(434), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
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
  [2333] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_while,
    ACTIONS(241), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(243), 1,
      anon_sym_DASH_DASH,
    ACTIONS(245), 1,
      anon_sym_continue,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(251), 1,
      anon_sym_let,
    ACTIONS(253), 1,
      anon_sym_mut,
    ACTIONS(255), 1,
      anon_sym_enum,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_return,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      anon_sym_if,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__expression,
    STATE(434), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
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
  [2431] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_while,
    ACTIONS(285), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(288), 1,
      anon_sym_DASH_DASH,
    ACTIONS(291), 1,
      anon_sym_continue,
    ACTIONS(294), 1,
      anon_sym_for,
    ACTIONS(297), 1,
      anon_sym_DOT_DOT,
    ACTIONS(300), 1,
      anon_sym_let,
    ACTIONS(303), 1,
      anon_sym_mut,
    ACTIONS(306), 1,
      anon_sym_boxed,
    ACTIONS(309), 1,
      anon_sym_enum,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      anon_sym_return,
    ACTIONS(323), 1,
      sym_integer_literal,
    ACTIONS(329), 1,
      aux_sym_string_literal_token1,
    ACTIONS(332), 1,
      anon_sym_if,
    STATE(54), 1,
      sym__expression,
    STATE(434), 1,
      sym_boxed_modifier,
    ACTIONS(335), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(326), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
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
  [2529] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_while,
    ACTIONS(241), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(243), 1,
      anon_sym_DASH_DASH,
    ACTIONS(245), 1,
      anon_sym_continue,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(251), 1,
      anon_sym_let,
    ACTIONS(253), 1,
      anon_sym_mut,
    ACTIONS(255), 1,
      anon_sym_enum,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_return,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      anon_sym_if,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__expression,
    STATE(434), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(35), 11,
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
  [2627] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_while,
    ACTIONS(241), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(243), 1,
      anon_sym_DASH_DASH,
    ACTIONS(245), 1,
      anon_sym_continue,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(251), 1,
      anon_sym_let,
    ACTIONS(253), 1,
      anon_sym_mut,
    ACTIONS(255), 1,
      anon_sym_enum,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_return,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      anon_sym_if,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__expression,
    STATE(434), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(42), 11,
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
  [2725] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_while,
    ACTIONS(241), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(243), 1,
      anon_sym_DASH_DASH,
    ACTIONS(245), 1,
      anon_sym_continue,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(251), 1,
      anon_sym_let,
    ACTIONS(253), 1,
      anon_sym_mut,
    ACTIONS(255), 1,
      anon_sym_enum,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_return,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      anon_sym_if,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__expression,
    STATE(434), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
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
  [2823] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_while,
    ACTIONS(241), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(243), 1,
      anon_sym_DASH_DASH,
    ACTIONS(245), 1,
      anon_sym_continue,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(251), 1,
      anon_sym_let,
    ACTIONS(253), 1,
      anon_sym_mut,
    ACTIONS(255), 1,
      anon_sym_enum,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_return,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      anon_sym_if,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__expression,
    STATE(434), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(39), 11,
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
  [2921] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_while,
    ACTIONS(241), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(243), 1,
      anon_sym_DASH_DASH,
    ACTIONS(245), 1,
      anon_sym_continue,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(251), 1,
      anon_sym_let,
    ACTIONS(253), 1,
      anon_sym_mut,
    ACTIONS(255), 1,
      anon_sym_enum,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_return,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      anon_sym_if,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__expression,
    STATE(434), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
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
  [3019] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_while,
    ACTIONS(241), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(243), 1,
      anon_sym_DASH_DASH,
    ACTIONS(245), 1,
      anon_sym_continue,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(251), 1,
      anon_sym_let,
    ACTIONS(253), 1,
      anon_sym_mut,
    ACTIONS(255), 1,
      anon_sym_enum,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_return,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      anon_sym_if,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__expression,
    STATE(434), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
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
  [3117] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_while,
    ACTIONS(241), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(243), 1,
      anon_sym_DASH_DASH,
    ACTIONS(245), 1,
      anon_sym_continue,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(251), 1,
      anon_sym_let,
    ACTIONS(253), 1,
      anon_sym_mut,
    ACTIONS(255), 1,
      anon_sym_enum,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_return,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      anon_sym_if,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__expression,
    STATE(434), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(33), 11,
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
  [3215] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_while,
    ACTIONS(241), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(243), 1,
      anon_sym_DASH_DASH,
    ACTIONS(245), 1,
      anon_sym_continue,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(251), 1,
      anon_sym_let,
    ACTIONS(253), 1,
      anon_sym_mut,
    ACTIONS(255), 1,
      anon_sym_enum,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_return,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      anon_sym_if,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__expression,
    STATE(434), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(41), 11,
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
  [3313] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_while,
    ACTIONS(241), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(243), 1,
      anon_sym_DASH_DASH,
    ACTIONS(245), 1,
      anon_sym_continue,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(251), 1,
      anon_sym_let,
    ACTIONS(253), 1,
      anon_sym_mut,
    ACTIONS(255), 1,
      anon_sym_enum,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_return,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      anon_sym_if,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym__expression,
    STATE(434), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
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
  [3411] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 19,
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
    ACTIONS(193), 23,
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
  [3461] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(151), 19,
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
    ACTIONS(153), 23,
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
  [3511] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 19,
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
    ACTIONS(205), 23,
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
  [3561] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 19,
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
    ACTIONS(201), 22,
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
  [3610] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 19,
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
    ACTIONS(217), 22,
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
  [3659] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_DOT_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(368), 1,
      anon_sym_SLASH,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(360), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(366), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(147), 15,
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
    ACTIONS(149), 15,
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
  [3724] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_DOT_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(368), 1,
      anon_sym_SLASH,
    ACTIONS(370), 1,
      anon_sym_AMP,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(360), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(366), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 14,
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
    ACTIONS(147), 15,
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
  [3791] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_DOT_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(368), 1,
      anon_sym_SLASH,
    ACTIONS(370), 1,
      anon_sym_AMP,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(374), 1,
      anon_sym_CARET,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(360), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(366), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 12,
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
    ACTIONS(147), 15,
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
  [3862] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_DOT_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(368), 1,
      anon_sym_SLASH,
    ACTIONS(370), 1,
      anon_sym_AMP,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(374), 1,
      anon_sym_CARET,
    ACTIONS(378), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(380), 1,
      anon_sym_DASH_DASH,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(360), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(366), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(382), 6,
      sym_float_literal,
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
  [3941] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_DOT_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(368), 1,
      anon_sym_SLASH,
    ACTIONS(370), 1,
      anon_sym_AMP,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(374), 1,
      anon_sym_CARET,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(360), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(366), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(390), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(388), 13,
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
  [4016] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_DOT_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(368), 1,
      anon_sym_SLASH,
    ACTIONS(370), 1,
      anon_sym_AMP,
    ACTIONS(374), 1,
      anon_sym_CARET,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(360), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(366), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 13,
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
    ACTIONS(147), 15,
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
  [4085] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_DOT_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(368), 1,
      anon_sym_SLASH,
    ACTIONS(370), 1,
      anon_sym_AMP,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(374), 1,
      anon_sym_CARET,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(360), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(366), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(394), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(392), 13,
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
  [4160] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_DOT_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(368), 1,
      anon_sym_SLASH,
    ACTIONS(370), 1,
      anon_sym_AMP,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(374), 1,
      anon_sym_CARET,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(360), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(366), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(398), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(396), 13,
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
  [4235] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_DOT_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(368), 1,
      anon_sym_SLASH,
    ACTIONS(370), 1,
      anon_sym_AMP,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(374), 1,
      anon_sym_CARET,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(360), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(366), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(402), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(400), 13,
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
  [4310] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_DOT_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(139), 18,
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
    ACTIONS(141), 20,
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
  [4365] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_DOT_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(368), 1,
      anon_sym_SLASH,
    ACTIONS(370), 1,
      anon_sym_AMP,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(374), 1,
      anon_sym_CARET,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(360), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(366), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(406), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(404), 13,
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
  [4440] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_DOT_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_SLASH,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(366), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(147), 17,
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
    ACTIONS(149), 18,
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
  [4499] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_DOT_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(368), 1,
      anon_sym_SLASH,
    ACTIONS(370), 1,
      anon_sym_AMP,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(374), 1,
      anon_sym_CARET,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(360), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(366), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(408), 13,
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
  [4574] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_DOT_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(368), 1,
      anon_sym_SLASH,
    ACTIONS(370), 1,
      anon_sym_AMP,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(374), 1,
      anon_sym_CARET,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(360), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(362), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(366), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(414), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(412), 13,
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
  [4649] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(143), 18,
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
    ACTIONS(145), 22,
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
  [4700] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_DOT_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(147), 18,
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
    ACTIONS(149), 20,
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
  [4755] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_DOT_DOT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(368), 1,
      anon_sym_SLASH,
    STATE(68), 1,
      sym_arguments,
    ACTIONS(360), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(366), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(147), 15,
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
    ACTIONS(149), 17,
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
  [4818] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 18,
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
    ACTIONS(211), 22,
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
  [4866] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 18,
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
    ACTIONS(157), 22,
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
  [4914] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 18,
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
    ACTIONS(227), 22,
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
  [4962] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 18,
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
    ACTIONS(231), 22,
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
  [5010] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 18,
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
    ACTIONS(223), 22,
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
  [5058] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(163), 18,
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
    ACTIONS(165), 22,
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
  [5106] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(159), 18,
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
    ACTIONS(161), 22,
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
  [5154] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 18,
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
    ACTIONS(197), 22,
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
  [5202] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 1,
      anon_sym_DASH,
    STATE(384), 1,
      aux_sym_arguments_repeat2,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(445), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(84), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(177), 18,
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
  [5268] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_arguments_repeat2,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(445), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(84), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(177), 18,
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
  [5334] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      aux_sym_arguments_repeat2,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(445), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(84), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(177), 18,
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
  [5400] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    ACTIONS(432), 1,
      anon_sym_mut,
    STATE(97), 1,
      sym_mutable_specifier,
    STATE(360), 1,
      sym_parameter,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(437), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(177), 18,
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
  [5468] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(375), 1,
      aux_sym_arguments_repeat2,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(445), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(84), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(177), 18,
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
  [5534] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_arguments_repeat2,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(445), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(84), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(177), 18,
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
  [5600] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    ACTIONS(432), 1,
      anon_sym_mut,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      sym_mutable_specifier,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(427), 1,
      sym_parameter,
    STATE(437), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(177), 18,
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
  [5665] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    ACTIONS(432), 1,
      anon_sym_mut,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      sym_mutable_specifier,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(427), 1,
      sym_parameter,
    STATE(437), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(177), 18,
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
  [5730] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_DASH,
    ACTIONS(456), 1,
      aux_sym_string_literal_token1,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(445), 1,
      sym__pattern,
    ACTIONS(445), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(459), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(84), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(453), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
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
  [5791] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(445), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(462), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(84), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(177), 18,
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
  [5852] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    ACTIONS(432), 1,
      anon_sym_mut,
    STATE(97), 1,
      sym_mutable_specifier,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(427), 1,
      sym_parameter,
    STATE(437), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(177), 18,
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
  [5914] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    STATE(64), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    ACTIONS(466), 4,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(464), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
  [5976] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(472), 1,
      anon_sym_DASH,
    STATE(337), 1,
      sym__literal_pattern,
    STATE(349), 1,
      sym__pattern,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(474), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(341), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(470), 18,
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
  [6029] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(476), 1,
      sym_identifier,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(112), 1,
      sym__pattern,
    STATE(125), 1,
      sym__literal_pattern,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(482), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(123), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(478), 18,
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
  [6082] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(443), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(177), 18,
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
  [6135] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(444), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(177), 18,
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
  [6188] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(476), 1,
      sym_identifier,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(125), 1,
      sym__literal_pattern,
    STATE(127), 1,
      sym__pattern,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(482), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(123), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(478), 18,
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
  [6241] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(442), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(177), 18,
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
  [6294] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(441), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(177), 18,
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
  [6347] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(438), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(177), 18,
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
  [6400] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(472), 1,
      anon_sym_DASH,
    STATE(337), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(474), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(341), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(470), 18,
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
  [6453] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    STATE(424), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(406), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(177), 18,
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
  [6506] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 6,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_identifier,
    ACTIONS(193), 21,
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
  [6541] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 6,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_identifier,
    ACTIONS(205), 21,
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
  [6576] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(151), 6,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_identifier,
    ACTIONS(153), 21,
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
  [6611] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 12,
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
  [6663] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 10,
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
  [6719] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(139), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(141), 19,
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
  [6759] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(143), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(145), 21,
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
  [6795] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(506), 5,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(504), 21,
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
  [6829] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(147), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(149), 17,
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
  [6873] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 13,
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
  [6923] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(502), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 11,
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
  [6977] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(147), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(149), 19,
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
  [7017] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(149), 15,
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
  [7065] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(223), 21,
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
  [7098] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(512), 1,
      anon_sym_COLON,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(510), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(508), 14,
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
  [7135] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(157), 21,
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
  [7168] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(227), 21,
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
  [7201] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(231), 21,
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
  [7234] = 3,
    ACTIONS(193), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(191), 24,
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
  [7267] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(217), 21,
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
  [7300] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(518), 1,
      sym_identifier,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      anon_sym_BSLASHn,
    STATE(309), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(323), 1,
      sym_field_declaration,
    STATE(361), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(429), 1,
      sym__field_identifier,
    ACTIONS(522), 18,
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
  [7345] = 3,
    ACTIONS(205), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(203), 24,
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
  [7378] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(159), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(161), 21,
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
  [7411] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(201), 21,
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
  [7444] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(163), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(165), 21,
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
  [7477] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 11,
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
    ACTIONS(526), 14,
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
  [7510] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(532), 11,
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
    ACTIONS(530), 14,
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
  [7543] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 11,
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
    ACTIONS(534), 14,
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
  [7576] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(197), 21,
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
  [7609] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      anon_sym_COLON,
    ACTIONS(544), 1,
      anon_sym_EQ,
    ACTIONS(540), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(538), 14,
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
  [7646] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(548), 11,
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
    ACTIONS(546), 14,
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
  [7679] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(554), 1,
      anon_sym_else,
    STATE(170), 1,
      sym_else_clause,
    ACTIONS(552), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(550), 14,
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
  [7716] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(211), 21,
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
  [7749] = 3,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(151), 24,
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
  [7782] = 15,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(556), 1,
      anon_sym_LF,
    ACTIONS(558), 1,
      anon_sym_SEMI,
    ACTIONS(560), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(562), 1,
      anon_sym_DASH_DASH,
    ACTIONS(564), 1,
      anon_sym_DOT_DOT,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_AMP,
    ACTIONS(572), 1,
      anon_sym_PIPE,
    ACTIONS(574), 1,
      anon_sym_CARET,
    STATE(155), 1,
      sym_arguments,
    ACTIONS(578), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(568), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(580), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(576), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7838] = 9,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(564), 1,
      anon_sym_DOT_DOT,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_arguments,
    ACTIONS(578), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(568), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(580), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(147), 12,
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
  [7882] = 10,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(564), 1,
      anon_sym_DOT_DOT,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_AMP,
    STATE(155), 1,
      sym_arguments,
    ACTIONS(578), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(568), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(580), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(147), 11,
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
  [7928] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(582), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(584), 15,
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
  [7960] = 11,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(564), 1,
      anon_sym_DOT_DOT,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_AMP,
    ACTIONS(574), 1,
      anon_sym_CARET,
    STATE(155), 1,
      sym_arguments,
    ACTIONS(578), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(568), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(580), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(147), 10,
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
  [8008] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(215), 15,
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
  [8040] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(199), 15,
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
  [8072] = 3,
    ACTIONS(217), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(215), 23,
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
  [8104] = 7,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(564), 1,
      anon_sym_DOT_DOT,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_arguments,
    ACTIONS(580), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(147), 17,
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
  [8144] = 8,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(564), 1,
      anon_sym_DOT_DOT,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_arguments,
    ACTIONS(568), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(580), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(147), 14,
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
  [8186] = 3,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(199), 23,
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
  [8218] = 6,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(564), 1,
      anon_sym_DOT_DOT,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_arguments,
    ACTIONS(139), 20,
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
  [8256] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(586), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(588), 15,
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
  [8288] = 12,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(564), 1,
      anon_sym_DOT_DOT,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_AMP,
    ACTIONS(572), 1,
      anon_sym_PIPE,
    ACTIONS(574), 1,
      anon_sym_CARET,
    STATE(155), 1,
      sym_arguments,
    ACTIONS(578), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(568), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(580), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(147), 9,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8338] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(592), 10,
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
    ACTIONS(590), 14,
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
  [8370] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(596), 10,
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
  [8402] = 6,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(564), 1,
      anon_sym_DOT_DOT,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_arguments,
    ACTIONS(147), 20,
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
  [8440] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(602), 1,
      anon_sym_EQ,
    ACTIONS(600), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(598), 14,
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
  [8474] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(608), 1,
      anon_sym_EQ,
    ACTIONS(606), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(604), 14,
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
  [8508] = 4,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    STATE(155), 1,
      sym_arguments,
    ACTIONS(143), 22,
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
  [8542] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(612), 10,
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
    ACTIONS(610), 14,
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
  [8574] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(77), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(614), 15,
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
  [8606] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(618), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(616), 14,
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
  [8637] = 3,
    ACTIONS(211), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(209), 22,
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
  [8668] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(622), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(620), 14,
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
  [8699] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(626), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(624), 14,
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
  [8730] = 3,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(163), 22,
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
  [8761] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(628), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8816] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(636), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(634), 14,
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
  [8847] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    STATE(363), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8906] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(640), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(638), 14,
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
  [8937] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(644), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(642), 14,
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
  [8968] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(648), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(646), 14,
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
  [8999] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    STATE(371), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9058] = 3,
    ACTIONS(197), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(195), 22,
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
  [9089] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(652), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(650), 14,
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
  [9120] = 3,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(155), 22,
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
  [9151] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    STATE(375), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9210] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(656), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(654), 14,
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
  [9241] = 3,
    ACTIONS(231), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(229), 22,
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
  [9272] = 3,
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
  [9303] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(664), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(662), 14,
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
  [9334] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(410), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(408), 14,
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
  [9365] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(398), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(396), 14,
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
  [9396] = 3,
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
  [9427] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    STATE(384), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9486] = 3,
    ACTIONS(227), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(225), 22,
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
  [9517] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    STATE(359), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9576] = 3,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(221), 22,
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
  [9607] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(670), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9662] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(674), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(672), 14,
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
  [9693] = 3,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(159), 22,
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
  [9724] = 13,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_DOT_DOT,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(682), 1,
      anon_sym_AMP,
    ACTIONS(684), 1,
      anon_sym_PIPE,
    ACTIONS(686), 1,
      anon_sym_CARET,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(690), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(680), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(692), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(688), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9774] = 11,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_DOT_DOT,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(682), 1,
      anon_sym_AMP,
    ACTIONS(686), 1,
      anon_sym_CARET,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(690), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(680), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(692), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(147), 8,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9820] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(698), 1,
      anon_sym_LBRACK,
    STATE(318), 1,
      sym_array_type,
    STATE(392), 1,
      sym__type,
    ACTIONS(696), 18,
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
  [9856] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    STATE(154), 1,
      sym_block,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9912] = 13,
    ACTIONS(388), 1,
      anon_sym_SEMI,
    ACTIONS(390), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_DOT_DOT,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(682), 1,
      anon_sym_AMP,
    ACTIONS(684), 1,
      anon_sym_PIPE,
    ACTIONS(686), 1,
      anon_sym_CARET,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(690), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(680), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(692), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(688), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9962] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(698), 1,
      anon_sym_LBRACK,
    STATE(318), 1,
      sym_array_type,
    STATE(448), 1,
      sym__type,
    ACTIONS(696), 18,
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
  [9998] = 13,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(414), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_DOT_DOT,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(682), 1,
      anon_sym_AMP,
    ACTIONS(684), 1,
      anon_sym_PIPE,
    ACTIONS(686), 1,
      anon_sym_CARET,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(690), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(680), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(692), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(688), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10048] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    STATE(334), 1,
      sym_block,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10104] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(700), 1,
      sym_identifier,
    ACTIONS(704), 1,
      anon_sym_LBRACK,
    STATE(358), 1,
      sym__type,
    STATE(380), 1,
      sym_array_type,
    ACTIONS(702), 18,
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
  [10140] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(700), 1,
      sym_identifier,
    ACTIONS(704), 1,
      anon_sym_LBRACK,
    STATE(368), 1,
      sym__type,
    STATE(380), 1,
      sym_array_type,
    ACTIONS(702), 18,
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
  [10176] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(698), 1,
      anon_sym_LBRACK,
    STATE(318), 1,
      sym_array_type,
    STATE(432), 1,
      sym__type,
    ACTIONS(696), 18,
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
  [10212] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 1,
      anon_sym_COLON,
    ACTIONS(159), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(161), 17,
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
  [10244] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 1,
      anon_sym_COLON,
    ACTIONS(195), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(197), 17,
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
  [10276] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(698), 1,
      anon_sym_LBRACK,
    STATE(318), 1,
      sym_array_type,
    STATE(439), 1,
      sym__type,
    ACTIONS(696), 18,
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
  [10312] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    STATE(129), 1,
      sym_block,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10368] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    ACTIONS(706), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_block,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10424] = 14,
    ACTIONS(464), 1,
      anon_sym_SEMI,
    ACTIONS(466), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_for,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_DASH,
    ACTIONS(718), 1,
      aux_sym_string_literal_token1,
    ACTIONS(722), 1,
      sym_float_literal,
    STATE(190), 1,
      sym__expression,
    ACTIONS(720), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(716), 3,
      sym_integer_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(231), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10476] = 6,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_DOT_DOT,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(147), 18,
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
  [10512] = 8,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_DOT_DOT,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(680), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(692), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(147), 12,
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
  [10552] = 12,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_DOT_DOT,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(682), 1,
      anon_sym_AMP,
    ACTIONS(684), 1,
      anon_sym_PIPE,
    ACTIONS(686), 1,
      anon_sym_CARET,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(690), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(680), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(692), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(147), 7,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10600] = 10,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_DOT_DOT,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(682), 1,
      anon_sym_AMP,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(690), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(680), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(692), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(147), 9,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10644] = 13,
    ACTIONS(404), 1,
      anon_sym_SEMI,
    ACTIONS(406), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_DOT_DOT,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(682), 1,
      anon_sym_AMP,
    ACTIONS(684), 1,
      anon_sym_PIPE,
    ACTIONS(686), 1,
      anon_sym_CARET,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(690), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(680), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(692), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(688), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10694] = 9,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_DOT_DOT,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(690), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(680), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(692), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(147), 10,
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
  [10736] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(724), 1,
      sym_identifier,
    ACTIONS(728), 1,
      anon_sym_LBRACK,
    STATE(149), 1,
      sym__type,
    STATE(152), 1,
      sym_array_type,
    ACTIONS(726), 18,
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
  [10772] = 7,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_DOT_DOT,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(692), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(147), 15,
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
  [10810] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(724), 1,
      sym_identifier,
    ACTIONS(728), 1,
      anon_sym_LBRACK,
    STATE(150), 1,
      sym__type,
    STATE(152), 1,
      sym_array_type,
    ACTIONS(726), 18,
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
  [10846] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(698), 1,
      anon_sym_LBRACK,
    STATE(318), 1,
      sym_array_type,
    STATE(415), 1,
      sym__type,
    ACTIONS(696), 18,
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
  [10882] = 4,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(143), 20,
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
  [10914] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    STATE(70), 1,
      sym_block,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10970] = 6,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_DOT_DOT,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(139), 18,
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
  [11006] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(698), 1,
      anon_sym_LBRACK,
    STATE(318), 1,
      sym_array_type,
    STATE(327), 1,
      sym__type,
    ACTIONS(696), 18,
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
  [11042] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    STATE(178), 1,
      sym_block,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11098] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    ACTIONS(730), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_block,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11154] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(698), 1,
      anon_sym_LBRACK,
    STATE(318), 1,
      sym_array_type,
    STATE(446), 1,
      sym__type,
    ACTIONS(696), 18,
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
  [11190] = 13,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(398), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_DOT_DOT,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(682), 1,
      anon_sym_AMP,
    ACTIONS(684), 1,
      anon_sym_PIPE,
    ACTIONS(686), 1,
      anon_sym_CARET,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(690), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(680), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(692), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(688), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11240] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    STATE(411), 1,
      sym_block,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11296] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(548), 1,
      anon_sym_COLON,
    ACTIONS(159), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(161), 17,
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
  [11328] = 13,
    ACTIONS(392), 1,
      anon_sym_SEMI,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_DOT_DOT,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(682), 1,
      anon_sym_AMP,
    ACTIONS(684), 1,
      anon_sym_PIPE,
    ACTIONS(686), 1,
      anon_sym_CARET,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(690), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(680), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(692), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(688), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11378] = 13,
    ACTIONS(400), 1,
      anon_sym_SEMI,
    ACTIONS(402), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_DOT_DOT,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(682), 1,
      anon_sym_AMP,
    ACTIONS(684), 1,
      anon_sym_PIPE,
    ACTIONS(686), 1,
      anon_sym_CARET,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(690), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(680), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(692), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(688), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11428] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    ACTIONS(732), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_arguments,
    STATE(237), 1,
      sym_block,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11484] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(698), 1,
      anon_sym_LBRACK,
    STATE(318), 1,
      sym_array_type,
    STATE(407), 1,
      sym__type,
    ACTIONS(696), 18,
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
  [11520] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    ACTIONS(502), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(462), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(492), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11574] = 3,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(155), 20,
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
  [11603] = 3,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(159), 20,
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
  [11632] = 3,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(163), 20,
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
  [11661] = 3,
    ACTIONS(205), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(203), 20,
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
  [11690] = 3,
    ACTIONS(193), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(191), 20,
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
  [11719] = 3,
    ACTIONS(197), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(195), 20,
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
  [11748] = 3,
    ACTIONS(217), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(215), 20,
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
  [11777] = 3,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(151), 20,
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
  [11806] = 3,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(221), 20,
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
  [11835] = 3,
    ACTIONS(211), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(209), 20,
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
  [11864] = 3,
    ACTIONS(231), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(229), 20,
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
  [11893] = 3,
    ACTIONS(227), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(225), 20,
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
  [11922] = 3,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(199), 20,
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
  [11951] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(738), 1,
      sym_integer_literal,
    ACTIONS(740), 1,
      sym_float_literal,
    STATE(103), 1,
      sym__expression,
    ACTIONS(183), 2,
      sym_binary_literal,
      sym_char_literal,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11999] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(742), 1,
      anon_sym_DASH,
    STATE(57), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12045] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(219), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12091] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(104), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12137] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(106), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12183] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(107), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12229] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(108), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12275] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(101), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12321] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(102), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12367] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(110), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12413] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(109), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12459] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_for,
    ACTIONS(716), 1,
      sym_integer_literal,
    ACTIONS(746), 1,
      anon_sym_DOT_DOT,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(750), 1,
      aux_sym_string_literal_token1,
    STATE(218), 1,
      sym__expression,
    ACTIONS(720), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(722), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(231), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12505] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_for,
    ACTIONS(716), 1,
      sym_integer_literal,
    ACTIONS(746), 1,
      anon_sym_DOT_DOT,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(750), 1,
      aux_sym_string_literal_token1,
    STATE(184), 1,
      sym__expression,
    ACTIONS(720), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(722), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(231), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12551] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(199), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12597] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(212), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12643] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(223), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12689] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(216), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12735] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(198), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12781] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(187), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12827] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(181), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12873] = 12,
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
    ACTIONS(752), 1,
      anon_sym_DASH,
    STATE(143), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(166), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12919] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(191), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12965] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(754), 1,
      sym_identifier,
    ACTIONS(756), 1,
      anon_sym_for,
    ACTIONS(758), 1,
      anon_sym_DOT_DOT,
    ACTIONS(760), 1,
      anon_sym_DASH,
    ACTIONS(762), 1,
      sym_integer_literal,
    ACTIONS(766), 1,
      aux_sym_string_literal_token1,
    STATE(3), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(764), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(20), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13011] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(742), 1,
      anon_sym_DASH,
    STATE(59), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13057] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(742), 1,
      anon_sym_DASH,
    STATE(61), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13103] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(742), 1,
      anon_sym_DASH,
    STATE(55), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13149] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(159), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13195] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(742), 1,
      anon_sym_DASH,
    STATE(63), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13241] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(742), 1,
      anon_sym_DASH,
    STATE(58), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13287] = 12,
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
    ACTIONS(752), 1,
      anon_sym_DASH,
    STATE(151), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(166), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13333] = 12,
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
    ACTIONS(752), 1,
      anon_sym_DASH,
    STATE(140), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(166), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13379] = 12,
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
    ACTIONS(752), 1,
      anon_sym_DASH,
    STATE(133), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(166), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13425] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_for,
    ACTIONS(716), 1,
      sym_integer_literal,
    ACTIONS(746), 1,
      anon_sym_DOT_DOT,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(750), 1,
      aux_sym_string_literal_token1,
    STATE(213), 1,
      sym__expression,
    ACTIONS(720), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(722), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(231), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13471] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(754), 1,
      sym_identifier,
    ACTIONS(756), 1,
      anon_sym_for,
    ACTIONS(758), 1,
      anon_sym_DOT_DOT,
    ACTIONS(760), 1,
      anon_sym_DASH,
    ACTIONS(762), 1,
      sym_integer_literal,
    ACTIONS(766), 1,
      aux_sym_string_literal_token1,
    STATE(13), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(764), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(20), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13517] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(754), 1,
      sym_identifier,
    ACTIONS(756), 1,
      anon_sym_for,
    ACTIONS(758), 1,
      anon_sym_DOT_DOT,
    ACTIONS(760), 1,
      anon_sym_DASH,
    ACTIONS(762), 1,
      sym_integer_literal,
    ACTIONS(766), 1,
      aux_sym_string_literal_token1,
    STATE(12), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(764), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(20), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13563] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_for,
    ACTIONS(716), 1,
      sym_integer_literal,
    ACTIONS(746), 1,
      anon_sym_DOT_DOT,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(750), 1,
      aux_sym_string_literal_token1,
    STATE(211), 1,
      sym__expression,
    ACTIONS(720), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(722), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(231), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13609] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_for,
    ACTIONS(716), 1,
      sym_integer_literal,
    ACTIONS(746), 1,
      anon_sym_DOT_DOT,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(750), 1,
      aux_sym_string_literal_token1,
    STATE(208), 1,
      sym__expression,
    ACTIONS(720), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(722), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(231), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13655] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_for,
    ACTIONS(716), 1,
      sym_integer_literal,
    ACTIONS(746), 1,
      anon_sym_DOT_DOT,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(750), 1,
      aux_sym_string_literal_token1,
    STATE(206), 1,
      sym__expression,
    ACTIONS(720), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(722), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(231), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13701] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_for,
    ACTIONS(716), 1,
      sym_integer_literal,
    ACTIONS(746), 1,
      anon_sym_DOT_DOT,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(750), 1,
      aux_sym_string_literal_token1,
    STATE(185), 1,
      sym__expression,
    ACTIONS(720), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(722), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(231), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13747] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_for,
    ACTIONS(716), 1,
      sym_integer_literal,
    ACTIONS(746), 1,
      anon_sym_DOT_DOT,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(750), 1,
      aux_sym_string_literal_token1,
    STATE(204), 1,
      sym__expression,
    ACTIONS(720), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(722), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(231), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13793] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_for,
    ACTIONS(716), 1,
      sym_integer_literal,
    ACTIONS(746), 1,
      anon_sym_DOT_DOT,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(750), 1,
      aux_sym_string_literal_token1,
    STATE(203), 1,
      sym__expression,
    ACTIONS(720), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(722), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(231), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13839] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_for,
    ACTIONS(716), 1,
      sym_integer_literal,
    ACTIONS(746), 1,
      anon_sym_DOT_DOT,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(750), 1,
      aux_sym_string_literal_token1,
    STATE(202), 1,
      sym__expression,
    ACTIONS(720), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(722), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(231), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13885] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_for,
    ACTIONS(716), 1,
      sym_integer_literal,
    ACTIONS(746), 1,
      anon_sym_DOT_DOT,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(750), 1,
      aux_sym_string_literal_token1,
    STATE(201), 1,
      sym__expression,
    ACTIONS(720), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(722), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(231), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13931] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(754), 1,
      sym_identifier,
    ACTIONS(756), 1,
      anon_sym_for,
    ACTIONS(758), 1,
      anon_sym_DOT_DOT,
    ACTIONS(760), 1,
      anon_sym_DASH,
    ACTIONS(762), 1,
      sym_integer_literal,
    ACTIONS(766), 1,
      aux_sym_string_literal_token1,
    STATE(11), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(764), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(20), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13977] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(754), 1,
      sym_identifier,
    ACTIONS(756), 1,
      anon_sym_for,
    ACTIONS(758), 1,
      anon_sym_DOT_DOT,
    ACTIONS(760), 1,
      anon_sym_DASH,
    ACTIONS(762), 1,
      sym_integer_literal,
    ACTIONS(766), 1,
      aux_sym_string_literal_token1,
    STATE(10), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(764), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(20), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14023] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(754), 1,
      sym_identifier,
    ACTIONS(756), 1,
      anon_sym_for,
    ACTIONS(758), 1,
      anon_sym_DOT_DOT,
    ACTIONS(760), 1,
      anon_sym_DASH,
    ACTIONS(762), 1,
      sym_integer_literal,
    ACTIONS(766), 1,
      aux_sym_string_literal_token1,
    STATE(9), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(764), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(20), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14069] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(754), 1,
      sym_identifier,
    ACTIONS(756), 1,
      anon_sym_for,
    ACTIONS(758), 1,
      anon_sym_DOT_DOT,
    ACTIONS(760), 1,
      anon_sym_DASH,
    ACTIONS(762), 1,
      sym_integer_literal,
    ACTIONS(766), 1,
      aux_sym_string_literal_token1,
    STATE(8), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(764), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(20), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14115] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(754), 1,
      sym_identifier,
    ACTIONS(756), 1,
      anon_sym_for,
    ACTIONS(758), 1,
      anon_sym_DOT_DOT,
    ACTIONS(760), 1,
      anon_sym_DASH,
    ACTIONS(762), 1,
      sym_integer_literal,
    ACTIONS(766), 1,
      aux_sym_string_literal_token1,
    STATE(7), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(764), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(20), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14161] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(754), 1,
      sym_identifier,
    ACTIONS(756), 1,
      anon_sym_for,
    ACTIONS(758), 1,
      anon_sym_DOT_DOT,
    ACTIONS(760), 1,
      anon_sym_DASH,
    ACTIONS(762), 1,
      sym_integer_literal,
    ACTIONS(766), 1,
      aux_sym_string_literal_token1,
    STATE(6), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(764), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(20), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14207] = 12,
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
    ACTIONS(752), 1,
      anon_sym_DASH,
    STATE(136), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(166), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14253] = 12,
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
    ACTIONS(752), 1,
      anon_sym_DASH,
    STATE(134), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(166), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14299] = 12,
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
    ACTIONS(752), 1,
      anon_sym_DASH,
    STATE(145), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(166), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14345] = 12,
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
    ACTIONS(752), 1,
      anon_sym_DASH,
    STATE(141), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(166), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14391] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_for,
    ACTIONS(716), 1,
      sym_integer_literal,
    ACTIONS(746), 1,
      anon_sym_DOT_DOT,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(750), 1,
      aux_sym_string_literal_token1,
    STATE(222), 1,
      sym__expression,
    ACTIONS(720), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(722), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(231), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14437] = 12,
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
    ACTIONS(752), 1,
      anon_sym_DASH,
    STATE(148), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(166), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14483] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(754), 1,
      sym_identifier,
    ACTIONS(756), 1,
      anon_sym_for,
    ACTIONS(758), 1,
      anon_sym_DOT_DOT,
    ACTIONS(760), 1,
      anon_sym_DASH,
    ACTIONS(762), 1,
      sym_integer_literal,
    ACTIONS(766), 1,
      aux_sym_string_literal_token1,
    STATE(5), 1,
      sym__expression,
    ACTIONS(768), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(764), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(20), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14529] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_for,
    ACTIONS(716), 1,
      sym_integer_literal,
    ACTIONS(746), 1,
      anon_sym_DOT_DOT,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(750), 1,
      aux_sym_string_literal_token1,
    STATE(221), 1,
      sym__expression,
    ACTIONS(720), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(722), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(231), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14575] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(215), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14621] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_for,
    ACTIONS(716), 1,
      sym_integer_literal,
    ACTIONS(746), 1,
      anon_sym_DOT_DOT,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(750), 1,
      aux_sym_string_literal_token1,
    STATE(188), 1,
      sym__expression,
    ACTIONS(720), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(722), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(231), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14667] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_DASH,
    ACTIONS(744), 1,
      sym_integer_literal,
    STATE(103), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(126), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14713] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_for,
    ACTIONS(716), 1,
      sym_integer_literal,
    ACTIONS(746), 1,
      anon_sym_DOT_DOT,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(750), 1,
      aux_sym_string_literal_token1,
    STATE(205), 1,
      sym__expression,
    ACTIONS(720), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(722), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(231), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14759] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(742), 1,
      anon_sym_DASH,
    STATE(66), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14805] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(742), 1,
      anon_sym_DASH,
    STATE(60), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14851] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(742), 1,
      anon_sym_DASH,
    STATE(67), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14897] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(742), 1,
      anon_sym_DASH,
    STATE(53), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14943] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(742), 1,
      anon_sym_DASH,
    STATE(52), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14989] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(742), 1,
      anon_sym_DASH,
    STATE(56), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [15035] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(742), 1,
      anon_sym_DASH,
    STATE(51), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [15081] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(742), 1,
      anon_sym_DASH,
    STATE(65), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [15127] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_for,
    ACTIONS(249), 1,
      anon_sym_DOT_DOT,
    ACTIONS(265), 1,
      sym_integer_literal,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(742), 1,
      anon_sym_DASH,
    STATE(62), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(267), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(75), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [15173] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      anon_sym_BSLASHn,
    ACTIONS(770), 1,
      sym_identifier,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(429), 1,
      sym__field_identifier,
    STATE(316), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [15196] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(776), 1,
      anon_sym_LPAREN,
    ACTIONS(778), 1,
      anon_sym_EQ,
    STATE(343), 2,
      sym_field_declaration_list,
      sym_ordered_field_declaration_list,
    ACTIONS(774), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15215] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(780), 1,
      sym_identifier,
    ACTIONS(782), 1,
      anon_sym_BSLASHn,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    STATE(381), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(324), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15235] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(770), 1,
      sym_identifier,
    STATE(429), 1,
      sym__field_identifier,
    ACTIONS(786), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(316), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [15253] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(780), 1,
      sym_identifier,
    ACTIONS(782), 1,
      anon_sym_BSLASHn,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(311), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15273] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(596), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [15285] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(780), 1,
      sym_identifier,
    ACTIONS(782), 1,
      anon_sym_BSLASHn,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    STATE(370), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(319), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15305] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      sym_identifier,
    STATE(429), 1,
      sym__field_identifier,
    ACTIONS(795), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(316), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [15323] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(592), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [15335] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(612), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [15347] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(780), 1,
      sym_identifier,
    ACTIONS(782), 1,
      anon_sym_BSLASHn,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(324), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15367] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(770), 1,
      sym_identifier,
    STATE(429), 1,
      sym__field_identifier,
    ACTIONS(799), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(312), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [15385] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(780), 1,
      sym_identifier,
    ACTIONS(801), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(322), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15400] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(780), 1,
      sym_identifier,
    ACTIONS(803), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(324), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15415] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
    ACTIONS(805), 2,
      anon_sym_BSLASHn,
      sym_identifier,
  [15432] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(812), 1,
      sym_identifier,
    ACTIONS(815), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(324), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15447] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(817), 1,
      anon_sym_if,
    STATE(412), 2,
      sym_block,
      sym_if_statement,
  [15461] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(532), 1,
      anon_sym_LF,
    ACTIONS(530), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [15473] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
      sym_identifier,
  [15483] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(821), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15493] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(824), 1,
      anon_sym_DQUOTE,
    STATE(340), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(826), 2,
      sym__string_content,
      sym_escape_sequence,
  [15507] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(828), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15517] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      anon_sym_LBRACE,
    STATE(394), 1,
      sym_enum_integral_type,
    STATE(420), 1,
      sym_enum_variant_list,
  [15533] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(834), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(836), 2,
      sym__string_content,
      sym_escape_sequence,
  [15547] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(838), 1,
      sym_identifier,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_enum_variant_list,
    STATE(417), 1,
      sym_enum_integral_type,
  [15563] = 5,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(552), 1,
      anon_sym_LF,
    ACTIONS(842), 1,
      anon_sym_else,
    STATE(400), 1,
      sym_else_clause,
  [15579] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(844), 1,
      anon_sym_DQUOTE,
    STATE(353), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(846), 2,
      sym__string_content,
      sym_escape_sequence,
  [15593] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(848), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15603] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(536), 1,
      anon_sym_LF,
    ACTIONS(534), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [15615] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(850), 1,
      anon_sym_DQUOTE,
    STATE(347), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(852), 2,
      sym__string_content,
      sym_escape_sequence,
  [15629] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(854), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(836), 2,
      sym__string_content,
      sym_escape_sequence,
  [15643] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(836), 2,
      sym__string_content,
      sym_escape_sequence,
  [15657] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(528), 1,
      anon_sym_LF,
    ACTIONS(526), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [15669] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(548), 1,
      anon_sym_LF,
    ACTIONS(546), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [15681] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(860), 1,
      anon_sym_EQ,
    ACTIONS(858), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15693] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(862), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(864), 2,
      sym__string_content,
      sym_escape_sequence,
  [15707] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    ACTIONS(867), 1,
      sym_identifier,
    STATE(173), 1,
      sym_enum_variant_list,
    STATE(396), 1,
      sym_enum_integral_type,
  [15723] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(869), 1,
      anon_sym_DQUOTE,
    STATE(339), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(871), 2,
      sym__string_content,
      sym_escape_sequence,
  [15737] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(873), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(836), 2,
      sym__string_content,
      sym_escape_sequence,
  [15751] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(832), 1,
      anon_sym_LBRACE,
    ACTIONS(875), 1,
      sym_identifier,
    STATE(422), 1,
      sym_enum_variant_list,
    STATE(423), 1,
      sym_enum_integral_type,
  [15767] = 5,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(538), 1,
      anon_sym_SEMI,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(877), 1,
      anon_sym_COLON,
    ACTIONS(879), 1,
      anon_sym_EQ,
  [15783] = 5,
    ACTIONS(508), 1,
      anon_sym_SEMI,
    ACTIONS(510), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(881), 1,
      anon_sym_COLON,
    ACTIONS(883), 1,
      anon_sym_EQ,
  [15799] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(885), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15809] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(887), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15819] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(889), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(836), 2,
      sym__string_content,
      sym_escape_sequence,
  [15833] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(891), 1,
      anon_sym_DQUOTE,
    STATE(332), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(893), 2,
      sym__string_content,
      sym_escape_sequence,
  [15847] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(895), 1,
      anon_sym_if,
    STATE(156), 2,
      sym_block,
      sym_if_statement,
  [15861] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
    ACTIONS(897), 1,
      anon_sym_BSLASHn,
    STATE(356), 1,
      aux_sym_field_declaration_list_repeat2,
  [15874] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
  [15887] = 4,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    ACTIONS(600), 1,
      anon_sym_LF,
    ACTIONS(902), 1,
      anon_sym_EQ,
  [15900] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_arguments_repeat2,
  [15913] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      aux_sym_parameters_repeat1,
  [15926] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      anon_sym_BSLASHn,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    STATE(356), 1,
      aux_sym_field_declaration_list_repeat2,
  [15939] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(803), 1,
      anon_sym_RBRACE,
    ACTIONS(910), 1,
      anon_sym_BSLASHn,
    STATE(362), 1,
      aux_sym_enum_variant_list_repeat2,
  [15952] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_arguments_repeat2,
  [15965] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_arguments_repeat2,
  [15978] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(832), 1,
      anon_sym_LBRACE,
    ACTIONS(915), 1,
      anon_sym_COLON,
    STATE(426), 1,
      sym_enum_variant_list,
  [15991] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    ACTIONS(920), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_parameters_repeat1,
  [16004] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(590), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [16015] = 4,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(604), 1,
      anon_sym_SEMI,
    ACTIONS(606), 1,
      anon_sym_LF,
    ACTIONS(922), 1,
      anon_sym_EQ,
  [16028] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_BSLASHn,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      aux_sym_enum_variant_list_repeat2,
  [16041] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_BSLASHn,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      aux_sym_enum_variant_list_repeat2,
  [16054] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_arguments_repeat2,
  [16067] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym_parameters_repeat1,
  [16080] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_arguments_repeat2,
  [16093] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    ACTIONS(915), 1,
      anon_sym_COLON,
    STATE(164), 1,
      sym_enum_variant_list,
  [16106] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_arguments_repeat2,
  [16119] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(594), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [16130] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_arguments_repeat2,
  [16143] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
  [16156] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(937), 1,
      anon_sym_LBRACE,
    ACTIONS(939), 1,
      anon_sym_DASH_GT,
    STATE(135), 1,
      sym_block,
  [16169] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(610), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [16180] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_BSLASHn,
    ACTIONS(941), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      aux_sym_enum_variant_list_repeat2,
  [16193] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      anon_sym_BSLASHn,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    STATE(356), 1,
      aux_sym_field_declaration_list_repeat2,
  [16206] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      aux_sym_arguments_repeat2,
  [16219] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_arguments_repeat2,
  [16232] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_BSLASHn,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      aux_sym_enum_variant_list_repeat2,
  [16245] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(832), 1,
      anon_sym_LBRACE,
    ACTIONS(915), 1,
      anon_sym_COLON,
    STATE(398), 1,
      sym_enum_variant_list,
  [16258] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_arguments_repeat2,
  [16271] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_arguments_repeat2,
  [16284] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    ACTIONS(915), 1,
      anon_sym_COLON,
    STATE(162), 1,
      sym_enum_variant_list,
  [16297] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(770), 1,
      sym_identifier,
    STATE(414), 1,
      sym_field_declaration,
    STATE(429), 1,
      sym__field_identifier,
  [16310] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(950), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [16318] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(952), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16326] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(658), 1,
      anon_sym_SEMI,
    ACTIONS(660), 1,
      anon_sym_LF,
  [16336] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(832), 1,
      anon_sym_LBRACE,
    STATE(399), 1,
      sym_enum_variant_list,
  [16346] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(954), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [16354] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_enum_variant_list,
  [16364] = 3,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(398), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
  [16374] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(638), 1,
      anon_sym_SEMI,
    ACTIONS(640), 1,
      anon_sym_LF,
  [16384] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(634), 1,
      anon_sym_SEMI,
    ACTIONS(636), 1,
      anon_sym_LF,
  [16394] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(654), 1,
      anon_sym_SEMI,
    ACTIONS(656), 1,
      anon_sym_LF,
  [16404] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(956), 2,
      sym_float_literal,
      sym_integer_literal,
  [16412] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_SEMI,
    ACTIONS(674), 1,
      anon_sym_LF,
  [16422] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    ACTIONS(652), 1,
      anon_sym_LF,
  [16432] = 3,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_line_comment,
  [16442] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(556), 1,
      anon_sym_LF,
    ACTIONS(558), 1,
      anon_sym_SEMI,
  [16452] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 2,
      anon_sym_in,
      anon_sym_COLON,
  [16460] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(958), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16468] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(532), 2,
      anon_sym_in,
      anon_sym_COLON,
  [16476] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(960), 1,
      anon_sym_LPAREN,
    STATE(379), 1,
      sym_parameters,
  [16486] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(642), 1,
      anon_sym_SEMI,
    ACTIONS(644), 1,
      anon_sym_LF,
  [16496] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    ACTIONS(618), 1,
      anon_sym_LF,
  [16506] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(620), 1,
      anon_sym_SEMI,
    ACTIONS(622), 1,
      anon_sym_LF,
  [16516] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(548), 2,
      anon_sym_in,
      anon_sym_COLON,
  [16524] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(935), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16532] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(937), 1,
      anon_sym_LBRACE,
    STATE(144), 1,
      sym_block,
  [16542] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(962), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [16550] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_enum_variant_list,
  [16560] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(964), 2,
      sym_float_literal,
      sym_integer_literal,
  [16568] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(966), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [16576] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(662), 1,
      anon_sym_SEMI,
    ACTIONS(664), 1,
      anon_sym_LF,
  [16586] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(968), 2,
      sym_float_literal,
      sym_integer_literal,
  [16594] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(666), 1,
      anon_sym_SEMI,
    ACTIONS(668), 1,
      anon_sym_LF,
  [16604] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(832), 1,
      anon_sym_LBRACE,
    STATE(410), 1,
      sym_enum_variant_list,
  [16614] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 2,
      anon_sym_in,
      anon_sym_COLON,
  [16622] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(624), 1,
      anon_sym_SEMI,
    ACTIONS(626), 1,
      anon_sym_LF,
  [16632] = 3,
    ACTIONS(516), 1,
      sym_line_comment,
    ACTIONS(646), 1,
      anon_sym_SEMI,
    ACTIONS(648), 1,
      anon_sym_LF,
  [16642] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(920), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16650] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 1,
      ts_builtin_sym_end,
  [16657] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(972), 1,
      anon_sym_COLON,
  [16664] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(974), 1,
      anon_sym_enum,
  [16671] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(976), 1,
      anon_sym_COLON,
  [16678] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(978), 1,
      anon_sym_LBRACE,
  [16685] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
  [16692] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(980), 1,
      anon_sym_enum,
  [16699] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(982), 1,
      sym_identifier,
  [16706] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
  [16713] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(986), 1,
      anon_sym_COLON,
  [16720] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(988), 1,
      anon_sym_in,
  [16727] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(990), 1,
      anon_sym_RBRACK,
  [16734] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(992), 1,
      anon_sym_enum,
  [16741] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(994), 1,
      anon_sym_in,
  [16748] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      anon_sym_in,
  [16755] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(998), 1,
      anon_sym_in,
  [16762] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1000), 1,
      anon_sym_in,
  [16769] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_COLON,
  [16776] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1004), 1,
      anon_sym_RBRACK,
  [16783] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1006), 1,
      anon_sym_COLON,
  [16790] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1008), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 186,
  [SMALL_STATE(5)] = 291,
  [SMALL_STATE(6)] = 352,
  [SMALL_STATE(7)] = 409,
  [SMALL_STATE(8)] = 474,
  [SMALL_STATE(9)] = 545,
  [SMALL_STATE(10)] = 620,
  [SMALL_STATE(11)] = 693,
  [SMALL_STATE(12)] = 770,
  [SMALL_STATE(13)] = 839,
  [SMALL_STATE(14)] = 900,
  [SMALL_STATE(15)] = 954,
  [SMALL_STATE(16)] = 1008,
  [SMALL_STATE(17)] = 1062,
  [SMALL_STATE(18)] = 1116,
  [SMALL_STATE(19)] = 1206,
  [SMALL_STATE(20)] = 1260,
  [SMALL_STATE(21)] = 1314,
  [SMALL_STATE(22)] = 1368,
  [SMALL_STATE(23)] = 1422,
  [SMALL_STATE(24)] = 1512,
  [SMALL_STATE(25)] = 1566,
  [SMALL_STATE(26)] = 1656,
  [SMALL_STATE(27)] = 1710,
  [SMALL_STATE(28)] = 1800,
  [SMALL_STATE(29)] = 1854,
  [SMALL_STATE(30)] = 1908,
  [SMALL_STATE(31)] = 1962,
  [SMALL_STATE(32)] = 2052,
  [SMALL_STATE(33)] = 2137,
  [SMALL_STATE(34)] = 2235,
  [SMALL_STATE(35)] = 2333,
  [SMALL_STATE(36)] = 2431,
  [SMALL_STATE(37)] = 2529,
  [SMALL_STATE(38)] = 2627,
  [SMALL_STATE(39)] = 2725,
  [SMALL_STATE(40)] = 2823,
  [SMALL_STATE(41)] = 2921,
  [SMALL_STATE(42)] = 3019,
  [SMALL_STATE(43)] = 3117,
  [SMALL_STATE(44)] = 3215,
  [SMALL_STATE(45)] = 3313,
  [SMALL_STATE(46)] = 3411,
  [SMALL_STATE(47)] = 3461,
  [SMALL_STATE(48)] = 3511,
  [SMALL_STATE(49)] = 3561,
  [SMALL_STATE(50)] = 3610,
  [SMALL_STATE(51)] = 3659,
  [SMALL_STATE(52)] = 3724,
  [SMALL_STATE(53)] = 3791,
  [SMALL_STATE(54)] = 3862,
  [SMALL_STATE(55)] = 3941,
  [SMALL_STATE(56)] = 4016,
  [SMALL_STATE(57)] = 4085,
  [SMALL_STATE(58)] = 4160,
  [SMALL_STATE(59)] = 4235,
  [SMALL_STATE(60)] = 4310,
  [SMALL_STATE(61)] = 4365,
  [SMALL_STATE(62)] = 4440,
  [SMALL_STATE(63)] = 4499,
  [SMALL_STATE(64)] = 4574,
  [SMALL_STATE(65)] = 4649,
  [SMALL_STATE(66)] = 4700,
  [SMALL_STATE(67)] = 4755,
  [SMALL_STATE(68)] = 4818,
  [SMALL_STATE(69)] = 4866,
  [SMALL_STATE(70)] = 4914,
  [SMALL_STATE(71)] = 4962,
  [SMALL_STATE(72)] = 5010,
  [SMALL_STATE(73)] = 5058,
  [SMALL_STATE(74)] = 5106,
  [SMALL_STATE(75)] = 5154,
  [SMALL_STATE(76)] = 5202,
  [SMALL_STATE(77)] = 5268,
  [SMALL_STATE(78)] = 5334,
  [SMALL_STATE(79)] = 5400,
  [SMALL_STATE(80)] = 5468,
  [SMALL_STATE(81)] = 5534,
  [SMALL_STATE(82)] = 5600,
  [SMALL_STATE(83)] = 5665,
  [SMALL_STATE(84)] = 5730,
  [SMALL_STATE(85)] = 5791,
  [SMALL_STATE(86)] = 5852,
  [SMALL_STATE(87)] = 5914,
  [SMALL_STATE(88)] = 5976,
  [SMALL_STATE(89)] = 6029,
  [SMALL_STATE(90)] = 6082,
  [SMALL_STATE(91)] = 6135,
  [SMALL_STATE(92)] = 6188,
  [SMALL_STATE(93)] = 6241,
  [SMALL_STATE(94)] = 6294,
  [SMALL_STATE(95)] = 6347,
  [SMALL_STATE(96)] = 6400,
  [SMALL_STATE(97)] = 6453,
  [SMALL_STATE(98)] = 6506,
  [SMALL_STATE(99)] = 6541,
  [SMALL_STATE(100)] = 6576,
  [SMALL_STATE(101)] = 6611,
  [SMALL_STATE(102)] = 6663,
  [SMALL_STATE(103)] = 6719,
  [SMALL_STATE(104)] = 6759,
  [SMALL_STATE(105)] = 6795,
  [SMALL_STATE(106)] = 6829,
  [SMALL_STATE(107)] = 6873,
  [SMALL_STATE(108)] = 6923,
  [SMALL_STATE(109)] = 6977,
  [SMALL_STATE(110)] = 7017,
  [SMALL_STATE(111)] = 7065,
  [SMALL_STATE(112)] = 7098,
  [SMALL_STATE(113)] = 7135,
  [SMALL_STATE(114)] = 7168,
  [SMALL_STATE(115)] = 7201,
  [SMALL_STATE(116)] = 7234,
  [SMALL_STATE(117)] = 7267,
  [SMALL_STATE(118)] = 7300,
  [SMALL_STATE(119)] = 7345,
  [SMALL_STATE(120)] = 7378,
  [SMALL_STATE(121)] = 7411,
  [SMALL_STATE(122)] = 7444,
  [SMALL_STATE(123)] = 7477,
  [SMALL_STATE(124)] = 7510,
  [SMALL_STATE(125)] = 7543,
  [SMALL_STATE(126)] = 7576,
  [SMALL_STATE(127)] = 7609,
  [SMALL_STATE(128)] = 7646,
  [SMALL_STATE(129)] = 7679,
  [SMALL_STATE(130)] = 7716,
  [SMALL_STATE(131)] = 7749,
  [SMALL_STATE(132)] = 7782,
  [SMALL_STATE(133)] = 7838,
  [SMALL_STATE(134)] = 7882,
  [SMALL_STATE(135)] = 7928,
  [SMALL_STATE(136)] = 7960,
  [SMALL_STATE(137)] = 8008,
  [SMALL_STATE(138)] = 8040,
  [SMALL_STATE(139)] = 8072,
  [SMALL_STATE(140)] = 8104,
  [SMALL_STATE(141)] = 8144,
  [SMALL_STATE(142)] = 8186,
  [SMALL_STATE(143)] = 8218,
  [SMALL_STATE(144)] = 8256,
  [SMALL_STATE(145)] = 8288,
  [SMALL_STATE(146)] = 8338,
  [SMALL_STATE(147)] = 8370,
  [SMALL_STATE(148)] = 8402,
  [SMALL_STATE(149)] = 8440,
  [SMALL_STATE(150)] = 8474,
  [SMALL_STATE(151)] = 8508,
  [SMALL_STATE(152)] = 8542,
  [SMALL_STATE(153)] = 8574,
  [SMALL_STATE(154)] = 8606,
  [SMALL_STATE(155)] = 8637,
  [SMALL_STATE(156)] = 8668,
  [SMALL_STATE(157)] = 8699,
  [SMALL_STATE(158)] = 8730,
  [SMALL_STATE(159)] = 8761,
  [SMALL_STATE(160)] = 8816,
  [SMALL_STATE(161)] = 8847,
  [SMALL_STATE(162)] = 8906,
  [SMALL_STATE(163)] = 8937,
  [SMALL_STATE(164)] = 8968,
  [SMALL_STATE(165)] = 8999,
  [SMALL_STATE(166)] = 9058,
  [SMALL_STATE(167)] = 9089,
  [SMALL_STATE(168)] = 9120,
  [SMALL_STATE(169)] = 9151,
  [SMALL_STATE(170)] = 9210,
  [SMALL_STATE(171)] = 9241,
  [SMALL_STATE(172)] = 9272,
  [SMALL_STATE(173)] = 9303,
  [SMALL_STATE(174)] = 9334,
  [SMALL_STATE(175)] = 9365,
  [SMALL_STATE(176)] = 9396,
  [SMALL_STATE(177)] = 9427,
  [SMALL_STATE(178)] = 9486,
  [SMALL_STATE(179)] = 9517,
  [SMALL_STATE(180)] = 9576,
  [SMALL_STATE(181)] = 9607,
  [SMALL_STATE(182)] = 9662,
  [SMALL_STATE(183)] = 9693,
  [SMALL_STATE(184)] = 9724,
  [SMALL_STATE(185)] = 9774,
  [SMALL_STATE(186)] = 9820,
  [SMALL_STATE(187)] = 9856,
  [SMALL_STATE(188)] = 9912,
  [SMALL_STATE(189)] = 9962,
  [SMALL_STATE(190)] = 9998,
  [SMALL_STATE(191)] = 10048,
  [SMALL_STATE(192)] = 10104,
  [SMALL_STATE(193)] = 10140,
  [SMALL_STATE(194)] = 10176,
  [SMALL_STATE(195)] = 10212,
  [SMALL_STATE(196)] = 10244,
  [SMALL_STATE(197)] = 10276,
  [SMALL_STATE(198)] = 10312,
  [SMALL_STATE(199)] = 10368,
  [SMALL_STATE(200)] = 10424,
  [SMALL_STATE(201)] = 10476,
  [SMALL_STATE(202)] = 10512,
  [SMALL_STATE(203)] = 10552,
  [SMALL_STATE(204)] = 10600,
  [SMALL_STATE(205)] = 10644,
  [SMALL_STATE(206)] = 10694,
  [SMALL_STATE(207)] = 10736,
  [SMALL_STATE(208)] = 10772,
  [SMALL_STATE(209)] = 10810,
  [SMALL_STATE(210)] = 10846,
  [SMALL_STATE(211)] = 10882,
  [SMALL_STATE(212)] = 10914,
  [SMALL_STATE(213)] = 10970,
  [SMALL_STATE(214)] = 11006,
  [SMALL_STATE(215)] = 11042,
  [SMALL_STATE(216)] = 11098,
  [SMALL_STATE(217)] = 11154,
  [SMALL_STATE(218)] = 11190,
  [SMALL_STATE(219)] = 11240,
  [SMALL_STATE(220)] = 11296,
  [SMALL_STATE(221)] = 11328,
  [SMALL_STATE(222)] = 11378,
  [SMALL_STATE(223)] = 11428,
  [SMALL_STATE(224)] = 11484,
  [SMALL_STATE(225)] = 11520,
  [SMALL_STATE(226)] = 11574,
  [SMALL_STATE(227)] = 11603,
  [SMALL_STATE(228)] = 11632,
  [SMALL_STATE(229)] = 11661,
  [SMALL_STATE(230)] = 11690,
  [SMALL_STATE(231)] = 11719,
  [SMALL_STATE(232)] = 11748,
  [SMALL_STATE(233)] = 11777,
  [SMALL_STATE(234)] = 11806,
  [SMALL_STATE(235)] = 11835,
  [SMALL_STATE(236)] = 11864,
  [SMALL_STATE(237)] = 11893,
  [SMALL_STATE(238)] = 11922,
  [SMALL_STATE(239)] = 11951,
  [SMALL_STATE(240)] = 11999,
  [SMALL_STATE(241)] = 12045,
  [SMALL_STATE(242)] = 12091,
  [SMALL_STATE(243)] = 12137,
  [SMALL_STATE(244)] = 12183,
  [SMALL_STATE(245)] = 12229,
  [SMALL_STATE(246)] = 12275,
  [SMALL_STATE(247)] = 12321,
  [SMALL_STATE(248)] = 12367,
  [SMALL_STATE(249)] = 12413,
  [SMALL_STATE(250)] = 12459,
  [SMALL_STATE(251)] = 12505,
  [SMALL_STATE(252)] = 12551,
  [SMALL_STATE(253)] = 12597,
  [SMALL_STATE(254)] = 12643,
  [SMALL_STATE(255)] = 12689,
  [SMALL_STATE(256)] = 12735,
  [SMALL_STATE(257)] = 12781,
  [SMALL_STATE(258)] = 12827,
  [SMALL_STATE(259)] = 12873,
  [SMALL_STATE(260)] = 12919,
  [SMALL_STATE(261)] = 12965,
  [SMALL_STATE(262)] = 13011,
  [SMALL_STATE(263)] = 13057,
  [SMALL_STATE(264)] = 13103,
  [SMALL_STATE(265)] = 13149,
  [SMALL_STATE(266)] = 13195,
  [SMALL_STATE(267)] = 13241,
  [SMALL_STATE(268)] = 13287,
  [SMALL_STATE(269)] = 13333,
  [SMALL_STATE(270)] = 13379,
  [SMALL_STATE(271)] = 13425,
  [SMALL_STATE(272)] = 13471,
  [SMALL_STATE(273)] = 13517,
  [SMALL_STATE(274)] = 13563,
  [SMALL_STATE(275)] = 13609,
  [SMALL_STATE(276)] = 13655,
  [SMALL_STATE(277)] = 13701,
  [SMALL_STATE(278)] = 13747,
  [SMALL_STATE(279)] = 13793,
  [SMALL_STATE(280)] = 13839,
  [SMALL_STATE(281)] = 13885,
  [SMALL_STATE(282)] = 13931,
  [SMALL_STATE(283)] = 13977,
  [SMALL_STATE(284)] = 14023,
  [SMALL_STATE(285)] = 14069,
  [SMALL_STATE(286)] = 14115,
  [SMALL_STATE(287)] = 14161,
  [SMALL_STATE(288)] = 14207,
  [SMALL_STATE(289)] = 14253,
  [SMALL_STATE(290)] = 14299,
  [SMALL_STATE(291)] = 14345,
  [SMALL_STATE(292)] = 14391,
  [SMALL_STATE(293)] = 14437,
  [SMALL_STATE(294)] = 14483,
  [SMALL_STATE(295)] = 14529,
  [SMALL_STATE(296)] = 14575,
  [SMALL_STATE(297)] = 14621,
  [SMALL_STATE(298)] = 14667,
  [SMALL_STATE(299)] = 14713,
  [SMALL_STATE(300)] = 14759,
  [SMALL_STATE(301)] = 14805,
  [SMALL_STATE(302)] = 14851,
  [SMALL_STATE(303)] = 14897,
  [SMALL_STATE(304)] = 14943,
  [SMALL_STATE(305)] = 14989,
  [SMALL_STATE(306)] = 15035,
  [SMALL_STATE(307)] = 15081,
  [SMALL_STATE(308)] = 15127,
  [SMALL_STATE(309)] = 15173,
  [SMALL_STATE(310)] = 15196,
  [SMALL_STATE(311)] = 15215,
  [SMALL_STATE(312)] = 15235,
  [SMALL_STATE(313)] = 15253,
  [SMALL_STATE(314)] = 15273,
  [SMALL_STATE(315)] = 15285,
  [SMALL_STATE(316)] = 15305,
  [SMALL_STATE(317)] = 15323,
  [SMALL_STATE(318)] = 15335,
  [SMALL_STATE(319)] = 15347,
  [SMALL_STATE(320)] = 15367,
  [SMALL_STATE(321)] = 15385,
  [SMALL_STATE(322)] = 15400,
  [SMALL_STATE(323)] = 15415,
  [SMALL_STATE(324)] = 15432,
  [SMALL_STATE(325)] = 15447,
  [SMALL_STATE(326)] = 15461,
  [SMALL_STATE(327)] = 15473,
  [SMALL_STATE(328)] = 15483,
  [SMALL_STATE(329)] = 15493,
  [SMALL_STATE(330)] = 15507,
  [SMALL_STATE(331)] = 15517,
  [SMALL_STATE(332)] = 15533,
  [SMALL_STATE(333)] = 15547,
  [SMALL_STATE(334)] = 15563,
  [SMALL_STATE(335)] = 15579,
  [SMALL_STATE(336)] = 15593,
  [SMALL_STATE(337)] = 15603,
  [SMALL_STATE(338)] = 15615,
  [SMALL_STATE(339)] = 15629,
  [SMALL_STATE(340)] = 15643,
  [SMALL_STATE(341)] = 15657,
  [SMALL_STATE(342)] = 15669,
  [SMALL_STATE(343)] = 15681,
  [SMALL_STATE(344)] = 15693,
  [SMALL_STATE(345)] = 15707,
  [SMALL_STATE(346)] = 15723,
  [SMALL_STATE(347)] = 15737,
  [SMALL_STATE(348)] = 15751,
  [SMALL_STATE(349)] = 15767,
  [SMALL_STATE(350)] = 15783,
  [SMALL_STATE(351)] = 15799,
  [SMALL_STATE(352)] = 15809,
  [SMALL_STATE(353)] = 15819,
  [SMALL_STATE(354)] = 15833,
  [SMALL_STATE(355)] = 15847,
  [SMALL_STATE(356)] = 15861,
  [SMALL_STATE(357)] = 15874,
  [SMALL_STATE(358)] = 15887,
  [SMALL_STATE(359)] = 15900,
  [SMALL_STATE(360)] = 15913,
  [SMALL_STATE(361)] = 15926,
  [SMALL_STATE(362)] = 15939,
  [SMALL_STATE(363)] = 15952,
  [SMALL_STATE(364)] = 15965,
  [SMALL_STATE(365)] = 15978,
  [SMALL_STATE(366)] = 15991,
  [SMALL_STATE(367)] = 16004,
  [SMALL_STATE(368)] = 16015,
  [SMALL_STATE(369)] = 16028,
  [SMALL_STATE(370)] = 16041,
  [SMALL_STATE(371)] = 16054,
  [SMALL_STATE(372)] = 16067,
  [SMALL_STATE(373)] = 16080,
  [SMALL_STATE(374)] = 16093,
  [SMALL_STATE(375)] = 16106,
  [SMALL_STATE(376)] = 16119,
  [SMALL_STATE(377)] = 16130,
  [SMALL_STATE(378)] = 16143,
  [SMALL_STATE(379)] = 16156,
  [SMALL_STATE(380)] = 16169,
  [SMALL_STATE(381)] = 16180,
  [SMALL_STATE(382)] = 16193,
  [SMALL_STATE(383)] = 16206,
  [SMALL_STATE(384)] = 16219,
  [SMALL_STATE(385)] = 16232,
  [SMALL_STATE(386)] = 16245,
  [SMALL_STATE(387)] = 16258,
  [SMALL_STATE(388)] = 16271,
  [SMALL_STATE(389)] = 16284,
  [SMALL_STATE(390)] = 16297,
  [SMALL_STATE(391)] = 16310,
  [SMALL_STATE(392)] = 16318,
  [SMALL_STATE(393)] = 16326,
  [SMALL_STATE(394)] = 16336,
  [SMALL_STATE(395)] = 16346,
  [SMALL_STATE(396)] = 16354,
  [SMALL_STATE(397)] = 16364,
  [SMALL_STATE(398)] = 16374,
  [SMALL_STATE(399)] = 16384,
  [SMALL_STATE(400)] = 16394,
  [SMALL_STATE(401)] = 16404,
  [SMALL_STATE(402)] = 16412,
  [SMALL_STATE(403)] = 16422,
  [SMALL_STATE(404)] = 16432,
  [SMALL_STATE(405)] = 16442,
  [SMALL_STATE(406)] = 16452,
  [SMALL_STATE(407)] = 16460,
  [SMALL_STATE(408)] = 16468,
  [SMALL_STATE(409)] = 16476,
  [SMALL_STATE(410)] = 16486,
  [SMALL_STATE(411)] = 16496,
  [SMALL_STATE(412)] = 16506,
  [SMALL_STATE(413)] = 16516,
  [SMALL_STATE(414)] = 16524,
  [SMALL_STATE(415)] = 16532,
  [SMALL_STATE(416)] = 16542,
  [SMALL_STATE(417)] = 16550,
  [SMALL_STATE(418)] = 16560,
  [SMALL_STATE(419)] = 16568,
  [SMALL_STATE(420)] = 16576,
  [SMALL_STATE(421)] = 16586,
  [SMALL_STATE(422)] = 16594,
  [SMALL_STATE(423)] = 16604,
  [SMALL_STATE(424)] = 16614,
  [SMALL_STATE(425)] = 16622,
  [SMALL_STATE(426)] = 16632,
  [SMALL_STATE(427)] = 16642,
  [SMALL_STATE(428)] = 16650,
  [SMALL_STATE(429)] = 16657,
  [SMALL_STATE(430)] = 16664,
  [SMALL_STATE(431)] = 16671,
  [SMALL_STATE(432)] = 16678,
  [SMALL_STATE(433)] = 16685,
  [SMALL_STATE(434)] = 16692,
  [SMALL_STATE(435)] = 16699,
  [SMALL_STATE(436)] = 16706,
  [SMALL_STATE(437)] = 16713,
  [SMALL_STATE(438)] = 16720,
  [SMALL_STATE(439)] = 16727,
  [SMALL_STATE(440)] = 16734,
  [SMALL_STATE(441)] = 16741,
  [SMALL_STATE(442)] = 16748,
  [SMALL_STATE(443)] = 16755,
  [SMALL_STATE(444)] = 16762,
  [SMALL_STATE(445)] = 16769,
  [SMALL_STATE(446)] = 16776,
  [SMALL_STATE(447)] = 16783,
  [SMALL_STATE(448)] = 16790,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 23),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 23),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(241),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(250),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(402),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(430),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(348),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(259),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(183),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(183),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(335),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(435),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(260),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 5, .production_id = 20),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 5, .production_id = 20),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(75),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(257),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(267),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(266),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(182),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(90),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(73),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(89),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(92),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(430),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(333),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(43),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(301),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(87),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(329),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(256),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(46),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 14),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 14),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 6, .production_id = 25),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 6, .production_id = 25),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment_statement, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment_statement, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 25),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 25),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 4, .production_id = 14),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 4, .production_id = 14),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement_statement, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement_statement, 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(424),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(408),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(421),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(406),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(346),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(98),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_specifier, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_specifier, 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_pattern, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_pattern, 1),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 2, .production_id = 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 2, .production_id = 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_literal, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_literal, 2),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 9),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 9),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 16),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 16),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 28),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 28),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, .production_id = 12),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 12),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 24),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 24),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 13),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 13),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 4, .production_id = 13),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 4, .production_id = 13),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 5),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 5),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 4),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 4),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 22),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 19),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 19),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 18),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 18),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 8),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 8),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 7),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 7),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 2),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 17),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 17),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 3),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 11),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 11),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 2, .production_id = 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 2, .production_id = 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 26),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, .production_id = 6),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(447),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 1),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 1),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1), SHIFT(330),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2), SHIFT_REPEAT(310),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 29),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_field_declaration_list, 2), REDUCE(sym_ordered_field_declaration_list, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 3),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 15),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [864] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(344),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 4),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2), SHIFT_REPEAT(320),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2), SHIFT_REPEAT(321),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(86),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_field_declaration_list_repeat1, 2), SHIFT_REPEAT(390),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_field_declaration_list_repeat1, 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [945] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(32),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 13),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 27),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [970] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boxed_modifier, 1),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_integral_type, 3),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 21),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
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
