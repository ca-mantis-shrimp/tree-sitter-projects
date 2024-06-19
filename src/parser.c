#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 87
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
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
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  sym_url_description = 15,
  sym_url = 16,
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
  sym_text_line = 30,
  sym_escaped_left_bracket = 31,
  sym_escaped_right_bracket = 32,
  sym_escaped_left_parenthesis = 33,
  sym_escaped_right_parenthesis = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_root_project_repeat1 = 36,
  aux_sym_root_project_repeat2 = 37,
  aux_sym_root_project_repeat3 = 38,
  aux_sym_child_project_repeat1 = 39,
  aux_sym_grandchild_project_repeat1 = 40,
  aux_sym_great_grandchild_project_repeat1 = 41,
  aux_sym_comment_repeat1 = 42,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_url_description] = "url_description",
  [sym_url] = "url",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_url_description] = sym_url_description,
  [sym_url] = sym_url,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_url_description] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
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
  [69] = 69,
  [70] = 42,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 45,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 72,
  [80] = 42,
  [81] = 69,
  [82] = 45,
  [83] = 48,
  [84] = 84,
  [85] = 48,
  [86] = 86,
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
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == '|') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '|') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '>') ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(48);
      if (lookahead == '|') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '>') ADVANCE(52);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '+' ||
          lookahead == '>') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_root_project_icon);
      if (lookahead == '#') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_child_project_icon);
      if (lookahead == '#') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_grandchild_project_icon);
      if (lookahead == '#') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_great_grandchild_project_icon);
      if (lookahead == '#') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_leaf_project_icon);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment_icon);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_section_icon);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(36);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_url_description);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '+' ||
          lookahead == '>') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_url_description);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_url_description);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '+' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_url_description);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '+' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_id_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (!aux_sym_text_line_token1_character_set_1(lookahead)) ADVANCE(52);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == 'h') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (!aux_sym_text_line_token1_character_set_1(lookahead)) ADVANCE(52);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '/') ADVANCE(49);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(52);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '/') ADVANCE(42);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(52);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 's') ADVANCE(45);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(52);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == ':') ADVANCE(43);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(52);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'p') ADVANCE(44);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(52);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 't') ADVANCE(46);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(52);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 't') ADVANCE(47);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '+' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '+' ||
          lookahead == '>' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '|') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(52);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
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
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
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
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
    [sym_id_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym_root_project] = STATE(56),
    [aux_sym_source_file_repeat1] = STATE(56),
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
    STATE(5), 3,
      sym_markdown_url,
      sym_text_line,
      aux_sym_comment_repeat1,
    STATE(48), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [36] = 8,
    ACTIONS(21), 1,
      sym_leaf_project_icon,
    ACTIONS(23), 1,
      sym_comment_icon,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(27), 1,
      anon_sym_AT,
    STATE(13), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(26), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(32), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(19), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [67] = 8,
    ACTIONS(21), 1,
      sym_leaf_project_icon,
    ACTIONS(23), 1,
      sym_comment_icon,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(31), 1,
      anon_sym_AT,
    STATE(3), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(14), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(36), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(29), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [98] = 9,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(36), 1,
      anon_sym_PIPE_GT,
    ACTIONS(38), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(50), 1,
      aux_sym_text_line_token1,
    STATE(5), 3,
      sym_markdown_url,
      sym_text_line,
      aux_sym_comment_repeat1,
    STATE(48), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [131] = 8,
    ACTIONS(23), 1,
      sym_comment_icon,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(55), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(18), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(26), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(49), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(53), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [161] = 8,
    ACTIONS(23), 1,
      sym_comment_icon,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(55), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(6), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(19), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(46), 2,
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
  [221] = 8,
    ACTIONS(23), 1,
      sym_comment_icon,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(67), 1,
      sym_grandchild_project_icon,
    ACTIONS(69), 1,
      anon_sym_AT,
    ACTIONS(65), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(12), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(29), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(52), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [250] = 6,
    ACTIONS(23), 1,
      sym_comment_icon,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(73), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(26), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(31), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(71), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [275] = 6,
    ACTIONS(23), 1,
      sym_comment_icon,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(77), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(10), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(30), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(75), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [300] = 8,
    ACTIONS(23), 1,
      sym_comment_icon,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(67), 1,
      sym_grandchild_project_icon,
    ACTIONS(81), 1,
      anon_sym_AT,
    ACTIONS(79), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(26), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(28), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(53), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [329] = 6,
    ACTIONS(21), 1,
      sym_leaf_project_icon,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(85), 1,
      anon_sym_AT,
    STATE(27), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(37), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(83), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [353] = 6,
    ACTIONS(21), 1,
      sym_leaf_project_icon,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(27), 1,
      anon_sym_AT,
    STATE(27), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(32), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(19), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [377] = 8,
    ACTIONS(23), 1,
      sym_comment_icon,
    ACTIONS(25), 1,
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
    STATE(39), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(58), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [405] = 8,
    ACTIONS(23), 1,
      sym_comment_icon,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(89), 1,
      sym_child_project_icon,
    ACTIONS(93), 1,
      sym_root_project_icon,
    ACTIONS(95), 1,
      anon_sym_AT,
    STATE(26), 2,
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
    STATE(67), 1,
      sym_text_line,
    STATE(85), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [458] = 6,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(55), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(27), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(51), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(107), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [481] = 6,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(55), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(27), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(49), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(53), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [504] = 7,
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
    STATE(85), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [529] = 7,
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
    STATE(85), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [554] = 7,
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
    STATE(85), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [579] = 7,
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
    STATE(85), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [604] = 7,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 1,
      aux_sym_text_line_token1,
    STATE(86), 1,
      sym_text_line,
    STATE(83), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [629] = 7,
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
    STATE(62), 1,
      sym_text_line,
    STATE(85), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [654] = 4,
    ACTIONS(125), 1,
      sym_comment_icon,
    STATE(26), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    ACTIONS(123), 3,
      sym_leaf_project_icon,
      sym_section_icon,
      anon_sym_AT,
    ACTIONS(121), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [673] = 4,
    ACTIONS(132), 1,
      sym_section_icon,
    ACTIONS(130), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(27), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(128), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [691] = 6,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(67), 1,
      sym_grandchild_project_icon,
    ACTIONS(137), 1,
      anon_sym_AT,
    ACTIONS(135), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(27), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(55), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [713] = 6,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(67), 1,
      sym_grandchild_project_icon,
    ACTIONS(81), 1,
      anon_sym_AT,
    ACTIONS(79), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(27), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(53), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [735] = 4,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(73), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(27), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(71), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [753] = 4,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(141), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(27), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(139), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [771] = 4,
    ACTIONS(21), 1,
      sym_leaf_project_icon,
    ACTIONS(85), 1,
      anon_sym_AT,
    STATE(40), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(83), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [788] = 2,
    ACTIONS(143), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
    ACTIONS(145), 4,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_AT,
  [801] = 6,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(89), 1,
      sym_child_project_icon,
    ACTIONS(147), 1,
      sym_root_project_icon,
    ACTIONS(149), 1,
      anon_sym_AT,
    STATE(27), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(57), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [822] = 2,
    ACTIONS(153), 1,
      sym_url,
    ACTIONS(151), 7,
      anon_sym_LF,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [835] = 4,
    ACTIONS(21), 1,
      sym_leaf_project_icon,
    ACTIONS(27), 1,
      anon_sym_AT,
    STATE(40), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(19), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [852] = 4,
    ACTIONS(21), 1,
      sym_leaf_project_icon,
    ACTIONS(157), 1,
      anon_sym_AT,
    STATE(40), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(155), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [869] = 2,
    ACTIONS(159), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
    ACTIONS(161), 4,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_AT,
  [882] = 6,
    ACTIONS(25), 1,
      sym_section_icon,
    ACTIONS(89), 1,
      sym_child_project_icon,
    ACTIONS(93), 1,
      sym_root_project_icon,
    ACTIONS(95), 1,
      anon_sym_AT,
    STATE(27), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(60), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [903] = 4,
    ACTIONS(165), 1,
      sym_leaf_project_icon,
    ACTIONS(168), 1,
      anon_sym_AT,
    STATE(40), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(163), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [920] = 2,
    ACTIONS(172), 1,
      sym_url_description,
    ACTIONS(170), 7,
      anon_sym_LF,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [933] = 1,
    ACTIONS(174), 7,
      anon_sym_LF,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [943] = 1,
    ACTIONS(176), 7,
      anon_sym_LF,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [953] = 2,
    ACTIONS(180), 3,
      sym_leaf_project_icon,
      sym_section_icon,
      anon_sym_AT,
    ACTIONS(178), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [965] = 1,
    ACTIONS(182), 7,
      anon_sym_LF,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [975] = 4,
    ACTIONS(55), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(50), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(53), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [991] = 1,
    ACTIONS(184), 7,
      anon_sym_LF,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [1001] = 1,
    ACTIONS(186), 7,
      anon_sym_LF,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [1011] = 4,
    ACTIONS(55), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(50), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(107), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [1027] = 4,
    ACTIONS(190), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(193), 1,
      anon_sym_AT,
    STATE(50), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(188), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [1043] = 4,
    ACTIONS(55), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(197), 1,
      anon_sym_AT,
    STATE(50), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(195), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [1059] = 4,
    ACTIONS(67), 1,
      sym_grandchild_project_icon,
    ACTIONS(81), 1,
      anon_sym_AT,
    ACTIONS(79), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(54), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [1074] = 4,
    ACTIONS(67), 1,
      sym_grandchild_project_icon,
    ACTIONS(137), 1,
      anon_sym_AT,
    ACTIONS(135), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(54), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [1089] = 4,
    ACTIONS(201), 1,
      sym_grandchild_project_icon,
    ACTIONS(204), 1,
      anon_sym_AT,
    ACTIONS(199), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(54), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [1104] = 4,
    ACTIONS(67), 1,
      sym_grandchild_project_icon,
    ACTIONS(208), 1,
      anon_sym_AT,
    ACTIONS(206), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(54), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [1119] = 4,
    ACTIONS(3), 1,
      sym_root_project_icon,
    ACTIONS(210), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_sync_token,
    STATE(61), 2,
      sym_root_project,
      aux_sym_source_file_repeat1,
  [1133] = 4,
    ACTIONS(89), 1,
      sym_child_project_icon,
    ACTIONS(212), 1,
      sym_root_project_icon,
    ACTIONS(214), 1,
      anon_sym_AT,
    STATE(59), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [1147] = 4,
    ACTIONS(89), 1,
      sym_child_project_icon,
    ACTIONS(93), 1,
      sym_root_project_icon,
    ACTIONS(95), 1,
      anon_sym_AT,
    STATE(59), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [1161] = 4,
    ACTIONS(216), 1,
      sym_root_project_icon,
    ACTIONS(218), 1,
      sym_child_project_icon,
    ACTIONS(221), 1,
      anon_sym_AT,
    STATE(59), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [1175] = 4,
    ACTIONS(89), 1,
      sym_child_project_icon,
    ACTIONS(147), 1,
      sym_root_project_icon,
    ACTIONS(149), 1,
      anon_sym_AT,
    STATE(59), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [1189] = 3,
    ACTIONS(223), 1,
      sym_root_project_icon,
    ACTIONS(226), 1,
      anon_sym_AT,
    STATE(61), 2,
      sym_root_project,
      aux_sym_source_file_repeat1,
  [1200] = 2,
    ACTIONS(228), 1,
      anon_sym_PIPE_GT,
    STATE(15), 1,
      sym_id,
  [1207] = 2,
    ACTIONS(228), 1,
      anon_sym_PIPE_GT,
    STATE(11), 1,
      sym_id,
  [1214] = 2,
    ACTIONS(228), 1,
      anon_sym_PIPE_GT,
    STATE(9), 1,
      sym_id,
  [1221] = 2,
    ACTIONS(228), 1,
      anon_sym_PIPE_GT,
    STATE(44), 1,
      sym_id,
  [1228] = 2,
    ACTIONS(228), 1,
      anon_sym_PIPE_GT,
    STATE(4), 1,
      sym_id,
  [1235] = 2,
    ACTIONS(228), 1,
      anon_sym_PIPE_GT,
    STATE(7), 1,
      sym_id,
  [1242] = 1,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
  [1246] = 1,
    ACTIONS(232), 1,
      anon_sym_PIPE_GT,
  [1250] = 1,
    ACTIONS(234), 1,
      anon_sym_PIPE_GT,
  [1254] = 1,
    ACTIONS(236), 1,
      sym_id_number,
  [1258] = 1,
    ACTIONS(238), 1,
      anon_sym_PIPE_GT,
  [1262] = 1,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
  [1266] = 1,
    ACTIONS(242), 1,
      sym_url,
  [1270] = 1,
    ACTIONS(244), 1,
      anon_sym_PIPE_GT,
  [1274] = 1,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
  [1278] = 1,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
  [1282] = 1,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
  [1286] = 1,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
  [1290] = 1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [1294] = 1,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
  [1298] = 1,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
  [1302] = 1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
  [1306] = 1,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
  [1310] = 1,
    ACTIONS(252), 1,
      anon_sym_PIPE_GT,
  [1314] = 1,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 98,
  [SMALL_STATE(6)] = 131,
  [SMALL_STATE(7)] = 161,
  [SMALL_STATE(8)] = 191,
  [SMALL_STATE(9)] = 221,
  [SMALL_STATE(10)] = 250,
  [SMALL_STATE(11)] = 275,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 329,
  [SMALL_STATE(14)] = 353,
  [SMALL_STATE(15)] = 377,
  [SMALL_STATE(16)] = 405,
  [SMALL_STATE(17)] = 433,
  [SMALL_STATE(18)] = 458,
  [SMALL_STATE(19)] = 481,
  [SMALL_STATE(20)] = 504,
  [SMALL_STATE(21)] = 529,
  [SMALL_STATE(22)] = 554,
  [SMALL_STATE(23)] = 579,
  [SMALL_STATE(24)] = 604,
  [SMALL_STATE(25)] = 629,
  [SMALL_STATE(26)] = 654,
  [SMALL_STATE(27)] = 673,
  [SMALL_STATE(28)] = 691,
  [SMALL_STATE(29)] = 713,
  [SMALL_STATE(30)] = 735,
  [SMALL_STATE(31)] = 753,
  [SMALL_STATE(32)] = 771,
  [SMALL_STATE(33)] = 788,
  [SMALL_STATE(34)] = 801,
  [SMALL_STATE(35)] = 822,
  [SMALL_STATE(36)] = 835,
  [SMALL_STATE(37)] = 852,
  [SMALL_STATE(38)] = 869,
  [SMALL_STATE(39)] = 882,
  [SMALL_STATE(40)] = 903,
  [SMALL_STATE(41)] = 920,
  [SMALL_STATE(42)] = 933,
  [SMALL_STATE(43)] = 943,
  [SMALL_STATE(44)] = 953,
  [SMALL_STATE(45)] = 965,
  [SMALL_STATE(46)] = 975,
  [SMALL_STATE(47)] = 991,
  [SMALL_STATE(48)] = 1001,
  [SMALL_STATE(49)] = 1011,
  [SMALL_STATE(50)] = 1027,
  [SMALL_STATE(51)] = 1043,
  [SMALL_STATE(52)] = 1059,
  [SMALL_STATE(53)] = 1074,
  [SMALL_STATE(54)] = 1089,
  [SMALL_STATE(55)] = 1104,
  [SMALL_STATE(56)] = 1119,
  [SMALL_STATE(57)] = 1133,
  [SMALL_STATE(58)] = 1147,
  [SMALL_STATE(59)] = 1161,
  [SMALL_STATE(60)] = 1175,
  [SMALL_STATE(61)] = 1189,
  [SMALL_STATE(62)] = 1200,
  [SMALL_STATE(63)] = 1207,
  [SMALL_STATE(64)] = 1214,
  [SMALL_STATE(65)] = 1221,
  [SMALL_STATE(66)] = 1228,
  [SMALL_STATE(67)] = 1235,
  [SMALL_STATE(68)] = 1242,
  [SMALL_STATE(69)] = 1246,
  [SMALL_STATE(70)] = 1250,
  [SMALL_STATE(71)] = 1254,
  [SMALL_STATE(72)] = 1258,
  [SMALL_STATE(73)] = 1262,
  [SMALL_STATE(74)] = 1266,
  [SMALL_STATE(75)] = 1270,
  [SMALL_STATE(76)] = 1274,
  [SMALL_STATE(77)] = 1278,
  [SMALL_STATE(78)] = 1282,
  [SMALL_STATE(79)] = 1286,
  [SMALL_STATE(80)] = 1290,
  [SMALL_STATE(81)] = 1294,
  [SMALL_STATE(82)] = 1298,
  [SMALL_STATE(83)] = 1302,
  [SMALL_STATE(84)] = 1306,
  [SMALL_STATE(85)] = 1310,
  [SMALL_STATE(86)] = 1314,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_project, 4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 4),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_project, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 3),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(5),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(41),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(42),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(35),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(45),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(48),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_project, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 4),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_project, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_project, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leaf_project, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 4),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leaf_project, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_project, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_project, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_project, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_project, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_project, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_project_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_project_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat1, 2), SHIFT_REPEAT(8),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_project_repeat2, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_project_repeat2, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat2, 2), SHIFT_REPEAT(23),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_project, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leaf_project, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 5),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_project, 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 5),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_left_parenthesis, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_project, 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 6),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2), SHIFT_REPEAT(21),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_left_bracket, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_right_bracket, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_url, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_right_parenthesis, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_url, 6),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grandchild_project_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grandchild_project_repeat1, 2), SHIFT_REPEAT(20),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grandchild_project_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_project, 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 6),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_child_project_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_child_project_repeat1, 2), SHIFT_REPEAT(17),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_child_project_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_project, 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_project, 6),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 6),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_project_repeat3, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat3, 2), SHIFT_REPEAT(22),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_project_repeat3, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_left_parenthesis, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_right_bracket, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_left_bracket, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_right_parenthesis, 1),
  [246] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sync_token, 2),
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
