#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 448
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 2
#define TOKEN_COUNT 77
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
  sym_anonymous_specifier = 69,
  anon_sym_if = 70,
  anon_sym_else = 71,
  anon_sym_true = 72,
  anon_sym_false = 73,
  sym_line_comment = 74,
  sym__string_content = 75,
  sym_float_literal = 76,
  sym_source_file = 77,
  sym__expression = 78,
  sym_while_statement = 79,
  sym_increment_statement = 80,
  sym_decrement_statement = 81,
  sym_continue_statement = 82,
  sym_for_expression = 83,
  sym_call_expression = 84,
  sym_range_expression = 85,
  sym_arguments = 86,
  sym_argument = 87,
  sym__top_level_declaration = 88,
  sym__type = 89,
  sym_array_type = 90,
  sym_let_declaration = 91,
  sym_mutable_declaration = 92,
  sym_boxed_modifier = 93,
  sym_enum_declaration = 94,
  sym_enum_integral_type = 95,
  sym_enum_variant_list = 96,
  sym_enum_variant = 97,
  sym_field_declaration_list = 98,
  sym_field_declaration = 99,
  sym__field_identifier = 100,
  sym_ordered_field_declaration_list = 101,
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
  [sym_anonymous_specifier] = "anonymous_specifier",
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
  [sym_anonymous_specifier] = sym_anonymous_specifier,
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
  [sym_anonymous_specifier] = {
    .visible = true,
    .named = true,
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
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(26);
      if (lookahead == '3') ADVANCE(27);
      if (lookahead == '6') ADVANCE(28);
      if (lookahead == '8') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '3') ADVANCE(38);
      if (lookahead == '6') ADVANCE(39);
      if (lookahead == '8') ADVANCE(40);
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == '4') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(57);
      if (lookahead == '6') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == '4') ADVANCE(60);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(66);
      if (lookahead == '6') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == '4') ADVANCE(69);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == '8') ADVANCE(83);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 61:
      if (lookahead == 'z') ADVANCE(84);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == '8') ADVANCE(87);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 70:
      if (lookahead == 'z') ADVANCE(88);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_anonymous_specifier);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_boxed);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_c_char);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 109:
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
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 10, .external_lex_state = 2},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 10, .external_lex_state = 2},
  [123] = {.lex_state = 10, .external_lex_state = 2},
  [124] = {.lex_state = 10, .external_lex_state = 2},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 10, .external_lex_state = 2},
  [128] = {.lex_state = 55, .external_lex_state = 2},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 10, .external_lex_state = 2},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 10, .external_lex_state = 2},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 55, .external_lex_state = 2},
  [140] = {.lex_state = 10, .external_lex_state = 2},
  [141] = {.lex_state = 55, .external_lex_state = 2},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 10, .external_lex_state = 2},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 10, .external_lex_state = 2},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 55, .external_lex_state = 2},
  [148] = {.lex_state = 55, .external_lex_state = 2},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 10, .external_lex_state = 2},
  [151] = {.lex_state = 55, .external_lex_state = 2},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 55, .external_lex_state = 2},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 55, .external_lex_state = 2},
  [156] = {.lex_state = 55, .external_lex_state = 2},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 55, .external_lex_state = 2},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 55, .external_lex_state = 2},
  [162] = {.lex_state = 55, .external_lex_state = 2},
  [163] = {.lex_state = 55, .external_lex_state = 2},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 55, .external_lex_state = 2},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 55, .external_lex_state = 2},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 55, .external_lex_state = 2},
  [172] = {.lex_state = 55, .external_lex_state = 2},
  [173] = {.lex_state = 55, .external_lex_state = 2},
  [174] = {.lex_state = 55, .external_lex_state = 2},
  [175] = {.lex_state = 55, .external_lex_state = 2},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 55, .external_lex_state = 2},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 1, .external_lex_state = 2},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 1},
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
  [238] = {.lex_state = 9, .external_lex_state = 2},
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
  [308] = {.lex_state = 7},
  [309] = {.lex_state = 13},
  [310] = {.lex_state = 7},
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
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 7},
  [327] = {.lex_state = 13},
  [328] = {.lex_state = 8, .external_lex_state = 3},
  [329] = {.lex_state = 13},
  [330] = {.lex_state = 7},
  [331] = {.lex_state = 8, .external_lex_state = 3},
  [332] = {.lex_state = 7},
  [333] = {.lex_state = 2},
  [334] = {.lex_state = 8, .external_lex_state = 3},
  [335] = {.lex_state = 13},
  [336] = {.lex_state = 4},
  [337] = {.lex_state = 8, .external_lex_state = 3},
  [338] = {.lex_state = 8, .external_lex_state = 3},
  [339] = {.lex_state = 8, .external_lex_state = 3},
  [340] = {.lex_state = 4},
  [341] = {.lex_state = 4},
  [342] = {.lex_state = 13},
  [343] = {.lex_state = 8, .external_lex_state = 3},
  [344] = {.lex_state = 7},
  [345] = {.lex_state = 8, .external_lex_state = 3},
  [346] = {.lex_state = 8, .external_lex_state = 3},
  [347] = {.lex_state = 7},
  [348] = {.lex_state = 4},
  [349] = {.lex_state = 4},
  [350] = {.lex_state = 13},
  [351] = {.lex_state = 13},
  [352] = {.lex_state = 8, .external_lex_state = 3},
  [353] = {.lex_state = 8, .external_lex_state = 3},
  [354] = {.lex_state = 7},
  [355] = {.lex_state = 55},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 4},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 55},
  [361] = {.lex_state = 55},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 4},
  [367] = {.lex_state = 4},
  [368] = {.lex_state = 55},
  [369] = {.lex_state = 55},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 4},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 13},
  [379] = {.lex_state = 4},
  [380] = {.lex_state = 55},
  [381] = {.lex_state = 55},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 55},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 7},
  [390] = {.lex_state = 13},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 2},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 13},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 2},
  [397] = {.lex_state = 2},
  [398] = {.lex_state = 2},
  [399] = {.lex_state = 2},
  [400] = {.lex_state = 5, .external_lex_state = 2},
  [401] = {.lex_state = 2},
  [402] = {.lex_state = 2},
  [403] = {.lex_state = 2},
  [404] = {.lex_state = 2},
  [405] = {.lex_state = 7},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 7},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 2},
  [410] = {.lex_state = 2},
  [411] = {.lex_state = 2},
  [412] = {.lex_state = 7},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 13},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 5, .external_lex_state = 2},
  [418] = {.lex_state = 13},
  [419] = {.lex_state = 2},
  [420] = {.lex_state = 5, .external_lex_state = 2},
  [421] = {.lex_state = 2},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 7},
  [424] = {.lex_state = 2},
  [425] = {.lex_state = 2},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 7},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 7},
  [434] = {.lex_state = 7},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 7},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 7},
  [440] = {.lex_state = 7},
  [441] = {.lex_state = 7},
  [442] = {.lex_state = 7},
  [443] = {.lex_state = 7},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
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
    [sym_anonymous_specifier] = ACTIONS(1),
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
    [sym__expression] = STATE(131),
    [sym_while_statement] = STATE(404),
    [sym_increment_statement] = STATE(404),
    [sym_decrement_statement] = STATE(404),
    [sym_continue_statement] = STATE(404),
    [sym_for_expression] = STATE(165),
    [sym_call_expression] = STATE(165),
    [sym_range_expression] = STATE(165),
    [sym__top_level_declaration] = STATE(2),
    [sym_let_declaration] = STATE(404),
    [sym_mutable_declaration] = STATE(404),
    [sym_boxed_modifier] = STATE(439),
    [sym_enum_declaration] = STATE(404),
    [sym_unary_expression] = STATE(165),
    [sym_return_statement] = STATE(404),
    [sym_binary_expression] = STATE(165),
    [sym__literal] = STATE(165),
    [sym_string_literal] = STATE(182),
    [sym_function_declaration] = STATE(2),
    [sym_block] = STATE(404),
    [sym_if_statement] = STATE(404),
    [sym_boolean_literal] = STATE(182),
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
    STATE(131), 1,
      sym__expression,
    STATE(439), 1,
      sym_boxed_modifier,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(182), 2,
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
    STATE(165), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(404), 10,
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
    STATE(131), 1,
      sym__expression,
    STATE(439), 1,
      sym_boxed_modifier,
    ACTIONS(136), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(182), 2,
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
    STATE(165), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(404), 10,
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
    STATE(164), 1,
      sym__expression,
    STATE(372), 1,
      aux_sym_arguments_repeat2,
    STATE(405), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(444), 1,
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
    STATE(194), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(129), 6,
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
    STATE(168), 1,
      sym__expression,
    STATE(376), 1,
      aux_sym_arguments_repeat2,
    STATE(405), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(444), 1,
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
    STATE(194), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(129), 6,
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
    STATE(178), 1,
      sym__expression,
    STATE(386), 1,
      aux_sym_arguments_repeat2,
    STATE(405), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(444), 1,
      sym__pattern,
    ACTIONS(187), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(194), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(129), 6,
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
    STATE(176), 1,
      sym__expression,
    STATE(387), 1,
      aux_sym_arguments_repeat2,
    STATE(405), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(444), 1,
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
    STATE(194), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(129), 6,
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
    STATE(160), 1,
      sym__expression,
    STATE(363), 1,
      aux_sym_arguments_repeat2,
    STATE(405), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(444), 1,
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
    STATE(194), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(129), 6,
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
    STATE(224), 1,
      sym__expression,
    STATE(405), 1,
      sym_negative_literal,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(444), 1,
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
    STATE(81), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(194), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(129), 6,
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
    STATE(433), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    STATE(433), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    STATE(433), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    STATE(433), 1,
      sym_boxed_modifier,
    ACTIONS(335), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    STATE(433), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    STATE(433), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    STATE(433), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    STATE(433), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    STATE(433), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    STATE(433), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    STATE(433), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    STATE(433), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    STATE(433), 1,
      sym_boxed_modifier,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
  [4914] = 3,
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
  [4962] = 3,
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
  [5010] = 3,
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
  [5058] = 3,
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
  [5106] = 3,
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
    STATE(362), 1,
      aux_sym_arguments_repeat2,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(444), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(405), 3,
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
    STATE(370), 1,
      aux_sym_arguments_repeat2,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(444), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(405), 3,
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
    STATE(374), 1,
      aux_sym_arguments_repeat2,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(444), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(405), 3,
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
  [5400] = 14,
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
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      aux_sym_arguments_repeat2,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(444), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(405), 3,
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
  [5466] = 14,
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
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_arguments_repeat2,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(444), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(405), 3,
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
  [5532] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(444), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(432), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(83), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(405), 3,
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
  [5593] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    ACTIONS(438), 1,
      sym_anonymous_specifier,
    STATE(359), 1,
      sym_parameter,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(436), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(405), 3,
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
  [5658] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(440), 1,
      sym_identifier,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      aux_sym_string_literal_token1,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(444), 1,
      sym__pattern,
    ACTIONS(443), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(457), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(451), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(405), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(445), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [5719] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    ACTIONS(438), 1,
      sym_anonymous_specifier,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(426), 1,
      sym_parameter,
    STATE(436), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(405), 3,
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
  [5781] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    ACTIONS(438), 1,
      sym_anonymous_specifier,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(426), 1,
      sym_parameter,
    STATE(436), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(405), 3,
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
  [5843] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    ACTIONS(438), 1,
      sym_anonymous_specifier,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(426), 1,
      sym_parameter,
    STATE(436), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(405), 3,
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
  [5902] = 14,
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
    STATE(69), 2,
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
  [5964] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(430), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(405), 3,
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
  [6017] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    STATE(423), 1,
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
    STATE(405), 3,
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
  [6070] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(472), 1,
      anon_sym_DASH,
    STATE(336), 1,
      sym__literal_pattern,
    STATE(348), 1,
      sym__pattern,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(474), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(340), 3,
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
  [6123] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(476), 1,
      sym_identifier,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(111), 1,
      sym__pattern,
    STATE(124), 1,
      sym__literal_pattern,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(482), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(122), 3,
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
  [6176] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    STATE(423), 1,
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
    STATE(405), 3,
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
  [6229] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    STATE(423), 1,
      sym__literal_pattern,
    STATE(440), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(405), 3,
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
  [6282] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    STATE(423), 1,
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
    STATE(405), 3,
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
  [6335] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_DASH,
    STATE(423), 1,
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
    STATE(405), 3,
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
  [6388] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(476), 1,
      sym_identifier,
    ACTIONS(480), 1,
      anon_sym_DASH,
    STATE(124), 1,
      sym__literal_pattern,
    STATE(130), 1,
      sym__pattern,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(482), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(122), 3,
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
  [6441] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(472), 1,
      anon_sym_DASH,
    STATE(336), 1,
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
    STATE(340), 3,
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
  [6494] = 3,
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
  [6529] = 3,
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
  [6564] = 3,
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
  [6599] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
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
  [6639] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(110), 1,
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
  [6675] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
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
  [6715] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    STATE(110), 1,
      sym_arguments,
    ACTIONS(488), 2,
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
  [6759] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    STATE(110), 1,
      sym_arguments,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
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
  [6809] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    STATE(110), 1,
      sym_arguments,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
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
  [6863] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    STATE(110), 1,
      sym_arguments,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
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
  [6915] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(110), 1,
      sym_arguments,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
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
  [6971] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    STATE(110), 1,
      sym_arguments,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
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
  [7019] = 3,
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
  [7052] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(508), 1,
      anon_sym_COLON,
    ACTIONS(510), 1,
      anon_sym_EQ,
    ACTIONS(506), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(504), 14,
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
  [7089] = 3,
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
  [7122] = 3,
    ACTIONS(193), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [7155] = 3,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [7188] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    ACTIONS(520), 1,
      anon_sym_BSLASHn,
    STATE(308), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(322), 1,
      sym_field_declaration,
    STATE(360), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(428), 1,
      sym__field_identifier,
    ACTIONS(518), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [7233] = 3,
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
  [7266] = 3,
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
  [7299] = 3,
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
  [7332] = 3,
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
  [7365] = 3,
    ACTIONS(205), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [7398] = 3,
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
  [7431] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 11,
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
    ACTIONS(522), 14,
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
  [7464] = 3,
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
  [7497] = 3,
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
  [7530] = 3,
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
  [7563] = 3,
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
  [7596] = 3,
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
  [7629] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      anon_sym_else,
    STATE(169), 1,
      sym_else_clause,
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
  [7666] = 3,
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
  [7699] = 5,
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
  [7736] = 15,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(552), 1,
      anon_sym_LF,
    ACTIONS(554), 1,
      anon_sym_SEMI,
    ACTIONS(556), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(558), 1,
      anon_sym_DASH_DASH,
    ACTIONS(560), 1,
      anon_sym_DOT_DOT,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      anon_sym_AMP,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_CARET,
    STATE(154), 1,
      sym_arguments,
    ACTIONS(574), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(564), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(572), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7792] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(580), 10,
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
    ACTIONS(578), 14,
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
  [7824] = 6,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      anon_sym_DOT_DOT,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
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
  [7862] = 12,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      anon_sym_DOT_DOT,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      anon_sym_AMP,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_CARET,
    STATE(154), 1,
      sym_arguments,
    ACTIONS(574), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(564), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(576), 3,
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
  [7912] = 10,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      anon_sym_DOT_DOT,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      anon_sym_AMP,
    STATE(154), 1,
      sym_arguments,
    ACTIONS(574), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(564), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(576), 3,
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
  [7958] = 11,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      anon_sym_DOT_DOT,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      anon_sym_AMP,
    ACTIONS(570), 1,
      anon_sym_CARET,
    STATE(154), 1,
      sym_arguments,
    ACTIONS(574), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(564), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(576), 3,
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
  [8006] = 9,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      anon_sym_DOT_DOT,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      sym_arguments,
    ACTIONS(574), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(564), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(576), 3,
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
  [8050] = 7,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      anon_sym_DOT_DOT,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      sym_arguments,
    ACTIONS(576), 3,
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
  [8090] = 3,
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
  [8122] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(586), 1,
      anon_sym_EQ,
    ACTIONS(584), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(582), 14,
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
  [8156] = 3,
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
  [8188] = 8,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      anon_sym_DOT_DOT,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      sym_arguments,
    ACTIONS(564), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(576), 3,
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
  [8230] = 3,
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
  [8262] = 6,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      anon_sym_DOT_DOT,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
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
  [8300] = 3,
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
  [8332] = 4,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    STATE(154), 1,
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
  [8366] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(598), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(600), 15,
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
  [8398] = 3,
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
  [8430] = 3,
    ACTIONS(217), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [8462] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(606), 1,
      anon_sym_EQ,
    ACTIONS(604), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(602), 14,
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
  [8496] = 3,
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
  [8528] = 3,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [8560] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(614), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(612), 14,
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
  [8591] = 3,
    ACTIONS(211), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [8622] = 3,
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
  [8653] = 3,
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
  [8684] = 3,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [8715] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(110), 1,
      sym_arguments,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(624), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8770] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(632), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(630), 14,
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
  [8801] = 17,
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
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(110), 1,
      sym_arguments,
    STATE(362), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8860] = 3,
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
  [8891] = 3,
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
  [8922] = 3,
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
  [8953] = 17,
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
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(110), 1,
      sym_arguments,
    STATE(370), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9012] = 3,
    ACTIONS(197), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [9043] = 3,
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
  [9074] = 3,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [9105] = 17,
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
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(110), 1,
      sym_arguments,
    STATE(374), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9164] = 3,
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
  [9195] = 3,
    ACTIONS(231), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [9226] = 3,
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
  [9257] = 3,
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
  [9288] = 3,
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
  [9319] = 3,
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
  [9350] = 3,
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
  [9381] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(110), 1,
      sym_arguments,
    STATE(383), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9440] = 3,
    ACTIONS(227), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [9471] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(110), 1,
      sym_arguments,
    STATE(358), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9530] = 3,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [9561] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(110), 1,
      sym_arguments,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(666), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9616] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(670), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(668), 14,
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
  [9647] = 3,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [9678] = 13,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_AMP,
    ACTIONS(680), 1,
      anon_sym_PIPE,
    ACTIONS(682), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(686), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(676), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(688), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(684), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9728] = 11,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_AMP,
    ACTIONS(682), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(686), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(676), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(688), 3,
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
  [9774] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      sym_identifier,
    ACTIONS(694), 1,
      anon_sym_LBRACK,
    STATE(317), 1,
      sym_array_type,
    STATE(391), 1,
      sym__type,
    ACTIONS(692), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [9810] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(110), 1,
      sym_arguments,
    STATE(153), 1,
      sym_block,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9866] = 13,
    ACTIONS(388), 1,
      anon_sym_SEMI,
    ACTIONS(390), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_AMP,
    ACTIONS(680), 1,
      anon_sym_PIPE,
    ACTIONS(682), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(686), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(676), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(688), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(684), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9916] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      sym_identifier,
    ACTIONS(694), 1,
      anon_sym_LBRACK,
    STATE(317), 1,
      sym_array_type,
    STATE(447), 1,
      sym__type,
    ACTIONS(692), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [9952] = 13,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(414), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_AMP,
    ACTIONS(680), 1,
      anon_sym_PIPE,
    ACTIONS(682), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(686), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(676), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(688), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(684), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10002] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(110), 1,
      sym_arguments,
    STATE(333), 1,
      sym_block,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10058] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(696), 1,
      sym_identifier,
    ACTIONS(700), 1,
      anon_sym_LBRACK,
    STATE(357), 1,
      sym__type,
    STATE(379), 1,
      sym_array_type,
    ACTIONS(698), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10094] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(696), 1,
      sym_identifier,
    ACTIONS(700), 1,
      anon_sym_LBRACK,
    STATE(367), 1,
      sym__type,
    STATE(379), 1,
      sym_array_type,
    ACTIONS(698), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10130] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      sym_identifier,
    ACTIONS(694), 1,
      anon_sym_LBRACK,
    STATE(317), 1,
      sym_array_type,
    STATE(431), 1,
      sym__type,
    ACTIONS(692), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10166] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 1,
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
  [10198] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(532), 1,
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
  [10230] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      sym_identifier,
    ACTIONS(694), 1,
      anon_sym_LBRACK,
    STATE(317), 1,
      sym_array_type,
    STATE(438), 1,
      sym__type,
    ACTIONS(692), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10266] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(110), 1,
      sym_arguments,
    STATE(128), 1,
      sym_block,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10322] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    ACTIONS(702), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_block,
    STATE(110), 1,
      sym_arguments,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10378] = 14,
    ACTIONS(464), 1,
      anon_sym_SEMI,
    ACTIONS(466), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_for,
    ACTIONS(708), 1,
      anon_sym_DOT_DOT,
    ACTIONS(710), 1,
      anon_sym_DASH,
    ACTIONS(714), 1,
      aux_sym_string_literal_token1,
    ACTIONS(718), 1,
      sym_float_literal,
    STATE(189), 1,
      sym__expression,
    ACTIONS(716), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(712), 3,
      sym_integer_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(230), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10430] = 6,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
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
  [10466] = 8,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(676), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(688), 3,
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
  [10506] = 12,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_AMP,
    ACTIONS(680), 1,
      anon_sym_PIPE,
    ACTIONS(682), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(686), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(676), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(688), 3,
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
  [10554] = 10,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_AMP,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(686), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(676), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(688), 3,
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
  [10598] = 13,
    ACTIONS(404), 1,
      anon_sym_SEMI,
    ACTIONS(406), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_AMP,
    ACTIONS(680), 1,
      anon_sym_PIPE,
    ACTIONS(682), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(686), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(676), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(688), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(684), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10648] = 9,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(686), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(676), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(688), 3,
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
  [10690] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(720), 1,
      sym_identifier,
    ACTIONS(724), 1,
      anon_sym_LBRACK,
    STATE(132), 1,
      sym_array_type,
    STATE(150), 1,
      sym__type,
    ACTIONS(722), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10726] = 7,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(688), 3,
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
  [10764] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(720), 1,
      sym_identifier,
    ACTIONS(724), 1,
      anon_sym_LBRACK,
    STATE(132), 1,
      sym_array_type,
    STATE(140), 1,
      sym__type,
    ACTIONS(722), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10800] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      sym_identifier,
    ACTIONS(694), 1,
      anon_sym_LBRACK,
    STATE(317), 1,
      sym_array_type,
    STATE(414), 1,
      sym__type,
    ACTIONS(692), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10836] = 4,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    STATE(234), 1,
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
  [10868] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(71), 1,
      sym_block,
    STATE(110), 1,
      sym_arguments,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10924] = 6,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
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
  [10960] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      sym_identifier,
    ACTIONS(694), 1,
      anon_sym_LBRACK,
    STATE(317), 1,
      sym_array_type,
    STATE(326), 1,
      sym__type,
    ACTIONS(692), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10996] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(110), 1,
      sym_arguments,
    STATE(177), 1,
      sym_block,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11052] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    ACTIONS(726), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_arguments,
    STATE(121), 1,
      sym_block,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11108] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      sym_identifier,
    ACTIONS(694), 1,
      anon_sym_LBRACK,
    STATE(317), 1,
      sym_array_type,
    STATE(445), 1,
      sym__type,
    ACTIONS(692), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [11144] = 13,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(398), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_AMP,
    ACTIONS(680), 1,
      anon_sym_PIPE,
    ACTIONS(682), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(686), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(676), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(688), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(684), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11194] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(110), 1,
      sym_arguments,
    STATE(410), 1,
      sym_block,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11250] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 1,
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
  [11282] = 13,
    ACTIONS(392), 1,
      anon_sym_SEMI,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_AMP,
    ACTIONS(680), 1,
      anon_sym_PIPE,
    ACTIONS(682), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(686), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(676), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(688), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(684), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11332] = 13,
    ACTIONS(400), 1,
      anon_sym_SEMI,
    ACTIONS(402), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_AMP,
    ACTIONS(680), 1,
      anon_sym_PIPE,
    ACTIONS(682), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(686), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(676), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(688), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(684), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11382] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    ACTIONS(728), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_arguments,
    STATE(236), 1,
      sym_block,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11438] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      sym_identifier,
    ACTIONS(694), 1,
      anon_sym_LBRACK,
    STATE(317), 1,
      sym_array_type,
    STATE(406), 1,
      sym__type,
    ACTIONS(692), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [11474] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_DOT_DOT,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_PLUS,
    ACTIONS(498), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(110), 1,
      sym_arguments,
    ACTIONS(432), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(492), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(494), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(628), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11528] = 3,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [11557] = 3,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [11586] = 3,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [11615] = 3,
    ACTIONS(205), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [11644] = 3,
    ACTIONS(193), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [11673] = 3,
    ACTIONS(197), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [11702] = 3,
    ACTIONS(217), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [11731] = 3,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [11760] = 3,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [11789] = 3,
    ACTIONS(211), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [11818] = 3,
    ACTIONS(231), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [11847] = 3,
    ACTIONS(227), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [11876] = 3,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
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
  [11905] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(734), 1,
      sym_integer_literal,
    ACTIONS(736), 1,
      sym_float_literal,
    STATE(101), 1,
      sym__expression,
    ACTIONS(183), 2,
      sym_binary_literal,
      sym_char_literal,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(129), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11953] = 12,
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
    ACTIONS(738), 1,
      anon_sym_DASH,
    STATE(57), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
  [11999] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(218), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
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
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(102), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
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
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(104), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
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
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(105), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
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
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(106), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
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
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(107), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
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
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(108), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
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
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(109), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
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
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(103), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12413] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_for,
    ACTIONS(712), 1,
      sym_integer_literal,
    ACTIONS(742), 1,
      anon_sym_DOT_DOT,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(746), 1,
      aux_sym_string_literal_token1,
    STATE(217), 1,
      sym__expression,
    ACTIONS(716), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(718), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(230), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12459] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_for,
    ACTIONS(712), 1,
      sym_integer_literal,
    ACTIONS(742), 1,
      anon_sym_DOT_DOT,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(746), 1,
      aux_sym_string_literal_token1,
    STATE(183), 1,
      sym__expression,
    ACTIONS(716), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(718), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(230), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12505] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(198), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
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
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(211), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
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
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(222), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
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
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(215), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
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
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(197), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
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
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(186), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
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
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(180), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12827] = 12,
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
    ACTIONS(748), 1,
      anon_sym_DASH,
    STATE(133), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(182), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(165), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12873] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(190), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12919] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(750), 1,
      sym_identifier,
    ACTIONS(752), 1,
      anon_sym_for,
    ACTIONS(754), 1,
      anon_sym_DOT_DOT,
    ACTIONS(756), 1,
      anon_sym_DASH,
    ACTIONS(758), 1,
      sym_integer_literal,
    ACTIONS(762), 1,
      aux_sym_string_literal_token1,
    STATE(3), 1,
      sym__expression,
    ACTIONS(764), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(760), 3,
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
  [12965] = 12,
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
    ACTIONS(738), 1,
      anon_sym_DASH,
    STATE(59), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    ACTIONS(738), 1,
      anon_sym_DASH,
    STATE(61), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    ACTIONS(738), 1,
      anon_sym_DASH,
    STATE(55), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(158), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13149] = 12,
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
    ACTIONS(738), 1,
      anon_sym_DASH,
    STATE(63), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    ACTIONS(738), 1,
      anon_sym_DASH,
    STATE(58), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    ACTIONS(748), 1,
      anon_sym_DASH,
    STATE(146), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(182), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(165), 6,
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
    ACTIONS(748), 1,
      anon_sym_DASH,
    STATE(138), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(182), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(165), 6,
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
    ACTIONS(748), 1,
      anon_sym_DASH,
    STATE(137), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(182), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(165), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13379] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_for,
    ACTIONS(712), 1,
      sym_integer_literal,
    ACTIONS(742), 1,
      anon_sym_DOT_DOT,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(746), 1,
      aux_sym_string_literal_token1,
    STATE(212), 1,
      sym__expression,
    ACTIONS(716), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(718), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(230), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13425] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(750), 1,
      sym_identifier,
    ACTIONS(752), 1,
      anon_sym_for,
    ACTIONS(754), 1,
      anon_sym_DOT_DOT,
    ACTIONS(756), 1,
      anon_sym_DASH,
    ACTIONS(758), 1,
      sym_integer_literal,
    ACTIONS(762), 1,
      aux_sym_string_literal_token1,
    STATE(13), 1,
      sym__expression,
    ACTIONS(764), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(760), 3,
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
  [13471] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(750), 1,
      sym_identifier,
    ACTIONS(752), 1,
      anon_sym_for,
    ACTIONS(754), 1,
      anon_sym_DOT_DOT,
    ACTIONS(756), 1,
      anon_sym_DASH,
    ACTIONS(758), 1,
      sym_integer_literal,
    ACTIONS(762), 1,
      aux_sym_string_literal_token1,
    STATE(12), 1,
      sym__expression,
    ACTIONS(764), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(760), 3,
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
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_for,
    ACTIONS(712), 1,
      sym_integer_literal,
    ACTIONS(742), 1,
      anon_sym_DOT_DOT,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(746), 1,
      aux_sym_string_literal_token1,
    STATE(210), 1,
      sym__expression,
    ACTIONS(716), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(718), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(230), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13563] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_for,
    ACTIONS(712), 1,
      sym_integer_literal,
    ACTIONS(742), 1,
      anon_sym_DOT_DOT,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(746), 1,
      aux_sym_string_literal_token1,
    STATE(207), 1,
      sym__expression,
    ACTIONS(716), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(718), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(230), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13609] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_for,
    ACTIONS(712), 1,
      sym_integer_literal,
    ACTIONS(742), 1,
      anon_sym_DOT_DOT,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(746), 1,
      aux_sym_string_literal_token1,
    STATE(205), 1,
      sym__expression,
    ACTIONS(716), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(718), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(230), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13655] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_for,
    ACTIONS(712), 1,
      sym_integer_literal,
    ACTIONS(742), 1,
      anon_sym_DOT_DOT,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(746), 1,
      aux_sym_string_literal_token1,
    STATE(184), 1,
      sym__expression,
    ACTIONS(716), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(718), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(230), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13701] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_for,
    ACTIONS(712), 1,
      sym_integer_literal,
    ACTIONS(742), 1,
      anon_sym_DOT_DOT,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(746), 1,
      aux_sym_string_literal_token1,
    STATE(203), 1,
      sym__expression,
    ACTIONS(716), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(718), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(230), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13747] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_for,
    ACTIONS(712), 1,
      sym_integer_literal,
    ACTIONS(742), 1,
      anon_sym_DOT_DOT,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(746), 1,
      aux_sym_string_literal_token1,
    STATE(202), 1,
      sym__expression,
    ACTIONS(716), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(718), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(230), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13793] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_for,
    ACTIONS(712), 1,
      sym_integer_literal,
    ACTIONS(742), 1,
      anon_sym_DOT_DOT,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(746), 1,
      aux_sym_string_literal_token1,
    STATE(201), 1,
      sym__expression,
    ACTIONS(716), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(718), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(230), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13839] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_for,
    ACTIONS(712), 1,
      sym_integer_literal,
    ACTIONS(742), 1,
      anon_sym_DOT_DOT,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(746), 1,
      aux_sym_string_literal_token1,
    STATE(200), 1,
      sym__expression,
    ACTIONS(716), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(718), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(230), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13885] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(750), 1,
      sym_identifier,
    ACTIONS(752), 1,
      anon_sym_for,
    ACTIONS(754), 1,
      anon_sym_DOT_DOT,
    ACTIONS(756), 1,
      anon_sym_DASH,
    ACTIONS(758), 1,
      sym_integer_literal,
    ACTIONS(762), 1,
      aux_sym_string_literal_token1,
    STATE(11), 1,
      sym__expression,
    ACTIONS(764), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(760), 3,
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
  [13931] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(750), 1,
      sym_identifier,
    ACTIONS(752), 1,
      anon_sym_for,
    ACTIONS(754), 1,
      anon_sym_DOT_DOT,
    ACTIONS(756), 1,
      anon_sym_DASH,
    ACTIONS(758), 1,
      sym_integer_literal,
    ACTIONS(762), 1,
      aux_sym_string_literal_token1,
    STATE(10), 1,
      sym__expression,
    ACTIONS(764), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(760), 3,
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
    ACTIONS(750), 1,
      sym_identifier,
    ACTIONS(752), 1,
      anon_sym_for,
    ACTIONS(754), 1,
      anon_sym_DOT_DOT,
    ACTIONS(756), 1,
      anon_sym_DASH,
    ACTIONS(758), 1,
      sym_integer_literal,
    ACTIONS(762), 1,
      aux_sym_string_literal_token1,
    STATE(9), 1,
      sym__expression,
    ACTIONS(764), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(760), 3,
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
    ACTIONS(750), 1,
      sym_identifier,
    ACTIONS(752), 1,
      anon_sym_for,
    ACTIONS(754), 1,
      anon_sym_DOT_DOT,
    ACTIONS(756), 1,
      anon_sym_DASH,
    ACTIONS(758), 1,
      sym_integer_literal,
    ACTIONS(762), 1,
      aux_sym_string_literal_token1,
    STATE(8), 1,
      sym__expression,
    ACTIONS(764), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(760), 3,
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
    ACTIONS(750), 1,
      sym_identifier,
    ACTIONS(752), 1,
      anon_sym_for,
    ACTIONS(754), 1,
      anon_sym_DOT_DOT,
    ACTIONS(756), 1,
      anon_sym_DASH,
    ACTIONS(758), 1,
      sym_integer_literal,
    ACTIONS(762), 1,
      aux_sym_string_literal_token1,
    STATE(7), 1,
      sym__expression,
    ACTIONS(764), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(760), 3,
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
    ACTIONS(750), 1,
      sym_identifier,
    ACTIONS(752), 1,
      anon_sym_for,
    ACTIONS(754), 1,
      anon_sym_DOT_DOT,
    ACTIONS(756), 1,
      anon_sym_DASH,
    ACTIONS(758), 1,
      sym_integer_literal,
    ACTIONS(762), 1,
      aux_sym_string_literal_token1,
    STATE(6), 1,
      sym__expression,
    ACTIONS(764), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(760), 3,
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
    ACTIONS(748), 1,
      anon_sym_DASH,
    STATE(136), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(182), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(165), 6,
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
    ACTIONS(748), 1,
      anon_sym_DASH,
    STATE(135), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(182), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(165), 6,
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
    ACTIONS(748), 1,
      anon_sym_DASH,
    STATE(134), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(182), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(165), 6,
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
    ACTIONS(748), 1,
      anon_sym_DASH,
    STATE(142), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(182), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(165), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14345] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_for,
    ACTIONS(712), 1,
      sym_integer_literal,
    ACTIONS(742), 1,
      anon_sym_DOT_DOT,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(746), 1,
      aux_sym_string_literal_token1,
    STATE(221), 1,
      sym__expression,
    ACTIONS(716), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(718), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(230), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14391] = 12,
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
    ACTIONS(748), 1,
      anon_sym_DASH,
    STATE(144), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(182), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(165), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14437] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(750), 1,
      sym_identifier,
    ACTIONS(752), 1,
      anon_sym_for,
    ACTIONS(754), 1,
      anon_sym_DOT_DOT,
    ACTIONS(756), 1,
      anon_sym_DASH,
    ACTIONS(758), 1,
      sym_integer_literal,
    ACTIONS(762), 1,
      aux_sym_string_literal_token1,
    STATE(5), 1,
      sym__expression,
    ACTIONS(764), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(760), 3,
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
  [14483] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_for,
    ACTIONS(712), 1,
      sym_integer_literal,
    ACTIONS(742), 1,
      anon_sym_DOT_DOT,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(746), 1,
      aux_sym_string_literal_token1,
    STATE(220), 1,
      sym__expression,
    ACTIONS(716), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(718), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(230), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14529] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(214), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14575] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_for,
    ACTIONS(712), 1,
      sym_integer_literal,
    ACTIONS(742), 1,
      anon_sym_DOT_DOT,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(746), 1,
      aux_sym_string_literal_token1,
    STATE(187), 1,
      sym__expression,
    ACTIONS(716), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(718), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(230), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14621] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_for,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      sym_integer_literal,
    STATE(101), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(129), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14667] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_for,
    ACTIONS(712), 1,
      sym_integer_literal,
    ACTIONS(742), 1,
      anon_sym_DOT_DOT,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(746), 1,
      aux_sym_string_literal_token1,
    STATE(204), 1,
      sym__expression,
    ACTIONS(716), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(718), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(230), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14713] = 12,
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
    ACTIONS(738), 1,
      anon_sym_DASH,
    STATE(66), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    ACTIONS(738), 1,
      anon_sym_DASH,
    STATE(60), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    ACTIONS(738), 1,
      anon_sym_DASH,
    STATE(67), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    ACTIONS(738), 1,
      anon_sym_DASH,
    STATE(53), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    ACTIONS(738), 1,
      anon_sym_DASH,
    STATE(52), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    ACTIONS(738), 1,
      anon_sym_DASH,
    STATE(56), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    ACTIONS(738), 1,
      anon_sym_DASH,
    STATE(51), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    ACTIONS(738), 1,
      anon_sym_DASH,
    STATE(65), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
    ACTIONS(738), 1,
      anon_sym_DASH,
    STATE(62), 1,
      sym__expression,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
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
  [15127] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(520), 1,
      anon_sym_BSLASHn,
    ACTIONS(766), 1,
      sym_identifier,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(428), 1,
      sym__field_identifier,
    STATE(315), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [15150] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(772), 1,
      anon_sym_LPAREN,
    ACTIONS(774), 1,
      anon_sym_EQ,
    STATE(342), 2,
      sym_field_declaration_list,
      sym_ordered_field_declaration_list,
    ACTIONS(770), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15169] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(776), 1,
      sym_identifier,
    ACTIONS(778), 1,
      anon_sym_BSLASHn,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
    STATE(380), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(323), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15189] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(766), 1,
      sym_identifier,
    STATE(428), 1,
      sym__field_identifier,
    ACTIONS(782), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(315), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [15207] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(776), 1,
      sym_identifier,
    ACTIONS(778), 1,
      anon_sym_BSLASHn,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    STATE(384), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(310), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15227] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(596), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [15239] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(776), 1,
      sym_identifier,
    ACTIONS(778), 1,
      anon_sym_BSLASHn,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(318), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15259] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(788), 1,
      sym_identifier,
    STATE(428), 1,
      sym__field_identifier,
    ACTIONS(791), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(315), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [15277] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(592), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [15289] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(580), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [15301] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(776), 1,
      sym_identifier,
    ACTIONS(778), 1,
      anon_sym_BSLASHn,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    STATE(368), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(323), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15321] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(766), 1,
      sym_identifier,
    STATE(428), 1,
      sym__field_identifier,
    ACTIONS(795), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(311), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [15339] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(776), 1,
      sym_identifier,
    ACTIONS(797), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(321), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15354] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(776), 1,
      sym_identifier,
    ACTIONS(799), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(323), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15369] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    STATE(356), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
    ACTIONS(801), 2,
      anon_sym_BSLASHn,
      sym_identifier,
  [15386] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(811), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(323), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [15401] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(813), 1,
      anon_sym_if,
    STATE(411), 2,
      sym_block,
      sym_if_statement,
  [15415] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(528), 1,
      anon_sym_LF,
    ACTIONS(526), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [15427] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
      sym_identifier,
  [15437] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(817), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15447] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(820), 1,
      anon_sym_DQUOTE,
    STATE(339), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(822), 2,
      sym__string_content,
      sym_escape_sequence,
  [15461] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(824), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15471] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(826), 1,
      sym_identifier,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    STATE(393), 1,
      sym_enum_integral_type,
    STATE(419), 1,
      sym_enum_variant_list,
  [15487] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(830), 1,
      anon_sym_DQUOTE,
    STATE(343), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(832), 2,
      sym__string_content,
      sym_escape_sequence,
  [15501] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(834), 1,
      sym_identifier,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    STATE(175), 1,
      sym_enum_variant_list,
    STATE(416), 1,
      sym_enum_integral_type,
  [15517] = 5,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(538), 1,
      anon_sym_SEMI,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(838), 1,
      anon_sym_else,
    STATE(399), 1,
      sym_else_clause,
  [15533] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(840), 1,
      anon_sym_DQUOTE,
    STATE(352), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(842), 2,
      sym__string_content,
      sym_escape_sequence,
  [15547] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(844), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15557] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(532), 1,
      anon_sym_LF,
    ACTIONS(530), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [15569] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(846), 1,
      anon_sym_DQUOTE,
    STATE(346), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(848), 2,
      sym__string_content,
      sym_escape_sequence,
  [15583] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(850), 1,
      anon_sym_DQUOTE,
    STATE(343), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(832), 2,
      sym__string_content,
      sym_escape_sequence,
  [15597] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(852), 1,
      anon_sym_DQUOTE,
    STATE(343), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(832), 2,
      sym__string_content,
      sym_escape_sequence,
  [15611] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      anon_sym_LF,
    ACTIONS(522), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [15623] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(536), 1,
      anon_sym_LF,
    ACTIONS(534), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [15635] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(856), 1,
      anon_sym_EQ,
    ACTIONS(854), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15647] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(858), 1,
      anon_sym_DQUOTE,
    STATE(343), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(860), 2,
      sym__string_content,
      sym_escape_sequence,
  [15661] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    ACTIONS(863), 1,
      sym_identifier,
    STATE(172), 1,
      sym_enum_variant_list,
    STATE(395), 1,
      sym_enum_integral_type,
  [15677] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(865), 1,
      anon_sym_DQUOTE,
    STATE(338), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(867), 2,
      sym__string_content,
      sym_escape_sequence,
  [15691] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(869), 1,
      anon_sym_DQUOTE,
    STATE(343), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(832), 2,
      sym__string_content,
      sym_escape_sequence,
  [15705] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    ACTIONS(871), 1,
      sym_identifier,
    STATE(421), 1,
      sym_enum_variant_list,
    STATE(422), 1,
      sym_enum_integral_type,
  [15721] = 5,
    ACTIONS(504), 1,
      anon_sym_SEMI,
    ACTIONS(506), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(873), 1,
      anon_sym_COLON,
    ACTIONS(875), 1,
      anon_sym_EQ,
  [15737] = 5,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(544), 1,
      anon_sym_SEMI,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(877), 1,
      anon_sym_COLON,
    ACTIONS(879), 1,
      anon_sym_EQ,
  [15753] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(881), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15763] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15773] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(885), 1,
      anon_sym_DQUOTE,
    STATE(343), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(832), 2,
      sym__string_content,
      sym_escape_sequence,
  [15787] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(887), 1,
      anon_sym_DQUOTE,
    STATE(331), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(889), 2,
      sym__string_content,
      sym_escape_sequence,
  [15801] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(891), 1,
      anon_sym_if,
    STATE(155), 2,
      sym_block,
      sym_if_statement,
  [15815] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
    ACTIONS(893), 1,
      anon_sym_BSLASHn,
    STATE(355), 1,
      aux_sym_field_declaration_list_repeat2,
  [15828] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
    STATE(377), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
  [15841] = 4,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    ACTIONS(604), 1,
      anon_sym_LF,
    ACTIONS(898), 1,
      anon_sym_EQ,
  [15854] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_arguments_repeat2,
  [15867] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      aux_sym_parameters_repeat1,
  [15880] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(520), 1,
      anon_sym_BSLASHn,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym_field_declaration_list_repeat2,
  [15893] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
    ACTIONS(906), 1,
      anon_sym_BSLASHn,
    STATE(361), 1,
      aux_sym_enum_variant_list_repeat2,
  [15906] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_arguments_repeat2,
  [15919] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_arguments_repeat2,
  [15932] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    ACTIONS(911), 1,
      anon_sym_COLON,
    STATE(425), 1,
      sym_enum_variant_list,
  [15945] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(913), 1,
      anon_sym_COMMA,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_parameters_repeat1,
  [15958] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(590), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [15969] = 4,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(582), 1,
      anon_sym_SEMI,
    ACTIONS(584), 1,
      anon_sym_LF,
    ACTIONS(918), 1,
      anon_sym_EQ,
  [15982] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(778), 1,
      anon_sym_BSLASHn,
    ACTIONS(920), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_enum_variant_list_repeat2,
  [15995] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(778), 1,
      anon_sym_BSLASHn,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_enum_variant_list_repeat2,
  [16008] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_arguments_repeat2,
  [16021] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    STATE(365), 1,
      aux_sym_parameters_repeat1,
  [16034] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_arguments_repeat2,
  [16047] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    ACTIONS(911), 1,
      anon_sym_COLON,
    STATE(163), 1,
      sym_enum_variant_list,
  [16060] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_arguments_repeat2,
  [16073] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(594), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [16084] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_arguments_repeat2,
  [16097] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    STATE(377), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
  [16110] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(933), 1,
      anon_sym_LBRACE,
    ACTIONS(935), 1,
      anon_sym_DASH_GT,
    STATE(147), 1,
      sym_block,
  [16123] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(578), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [16134] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(778), 1,
      anon_sym_BSLASHn,
    ACTIONS(937), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_enum_variant_list_repeat2,
  [16147] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(520), 1,
      anon_sym_BSLASHn,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym_field_declaration_list_repeat2,
  [16160] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(382), 1,
      aux_sym_arguments_repeat2,
  [16173] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_arguments_repeat2,
  [16186] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(778), 1,
      anon_sym_BSLASHn,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_enum_variant_list_repeat2,
  [16199] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    ACTIONS(911), 1,
      anon_sym_COLON,
    STATE(397), 1,
      sym_enum_variant_list,
  [16212] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_arguments_repeat2,
  [16225] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_arguments_repeat2,
  [16238] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    ACTIONS(911), 1,
      anon_sym_COLON,
    STATE(161), 1,
      sym_enum_variant_list,
  [16251] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(766), 1,
      sym_identifier,
    STATE(413), 1,
      sym_field_declaration,
    STATE(428), 1,
      sym__field_identifier,
  [16264] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(946), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [16272] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(948), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16280] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(654), 1,
      anon_sym_SEMI,
    ACTIONS(656), 1,
      anon_sym_LF,
  [16290] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    STATE(398), 1,
      sym_enum_variant_list,
  [16300] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(950), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [16308] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym_enum_variant_list,
  [16318] = 3,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(398), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
  [16328] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(634), 1,
      anon_sym_SEMI,
    ACTIONS(636), 1,
      anon_sym_LF,
  [16338] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(630), 1,
      anon_sym_SEMI,
    ACTIONS(632), 1,
      anon_sym_LF,
  [16348] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    ACTIONS(652), 1,
      anon_sym_LF,
  [16358] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(952), 2,
      sym_float_literal,
      sym_integer_literal,
  [16366] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(668), 1,
      anon_sym_SEMI,
    ACTIONS(670), 1,
      anon_sym_LF,
  [16376] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(646), 1,
      anon_sym_SEMI,
    ACTIONS(648), 1,
      anon_sym_LF,
  [16386] = 3,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_line_comment,
  [16396] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(552), 1,
      anon_sym_LF,
    ACTIONS(554), 1,
      anon_sym_SEMI,
  [16406] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 2,
      anon_sym_in,
      anon_sym_COLON,
  [16414] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(954), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16422] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 2,
      anon_sym_in,
      anon_sym_COLON,
  [16430] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(956), 1,
      anon_sym_LPAREN,
    STATE(378), 1,
      sym_parameters,
  [16440] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(638), 1,
      anon_sym_SEMI,
    ACTIONS(640), 1,
      anon_sym_LF,
  [16450] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    ACTIONS(614), 1,
      anon_sym_LF,
  [16460] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    ACTIONS(618), 1,
      anon_sym_LF,
  [16470] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 2,
      anon_sym_in,
      anon_sym_COLON,
  [16478] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(931), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16486] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(933), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_block,
  [16496] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(958), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [16504] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym_enum_variant_list,
  [16514] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(960), 2,
      sym_float_literal,
      sym_integer_literal,
  [16522] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(962), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [16530] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(658), 1,
      anon_sym_SEMI,
    ACTIONS(660), 1,
      anon_sym_LF,
  [16540] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(964), 2,
      sym_float_literal,
      sym_integer_literal,
  [16548] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(662), 1,
      anon_sym_SEMI,
    ACTIONS(664), 1,
      anon_sym_LF,
  [16558] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    STATE(409), 1,
      sym_enum_variant_list,
  [16568] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(532), 2,
      anon_sym_in,
      anon_sym_COLON,
  [16576] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(620), 1,
      anon_sym_SEMI,
    ACTIONS(622), 1,
      anon_sym_LF,
  [16586] = 3,
    ACTIONS(512), 1,
      sym_line_comment,
    ACTIONS(642), 1,
      anon_sym_SEMI,
    ACTIONS(644), 1,
      anon_sym_LF,
  [16596] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(916), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16604] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(966), 1,
      ts_builtin_sym_end,
  [16611] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(968), 1,
      anon_sym_COLON,
  [16618] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 1,
      anon_sym_enum,
  [16625] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(972), 1,
      anon_sym_COLON,
  [16632] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(974), 1,
      anon_sym_LBRACE,
  [16639] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
  [16646] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(976), 1,
      anon_sym_enum,
  [16653] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(978), 1,
      sym_identifier,
  [16660] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
  [16667] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(982), 1,
      anon_sym_COLON,
  [16674] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(984), 1,
      anon_sym_in,
  [16681] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(986), 1,
      anon_sym_RBRACK,
  [16688] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(988), 1,
      anon_sym_enum,
  [16695] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(990), 1,
      anon_sym_in,
  [16702] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(992), 1,
      anon_sym_in,
  [16709] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(994), 1,
      anon_sym_in,
  [16716] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      anon_sym_in,
  [16723] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(998), 1,
      anon_sym_COLON,
  [16730] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1000), 1,
      anon_sym_RBRACK,
  [16737] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_COLON,
  [16744] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1004), 1,
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
  [SMALL_STATE(80)] = 5466,
  [SMALL_STATE(81)] = 5532,
  [SMALL_STATE(82)] = 5593,
  [SMALL_STATE(83)] = 5658,
  [SMALL_STATE(84)] = 5719,
  [SMALL_STATE(85)] = 5781,
  [SMALL_STATE(86)] = 5843,
  [SMALL_STATE(87)] = 5902,
  [SMALL_STATE(88)] = 5964,
  [SMALL_STATE(89)] = 6017,
  [SMALL_STATE(90)] = 6070,
  [SMALL_STATE(91)] = 6123,
  [SMALL_STATE(92)] = 6176,
  [SMALL_STATE(93)] = 6229,
  [SMALL_STATE(94)] = 6282,
  [SMALL_STATE(95)] = 6335,
  [SMALL_STATE(96)] = 6388,
  [SMALL_STATE(97)] = 6441,
  [SMALL_STATE(98)] = 6494,
  [SMALL_STATE(99)] = 6529,
  [SMALL_STATE(100)] = 6564,
  [SMALL_STATE(101)] = 6599,
  [SMALL_STATE(102)] = 6639,
  [SMALL_STATE(103)] = 6675,
  [SMALL_STATE(104)] = 6715,
  [SMALL_STATE(105)] = 6759,
  [SMALL_STATE(106)] = 6809,
  [SMALL_STATE(107)] = 6863,
  [SMALL_STATE(108)] = 6915,
  [SMALL_STATE(109)] = 6971,
  [SMALL_STATE(110)] = 7019,
  [SMALL_STATE(111)] = 7052,
  [SMALL_STATE(112)] = 7089,
  [SMALL_STATE(113)] = 7122,
  [SMALL_STATE(114)] = 7155,
  [SMALL_STATE(115)] = 7188,
  [SMALL_STATE(116)] = 7233,
  [SMALL_STATE(117)] = 7266,
  [SMALL_STATE(118)] = 7299,
  [SMALL_STATE(119)] = 7332,
  [SMALL_STATE(120)] = 7365,
  [SMALL_STATE(121)] = 7398,
  [SMALL_STATE(122)] = 7431,
  [SMALL_STATE(123)] = 7464,
  [SMALL_STATE(124)] = 7497,
  [SMALL_STATE(125)] = 7530,
  [SMALL_STATE(126)] = 7563,
  [SMALL_STATE(127)] = 7596,
  [SMALL_STATE(128)] = 7629,
  [SMALL_STATE(129)] = 7666,
  [SMALL_STATE(130)] = 7699,
  [SMALL_STATE(131)] = 7736,
  [SMALL_STATE(132)] = 7792,
  [SMALL_STATE(133)] = 7824,
  [SMALL_STATE(134)] = 7862,
  [SMALL_STATE(135)] = 7912,
  [SMALL_STATE(136)] = 7958,
  [SMALL_STATE(137)] = 8006,
  [SMALL_STATE(138)] = 8050,
  [SMALL_STATE(139)] = 8090,
  [SMALL_STATE(140)] = 8122,
  [SMALL_STATE(141)] = 8156,
  [SMALL_STATE(142)] = 8188,
  [SMALL_STATE(143)] = 8230,
  [SMALL_STATE(144)] = 8262,
  [SMALL_STATE(145)] = 8300,
  [SMALL_STATE(146)] = 8332,
  [SMALL_STATE(147)] = 8366,
  [SMALL_STATE(148)] = 8398,
  [SMALL_STATE(149)] = 8430,
  [SMALL_STATE(150)] = 8462,
  [SMALL_STATE(151)] = 8496,
  [SMALL_STATE(152)] = 8528,
  [SMALL_STATE(153)] = 8560,
  [SMALL_STATE(154)] = 8591,
  [SMALL_STATE(155)] = 8622,
  [SMALL_STATE(156)] = 8653,
  [SMALL_STATE(157)] = 8684,
  [SMALL_STATE(158)] = 8715,
  [SMALL_STATE(159)] = 8770,
  [SMALL_STATE(160)] = 8801,
  [SMALL_STATE(161)] = 8860,
  [SMALL_STATE(162)] = 8891,
  [SMALL_STATE(163)] = 8922,
  [SMALL_STATE(164)] = 8953,
  [SMALL_STATE(165)] = 9012,
  [SMALL_STATE(166)] = 9043,
  [SMALL_STATE(167)] = 9074,
  [SMALL_STATE(168)] = 9105,
  [SMALL_STATE(169)] = 9164,
  [SMALL_STATE(170)] = 9195,
  [SMALL_STATE(171)] = 9226,
  [SMALL_STATE(172)] = 9257,
  [SMALL_STATE(173)] = 9288,
  [SMALL_STATE(174)] = 9319,
  [SMALL_STATE(175)] = 9350,
  [SMALL_STATE(176)] = 9381,
  [SMALL_STATE(177)] = 9440,
  [SMALL_STATE(178)] = 9471,
  [SMALL_STATE(179)] = 9530,
  [SMALL_STATE(180)] = 9561,
  [SMALL_STATE(181)] = 9616,
  [SMALL_STATE(182)] = 9647,
  [SMALL_STATE(183)] = 9678,
  [SMALL_STATE(184)] = 9728,
  [SMALL_STATE(185)] = 9774,
  [SMALL_STATE(186)] = 9810,
  [SMALL_STATE(187)] = 9866,
  [SMALL_STATE(188)] = 9916,
  [SMALL_STATE(189)] = 9952,
  [SMALL_STATE(190)] = 10002,
  [SMALL_STATE(191)] = 10058,
  [SMALL_STATE(192)] = 10094,
  [SMALL_STATE(193)] = 10130,
  [SMALL_STATE(194)] = 10166,
  [SMALL_STATE(195)] = 10198,
  [SMALL_STATE(196)] = 10230,
  [SMALL_STATE(197)] = 10266,
  [SMALL_STATE(198)] = 10322,
  [SMALL_STATE(199)] = 10378,
  [SMALL_STATE(200)] = 10430,
  [SMALL_STATE(201)] = 10466,
  [SMALL_STATE(202)] = 10506,
  [SMALL_STATE(203)] = 10554,
  [SMALL_STATE(204)] = 10598,
  [SMALL_STATE(205)] = 10648,
  [SMALL_STATE(206)] = 10690,
  [SMALL_STATE(207)] = 10726,
  [SMALL_STATE(208)] = 10764,
  [SMALL_STATE(209)] = 10800,
  [SMALL_STATE(210)] = 10836,
  [SMALL_STATE(211)] = 10868,
  [SMALL_STATE(212)] = 10924,
  [SMALL_STATE(213)] = 10960,
  [SMALL_STATE(214)] = 10996,
  [SMALL_STATE(215)] = 11052,
  [SMALL_STATE(216)] = 11108,
  [SMALL_STATE(217)] = 11144,
  [SMALL_STATE(218)] = 11194,
  [SMALL_STATE(219)] = 11250,
  [SMALL_STATE(220)] = 11282,
  [SMALL_STATE(221)] = 11332,
  [SMALL_STATE(222)] = 11382,
  [SMALL_STATE(223)] = 11438,
  [SMALL_STATE(224)] = 11474,
  [SMALL_STATE(225)] = 11528,
  [SMALL_STATE(226)] = 11557,
  [SMALL_STATE(227)] = 11586,
  [SMALL_STATE(228)] = 11615,
  [SMALL_STATE(229)] = 11644,
  [SMALL_STATE(230)] = 11673,
  [SMALL_STATE(231)] = 11702,
  [SMALL_STATE(232)] = 11731,
  [SMALL_STATE(233)] = 11760,
  [SMALL_STATE(234)] = 11789,
  [SMALL_STATE(235)] = 11818,
  [SMALL_STATE(236)] = 11847,
  [SMALL_STATE(237)] = 11876,
  [SMALL_STATE(238)] = 11905,
  [SMALL_STATE(239)] = 11953,
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
  [SMALL_STATE(309)] = 15150,
  [SMALL_STATE(310)] = 15169,
  [SMALL_STATE(311)] = 15189,
  [SMALL_STATE(312)] = 15207,
  [SMALL_STATE(313)] = 15227,
  [SMALL_STATE(314)] = 15239,
  [SMALL_STATE(315)] = 15259,
  [SMALL_STATE(316)] = 15277,
  [SMALL_STATE(317)] = 15289,
  [SMALL_STATE(318)] = 15301,
  [SMALL_STATE(319)] = 15321,
  [SMALL_STATE(320)] = 15339,
  [SMALL_STATE(321)] = 15354,
  [SMALL_STATE(322)] = 15369,
  [SMALL_STATE(323)] = 15386,
  [SMALL_STATE(324)] = 15401,
  [SMALL_STATE(325)] = 15415,
  [SMALL_STATE(326)] = 15427,
  [SMALL_STATE(327)] = 15437,
  [SMALL_STATE(328)] = 15447,
  [SMALL_STATE(329)] = 15461,
  [SMALL_STATE(330)] = 15471,
  [SMALL_STATE(331)] = 15487,
  [SMALL_STATE(332)] = 15501,
  [SMALL_STATE(333)] = 15517,
  [SMALL_STATE(334)] = 15533,
  [SMALL_STATE(335)] = 15547,
  [SMALL_STATE(336)] = 15557,
  [SMALL_STATE(337)] = 15569,
  [SMALL_STATE(338)] = 15583,
  [SMALL_STATE(339)] = 15597,
  [SMALL_STATE(340)] = 15611,
  [SMALL_STATE(341)] = 15623,
  [SMALL_STATE(342)] = 15635,
  [SMALL_STATE(343)] = 15647,
  [SMALL_STATE(344)] = 15661,
  [SMALL_STATE(345)] = 15677,
  [SMALL_STATE(346)] = 15691,
  [SMALL_STATE(347)] = 15705,
  [SMALL_STATE(348)] = 15721,
  [SMALL_STATE(349)] = 15737,
  [SMALL_STATE(350)] = 15753,
  [SMALL_STATE(351)] = 15763,
  [SMALL_STATE(352)] = 15773,
  [SMALL_STATE(353)] = 15787,
  [SMALL_STATE(354)] = 15801,
  [SMALL_STATE(355)] = 15815,
  [SMALL_STATE(356)] = 15828,
  [SMALL_STATE(357)] = 15841,
  [SMALL_STATE(358)] = 15854,
  [SMALL_STATE(359)] = 15867,
  [SMALL_STATE(360)] = 15880,
  [SMALL_STATE(361)] = 15893,
  [SMALL_STATE(362)] = 15906,
  [SMALL_STATE(363)] = 15919,
  [SMALL_STATE(364)] = 15932,
  [SMALL_STATE(365)] = 15945,
  [SMALL_STATE(366)] = 15958,
  [SMALL_STATE(367)] = 15969,
  [SMALL_STATE(368)] = 15982,
  [SMALL_STATE(369)] = 15995,
  [SMALL_STATE(370)] = 16008,
  [SMALL_STATE(371)] = 16021,
  [SMALL_STATE(372)] = 16034,
  [SMALL_STATE(373)] = 16047,
  [SMALL_STATE(374)] = 16060,
  [SMALL_STATE(375)] = 16073,
  [SMALL_STATE(376)] = 16084,
  [SMALL_STATE(377)] = 16097,
  [SMALL_STATE(378)] = 16110,
  [SMALL_STATE(379)] = 16123,
  [SMALL_STATE(380)] = 16134,
  [SMALL_STATE(381)] = 16147,
  [SMALL_STATE(382)] = 16160,
  [SMALL_STATE(383)] = 16173,
  [SMALL_STATE(384)] = 16186,
  [SMALL_STATE(385)] = 16199,
  [SMALL_STATE(386)] = 16212,
  [SMALL_STATE(387)] = 16225,
  [SMALL_STATE(388)] = 16238,
  [SMALL_STATE(389)] = 16251,
  [SMALL_STATE(390)] = 16264,
  [SMALL_STATE(391)] = 16272,
  [SMALL_STATE(392)] = 16280,
  [SMALL_STATE(393)] = 16290,
  [SMALL_STATE(394)] = 16300,
  [SMALL_STATE(395)] = 16308,
  [SMALL_STATE(396)] = 16318,
  [SMALL_STATE(397)] = 16328,
  [SMALL_STATE(398)] = 16338,
  [SMALL_STATE(399)] = 16348,
  [SMALL_STATE(400)] = 16358,
  [SMALL_STATE(401)] = 16366,
  [SMALL_STATE(402)] = 16376,
  [SMALL_STATE(403)] = 16386,
  [SMALL_STATE(404)] = 16396,
  [SMALL_STATE(405)] = 16406,
  [SMALL_STATE(406)] = 16414,
  [SMALL_STATE(407)] = 16422,
  [SMALL_STATE(408)] = 16430,
  [SMALL_STATE(409)] = 16440,
  [SMALL_STATE(410)] = 16450,
  [SMALL_STATE(411)] = 16460,
  [SMALL_STATE(412)] = 16470,
  [SMALL_STATE(413)] = 16478,
  [SMALL_STATE(414)] = 16486,
  [SMALL_STATE(415)] = 16496,
  [SMALL_STATE(416)] = 16504,
  [SMALL_STATE(417)] = 16514,
  [SMALL_STATE(418)] = 16522,
  [SMALL_STATE(419)] = 16530,
  [SMALL_STATE(420)] = 16540,
  [SMALL_STATE(421)] = 16548,
  [SMALL_STATE(422)] = 16558,
  [SMALL_STATE(423)] = 16568,
  [SMALL_STATE(424)] = 16576,
  [SMALL_STATE(425)] = 16586,
  [SMALL_STATE(426)] = 16596,
  [SMALL_STATE(427)] = 16604,
  [SMALL_STATE(428)] = 16611,
  [SMALL_STATE(429)] = 16618,
  [SMALL_STATE(430)] = 16625,
  [SMALL_STATE(431)] = 16632,
  [SMALL_STATE(432)] = 16639,
  [SMALL_STATE(433)] = 16646,
  [SMALL_STATE(434)] = 16653,
  [SMALL_STATE(435)] = 16660,
  [SMALL_STATE(436)] = 16667,
  [SMALL_STATE(437)] = 16674,
  [SMALL_STATE(438)] = 16681,
  [SMALL_STATE(439)] = 16688,
  [SMALL_STATE(440)] = 16695,
  [SMALL_STATE(441)] = 16702,
  [SMALL_STATE(442)] = 16709,
  [SMALL_STATE(443)] = 16716,
  [SMALL_STATE(444)] = 16723,
  [SMALL_STATE(445)] = 16730,
  [SMALL_STATE(446)] = 16737,
  [SMALL_STATE(447)] = 16744,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 23),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 23),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(240),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(249),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(250),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(401),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(429),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(347),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(258),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(182),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(182),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(334),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(434),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(259),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
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
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 5, .production_id = 20),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 5, .production_id = 20),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(75),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(256),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(266),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(265),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(181),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(89),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(96),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(91),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(429),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(332),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(43),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(300),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(87),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(69),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(69),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(328),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(255),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(46),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
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
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(423),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(407),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(420),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(405),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(345),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(99),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 2, .production_id = 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 2, .production_id = 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_pattern, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_pattern, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_literal, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_literal, 2),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 9),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 9),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 4, .production_id = 13),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 4, .production_id = 13),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, .production_id = 12),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 12),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 24),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 24),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 16),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 16),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 13),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 13),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 28),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 28),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 5),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 5),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 4),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 4),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 22),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 19),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 19),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 18),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 18),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 8),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 8),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 7),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 7),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 2),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 17),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 17),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 3),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 11),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 11),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 2, .production_id = 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 2, .production_id = 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 26),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, .production_id = 6),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(446),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 1),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 1),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1), SHIFT(329),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2), SHIFT_REPEAT(309),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 29),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_field_declaration_list, 2), REDUCE(sym_ordered_field_declaration_list, 2),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 3),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 15),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(343),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 4),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2), SHIFT_REPEAT(319),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2), SHIFT_REPEAT(320),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [913] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(86),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [928] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_field_declaration_list_repeat1, 2), SHIFT_REPEAT(389),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_field_declaration_list_repeat1, 2),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(32),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 13),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 27),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [966] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boxed_modifier, 1),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_integral_type, 3),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 21),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
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
