#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 5
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
  [3] = 2,
  [4] = 4,
  [5] = 2,
  [6] = 4,
  [7] = 2,
  [8] = 4,
  [9] = 4,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 11,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 11,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 11,
  [32] = 28,
  [33] = 28,
  [34] = 28,
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
  [62] = 54,
  [63] = 16,
  [64] = 64,
  [65] = 17,
  [66] = 18,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 54,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 54,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 17,
  [103] = 18,
  [104] = 61,
  [105] = 16,
  [106] = 64,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
};

static inline bool aux_sym_text_line_token1_character_set_1(int32_t c) {
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

static inline bool aux_sym_text_line_token1_character_set_2(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == ']') ADVANCE(56);
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == '|') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == ']') ADVANCE(56);
      if (lookahead == '|') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(82);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == ']') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(82);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == ']') ADVANCE(56);
      if (lookahead == '|') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == ']') ADVANCE(56);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead == '|') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(82);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == ']') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(82);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == ']') ADVANCE(56);
      if (lookahead == '|') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == ']') ADVANCE(56);
      if (lookahead == '|') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == ']') ADVANCE(56);
      if (lookahead == '|') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_root_project_icon);
      if (lookahead == '#') ADVANCE(32);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_root_project_icon);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_root_project_icon);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_root_project_icon);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_root_project_icon);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_child_project_icon);
      if (lookahead == '#') ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_child_project_icon);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_child_project_icon);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_child_project_icon);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_child_project_icon);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_grandchild_project_icon);
      if (lookahead == '#') ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_grandchild_project_icon);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_grandchild_project_icon);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_grandchild_project_icon);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_great_grandchild_project_icon);
      if (lookahead == '#') ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_great_grandchild_project_icon);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_great_grandchild_project_icon);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_leaf_project_icon);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_leaf_project_icon);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_comment_icon);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment_icon);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_section_icon);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_section_icon);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '+' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(64);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AT);
      if (!aux_sym_text_line_token1_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_url_description);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '|') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_url_description);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '|') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_url_description);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '|') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_url_description);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '|') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_url_description);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_url_description);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '+' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_url_description);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '+' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_id_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '@') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == 'h') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '\n') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (!aux_sym_text_line_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '/') ADVANCE(79);
      if (!aux_sym_text_line_token1_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '/') ADVANCE(72);
      if (!aux_sym_text_line_token1_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == 's') ADVANCE(75);
      if (!aux_sym_text_line_token1_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == ':') ADVANCE(73);
      if (!aux_sym_text_line_token1_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'p') ADVANCE(74);
      if (!aux_sym_text_line_token1_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 't') ADVANCE(76);
      if (!aux_sym_text_line_token1_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 't') ADVANCE(77);
      if (!aux_sym_text_line_token1_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '+' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (!aux_sym_text_line_token1_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '+' ||
          lookahead == '>' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '|') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (!aux_sym_text_line_token1_character_set_1(lookahead)) ADVANCE(82);
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
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
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
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
    [sym_source_file] = STATE(114),
    [sym_root_project] = STATE(100),
    [aux_sym_source_file_repeat1] = STATE(100),
    [sym_root_project_icon] = ACTIONS(3),
  },
  [2] = {
    [sym_id] = STATE(80),
    [sym_markdown_url] = STATE(4),
    [sym_text_line] = STATE(4),
    [sym_escaped_left_bracket] = STATE(18),
    [sym_escaped_right_bracket] = STATE(18),
    [sym_escaped_left_parenthesis] = STATE(18),
    [sym_escaped_right_parenthesis] = STATE(18),
    [aux_sym_comment_repeat1] = STATE(4),
    [anon_sym_LF] = ACTIONS(5),
    [sym_root_project_icon] = ACTIONS(7),
    [sym_child_project_icon] = ACTIONS(7),
    [sym_grandchild_project_icon] = ACTIONS(7),
    [sym_great_grandchild_project_icon] = ACTIONS(7),
    [sym_leaf_project_icon] = ACTIONS(7),
    [sym_comment_icon] = ACTIONS(7),
    [sym_section_icon] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(17),
    [aux_sym_text_line_token1] = ACTIONS(19),
  },
  [3] = {
    [sym_id] = STATE(80),
    [sym_markdown_url] = STATE(6),
    [sym_text_line] = STATE(6),
    [sym_escaped_left_bracket] = STATE(18),
    [sym_escaped_right_bracket] = STATE(18),
    [sym_escaped_left_parenthesis] = STATE(18),
    [sym_escaped_right_parenthesis] = STATE(18),
    [aux_sym_comment_repeat1] = STATE(6),
    [anon_sym_LF] = ACTIONS(21),
    [sym_root_project_icon] = ACTIONS(7),
    [sym_child_project_icon] = ACTIONS(7),
    [sym_grandchild_project_icon] = ACTIONS(7),
    [sym_great_grandchild_project_icon] = ACTIONS(7),
    [sym_comment_icon] = ACTIONS(7),
    [sym_section_icon] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(17),
    [aux_sym_text_line_token1] = ACTIONS(19),
  },
  [4] = {
    [sym_markdown_url] = STATE(4),
    [sym_text_line] = STATE(4),
    [sym_escaped_left_bracket] = STATE(18),
    [sym_escaped_right_bracket] = STATE(18),
    [sym_escaped_left_parenthesis] = STATE(18),
    [sym_escaped_right_parenthesis] = STATE(18),
    [aux_sym_comment_repeat1] = STATE(4),
    [anon_sym_LF] = ACTIONS(25),
    [sym_root_project_icon] = ACTIONS(28),
    [sym_child_project_icon] = ACTIONS(28),
    [sym_grandchild_project_icon] = ACTIONS(28),
    [sym_great_grandchild_project_icon] = ACTIONS(28),
    [sym_leaf_project_icon] = ACTIONS(28),
    [sym_comment_icon] = ACTIONS(28),
    [sym_section_icon] = ACTIONS(28),
    [anon_sym_PIPE_GT] = ACTIONS(28),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_RPAREN] = ACTIONS(39),
    [aux_sym_text_line_token1] = ACTIONS(42),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(9), 1,
      anon_sym_PIPE_GT,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      aux_sym_text_line_token1,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    STATE(80), 1,
      sym_id,
    STATE(8), 3,
      sym_markdown_url,
      sym_text_line,
      aux_sym_comment_repeat1,
    STATE(18), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
    ACTIONS(7), 6,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_AT,
  [44] = 9,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    ACTIONS(36), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(42), 1,
      aux_sym_text_line_token1,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    STATE(6), 3,
      sym_markdown_url,
      sym_text_line,
      aux_sym_comment_repeat1,
    STATE(18), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
    ACTIONS(28), 8,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
  [84] = 11,
    ACTIONS(9), 1,
      anon_sym_PIPE_GT,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      aux_sym_text_line_token1,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(80), 1,
      sym_id,
    STATE(9), 3,
      sym_markdown_url,
      sym_text_line,
      aux_sym_comment_repeat1,
    STATE(18), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
    ACTIONS(7), 5,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_AT,
  [127] = 9,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    ACTIONS(36), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(42), 1,
      aux_sym_text_line_token1,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    STATE(8), 3,
      sym_markdown_url,
      sym_text_line,
      aux_sym_comment_repeat1,
    STATE(18), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
    ACTIONS(28), 7,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
  [166] = 9,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    ACTIONS(36), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(42), 1,
      aux_sym_text_line_token1,
    ACTIONS(65), 1,
      anon_sym_LF,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    STATE(9), 3,
      sym_markdown_url,
      sym_text_line,
      aux_sym_comment_repeat1,
    STATE(18), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
    ACTIONS(28), 6,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
  [204] = 10,
    ACTIONS(73), 1,
      sym_leaf_project_icon,
    ACTIONS(75), 1,
      sym_comment_icon,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(79), 1,
      anon_sym_PIPE_GT,
    ACTIONS(81), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym_id,
    STATE(24), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(45), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(76), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(71), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [241] = 2,
    ACTIONS(85), 1,
      sym_url_description,
    ACTIONS(83), 15,
      anon_sym_LF,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [262] = 2,
    ACTIONS(89), 1,
      sym_url,
    ACTIONS(87), 15,
      anon_sym_LF,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [283] = 1,
    ACTIONS(91), 15,
      anon_sym_LF,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [301] = 10,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(79), 1,
      anon_sym_PIPE_GT,
    ACTIONS(95), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(97), 1,
      sym_comment_icon,
    ACTIONS(99), 1,
      anon_sym_AT,
    STATE(27), 1,
      sym_id,
    STATE(26), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(57), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(86), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(93), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [337] = 1,
    ACTIONS(101), 15,
      anon_sym_LF,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [355] = 1,
    ACTIONS(103), 15,
      anon_sym_LF,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [373] = 1,
    ACTIONS(105), 15,
      anon_sym_LF,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [391] = 1,
    ACTIONS(107), 15,
      anon_sym_LF,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [409] = 2,
    ACTIONS(85), 1,
      sym_url_description,
    ACTIONS(83), 14,
      anon_sym_LF,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [429] = 8,
    ACTIONS(73), 1,
      sym_leaf_project_icon,
    ACTIONS(75), 1,
      sym_comment_icon,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(111), 1,
      anon_sym_AT,
    STATE(46), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(54), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(72), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(109), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [460] = 10,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(79), 1,
      anon_sym_PIPE_GT,
    ACTIONS(115), 1,
      sym_grandchild_project_icon,
    ACTIONS(117), 1,
      sym_comment_icon,
    ACTIONS(119), 1,
      anon_sym_AT,
    STATE(38), 1,
      sym_id,
    ACTIONS(113), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(37), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(70), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(91), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [495] = 8,
    ACTIONS(73), 1,
      sym_leaf_project_icon,
    ACTIONS(75), 1,
      sym_comment_icon,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(123), 1,
      anon_sym_AT,
    STATE(20), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(42), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(73), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(121), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [526] = 2,
    ACTIONS(85), 1,
      sym_url_description,
    ACTIONS(83), 13,
      anon_sym_LF,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [545] = 8,
    ACTIONS(73), 1,
      sym_leaf_project_icon,
    ACTIONS(75), 1,
      sym_comment_icon,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(123), 1,
      anon_sym_AT,
    STATE(42), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(54), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(73), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(121), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [576] = 8,
    ACTIONS(75), 1,
      sym_comment_icon,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(79), 1,
      anon_sym_PIPE_GT,
    STATE(35), 1,
      sym_id,
    ACTIONS(127), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(39), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(58), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(125), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [607] = 8,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(95), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(97), 1,
      sym_comment_icon,
    ACTIONS(131), 1,
      anon_sym_AT,
    STATE(51), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(62), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(88), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(129), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [637] = 8,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(95), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(97), 1,
      sym_comment_icon,
    ACTIONS(131), 1,
      anon_sym_AT,
    STATE(30), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(51), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(88), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(129), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [667] = 8,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      aux_sym_text_line_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      anon_sym_LF,
    STATE(7), 3,
      sym_markdown_url,
      sym_text_line,
      aux_sym_comment_repeat1,
    STATE(18), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [697] = 10,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(79), 1,
      anon_sym_PIPE_GT,
    ACTIONS(135), 1,
      sym_root_project_icon,
    ACTIONS(137), 1,
      sym_child_project_icon,
    ACTIONS(139), 1,
      sym_comment_icon,
    ACTIONS(141), 1,
      anon_sym_AT,
    STATE(43), 1,
      sym_id,
    STATE(41), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(81), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(95), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [731] = 8,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(95), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(97), 1,
      sym_comment_icon,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(49), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(62), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(83), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(143), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [761] = 2,
    ACTIONS(85), 1,
      sym_url_description,
    ACTIONS(83), 12,
      anon_sym_LF,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_text_line_token1,
  [779] = 8,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      aux_sym_text_line_token1,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_LF,
    STATE(5), 3,
      sym_markdown_url,
      sym_text_line,
      aux_sym_comment_repeat1,
    STATE(18), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [809] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      aux_sym_text_line_token1,
    ACTIONS(149), 1,
      anon_sym_LF,
    STATE(2), 3,
      sym_markdown_url,
      sym_text_line,
      aux_sym_comment_repeat1,
    STATE(18), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [839] = 8,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      aux_sym_text_line_token1,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_LF,
    STATE(3), 3,
      sym_markdown_url,
      sym_text_line,
      aux_sym_comment_repeat1,
    STATE(18), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [869] = 6,
    ACTIONS(75), 1,
      sym_comment_icon,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(155), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(36), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(69), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(153), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [894] = 6,
    ACTIONS(75), 1,
      sym_comment_icon,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(159), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(54), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(68), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(157), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [919] = 8,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(115), 1,
      sym_grandchild_project_icon,
    ACTIONS(117), 1,
      sym_comment_icon,
    ACTIONS(163), 1,
      anon_sym_AT,
    ACTIONS(161), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(59), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(75), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(90), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [948] = 8,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(115), 1,
      sym_grandchild_project_icon,
    ACTIONS(117), 1,
      sym_comment_icon,
    ACTIONS(163), 1,
      anon_sym_AT,
    ACTIONS(161), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(40), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(59), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(90), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [977] = 6,
    ACTIONS(75), 1,
      sym_comment_icon,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(155), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(54), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(69), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(153), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1002] = 8,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(115), 1,
      sym_grandchild_project_icon,
    ACTIONS(117), 1,
      sym_comment_icon,
    ACTIONS(167), 1,
      anon_sym_AT,
    ACTIONS(165), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(60), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(75), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(92), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [1031] = 8,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(137), 1,
      sym_child_project_icon,
    ACTIONS(139), 1,
      sym_comment_icon,
    ACTIONS(169), 1,
      sym_root_project_icon,
    ACTIONS(171), 1,
      anon_sym_AT,
    STATE(78), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(87), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(96), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [1059] = 6,
    ACTIONS(73), 1,
      sym_leaf_project_icon,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(111), 1,
      anon_sym_AT,
    STATE(71), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(72), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(109), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1083] = 8,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(137), 1,
      sym_child_project_icon,
    ACTIONS(139), 1,
      sym_comment_icon,
    ACTIONS(169), 1,
      sym_root_project_icon,
    ACTIONS(171), 1,
      anon_sym_AT,
    STATE(44), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(78), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(96), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [1111] = 8,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(137), 1,
      sym_child_project_icon,
    ACTIONS(139), 1,
      sym_comment_icon,
    ACTIONS(173), 1,
      sym_root_project_icon,
    ACTIONS(175), 1,
      anon_sym_AT,
    STATE(77), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(87), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(97), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [1139] = 6,
    ACTIONS(73), 1,
      sym_leaf_project_icon,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(123), 1,
      anon_sym_AT,
    STATE(71), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(73), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(121), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1163] = 6,
    ACTIONS(73), 1,
      sym_leaf_project_icon,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(179), 1,
      anon_sym_AT,
    STATE(71), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(79), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(177), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1187] = 7,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 1,
      aux_sym_text_line_token1,
    STATE(14), 1,
      sym_text_line,
    STATE(66), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [1212] = 7,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 1,
      aux_sym_text_line_token1,
    STATE(67), 1,
      sym_text_line,
    STATE(66), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [1237] = 6,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(95), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(193), 1,
      anon_sym_AT,
    STATE(71), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(84), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(191), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [1260] = 7,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 1,
      aux_sym_text_line_token1,
    STATE(25), 1,
      sym_text_line,
    STATE(66), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [1285] = 6,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(95), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(71), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(83), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(143), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [1308] = 7,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 1,
      aux_sym_text_line_token1,
    STATE(29), 1,
      sym_text_line,
    STATE(66), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [1333] = 7,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(203), 1,
      aux_sym_text_line_token1,
    STATE(107), 1,
      sym_text_line,
    STATE(103), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [1358] = 4,
    ACTIONS(209), 1,
      sym_comment_icon,
    STATE(54), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    ACTIONS(207), 3,
      sym_leaf_project_icon,
      sym_section_icon,
      anon_sym_AT,
    ACTIONS(205), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1377] = 7,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 1,
      aux_sym_text_line_token1,
    STATE(10), 1,
      sym_text_line,
    STATE(66), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [1402] = 7,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 1,
      aux_sym_text_line_token1,
    STATE(21), 1,
      sym_text_line,
    STATE(66), 4,
      sym_escaped_left_bracket,
      sym_escaped_right_bracket,
      sym_escaped_left_parenthesis,
      sym_escaped_right_parenthesis,
  [1427] = 6,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(95), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(131), 1,
      anon_sym_AT,
    STATE(71), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(88), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(129), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [1450] = 4,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(155), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(71), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(153), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1468] = 6,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(115), 1,
      sym_grandchild_project_icon,
    ACTIONS(167), 1,
      anon_sym_AT,
    ACTIONS(165), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(71), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(92), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [1490] = 6,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(115), 1,
      sym_grandchild_project_icon,
    ACTIONS(214), 1,
      anon_sym_AT,
    ACTIONS(212), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(71), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(94), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [1512] = 2,
    ACTIONS(83), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
    ACTIONS(216), 5,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
  [1526] = 4,
    ACTIONS(218), 1,
      sym_comment_icon,
    STATE(62), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    ACTIONS(205), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
    ACTIONS(207), 3,
      sym_great_grandchild_project_icon,
      sym_section_icon,
      anon_sym_AT,
  [1544] = 2,
    ACTIONS(103), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
    ACTIONS(221), 5,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
  [1558] = 2,
    ACTIONS(87), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
    ACTIONS(223), 5,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
  [1572] = 2,
    ACTIONS(105), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
    ACTIONS(225), 5,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
  [1586] = 2,
    ACTIONS(107), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
    ACTIONS(227), 5,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_PIPE_GT,
      anon_sym_AT,
  [1600] = 4,
    ACTIONS(79), 1,
      anon_sym_PIPE_GT,
    STATE(89), 1,
      sym_id,
    ACTIONS(231), 3,
      sym_leaf_project_icon,
      sym_section_icon,
      anon_sym_AT,
    ACTIONS(229), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1618] = 4,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(235), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(71), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(233), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1636] = 4,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(159), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(71), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(157), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1654] = 6,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(115), 1,
      sym_grandchild_project_icon,
    ACTIONS(163), 1,
      anon_sym_AT,
    ACTIONS(161), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(71), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(90), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [1676] = 4,
    ACTIONS(241), 1,
      sym_section_icon,
    ACTIONS(239), 2,
      sym_leaf_project_icon,
      anon_sym_AT,
    STATE(71), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(237), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1694] = 4,
    ACTIONS(73), 1,
      sym_leaf_project_icon,
    ACTIONS(179), 1,
      anon_sym_AT,
    STATE(82), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(177), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1711] = 4,
    ACTIONS(73), 1,
      sym_leaf_project_icon,
    ACTIONS(111), 1,
      anon_sym_AT,
    STATE(82), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(109), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1728] = 2,
    ACTIONS(244), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
    ACTIONS(246), 4,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_AT,
  [1741] = 4,
    ACTIONS(248), 1,
      sym_comment_icon,
    ACTIONS(205), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(75), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    ACTIONS(207), 3,
      sym_grandchild_project_icon,
      sym_section_icon,
      anon_sym_AT,
  [1758] = 4,
    ACTIONS(73), 1,
      sym_leaf_project_icon,
    ACTIONS(123), 1,
      anon_sym_AT,
    STATE(82), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(121), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1775] = 6,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(137), 1,
      sym_child_project_icon,
    ACTIONS(251), 1,
      sym_root_project_icon,
    ACTIONS(253), 1,
      anon_sym_AT,
    STATE(71), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(99), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [1796] = 6,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(137), 1,
      sym_child_project_icon,
    ACTIONS(173), 1,
      sym_root_project_icon,
    ACTIONS(175), 1,
      anon_sym_AT,
    STATE(71), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(97), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [1817] = 4,
    ACTIONS(73), 1,
      sym_leaf_project_icon,
    ACTIONS(257), 1,
      anon_sym_AT,
    STATE(82), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(255), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1834] = 2,
    ACTIONS(259), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
    ACTIONS(261), 4,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
      anon_sym_AT,
  [1847] = 6,
    ACTIONS(77), 1,
      sym_section_icon,
    ACTIONS(137), 1,
      sym_child_project_icon,
    ACTIONS(169), 1,
      sym_root_project_icon,
    ACTIONS(171), 1,
      anon_sym_AT,
    STATE(71), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(96), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [1868] = 4,
    ACTIONS(265), 1,
      sym_leaf_project_icon,
    ACTIONS(268), 1,
      anon_sym_AT,
    STATE(82), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(263), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1885] = 4,
    ACTIONS(95), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(193), 1,
      anon_sym_AT,
    STATE(85), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(191), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [1901] = 4,
    ACTIONS(95), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(272), 1,
      anon_sym_AT,
    STATE(85), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(270), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [1917] = 4,
    ACTIONS(276), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(279), 1,
      anon_sym_AT,
    STATE(85), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(274), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [1933] = 4,
    ACTIONS(95), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(131), 1,
      anon_sym_AT,
    STATE(85), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(129), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [1949] = 4,
    ACTIONS(205), 1,
      sym_root_project_icon,
    ACTIONS(281), 1,
      sym_comment_icon,
    STATE(87), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    ACTIONS(207), 3,
      sym_child_project_icon,
      sym_section_icon,
      anon_sym_AT,
  [1965] = 4,
    ACTIONS(95), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(85), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(143), 3,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
  [1981] = 2,
    ACTIONS(286), 3,
      sym_leaf_project_icon,
      sym_section_icon,
      anon_sym_AT,
    ACTIONS(284), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [1993] = 4,
    ACTIONS(115), 1,
      sym_grandchild_project_icon,
    ACTIONS(167), 1,
      anon_sym_AT,
    ACTIONS(165), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(93), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [2008] = 4,
    ACTIONS(115), 1,
      sym_grandchild_project_icon,
    ACTIONS(163), 1,
      anon_sym_AT,
    ACTIONS(161), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(93), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [2023] = 4,
    ACTIONS(115), 1,
      sym_grandchild_project_icon,
    ACTIONS(214), 1,
      anon_sym_AT,
    ACTIONS(212), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(93), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [2038] = 4,
    ACTIONS(290), 1,
      sym_grandchild_project_icon,
    ACTIONS(293), 1,
      anon_sym_AT,
    ACTIONS(288), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(93), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [2053] = 4,
    ACTIONS(115), 1,
      sym_grandchild_project_icon,
    ACTIONS(297), 1,
      anon_sym_AT,
    ACTIONS(295), 2,
      sym_root_project_icon,
      sym_child_project_icon,
    STATE(93), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [2068] = 4,
    ACTIONS(137), 1,
      sym_child_project_icon,
    ACTIONS(169), 1,
      sym_root_project_icon,
    ACTIONS(171), 1,
      anon_sym_AT,
    STATE(98), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [2082] = 4,
    ACTIONS(137), 1,
      sym_child_project_icon,
    ACTIONS(173), 1,
      sym_root_project_icon,
    ACTIONS(175), 1,
      anon_sym_AT,
    STATE(98), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [2096] = 4,
    ACTIONS(137), 1,
      sym_child_project_icon,
    ACTIONS(251), 1,
      sym_root_project_icon,
    ACTIONS(253), 1,
      anon_sym_AT,
    STATE(98), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [2110] = 4,
    ACTIONS(299), 1,
      sym_root_project_icon,
    ACTIONS(301), 1,
      sym_child_project_icon,
    ACTIONS(304), 1,
      anon_sym_AT,
    STATE(98), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [2124] = 4,
    ACTIONS(137), 1,
      sym_child_project_icon,
    ACTIONS(306), 1,
      sym_root_project_icon,
    ACTIONS(308), 1,
      anon_sym_AT,
    STATE(98), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [2138] = 4,
    ACTIONS(3), 1,
      sym_root_project_icon,
    ACTIONS(310), 1,
      anon_sym_AT,
    STATE(110), 1,
      sym_sync_token,
    STATE(101), 2,
      sym_root_project,
      aux_sym_source_file_repeat1,
  [2152] = 3,
    ACTIONS(312), 1,
      sym_root_project_icon,
    ACTIONS(315), 1,
      anon_sym_AT,
    STATE(101), 2,
      sym_root_project,
      aux_sym_source_file_repeat1,
  [2163] = 1,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
  [2167] = 1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
  [2171] = 1,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
  [2175] = 1,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
  [2179] = 1,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [2183] = 1,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
  [2187] = 1,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
  [2191] = 1,
    ACTIONS(321), 1,
      sym_id_number,
  [2195] = 1,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
  [2199] = 1,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
  [2203] = 1,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
  [2207] = 1,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
  [2211] = 1,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
  [2215] = 1,
    ACTIONS(333), 1,
      sym_url,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 44,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 127,
  [SMALL_STATE(9)] = 166,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 241,
  [SMALL_STATE(12)] = 262,
  [SMALL_STATE(13)] = 283,
  [SMALL_STATE(14)] = 301,
  [SMALL_STATE(15)] = 337,
  [SMALL_STATE(16)] = 355,
  [SMALL_STATE(17)] = 373,
  [SMALL_STATE(18)] = 391,
  [SMALL_STATE(19)] = 409,
  [SMALL_STATE(20)] = 429,
  [SMALL_STATE(21)] = 460,
  [SMALL_STATE(22)] = 495,
  [SMALL_STATE(23)] = 526,
  [SMALL_STATE(24)] = 545,
  [SMALL_STATE(25)] = 576,
  [SMALL_STATE(26)] = 607,
  [SMALL_STATE(27)] = 637,
  [SMALL_STATE(28)] = 667,
  [SMALL_STATE(29)] = 697,
  [SMALL_STATE(30)] = 731,
  [SMALL_STATE(31)] = 761,
  [SMALL_STATE(32)] = 779,
  [SMALL_STATE(33)] = 809,
  [SMALL_STATE(34)] = 839,
  [SMALL_STATE(35)] = 869,
  [SMALL_STATE(36)] = 894,
  [SMALL_STATE(37)] = 919,
  [SMALL_STATE(38)] = 948,
  [SMALL_STATE(39)] = 977,
  [SMALL_STATE(40)] = 1002,
  [SMALL_STATE(41)] = 1031,
  [SMALL_STATE(42)] = 1059,
  [SMALL_STATE(43)] = 1083,
  [SMALL_STATE(44)] = 1111,
  [SMALL_STATE(45)] = 1139,
  [SMALL_STATE(46)] = 1163,
  [SMALL_STATE(47)] = 1187,
  [SMALL_STATE(48)] = 1212,
  [SMALL_STATE(49)] = 1237,
  [SMALL_STATE(50)] = 1260,
  [SMALL_STATE(51)] = 1285,
  [SMALL_STATE(52)] = 1308,
  [SMALL_STATE(53)] = 1333,
  [SMALL_STATE(54)] = 1358,
  [SMALL_STATE(55)] = 1377,
  [SMALL_STATE(56)] = 1402,
  [SMALL_STATE(57)] = 1427,
  [SMALL_STATE(58)] = 1450,
  [SMALL_STATE(59)] = 1468,
  [SMALL_STATE(60)] = 1490,
  [SMALL_STATE(61)] = 1512,
  [SMALL_STATE(62)] = 1526,
  [SMALL_STATE(63)] = 1544,
  [SMALL_STATE(64)] = 1558,
  [SMALL_STATE(65)] = 1572,
  [SMALL_STATE(66)] = 1586,
  [SMALL_STATE(67)] = 1600,
  [SMALL_STATE(68)] = 1618,
  [SMALL_STATE(69)] = 1636,
  [SMALL_STATE(70)] = 1654,
  [SMALL_STATE(71)] = 1676,
  [SMALL_STATE(72)] = 1694,
  [SMALL_STATE(73)] = 1711,
  [SMALL_STATE(74)] = 1728,
  [SMALL_STATE(75)] = 1741,
  [SMALL_STATE(76)] = 1758,
  [SMALL_STATE(77)] = 1775,
  [SMALL_STATE(78)] = 1796,
  [SMALL_STATE(79)] = 1817,
  [SMALL_STATE(80)] = 1834,
  [SMALL_STATE(81)] = 1847,
  [SMALL_STATE(82)] = 1868,
  [SMALL_STATE(83)] = 1885,
  [SMALL_STATE(84)] = 1901,
  [SMALL_STATE(85)] = 1917,
  [SMALL_STATE(86)] = 1933,
  [SMALL_STATE(87)] = 1949,
  [SMALL_STATE(88)] = 1965,
  [SMALL_STATE(89)] = 1981,
  [SMALL_STATE(90)] = 1993,
  [SMALL_STATE(91)] = 2008,
  [SMALL_STATE(92)] = 2023,
  [SMALL_STATE(93)] = 2038,
  [SMALL_STATE(94)] = 2053,
  [SMALL_STATE(95)] = 2068,
  [SMALL_STATE(96)] = 2082,
  [SMALL_STATE(97)] = 2096,
  [SMALL_STATE(98)] = 2110,
  [SMALL_STATE(99)] = 2124,
  [SMALL_STATE(100)] = 2138,
  [SMALL_STATE(101)] = 2152,
  [SMALL_STATE(102)] = 2163,
  [SMALL_STATE(103)] = 2167,
  [SMALL_STATE(104)] = 2171,
  [SMALL_STATE(105)] = 2175,
  [SMALL_STATE(106)] = 2179,
  [SMALL_STATE(107)] = 2183,
  [SMALL_STATE(108)] = 2187,
  [SMALL_STATE(109)] = 2191,
  [SMALL_STATE(110)] = 2195,
  [SMALL_STATE(111)] = 2199,
  [SMALL_STATE(112)] = 2203,
  [SMALL_STATE(113)] = 2207,
  [SMALL_STATE(114)] = 2211,
  [SMALL_STATE(115)] = 2215,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(11),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(16),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(12),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(17),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(18),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(19),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(8),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(23),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(9),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(31),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_project, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_left_bracket, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_left_parenthesis, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_url, 6),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_project, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_url, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_right_bracket, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_right_parenthesis, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_project, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_project, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_project, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leaf_project, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_project, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_project, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_project, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leaf_project, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leaf_project, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_project, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_project, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_project, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_project, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_project, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_project, 5),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 5),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_project_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_project_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat1, 2), SHIFT_REPEAT(33),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_project, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_left_bracket, 1),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat1, 2), SHIFT_REPEAT(34),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_right_bracket, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_left_parenthesis, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_right_parenthesis, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leaf_project, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 5),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_project_repeat2, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_project_repeat2, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat2, 2), SHIFT_REPEAT(48),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat1, 2), SHIFT_REPEAT(32),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_project, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 5),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_project, 6),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 6),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2), SHIFT_REPEAT(50),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_project, 6),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 6),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grandchild_project_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grandchild_project_repeat1, 2), SHIFT_REPEAT(55),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grandchild_project_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat1, 2), SHIFT_REPEAT(28),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_child_project_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_child_project_repeat1, 2), SHIFT_REPEAT(47),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_child_project_repeat1, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_project, 6),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 6),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_project_repeat3, 2),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat3, 2), SHIFT_REPEAT(56),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_project_repeat3, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_project, 6),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 6),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sync_token, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [331] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
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
