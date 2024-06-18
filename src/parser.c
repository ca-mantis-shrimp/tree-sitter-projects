#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_root_project_icon = 2,
  sym_child_project_icon = 3,
  sym_grandchild_project_icon = 4,
  sym_great_grandchild_project_icon = 5,
  sym_leaf_project_icon = 6,
  sym_comment_icon = 7,
  sym_section_icon = 8,
  anon_sym_PIPE_GT = 9,
  anon_sym_AT = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  sym_url = 13,
  anon_sym_LPAREN = 14,
  aux_sym_url_description_token1 = 15,
  anon_sym_RPAREN = 16,
  sym_id_number = 17,
  aux_sym_text_line_token1 = 18,
  sym_source_file = 19,
  sym_root_project = 20,
  sym_child_project = 21,
  sym_grandchild_project = 22,
  sym_great_grandchild_project = 23,
  sym_leaf_project = 24,
  sym_comment = 25,
  sym_section = 26,
  sym_id = 27,
  sym_sync_token = 28,
  sym_markdown_url = 29,
  sym_url_description = 30,
  sym_text_line = 31,
  sym_escaped_left_bracket = 32,
  sym_escaped_right_bracket = 33,
  sym_escaped_left_parenthesis = 34,
  sym_escaped_right_parenthesis = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_root_project_repeat1 = 37,
  aux_sym_root_project_repeat2 = 38,
  aux_sym_root_project_repeat3 = 39,
  aux_sym_child_project_repeat1 = 40,
  aux_sym_grandchild_project_repeat1 = 41,
  aux_sym_great_grandchild_project_repeat1 = 42,
  aux_sym_comment_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_root_project_icon] = "root_project_icon",
  [sym_child_project_icon] = "child_project_icon",
  [sym_grandchild_project_icon] = "grandchild_project_icon",
  [sym_great_grandchild_project_icon] = "great_grandchild_project_icon",
  [sym_leaf_project_icon] = "leaf_project_icon",
  [sym_comment_icon] = "comment_icon",
  [sym_section_icon] = "section_icon",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_url] = "url",
  [anon_sym_LPAREN] = "(",
  [aux_sym_url_description_token1] = "url_description_token1",
  [anon_sym_RPAREN] = ")",
  [sym_id_number] = "id_number",
  [aux_sym_text_line_token1] = "text_line_token1",
  [sym_source_file] = "source_file",
  [sym_root_project] = "root_project",
  [sym_child_project] = "child_project",
  [sym_grandchild_project] = "grandchild_project",
  [sym_great_grandchild_project] = "great_grandchild_project",
  [sym_leaf_project] = "leaf_project",
  [sym_comment] = "comment",
  [sym_section] = "section",
  [sym_id] = "id",
  [sym_sync_token] = "sync_token",
  [sym_markdown_url] = "markdown_url",
  [sym_url_description] = "url_description",
  [sym_text_line] = "text_line",
  [sym_escaped_left_bracket] = "escaped_left_bracket",
  [sym_escaped_right_bracket] = "escaped_right_bracket",
  [sym_escaped_left_parenthesis] = "escaped_left_parenthesis",
  [sym_escaped_right_parenthesis] = "escaped_right_parenthesis",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_root_project_repeat1] = "root_project_repeat1",
  [aux_sym_root_project_repeat2] = "root_project_repeat2",
  [aux_sym_root_project_repeat3] = "root_project_repeat3",
  [aux_sym_child_project_repeat1] = "child_project_repeat1",
  [aux_sym_grandchild_project_repeat1] = "grandchild_project_repeat1",
  [aux_sym_great_grandchild_project_repeat1] = "great_grandchild_project_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_root_project_icon] = sym_root_project_icon,
  [sym_child_project_icon] = sym_child_project_icon,
  [sym_grandchild_project_icon] = sym_grandchild_project_icon,
  [sym_great_grandchild_project_icon] = sym_great_grandchild_project_icon,
  [sym_leaf_project_icon] = sym_leaf_project_icon,
  [sym_comment_icon] = sym_comment_icon,
  [sym_section_icon] = sym_section_icon,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_url] = sym_url,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_url_description_token1] = aux_sym_url_description_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_id_number] = sym_id_number,
  [aux_sym_text_line_token1] = aux_sym_text_line_token1,
  [sym_source_file] = sym_source_file,
  [sym_root_project] = sym_root_project,
  [sym_child_project] = sym_child_project,
  [sym_grandchild_project] = sym_grandchild_project,
  [sym_great_grandchild_project] = sym_great_grandchild_project,
  [sym_leaf_project] = sym_leaf_project,
  [sym_comment] = sym_comment,
  [sym_section] = sym_section,
  [sym_id] = sym_id,
  [sym_sync_token] = sym_sync_token,
  [sym_markdown_url] = sym_markdown_url,
  [sym_url_description] = sym_url_description,
  [sym_text_line] = sym_text_line,
  [sym_escaped_left_bracket] = sym_escaped_left_bracket,
  [sym_escaped_right_bracket] = sym_escaped_right_bracket,
  [sym_escaped_left_parenthesis] = sym_escaped_left_parenthesis,
  [sym_escaped_right_parenthesis] = sym_escaped_right_parenthesis,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_root_project_repeat1] = aux_sym_root_project_repeat1,
  [aux_sym_root_project_repeat2] = aux_sym_root_project_repeat2,
  [aux_sym_root_project_repeat3] = aux_sym_root_project_repeat3,
  [aux_sym_child_project_repeat1] = aux_sym_child_project_repeat1,
  [aux_sym_grandchild_project_repeat1] = aux_sym_grandchild_project_repeat1,
  [aux_sym_great_grandchild_project_repeat1] = aux_sym_great_grandchild_project_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_root_project_icon] = {
    .visible = true,
    .named = true,
  },
  [sym_child_project_icon] = {
    .visible = true,
    .named = true,
  },
  [sym_grandchild_project_icon] = {
    .visible = true,
    .named = true,
  },
  [sym_great_grandchild_project_icon] = {
    .visible = true,
    .named = true,
  },
  [sym_leaf_project_icon] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_icon] = {
    .visible = true,
    .named = true,
  },
  [sym_section_icon] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
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
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_url_description_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_id_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_root_project] = {
    .visible = true,
    .named = true,
  },
  [sym_child_project] = {
    .visible = true,
    .named = true,
  },
  [sym_grandchild_project] = {
    .visible = true,
    .named = true,
  },
  [sym_great_grandchild_project] = {
    .visible = true,
    .named = true,
  },
  [sym_leaf_project] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_sync_token] = {
    .visible = true,
    .named = true,
  },
  [sym_markdown_url] = {
    .visible = true,
    .named = true,
  },
  [sym_url_description] = {
    .visible = true,
    .named = true,
  },
  [sym_text_line] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_left_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_right_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_left_parenthesis] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_right_parenthesis] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_root_project_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_root_project_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_root_project_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_child_project_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grandchild_project_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_great_grandchild_project_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
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
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
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
  [69] = 49,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 47,
  [76] = 52,
  [77] = 70,
  [78] = 47,
  [79] = 49,
  [80] = 52,
  [81] = 48,
  [82] = 82,
  [83] = 48,
  [84] = 84,
  [85] = 85,
};

