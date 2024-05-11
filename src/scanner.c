#include "tree_sitter/parser.h"
enum TokenType {
  ROOT_PROJECT_ICON,
  CHILD_PROJECT_ICON,
  GRANDCHILD_PROJECT_ICON,
  GREAT_GRANDCHILD_PROJECT_ICON,
  LEAF_PROJECT_ICON,
};
static uint8_t consume_chars(TSLexer *lexer, char c) {
    uint8_t count = 0;
    while (lexer->lookahead == '#') {
    lexer->advance(lexer, false);
    ++count;
  }
    return count;
};


static bool project_level_matches(uint8_t pounds,TSLexer *lexer){
  lexer->mark_end(lexer);

  uint8_t actual_pounds = consume_chars(lexer, '#');
  if (actual_pounds == pounds) {
  } else {
    return false;
  }
}
bool tree_sitter_projects_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[ROOT_PROJECT_ICON] && project_level_matches(1,lexer)){
    lexer->result_symbol = ROOT_PROJECT_ICON;
    return true;
  } else if (valid_symbols[CHILD_PROJECT_ICON] && project_level_matches(2,lexer)){
    lexer->result_symbol = CHILD_PROJECT_ICON;
    return true;
  } else if (valid_symbols[GRANDCHILD_PROJECT_ICON] && project_level_matches(3,lexer)){
    lexer->result_symbol = GRANDCHILD_PROJECT_ICON;
    return true;
  } else if (valid_symbols[GREAT_GRANDCHILD_PROJECT_ICON] && project_level_matches(4,lexer)){
    lexer->result_symbol = GREAT_GRANDCHILD_PROJECT_ICON;
    return true;
  } else if (valid_symbols[LEAF_PROJECT_ICON] && project_level_matches(5,lexer)){
    lexer->result_symbol = LEAF_PROJECT_ICON;
    return true;

  } else {
    return false;
  }
}

// If we need to allocate/deallocate state, we do it in these functions.
void *tree_sitter_projects_external_scanner_create() { return NULL; }
void tree_sitter_projects_external_scanner_destroy(void *payload) {}

// If we have state, we should load and save it in these functions.
unsigned tree_sitter_projects_external_scanner_serialize(void *payload, char *buffer) {
  return 0;
}
void tree_sitter_projects_external_scanner_deserialize(void *payload, char *buffer, unsigned length) {}
