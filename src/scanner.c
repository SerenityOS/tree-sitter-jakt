#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  STRING_CONTENT,
  FLOAT_LITERAL,
};

void *tree_sitter_jakt_external_scanner_create() { return NULL; }
void tree_sitter_jakt_external_scanner_destroy(void *p) {}
void tree_sitter_jakt_external_scanner_reset(void *p) {}
unsigned tree_sitter_jakt_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_jakt_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

static bool is_num_char(int32_t c) {
  return c == '_' || iswdigit(c);
}

bool tree_sitter_jakt_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {

  if (valid_symbols[STRING_CONTENT] && !valid_symbols[FLOAT_LITERAL]) {
    bool has_content = false;
    for (;;) {
      if (lexer->lookahead == '\"' || lexer->lookahead == '\\') {
        break;
      } else if (lexer->lookahead == 0) {
        return false;
      }
      has_content = true;
      advance(lexer);
    }
    lexer->result_symbol = STRING_CONTENT;
    return has_content;
  }
  while (iswspace(lexer->lookahead)) lexer->advance(lexer, true);

  if (valid_symbols[FLOAT_LITERAL] && iswdigit(lexer->lookahead)) {
    lexer->result_symbol = FLOAT_LITERAL;

    advance(lexer);
    while (is_num_char(lexer->lookahead)) {
      advance(lexer);
    }

    bool has_fraction = false, has_type_callout = false;

    if (lexer->lookahead == '.') {
      has_fraction = true;
      advance(lexer);
      if (iswalpha(lexer->lookahead)) {
          // The dot is followed by a letter: 1.max(2) => not a float but an integer
          return false;
      }
      if (lexer->lookahead == '.') {
        return false;
      }
      while (is_num_char(lexer->lookahead)) {
        advance(lexer);
      }
    } else if (lexer->lookahead == 'f') {
      has_type_callout = true;
      advance(lexer);
      while (is_num_char(lexer->lookahead)) {
        advance(lexer);
      }
    }

    lexer->mark_end(lexer);

    if (!has_fraction && !has_type_callout) return false;

    if (lexer->lookahead != 'u' && lexer->lookahead != 'i' && lexer->lookahead != 'f') {
      return true;
    }
    advance(lexer);
    if (!iswdigit(lexer->lookahead)) {
      return true;
    }

    while (iswdigit(lexer->lookahead)) {
      advance(lexer);
    }

    lexer->mark_end(lexer);
    return true;
  }

  return false;
}