static inline bool aux_sym_text_line_token1_character_set_1(int32_t c) {
  return (c < '+'
    ? (c < '&'
      ? (c < '#'
        ? c == 0
        : c <= '#')
      : (c <= '&' || (c >= '(' && c <= ')')))
    : (c <= '+' || (c < ']'
      ? (c < '['
        ? c == '>'
        : c <= '[')
      : (c <= ']' || c == '|'))));
}

static inline bool aux_sym_text_line_token1_character_set_2(int32_t c) {
  return (c < '+'
    ? (c < '#'
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= '#' || (c < '('
        ? c == '&'
        : c <= ')')))
    : (c <= '+' || (c < ']'
      ? (c < '['
        ? c == '>'
        : c <= '[')
      : (c <= ']' || c == '|'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '&') ADVANCE(24);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(11);
      if (lookahead == '|') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == '|') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '>') ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(44);
      if (lookahead == '|') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '>') ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 12:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_root_project_icon);
      if (lookahead == '#') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_child_project_icon);
      if (lookahead == '#') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_grandchild_project_icon);
      if (lookahead == '#') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_great_grandchild_project_icon);
      if (lookahead == '#') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_leaf_project_icon);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment_icon);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_section_icon);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '+' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_url_description_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_url_description_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_id_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (!aux_sym_text_line_token1_character_set_1(lookahead)) ADVANCE(48);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == 'h') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (!aux_sym_text_line_token1_character_set_1(lookahead)) ADVANCE(48);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '/') ADVANCE(45);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(48);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '/') ADVANCE(38);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(48);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == 's') ADVANCE(41);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(48);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == ':') ADVANCE(39);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'p') ADVANCE(40);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 't') ADVANCE(42);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 't') ADVANCE(43);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '+' ||
          lookahead == '>' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '|') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '+' ||
          lookahead == '>' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '|') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(48);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_root_project_icon] = ACTIONS(1),
    [sym_child_project_icon] = ACTIONS(1),
    [sym_grandchild_project_icon] = ACTIONS(1),
    [sym_great_grandchild_project_icon] = ACTIONS(1),
    [sym_leaf_project_icon] = ACTIONS(1),
    [sym_comment_icon] = ACTIONS(1),
    [sym_section_icon] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_id_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(74),
    [sym_root_project] = STATE(61),
    [aux_sym_source_file_repeat1] = STATE(61),
    [sym_root_project_icon] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      anon_sym_PIPE_GT,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_RBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 1,
      aux_sym_text_line_token1,
    STATE(38), 1,
      sym_id,
    STATE(3), 3,
      sym_markdown_url,
      sym_text_line,
      aux_sym_comment_repeat1,
    STATE(48), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [36] = 9,
    ACTIONS(19), 1,
      anon_sym_LF,
    ACTIONS(22), 1,
      anon_sym_PIPE_GT,
    ACTIONS(24), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    ACTIONS(30), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(36), 1,
      aux_sym_text_line_token1,
    STATE(3), 3,
      sym_markdown_url,
      sym_text_line,
      aux_sym_comment_repeat1,
    STATE(48), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [69] = 8,
    ACTIONS(41), 1,
      sym_leaf_project_icon,
    ACTIONS(43), 1,
      sym_comment_icon,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(13), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(18), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(37), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(39), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [100] = 8,
    ACTIONS(41), 1,
      sym_leaf_project_icon,
    ACTIONS(43), 1,
      sym_comment_icon,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(4), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(14), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(40), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(49), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [131] = 8,
    ACTIONS(43), 1,
      sym_comment_icon,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(55), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(18), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(19), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(44), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(53), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [161] = 8,
    ACTIONS(43), 1,
      sym_comment_icon,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(55), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(6), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(20), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(50), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(59), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [191] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_RBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 1,
      aux_sym_text_line_token1,
    ACTIONS(63), 1,
      anon_sym_LF,
    STATE(2), 3,
      sym_markdown_url,
      sym_text_line,
      aux_sym_comment_repeat1,
    STATE(48), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [221] = 6,
    ACTIONS(43), 1,
      sym_comment_icon,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(67), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(18), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(30), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(65), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [246] = 6,
    ACTIONS(43), 1,
      sym_comment_icon,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(71), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(9), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(28), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(69), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [271] = 8,
    ACTIONS(43), 1,
      sym_comment_icon,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(75), 1,
      sym_grandchild_project_icon,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(73), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(18), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(27), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(54), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [300] = 8,
    ACTIONS(43), 1,
      sym_comment_icon,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(75), 1,
      sym_grandchild_project_icon,
    ACTIONS(81), 1,
      anon_sym_AT,
    ACTIONS(79), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(11), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(31), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(53), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [329] = 6,
    ACTIONS(41), 1,
      sym_leaf_project_icon,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(85), 1,
      anon_sym_AT,
    STATE(29), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(35), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(83), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [353] = 6,
    ACTIONS(41), 1,
      sym_leaf_project_icon,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(29), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(37), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(39), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [377] = 8,
    ACTIONS(43), 1,
      sym_comment_icon,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(87), 1,
      sym_root_project_icon,
    ACTIONS(89), 1,
      sym_child_project_icon,
    ACTIONS(91), 1,
      anon_sym_AT,
    STATE(16), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(41), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(59), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [405] = 8,
    ACTIONS(43), 1,
      sym_comment_icon,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(89), 1,
      sym_child_project_icon,
    ACTIONS(93), 1,
      sym_root_project_icon,
    ACTIONS(95), 1,
      anon_sym_AT,
    STATE(18), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(34), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(60), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [433] = 7,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      aux_sym_text_line_token1,
    STATE(68), 1,
      sym_text_line,
    STATE(83), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [458] = 4,
    ACTIONS(111), 1,
      sym_comment_icon,
    STATE(18), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    ACTIONS(109), 3,
      sym_leaf_project_icon,
      sym_section_icon,
      anon_sym_AT,
    ACTIONS(107), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [477] = 6,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(55), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(116), 1,
      anon_sym_AT,
    STATE(29), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(43), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(114), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [500] = 6,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(55), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(29), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(44), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(53), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [523] = 7,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      aux_sym_text_line_token1,
    STATE(66), 1,
      sym_text_line,
    STATE(83), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [548] = 7,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_RBRACK,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(126), 1,
      aux_sym_text_line_token1,
    STATE(84), 1,
      sym_text_line,
    STATE(81), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [573] = 7,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      aux_sym_text_line_token1,
    STATE(64), 1,
      sym_text_line,
    STATE(83), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [598] = 7,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      aux_sym_text_line_token1,
    STATE(65), 1,
      sym_text_line,
    STATE(83), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [623] = 7,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      aux_sym_text_line_token1,
    STATE(63), 1,
      sym_text_line,
    STATE(83), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [648] = 7,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      aux_sym_text_line_token1,
    STATE(67), 1,
      sym_text_line,
    STATE(83), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [673] = 6,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(75), 1,
      sym_grandchild_project_icon,
    ACTIONS(130), 1,
      anon_sym_AT,
    ACTIONS(128), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(29), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(56), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [695] = 4,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(67), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(29), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(65), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [713] = 4,
    ACTIONS(136), 1,
      sym_section_icon,
    ACTIONS(134), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(29), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(132), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [731] = 4,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(141), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(29), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(139), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [749] = 6,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(75), 1,
      sym_grandchild_project_icon,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(73), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(29), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(54), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [771] = 3,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_url_description,
    ACTIONS(143), 6,
      anon_sym_LF,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [786] = 2,
    ACTIONS(149), 1,
      sym_url,
    ACTIONS(147), 7,
      anon_sym_LF,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [799] = 6,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(89), 1,
      sym_child_project_icon,
    ACTIONS(151), 1,
      sym_root_project_icon,
    ACTIONS(153), 1,
      anon_sym_AT,
    STATE(29), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(58), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [820] = 4,
    ACTIONS(41), 1,
      sym_leaf_project_icon,
    ACTIONS(157), 1,
      anon_sym_AT,
    STATE(36), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(155), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [837] = 4,
    ACTIONS(161), 1,
      sym_leaf_project_icon,
    ACTIONS(164), 1,
      anon_sym_AT,
    STATE(36), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(159), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [854] = 4,
    ACTIONS(41), 1,
      sym_leaf_project_icon,
    ACTIONS(85), 1,
      anon_sym_AT,
    STATE(36), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(83), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [871] = 2,
    ACTIONS(166), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
    ACTIONS(168), 4,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_AT,
  [884] = 2,
    ACTIONS(170), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
    ACTIONS(172), 4,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_AT,
  [897] = 4,
    ACTIONS(41), 1,
      sym_leaf_project_icon,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(36), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(39), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [914] = 6,
    ACTIONS(45), 1,
      sym_section_icon,
    ACTIONS(89), 1,
      sym_child_project_icon,
    ACTIONS(93), 1,
      sym_root_project_icon,
    ACTIONS(95), 1,
      anon_sym_AT,
    STATE(29), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(60), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [935] = 1,
    ACTIONS(174), 7,
      anon_sym_LF,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [945] = 4,
    ACTIONS(55), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(178), 1,
      anon_sym_AT,
    STATE(45), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(176), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [961] = 4,
    ACTIONS(55), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(116), 1,
      anon_sym_AT,
    STATE(45), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(114), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [977] = 4,
    ACTIONS(182), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(185), 1,
      anon_sym_AT,
    STATE(45), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(180), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [993] = 2,
    ACTIONS(189), 3,
      sym_leaf_project_icon,
      sym_section_icon,
      anon_sym_AT,
    ACTIONS(187), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1005] = 1,
    ACTIONS(191), 7,
      anon_sym_LF,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [1015] = 1,
    ACTIONS(193), 7,
      anon_sym_LF,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [1025] = 1,
    ACTIONS(195), 7,
      anon_sym_LF,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [1035] = 4,
    ACTIONS(55), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(45), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(53), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [1051] = 1,
    ACTIONS(197), 7,
      anon_sym_LF,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [1061] = 1,
    ACTIONS(199), 7,
      anon_sym_LF,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [1071] = 4,
    ACTIONS(75), 1,
      sym_grandchild_project_icon,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(73), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(55), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [1086] = 4,
    ACTIONS(75), 1,
      sym_grandchild_project_icon,
    ACTIONS(130), 1,
      anon_sym_AT,
    ACTIONS(128), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(55), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [1101] = 4,
    ACTIONS(203), 1,
      sym_grandchild_project_icon,
    ACTIONS(206), 1,
      anon_sym_AT,
    ACTIONS(201), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(55), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [1116] = 4,
    ACTIONS(75), 1,
      sym_grandchild_project_icon,
    ACTIONS(210), 1,
      anon_sym_AT,
    ACTIONS(208), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(55), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [1131] = 4,
    ACTIONS(212), 1,
      sym_root_project_icon,
    ACTIONS(214), 1,
      sym_child_project_icon,
    ACTIONS(217), 1,
      anon_sym_AT,
    STATE(57), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [1145] = 4,
    ACTIONS(89), 1,
      sym_child_project_icon,
    ACTIONS(219), 1,
      sym_root_project_icon,
    ACTIONS(221), 1,
      anon_sym_AT,
    STATE(57), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [1159] = 4,
    ACTIONS(89), 1,
      sym_child_project_icon,
    ACTIONS(93), 1,
      sym_root_project_icon,
    ACTIONS(95), 1,
      anon_sym_AT,
    STATE(57), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [1173] = 4,
    ACTIONS(89), 1,
      sym_child_project_icon,
    ACTIONS(151), 1,
      sym_root_project_icon,
    ACTIONS(153), 1,
      anon_sym_AT,
    STATE(57), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [1187] = 4,
    ACTIONS(3), 1,
      sym_root_project_icon,
    ACTIONS(223), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_sync_token,
    STATE(62), 2,
      sym_root_project,
      aux_sym_source_file_repeat1,
  [1201] = 3,
    ACTIONS(225), 1,
      sym_root_project_icon,
    ACTIONS(228), 1,
      anon_sym_AT,
    STATE(62), 2,
      sym_root_project,
      aux_sym_source_file_repeat1,
  [1212] = 2,
    ACTIONS(230), 1,
      anon_sym_PIPE_GT,
    STATE(15), 1,
      sym_id,
  [1219] = 2,
    ACTIONS(230), 1,
      anon_sym_PIPE_GT,
    STATE(12), 1,
      sym_id,
  [1226] = 2,
    ACTIONS(230), 1,
      anon_sym_PIPE_GT,
    STATE(46), 1,
      sym_id,
  [1233] = 2,
    ACTIONS(230), 1,
      anon_sym_PIPE_GT,
    STATE(5), 1,
      sym_id,
  [1240] = 2,
    ACTIONS(230), 1,
      anon_sym_PIPE_GT,
    STATE(7), 1,
      sym_id,
  [1247] = 2,
    ACTIONS(230), 1,
      anon_sym_PIPE_GT,
    STATE(10), 1,
      sym_id,
  [1254] = 1,
    ACTIONS(232), 1,
      anon_sym_PIPE_GT,
  [1258] = 1,
    ACTIONS(234), 1,
      anon_sym_PIPE_GT,
  [1262] = 1,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
  [1266] = 1,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
  [1270] = 1,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
  [1274] = 1,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
  [1278] = 1,
    ACTIONS(244), 1,
      anon_sym_PIPE_GT,
  [1282] = 1,
    ACTIONS(246), 1,
      anon_sym_PIPE_GT,
  [1286] = 1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [1290] = 1,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
  [1294] = 1,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
  [1298] = 1,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
  [1302] = 1,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
  [1306] = 1,
    ACTIONS(250), 1,
      aux_sym_url_description_token1,
  [1310] = 1,
    ACTIONS(248), 1,
      anon_sym_PIPE_GT,
  [1314] = 1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
  [1318] = 1,
    ACTIONS(254), 1,
      sym_id_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 69,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 131,
  [SMALL_STATE(7)] = 161,
  [SMALL_STATE(8)] = 191,
  [SMALL_STATE(9)] = 221,
  [SMALL_STATE(10)] = 246,
  [SMALL_STATE(11)] = 271,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 329,
  [SMALL_STATE(14)] = 353,
  [SMALL_STATE(15)] = 377,
  [SMALL_STATE(16)] = 405,
  [SMALL_STATE(17)] = 433,
  [SMALL_STATE(18)] = 458,
  [SMALL_STATE(19)] = 477,
  [SMALL_STATE(20)] = 500,
  [SMALL_STATE(21)] = 523,
  [SMALL_STATE(22)] = 548,
  [SMALL_STATE(23)] = 573,
  [SMALL_STATE(24)] = 598,
  [SMALL_STATE(25)] = 623,
  [SMALL_STATE(26)] = 648,
  [SMALL_STATE(27)] = 673,
  [SMALL_STATE(28)] = 695,
  [SMALL_STATE(29)] = 713,
  [SMALL_STATE(30)] = 731,
  [SMALL_STATE(31)] = 749,
  [SMALL_STATE(32)] = 771,
  [SMALL_STATE(33)] = 786,
  [SMALL_STATE(34)] = 799,
  [SMALL_STATE(35)] = 820,
  [SMALL_STATE(36)] = 837,
  [SMALL_STATE(37)] = 854,
  [SMALL_STATE(38)] = 871,
  [SMALL_STATE(39)] = 884,
  [SMALL_STATE(40)] = 897,
  [SMALL_STATE(41)] = 914,
  [SMALL_STATE(42)] = 935,
  [SMALL_STATE(43)] = 945,
  [SMALL_STATE(44)] = 961,
  [SMALL_STATE(45)] = 977,
  [SMALL_STATE(46)] = 993,
  [SMALL_STATE(47)] = 1005,
  [SMALL_STATE(48)] = 1015,
  [SMALL_STATE(49)] = 1025,
  [SMALL_STATE(50)] = 1035,
  [SMALL_STATE(51)] = 1051,
  [SMALL_STATE(52)] = 1061,
  [SMALL_STATE(53)] = 1071,
  [SMALL_STATE(54)] = 1086,
  [SMALL_STATE(55)] = 1101,
  [SMALL_STATE(56)] = 1116,
  [SMALL_STATE(57)] = 1131,
  [SMALL_STATE(58)] = 1145,
  [SMALL_STATE(59)] = 1159,
  [SMALL_STATE(60)] = 1173,
  [SMALL_STATE(61)] = 1187,
  [SMALL_STATE(62)] = 1201,
  [SMALL_STATE(63)] = 1212,
  [SMALL_STATE(64)] = 1219,
  [SMALL_STATE(65)] = 1226,
  [SMALL_STATE(66)] = 1233,
  [SMALL_STATE(67)] = 1240,
  [SMALL_STATE(68)] = 1247,
  [SMALL_STATE(69)] = 1254,
  [SMALL_STATE(70)] = 1258,
  [SMALL_STATE(71)] = 1262,
  [SMALL_STATE(72)] = 1266,
  [SMALL_STATE(73)] = 1270,
  [SMALL_STATE(74)] = 1274,
  [SMALL_STATE(75)] = 1278,
  [SMALL_STATE(76)] = 1282,
  [SMALL_STATE(77)] = 1286,
  [SMALL_STATE(78)] = 1290,
  [SMALL_STATE(79)] = 1294,
  [SMALL_STATE(80)] = 1298,
  [SMALL_STATE(81)] = 1302,
  [SMALL_STATE(82)] = 1306,
  [SMALL_STATE(83)] = 1310,
  [SMALL_STATE(84)] = 1314,
  [SMALL_STATE(85)] = 1318,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(33),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(47),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(49),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(52),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(48),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_project, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_project, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_project, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 4),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_project, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leaf_project, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leaf_project, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_project, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_project, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_project, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_project, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_project, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_project_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_project_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat1, 2), SHIFT_REPEAT(8),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_project, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 5),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_project, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_project_repeat2, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_project_repeat2, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat2, 2), SHIFT_REPEAT(24),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leaf_project, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 5),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_url, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_left_bracket, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_project, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_project, 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 6),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2), SHIFT_REPEAT(17),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_url, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_project, 6),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 6),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grandchild_project_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grandchild_project_repeat1, 2), SHIFT_REPEAT(21),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grandchild_project_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_right_bracket, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_left_parenthesis, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_description, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_right_parenthesis, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_child_project_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_child_project_repeat1, 2), SHIFT_REPEAT(26),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_child_project_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_project, 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 6),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_project_repeat3, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat3, 2), SHIFT_REPEAT(23),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_project_repeat3, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_project, 6),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 6),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_left_parenthesis, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_left_bracket, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [242] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_right_bracket, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_right_parenthesis, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sync_token, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_projects(void) {
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
