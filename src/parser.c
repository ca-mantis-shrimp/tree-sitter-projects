#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  anon_sym_PIPE = 9,
  sym_id_number = 10,
  sym_text_line = 11,
  sym_root_project_end = 12,
  sym_document_end = 13,
  sym_source_file = 14,
  sym_root_project = 15,
  sym_child_project = 16,
  sym_grandchild_project = 17,
  sym_great_grandchild_project = 18,
  sym_leaf_project = 19,
  sym_comment = 20,
  sym_section = 21,
  sym_id = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_root_project_repeat1 = 24,
  aux_sym_root_project_repeat2 = 25,
  aux_sym_root_project_repeat3 = 26,
  aux_sym_child_project_repeat1 = 27,
  aux_sym_grandchild_project_repeat1 = 28,
  aux_sym_great_grandchild_project_repeat1 = 29,
  aux_sym_comment_repeat1 = 30,
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
  [anon_sym_PIPE] = "|",
  [sym_id_number] = "id_number",
  [sym_text_line] = "text_line",
  [sym_root_project_end] = "root_project_end",
  [sym_document_end] = "document_end",
  [sym_source_file] = "source_file",
  [sym_root_project] = "root_project",
  [sym_child_project] = "child_project",
  [sym_grandchild_project] = "grandchild_project",
  [sym_great_grandchild_project] = "great_grandchild_project",
  [sym_leaf_project] = "leaf_project",
  [sym_comment] = "comment",
  [sym_section] = "section",
  [sym_id] = "id",
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
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_id_number] = sym_id_number,
  [sym_text_line] = sym_text_line,
  [sym_root_project_end] = sym_root_project_end,
  [sym_document_end] = sym_document_end,
  [sym_source_file] = sym_source_file,
  [sym_root_project] = sym_root_project,
  [sym_child_project] = sym_child_project,
  [sym_grandchild_project] = sym_grandchild_project,
  [sym_great_grandchild_project] = sym_great_grandchild_project,
  [sym_leaf_project] = sym_leaf_project,
  [sym_comment] = sym_comment,
  [sym_section] = sym_section,
  [sym_id] = sym_id,
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_id_number] = {
    .visible = true,
    .named = true,
  },
  [sym_text_line] = {
    .visible = true,
    .named = true,
  },
  [sym_root_project_end] = {
    .visible = true,
    .named = true,
  },
  [sym_document_end] = {
    .visible = true,
    .named = true,
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
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(35);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '|') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '|') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+') ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '|') ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '|') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '+') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '+') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(4);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '+') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '+') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_root_project_icon);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_root_project_icon);
      if (lookahead == '#') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_child_project_icon);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_child_project_icon);
      if (lookahead == '#') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_grandchild_project_icon);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_grandchild_project_icon);
      if (lookahead == '#') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_great_grandchild_project_icon);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_great_grandchild_project_icon);
      if (lookahead == '#') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_leaf_project_icon);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment_icon);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_section_icon);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_id_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '-') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '|') ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\n') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '|') ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '|') ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '|') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '|') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '|') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_root_project_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_root_project_end);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '|') ADVANCE(44);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_document_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 0},
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
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_id_number] = ACTIONS(1),
    [sym_root_project_end] = ACTIONS(1),
    [sym_document_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym_root_project] = STATE(35),
    [sym_id] = STATE(75),
    [aux_sym_source_file_repeat1] = STATE(35),
    [anon_sym_PIPE] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(5), 1,
      sym_root_project_end,
    STATE(46), 1,
      sym_id,
    STATE(7), 2,
      sym_section,
      aux_sym_root_project_repeat1,
    STATE(15), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
    STATE(32), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [22] = 6,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(7), 1,
      sym_root_project_end,
    STATE(48), 1,
      sym_id,
    STATE(17), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
    STATE(21), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    STATE(23), 2,
      sym_section,
      aux_sym_root_project_repeat1,
  [44] = 6,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(9), 1,
      sym_root_project_end,
    STATE(47), 1,
      sym_id,
    STATE(9), 2,
      sym_section,
      aux_sym_root_project_repeat1,
    STATE(13), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
    STATE(38), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [66] = 6,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      sym_root_project_end,
    STATE(45), 1,
      sym_id,
    STATE(11), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
    STATE(23), 2,
      sym_section,
      aux_sym_root_project_repeat1,
    STATE(37), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
  [88] = 6,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      sym_root_project_end,
    STATE(45), 1,
      sym_id,
    STATE(5), 2,
      sym_section,
      aux_sym_root_project_repeat1,
    STATE(20), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
    STATE(30), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
  [110] = 6,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      sym_root_project_end,
    STATE(46), 1,
      sym_id,
    STATE(19), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
    STATE(23), 2,
      sym_section,
      aux_sym_root_project_repeat1,
    STATE(24), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [132] = 6,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(17), 1,
      sym_root_project_end,
    STATE(48), 1,
      sym_id,
    STATE(3), 2,
      sym_section,
      aux_sym_root_project_repeat1,
    STATE(12), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
    STATE(43), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
  [154] = 6,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(19), 1,
      sym_root_project_end,
    STATE(47), 1,
      sym_id,
    STATE(14), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
    STATE(23), 2,
      sym_section,
      aux_sym_root_project_repeat1,
    STATE(41), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [176] = 2,
    ACTIONS(23), 3,
      sym_leaf_project_icon,
      sym_comment_icon,
      sym_section_icon,
    ACTIONS(21), 4,
      sym_root_project_icon,
      sym_child_project_icon,
      sym_grandchild_project_icon,
      sym_great_grandchild_project_icon,
  [188] = 5,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(25), 1,
      sym_root_project_end,
    STATE(56), 1,
      sym_id,
    STATE(25), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
    STATE(31), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
  [206] = 5,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(7), 1,
      sym_root_project_end,
    STATE(57), 1,
      sym_id,
    STATE(21), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    STATE(25), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
  [224] = 5,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(19), 1,
      sym_root_project_end,
    STATE(52), 1,
      sym_id,
    STATE(25), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
    STATE(41), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [242] = 5,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      sym_root_project_end,
    STATE(52), 1,
      sym_id,
    STATE(25), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
    STATE(44), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [260] = 5,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      sym_root_project_end,
    STATE(58), 1,
      sym_id,
    STATE(24), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
    STATE(25), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
  [278] = 5,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      sym_root_project_end,
    STATE(53), 1,
      sym_id,
    STATE(18), 2,
      sym_section,
      aux_sym_root_project_repeat1,
    STATE(28), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
  [296] = 5,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      sym_root_project_end,
    STATE(57), 1,
      sym_id,
    STATE(25), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
    STATE(36), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
  [314] = 5,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(33), 1,
      sym_root_project_end,
    STATE(53), 1,
      sym_id,
    STATE(23), 2,
      sym_section,
      aux_sym_root_project_repeat1,
    STATE(26), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
  [332] = 5,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(35), 1,
      sym_root_project_end,
    STATE(58), 1,
      sym_id,
    STATE(25), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
    STATE(33), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [350] = 5,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      sym_root_project_end,
    STATE(56), 1,
      sym_id,
    STATE(25), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
    STATE(37), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
  [368] = 4,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      sym_root_project_end,
    STATE(69), 1,
      sym_id,
    STATE(22), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
  [382] = 4,
    ACTIONS(37), 1,
      anon_sym_PIPE,
    ACTIONS(40), 1,
      sym_root_project_end,
    STATE(69), 1,
      sym_id,
    STATE(22), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
  [396] = 4,
    ACTIONS(42), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      sym_root_project_end,
    STATE(62), 1,
      sym_id,
    STATE(23), 2,
      sym_section,
      aux_sym_root_project_repeat1,
  [410] = 4,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(35), 1,
      sym_root_project_end,
    STATE(60), 1,
      sym_id,
    STATE(27), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [424] = 4,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(50), 1,
      sym_root_project_end,
    STATE(61), 1,
      sym_id,
    STATE(25), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
  [438] = 4,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(52), 1,
      sym_root_project_end,
    STATE(61), 1,
      sym_id,
    STATE(25), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
  [452] = 4,
    ACTIONS(54), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      sym_root_project_end,
    STATE(60), 1,
      sym_id,
    STATE(27), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [466] = 4,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(33), 1,
      sym_root_project_end,
    STATE(61), 1,
      sym_id,
    STATE(25), 2,
      sym_comment,
      aux_sym_root_project_repeat2,
  [480] = 3,
    STATE(39), 1,
      aux_sym_comment_repeat1,
    ACTIONS(59), 2,
      anon_sym_LF,
      sym_text_line,
    ACTIONS(61), 2,
      anon_sym_PIPE,
      sym_root_project_end,
  [492] = 4,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      sym_root_project_end,
    STATE(70), 1,
      sym_id,
    STATE(34), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
  [506] = 4,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      sym_root_project_end,
    STATE(70), 1,
      sym_id,
    STATE(34), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
  [520] = 4,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      sym_root_project_end,
    STATE(60), 1,
      sym_id,
    STATE(27), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [534] = 4,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      sym_root_project_end,
    STATE(60), 1,
      sym_id,
    STATE(27), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [548] = 4,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    ACTIONS(70), 1,
      sym_root_project_end,
    STATE(70), 1,
      sym_id,
    STATE(34), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
  [562] = 4,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(72), 1,
      sym_document_end,
    STATE(75), 1,
      sym_id,
    STATE(40), 2,
      sym_root_project,
      aux_sym_source_file_repeat1,
  [576] = 4,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(74), 1,
      sym_root_project_end,
    STATE(69), 1,
      sym_id,
    STATE(22), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
  [590] = 4,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(25), 1,
      sym_root_project_end,
    STATE(70), 1,
      sym_id,
    STATE(34), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
  [604] = 4,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(19), 1,
      sym_root_project_end,
    STATE(73), 1,
      sym_id,
    STATE(42), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [618] = 3,
    STATE(39), 1,
      aux_sym_comment_repeat1,
    ACTIONS(76), 2,
      anon_sym_LF,
      sym_text_line,
    ACTIONS(79), 2,
      anon_sym_PIPE,
      sym_root_project_end,
  [630] = 4,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(84), 1,
      sym_document_end,
    STATE(75), 1,
      sym_id,
    STATE(40), 2,
      sym_root_project,
      aux_sym_source_file_repeat1,
  [644] = 4,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      sym_root_project_end,
    STATE(73), 1,
      sym_id,
    STATE(42), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [658] = 4,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(89), 1,
      sym_root_project_end,
    STATE(73), 1,
      sym_id,
    STATE(42), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [672] = 4,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(7), 1,
      sym_root_project_end,
    STATE(69), 1,
      sym_id,
    STATE(22), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
  [686] = 4,
    ACTIONS(3), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      sym_root_project_end,
    STATE(73), 1,
      sym_id,
    STATE(42), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
  [700] = 3,
    ACTIONS(93), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(95), 1,
      sym_comment_icon,
    ACTIONS(97), 1,
      sym_section_icon,
  [710] = 3,
    ACTIONS(95), 1,
      sym_comment_icon,
    ACTIONS(97), 1,
      sym_section_icon,
    ACTIONS(99), 1,
      sym_child_project_icon,
  [720] = 3,
    ACTIONS(95), 1,
      sym_comment_icon,
    ACTIONS(97), 1,
      sym_section_icon,
    ACTIONS(101), 1,
      sym_grandchild_project_icon,
  [730] = 3,
    ACTIONS(95), 1,
      sym_comment_icon,
    ACTIONS(97), 1,
      sym_section_icon,
    ACTIONS(103), 1,
      sym_leaf_project_icon,
  [740] = 2,
    STATE(29), 1,
      aux_sym_comment_repeat1,
    ACTIONS(105), 2,
      anon_sym_LF,
      sym_text_line,
  [748] = 1,
    ACTIONS(107), 2,
      anon_sym_PIPE,
      sym_document_end,
  [753] = 1,
    ACTIONS(109), 2,
      anon_sym_PIPE,
      sym_document_end,
  [758] = 2,
    ACTIONS(95), 1,
      sym_comment_icon,
    ACTIONS(101), 1,
      sym_grandchild_project_icon,
  [765] = 2,
    ACTIONS(95), 1,
      sym_comment_icon,
    ACTIONS(97), 1,
      sym_section_icon,
  [772] = 1,
    ACTIONS(111), 2,
      anon_sym_PIPE,
      sym_document_end,
  [777] = 1,
    ACTIONS(113), 2,
      anon_sym_PIPE,
      sym_document_end,
  [782] = 2,
    ACTIONS(93), 1,
      sym_great_grandchild_project_icon,
    ACTIONS(95), 1,
      sym_comment_icon,
  [789] = 2,
    ACTIONS(95), 1,
      sym_comment_icon,
    ACTIONS(103), 1,
      sym_leaf_project_icon,
  [796] = 2,
    ACTIONS(95), 1,
      sym_comment_icon,
    ACTIONS(99), 1,
      sym_child_project_icon,
  [803] = 1,
    ACTIONS(115), 2,
      anon_sym_PIPE,
      sym_root_project_end,
  [808] = 1,
    ACTIONS(99), 1,
      sym_child_project_icon,
  [812] = 1,
    ACTIONS(95), 1,
      sym_comment_icon,
  [816] = 1,
    ACTIONS(97), 1,
      sym_section_icon,
  [820] = 1,
    ACTIONS(117), 1,
      sym_text_line,
  [824] = 1,
    ACTIONS(119), 1,
      sym_text_line,
  [828] = 1,
    ACTIONS(121), 1,
      sym_text_line,
  [832] = 1,
    ACTIONS(123), 1,
      sym_text_line,
  [836] = 1,
    ACTIONS(125), 1,
      sym_text_line,
  [840] = 1,
    ACTIONS(127), 1,
      sym_id_number,
  [844] = 1,
    ACTIONS(103), 1,
      sym_leaf_project_icon,
  [848] = 1,
    ACTIONS(93), 1,
      sym_great_grandchild_project_icon,
  [852] = 1,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
  [856] = 1,
    ACTIONS(131), 1,
      sym_text_line,
  [860] = 1,
    ACTIONS(101), 1,
      sym_grandchild_project_icon,
  [864] = 1,
    ACTIONS(133), 1,
      anon_sym_PIPE,
  [868] = 1,
    ACTIONS(135), 1,
      sym_root_project_icon,
  [872] = 1,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 176,
  [SMALL_STATE(11)] = 188,
  [SMALL_STATE(12)] = 206,
  [SMALL_STATE(13)] = 224,
  [SMALL_STATE(14)] = 242,
  [SMALL_STATE(15)] = 260,
  [SMALL_STATE(16)] = 278,
  [SMALL_STATE(17)] = 296,
  [SMALL_STATE(18)] = 314,
  [SMALL_STATE(19)] = 332,
  [SMALL_STATE(20)] = 350,
  [SMALL_STATE(21)] = 368,
  [SMALL_STATE(22)] = 382,
  [SMALL_STATE(23)] = 396,
  [SMALL_STATE(24)] = 410,
  [SMALL_STATE(25)] = 424,
  [SMALL_STATE(26)] = 438,
  [SMALL_STATE(27)] = 452,
  [SMALL_STATE(28)] = 466,
  [SMALL_STATE(29)] = 480,
  [SMALL_STATE(30)] = 492,
  [SMALL_STATE(31)] = 506,
  [SMALL_STATE(32)] = 520,
  [SMALL_STATE(33)] = 534,
  [SMALL_STATE(34)] = 548,
  [SMALL_STATE(35)] = 562,
  [SMALL_STATE(36)] = 576,
  [SMALL_STATE(37)] = 590,
  [SMALL_STATE(38)] = 604,
  [SMALL_STATE(39)] = 618,
  [SMALL_STATE(40)] = 630,
  [SMALL_STATE(41)] = 644,
  [SMALL_STATE(42)] = 658,
  [SMALL_STATE(43)] = 672,
  [SMALL_STATE(44)] = 686,
  [SMALL_STATE(45)] = 700,
  [SMALL_STATE(46)] = 710,
  [SMALL_STATE(47)] = 720,
  [SMALL_STATE(48)] = 730,
  [SMALL_STATE(49)] = 740,
  [SMALL_STATE(50)] = 748,
  [SMALL_STATE(51)] = 753,
  [SMALL_STATE(52)] = 758,
  [SMALL_STATE(53)] = 765,
  [SMALL_STATE(54)] = 772,
  [SMALL_STATE(55)] = 777,
  [SMALL_STATE(56)] = 782,
  [SMALL_STATE(57)] = 789,
  [SMALL_STATE(58)] = 796,
  [SMALL_STATE(59)] = 803,
  [SMALL_STATE(60)] = 808,
  [SMALL_STATE(61)] = 812,
  [SMALL_STATE(62)] = 816,
  [SMALL_STATE(63)] = 820,
  [SMALL_STATE(64)] = 824,
  [SMALL_STATE(65)] = 828,
  [SMALL_STATE(66)] = 832,
  [SMALL_STATE(67)] = 836,
  [SMALL_STATE(68)] = 840,
  [SMALL_STATE(69)] = 844,
  [SMALL_STATE(70)] = 848,
  [SMALL_STATE(71)] = 852,
  [SMALL_STATE(72)] = 856,
  [SMALL_STATE(73)] = 860,
  [SMALL_STATE(74)] = 864,
  [SMALL_STATE(75)] = 868,
  [SMALL_STATE(76)] = 872,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 3),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 4),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2), SHIFT_REPEAT(68),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat1, 2), SHIFT_REPEAT(68),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_project_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat2, 2), SHIFT_REPEAT(68),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_project_repeat2, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 5),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat3, 2), SHIFT_REPEAT(68),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_project_repeat3, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 6),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grandchild_project_repeat1, 2), SHIFT_REPEAT(68),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grandchild_project_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 6),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(39),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_child_project_repeat1, 2), SHIFT_REPEAT(68),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_child_project_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 6),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 7),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
