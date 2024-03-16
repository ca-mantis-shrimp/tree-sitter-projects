#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_POUND = 1,
  anon_sym_POUND_POUND = 2,
  anon_sym_POUND_POUND_POUND = 3,
  anon_sym_POUND_POUND_POUND_POUND = 4,
  anon_sym_POUND_POUND_POUND_POUND_POUND = 5,
  anon_sym_PLUS_PLUS = 6,
  anon_sym_PLUS_PLUS_PLUS = 7,
  anon_sym_PLUS_PLUS_PLUS_PLUS = 8,
  anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS = 9,
  anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS_PLUS = 10,
  sym_text = 11,
  sym_collapsed = 12,
  sym_not_collapsed = 13,
  sym_no_children = 14,
  sym_source_file = 15,
  sym_root_project = 16,
  sym_child_project = 17,
  sym_grandchild_project = 18,
  sym_great_grandchild_project = 19,
  sym_leaf_project = 20,
  sym_project_children = 21,
  sym_project_grandchildren = 22,
  sym_project_great_grandchildren = 23,
  sym_leaf_children = 24,
  sym_root_comment = 25,
  sym_child_comment = 26,
  sym_grandchild_comment = 27,
  sym_great_grandchild_comment = 28,
  sym_leaf_comment = 29,
  sym_collapsed_icon = 30,
  aux_sym_source_file_repeat1 = 31,
  aux_sym_root_project_repeat1 = 32,
  aux_sym_child_project_repeat1 = 33,
  aux_sym_grandchild_project_repeat1 = 34,
  aux_sym_great_grandchild_project_repeat1 = 35,
  aux_sym_leaf_project_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_POUND_POUND_POUND] = "###",
  [anon_sym_POUND_POUND_POUND_POUND] = "####",
  [anon_sym_POUND_POUND_POUND_POUND_POUND] = "#####",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [anon_sym_PLUS_PLUS_PLUS_PLUS] = "++++",
  [anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS] = "+++++",
  [anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS_PLUS] = "++++++",
  [sym_text] = "text",
  [sym_collapsed] = "collapsed",
  [sym_not_collapsed] = "not_collapsed",
  [sym_no_children] = "no_children",
  [sym_source_file] = "source_file",
  [sym_root_project] = "root_project",
  [sym_child_project] = "child_project",
  [sym_grandchild_project] = "grandchild_project",
  [sym_great_grandchild_project] = "great_grandchild_project",
  [sym_leaf_project] = "leaf_project",
  [sym_project_children] = "project_children",
  [sym_project_grandchildren] = "project_grandchildren",
  [sym_project_great_grandchildren] = "project_great_grandchildren",
  [sym_leaf_children] = "leaf_children",
  [sym_root_comment] = "root_comment",
  [sym_child_comment] = "child_comment",
  [sym_grandchild_comment] = "grandchild_comment",
  [sym_great_grandchild_comment] = "great_grandchild_comment",
  [sym_leaf_comment] = "leaf_comment",
  [sym_collapsed_icon] = "collapsed_icon",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_root_project_repeat1] = "root_project_repeat1",
  [aux_sym_child_project_repeat1] = "child_project_repeat1",
  [aux_sym_grandchild_project_repeat1] = "grandchild_project_repeat1",
  [aux_sym_great_grandchild_project_repeat1] = "great_grandchild_project_repeat1",
  [aux_sym_leaf_project_repeat1] = "leaf_project_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [anon_sym_POUND_POUND_POUND] = anon_sym_POUND_POUND_POUND,
  [anon_sym_POUND_POUND_POUND_POUND] = anon_sym_POUND_POUND_POUND_POUND,
  [anon_sym_POUND_POUND_POUND_POUND_POUND] = anon_sym_POUND_POUND_POUND_POUND_POUND,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [anon_sym_PLUS_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS_PLUS,
  [anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS,
  [anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS_PLUS,
  [sym_text] = sym_text,
  [sym_collapsed] = sym_collapsed,
  [sym_not_collapsed] = sym_not_collapsed,
  [sym_no_children] = sym_no_children,
  [sym_source_file] = sym_source_file,
  [sym_root_project] = sym_root_project,
  [sym_child_project] = sym_child_project,
  [sym_grandchild_project] = sym_grandchild_project,
  [sym_great_grandchild_project] = sym_great_grandchild_project,
  [sym_leaf_project] = sym_leaf_project,
  [sym_project_children] = sym_project_children,
  [sym_project_grandchildren] = sym_project_grandchildren,
  [sym_project_great_grandchildren] = sym_project_great_grandchildren,
  [sym_leaf_children] = sym_leaf_children,
  [sym_root_comment] = sym_root_comment,
  [sym_child_comment] = sym_child_comment,
  [sym_grandchild_comment] = sym_grandchild_comment,
  [sym_great_grandchild_comment] = sym_great_grandchild_comment,
  [sym_leaf_comment] = sym_leaf_comment,
  [sym_collapsed_icon] = sym_collapsed_icon,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_root_project_repeat1] = aux_sym_root_project_repeat1,
  [aux_sym_child_project_repeat1] = aux_sym_child_project_repeat1,
  [aux_sym_grandchild_project_repeat1] = aux_sym_grandchild_project_repeat1,
  [aux_sym_great_grandchild_project_repeat1] = aux_sym_great_grandchild_project_repeat1,
  [aux_sym_leaf_project_repeat1] = aux_sym_leaf_project_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_collapsed] = {
    .visible = true,
    .named = true,
  },
  [sym_not_collapsed] = {
    .visible = true,
    .named = true,
  },
  [sym_no_children] = {
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
  [sym_project_children] = {
    .visible = true,
    .named = true,
  },
  [sym_project_grandchildren] = {
    .visible = true,
    .named = true,
  },
  [sym_project_great_grandchildren] = {
    .visible = true,
    .named = true,
  },
  [sym_leaf_children] = {
    .visible = true,
    .named = true,
  },
  [sym_root_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_child_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_grandchild_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_great_grandchild_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_leaf_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_collapsed_icon] = {
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
  [aux_sym_leaf_project_repeat1] = {
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
};

static inline bool sym_text_character_set_1(int32_t c) {
  return (c < 8330
    ? (c < 3199
      ? (c < 1475
        ? (c < 749
          ? (c < 187
            ? (c < 174
              ? (c < 161
                ? (c >= '!' && c <= '~')
                : (c <= 169 || (c >= 171 && c <= 172)))
              : (c <= 177 || (c < 182
                ? c == 180
                : c <= 184)))
            : (c <= 187 || (c < 706
              ? (c < 215
                ? c == 191
                : (c <= 215 || c == 247))
              : (c <= 709 || (c < 741
                ? (c >= 722 && c <= 735)
                : c <= 747)))))
          : (c <= 749 || (c < 1154
            ? (c < 900
              ? (c < 885
                ? (c >= 751 && c <= 767)
                : (c <= 885 || c == 894))
              : (c <= 901 || (c < 1014
                ? c == 903
                : c <= 1014)))
            : (c <= 1154 || (c < 1421
              ? (c < 1417
                ? (c >= 1370 && c <= 1375)
                : c <= 1418)
              : (c <= 1423 || (c < 1472
                ? c == 1470
                : c <= 1472)))))))
        : (c <= 1475 || (c < 2096
          ? (c < 1748
            ? (c < 1563
              ? (c < 1523
                ? c == 1478
                : (c <= 1524 || (c >= 1542 && c <= 1551)))
              : (c <= 1563 || (c < 1642
                ? (c >= 1565 && c <= 1567)
                : c <= 1645)))
            : (c <= 1748 || (c < 1792
              ? (c < 1769
                ? c == 1758
                : (c <= 1769 || (c >= 1789 && c <= 1790)))
              : (c <= 1805 || (c < 2046
                ? (c >= 2038 && c <= 2041)
                : c <= 2047)))))
          : (c <= 2110 || (c < 2557
            ? (c < 2416
              ? (c < 2184
                ? c == 2142
                : (c <= 2184 || (c >= 2404 && c <= 2405)))
              : (c <= 2416 || (c < 2554
                ? (c >= 2546 && c <= 2547)
                : c <= 2555)))
            : (c <= 2557 || (c < 2928
              ? (c < 2800
                ? c == 2678
                : c <= 2801)
              : (c <= 2928 || (c < 3191
                ? (c >= 3059 && c <= 3066)
                : c <= 3191)))))))))
      : (c <= 3199 || (c < 5941
        ? (c < 3973
          ? (c < 3674
            ? (c < 3572
              ? (c < 3407
                ? c == 3204
                : (c <= 3407 || c == 3449))
              : (c <= 3572 || (c < 3663
                ? c == 3647
                : c <= 3663)))
            : (c <= 3675 || (c < 3894
              ? (c < 3866
                ? (c >= 3841 && c <= 3863)
                : (c <= 3871 || c == 3892))
              : (c <= 3894 || (c < 3898
                ? c == 3896
                : c <= 3901)))))
          : (c <= 3973 || (c < 4960
            ? (c < 4170
              ? (c < 4039
                ? (c >= 4030 && c <= 4037)
                : (c <= 4044 || (c >= 4046 && c <= 4058)))
              : (c <= 4175 || (c < 4347
                ? (c >= 4254 && c <= 4255)
                : c <= 4347)))
            : (c <= 4968 || (c < 5741
              ? (c < 5120
                ? (c >= 5008 && c <= 5017)
                : c <= 5120)
              : (c <= 5742 || (c < 5867
                ? (c >= 5787 && c <= 5788)
                : c <= 5869)))))))
        : (c <= 5942 || (c < 7227
          ? (c < 6686
            ? (c < 6464
              ? (c < 6104
                ? (c >= 6100 && c <= 6102)
                : (c <= 6107 || (c >= 6144 && c <= 6154)))
              : (c <= 6464 || (c < 6622
                ? (c >= 6468 && c <= 6469)
                : c <= 6655)))
            : (c <= 6687 || (c < 7002
              ? (c < 6824
                ? (c >= 6816 && c <= 6822)
                : c <= 6829)
              : (c <= 7018 || (c < 7164
                ? (c >= 7028 && c <= 7038)
                : c <= 7167)))))
          : (c <= 7231 || (c < 8157
            ? (c < 8125
              ? (c < 7360
                ? (c >= 7294 && c <= 7295)
                : (c <= 7367 || c == 7379))
              : (c <= 8125 || (c < 8141
                ? (c >= 8127 && c <= 8129)
                : c <= 8143)))
            : (c <= 8159 || (c < 8208
              ? (c < 8189
                ? (c >= 8173 && c <= 8175)
                : c <= 8190)
              : (c <= 8231 || (c < 8314
                ? (c >= 8240 && c <= 8286)
                : c <= 8318)))))))))))
    : (c <= 8334 || (c < 42509
      ? (c < 11632
        ? (c < 8522
          ? (c < 8478
            ? (c < 8456
              ? (c < 8448
                ? (c >= 8352 && c <= 8384)
                : (c <= 8449 || (c >= 8451 && c <= 8454)))
              : (c <= 8457 || (c < 8470
                ? c == 8468
                : c <= 8472)))
            : (c <= 8483 || (c < 8494
              ? (c < 8487
                ? c == 8485
                : (c <= 8487 || c == 8489))
              : (c <= 8494 || (c < 8512
                ? (c >= 8506 && c <= 8507)
                : c <= 8516)))))
          : (c <= 8525 || (c < 10132
            ? (c < 9280
              ? (c < 8586
                ? c == 8527
                : (c <= 8587 || (c >= 8592 && c <= 9254)))
              : (c <= 9290 || (c < 9472
                ? (c >= 9372 && c <= 9449)
                : c <= 10101)))
            : (c <= 11123 || (c < 11493
              ? (c < 11159
                ? (c >= 11126 && c <= 11157)
                : c <= 11263)
              : (c <= 11498 || (c < 11518
                ? (c >= 11513 && c <= 11516)
                : c <= 11519)))))))
        : (c <= 11632 || (c < 12539
          ? (c < 12289
            ? (c < 11931
              ? (c < 11824
                ? (c >= 11776 && c <= 11822)
                : (c <= 11869 || (c >= 11904 && c <= 11929)))
              : (c <= 12019 || (c < 12272
                ? (c >= 12032 && c <= 12245)
                : c <= 12283)))
            : (c <= 12292 || (c < 12349
              ? (c < 12336
                ? (c >= 12296 && c <= 12320)
                : (c <= 12336 || (c >= 12342 && c <= 12343)))
              : (c <= 12351 || (c < 12448
                ? (c >= 12443 && c <= 12444)
                : c <= 12448)))))
          : (c <= 12539 || (c < 12896
            ? (c < 12800
              ? (c < 12694
                ? (c >= 12688 && c <= 12689)
                : (c <= 12703 || (c >= 12736 && c <= 12771)))
              : (c <= 12830 || (c < 12880
                ? (c >= 12842 && c <= 12871)
                : c <= 12880)))
            : (c <= 12927 || (c < 19904
              ? (c < 12992
                ? (c >= 12938 && c <= 12976)
                : c <= 13311)
              : (c <= 19967 || (c < 42238
                ? (c >= 42128 && c <= 42182)
                : c <= 42239)))))))))
      : (c <= 42511 || (c < 64975
        ? (c < 43359
          ? (c < 43048
            ? (c < 42752
              ? (c < 42622
                ? c == 42611
                : (c <= 42622 || (c >= 42738 && c <= 42743)))
              : (c <= 42774 || (c < 42889
                ? (c >= 42784 && c <= 42785)
                : c <= 42890)))
            : (c <= 43051 || (c < 43256
              ? (c < 43124
                ? (c >= 43062 && c <= 43065)
                : (c <= 43127 || (c >= 43214 && c <= 43215)))
              : (c <= 43258 || (c < 43310
                ? c == 43260
                : c <= 43311)))))
          : (c <= 43359 || (c < 43867
            ? (c < 43639
              ? (c < 43486
                ? (c >= 43457 && c <= 43469)
                : (c <= 43487 || (c >= 43612 && c <= 43615)))
              : (c <= 43641 || (c < 43760
                ? (c >= 43742 && c <= 43743)
                : c <= 43761)))
            : (c <= 43867 || (c < 64297
              ? (c < 44011
                ? (c >= 43882 && c <= 43883)
                : c <= 44011)
              : (c <= 64297 || (c < 64830
                ? (c >= 64434 && c <= 64450)
                : c <= 64847)))))))
        : (c <= 64975 || (c < 65792
          ? (c < 65306
            ? (c < 65108
              ? (c < 65040
                ? (c >= 65020 && c <= 65023)
                : (c <= 65049 || (c >= 65072 && c <= 65106)))
              : (c <= 65126 || (c < 65281
                ? (c >= 65128 && c <= 65131)
                : c <= 65295)))
            : (c <= 65312 || (c < 65504
              ? (c < 65371
                ? (c >= 65339 && c <= 65344)
                : c <= 65381)
              : (c <= 65510 || (c < 65532
                ? (c >= 65512 && c <= 65518)
                : c <= 65533)))))
          : (c <= 65794 || (c < 66463
            ? (c < 65936
              ? (c < 65913
                ? (c >= 65847 && c <= 65855)
                : (c <= 65929 || (c >= 65932 && c <= 65934)))
              : (c <= 65948 || (c < 66000
                ? c == 65952
                : c <= 66044)))
            : (c <= 66463 || (c < 67671
              ? (c < 66927
                ? c == 66512
                : c <= 66927)
              : (c <= 67671 || (c < 67871
                ? (c >= 67703 && c <= 67704)
                : c <= 67871)))))))))))));
}

static inline bool sym_text_character_set_2(int32_t c) {
  return (c < 8330
    ? (c < 3199
      ? (c < 1475
        ? (c < 749
          ? (c < 187
            ? (c < 174
              ? (c < 161
                ? (c >= ' ' && c <= '~')
                : (c <= 169 || (c >= 171 && c <= 172)))
              : (c <= 177 || (c < 182
                ? c == 180
                : c <= 184)))
            : (c <= 187 || (c < 706
              ? (c < 215
                ? c == 191
                : (c <= 215 || c == 247))
              : (c <= 709 || (c < 741
                ? (c >= 722 && c <= 735)
                : c <= 747)))))
          : (c <= 749 || (c < 1154
            ? (c < 900
              ? (c < 885
                ? (c >= 751 && c <= 767)
                : (c <= 885 || c == 894))
              : (c <= 901 || (c < 1014
                ? c == 903
                : c <= 1014)))
            : (c <= 1154 || (c < 1421
              ? (c < 1417
                ? (c >= 1370 && c <= 1375)
                : c <= 1418)
              : (c <= 1423 || (c < 1472
                ? c == 1470
                : c <= 1472)))))))
        : (c <= 1475 || (c < 2096
          ? (c < 1748
            ? (c < 1563
              ? (c < 1523
                ? c == 1478
                : (c <= 1524 || (c >= 1542 && c <= 1551)))
              : (c <= 1563 || (c < 1642
                ? (c >= 1565 && c <= 1567)
                : c <= 1645)))
            : (c <= 1748 || (c < 1792
              ? (c < 1769
                ? c == 1758
                : (c <= 1769 || (c >= 1789 && c <= 1790)))
              : (c <= 1805 || (c < 2046
                ? (c >= 2038 && c <= 2041)
                : c <= 2047)))))
          : (c <= 2110 || (c < 2557
            ? (c < 2416
              ? (c < 2184
                ? c == 2142
                : (c <= 2184 || (c >= 2404 && c <= 2405)))
              : (c <= 2416 || (c < 2554
                ? (c >= 2546 && c <= 2547)
                : c <= 2555)))
            : (c <= 2557 || (c < 2928
              ? (c < 2800
                ? c == 2678
                : c <= 2801)
              : (c <= 2928 || (c < 3191
                ? (c >= 3059 && c <= 3066)
                : c <= 3191)))))))))
      : (c <= 3199 || (c < 5941
        ? (c < 3973
          ? (c < 3674
            ? (c < 3572
              ? (c < 3407
                ? c == 3204
                : (c <= 3407 || c == 3449))
              : (c <= 3572 || (c < 3663
                ? c == 3647
                : c <= 3663)))
            : (c <= 3675 || (c < 3894
              ? (c < 3866
                ? (c >= 3841 && c <= 3863)
                : (c <= 3871 || c == 3892))
              : (c <= 3894 || (c < 3898
                ? c == 3896
                : c <= 3901)))))
          : (c <= 3973 || (c < 4960
            ? (c < 4170
              ? (c < 4039
                ? (c >= 4030 && c <= 4037)
                : (c <= 4044 || (c >= 4046 && c <= 4058)))
              : (c <= 4175 || (c < 4347
                ? (c >= 4254 && c <= 4255)
                : c <= 4347)))
            : (c <= 4968 || (c < 5741
              ? (c < 5120
                ? (c >= 5008 && c <= 5017)
                : c <= 5120)
              : (c <= 5742 || (c < 5867
                ? (c >= 5787 && c <= 5788)
                : c <= 5869)))))))
        : (c <= 5942 || (c < 7227
          ? (c < 6686
            ? (c < 6464
              ? (c < 6104
                ? (c >= 6100 && c <= 6102)
                : (c <= 6107 || (c >= 6144 && c <= 6154)))
              : (c <= 6464 || (c < 6622
                ? (c >= 6468 && c <= 6469)
                : c <= 6655)))
            : (c <= 6687 || (c < 7002
              ? (c < 6824
                ? (c >= 6816 && c <= 6822)
                : c <= 6829)
              : (c <= 7018 || (c < 7164
                ? (c >= 7028 && c <= 7038)
                : c <= 7167)))))
          : (c <= 7231 || (c < 8157
            ? (c < 8125
              ? (c < 7360
                ? (c >= 7294 && c <= 7295)
                : (c <= 7367 || c == 7379))
              : (c <= 8125 || (c < 8141
                ? (c >= 8127 && c <= 8129)
                : c <= 8143)))
            : (c <= 8159 || (c < 8208
              ? (c < 8189
                ? (c >= 8173 && c <= 8175)
                : c <= 8190)
              : (c <= 8231 || (c < 8314
                ? (c >= 8240 && c <= 8286)
                : c <= 8318)))))))))))
    : (c <= 8334 || (c < 42509
      ? (c < 11632
        ? (c < 8522
          ? (c < 8478
            ? (c < 8456
              ? (c < 8448
                ? (c >= 8352 && c <= 8384)
                : (c <= 8449 || (c >= 8451 && c <= 8454)))
              : (c <= 8457 || (c < 8470
                ? c == 8468
                : c <= 8472)))
            : (c <= 8483 || (c < 8494
              ? (c < 8487
                ? c == 8485
                : (c <= 8487 || c == 8489))
              : (c <= 8494 || (c < 8512
                ? (c >= 8506 && c <= 8507)
                : c <= 8516)))))
          : (c <= 8525 || (c < 10132
            ? (c < 9280
              ? (c < 8586
                ? c == 8527
                : (c <= 8587 || (c >= 8592 && c <= 9254)))
              : (c <= 9290 || (c < 9472
                ? (c >= 9372 && c <= 9449)
                : c <= 10101)))
            : (c <= 11123 || (c < 11493
              ? (c < 11159
                ? (c >= 11126 && c <= 11157)
                : c <= 11263)
              : (c <= 11498 || (c < 11518
                ? (c >= 11513 && c <= 11516)
                : c <= 11519)))))))
        : (c <= 11632 || (c < 12539
          ? (c < 12289
            ? (c < 11931
              ? (c < 11824
                ? (c >= 11776 && c <= 11822)
                : (c <= 11869 || (c >= 11904 && c <= 11929)))
              : (c <= 12019 || (c < 12272
                ? (c >= 12032 && c <= 12245)
                : c <= 12283)))
            : (c <= 12292 || (c < 12349
              ? (c < 12336
                ? (c >= 12296 && c <= 12320)
                : (c <= 12336 || (c >= 12342 && c <= 12343)))
              : (c <= 12351 || (c < 12448
                ? (c >= 12443 && c <= 12444)
                : c <= 12448)))))
          : (c <= 12539 || (c < 12896
            ? (c < 12800
              ? (c < 12694
                ? (c >= 12688 && c <= 12689)
                : (c <= 12703 || (c >= 12736 && c <= 12771)))
              : (c <= 12830 || (c < 12880
                ? (c >= 12842 && c <= 12871)
                : c <= 12880)))
            : (c <= 12927 || (c < 19904
              ? (c < 12992
                ? (c >= 12938 && c <= 12976)
                : c <= 13311)
              : (c <= 19967 || (c < 42238
                ? (c >= 42128 && c <= 42182)
                : c <= 42239)))))))))
      : (c <= 42511 || (c < 64975
        ? (c < 43359
          ? (c < 43048
            ? (c < 42752
              ? (c < 42622
                ? c == 42611
                : (c <= 42622 || (c >= 42738 && c <= 42743)))
              : (c <= 42774 || (c < 42889
                ? (c >= 42784 && c <= 42785)
                : c <= 42890)))
            : (c <= 43051 || (c < 43256
              ? (c < 43124
                ? (c >= 43062 && c <= 43065)
                : (c <= 43127 || (c >= 43214 && c <= 43215)))
              : (c <= 43258 || (c < 43310
                ? c == 43260
                : c <= 43311)))))
          : (c <= 43359 || (c < 43867
            ? (c < 43639
              ? (c < 43486
                ? (c >= 43457 && c <= 43469)
                : (c <= 43487 || (c >= 43612 && c <= 43615)))
              : (c <= 43641 || (c < 43760
                ? (c >= 43742 && c <= 43743)
                : c <= 43761)))
            : (c <= 43867 || (c < 64297
              ? (c < 44011
                ? (c >= 43882 && c <= 43883)
                : c <= 44011)
              : (c <= 64297 || (c < 64830
                ? (c >= 64434 && c <= 64450)
                : c <= 64847)))))))
        : (c <= 64975 || (c < 65792
          ? (c < 65306
            ? (c < 65108
              ? (c < 65040
                ? (c >= 65020 && c <= 65023)
                : (c <= 65049 || (c >= 65072 && c <= 65106)))
              : (c <= 65126 || (c < 65281
                ? (c >= 65128 && c <= 65131)
                : c <= 65295)))
            : (c <= 65312 || (c < 65504
              ? (c < 65371
                ? (c >= 65339 && c <= 65344)
                : c <= 65381)
              : (c <= 65510 || (c < 65532
                ? (c >= 65512 && c <= 65518)
                : c <= 65533)))))
          : (c <= 65794 || (c < 66463
            ? (c < 65936
              ? (c < 65913
                ? (c >= 65847 && c <= 65855)
                : (c <= 65929 || (c >= 65932 && c <= 65934)))
              : (c <= 65948 || (c < 66000
                ? c == 65952
                : c <= 66044)))
            : (c <= 66463 || (c < 67671
              ? (c < 66927
                ? c == 66512
                : c <= 66927)
              : (c <= 67671 || (c < 67871
                ? (c >= 67703 && c <= 67704)
                : c <= 67871)))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '>') ADVANCE(1);
      if (lookahead == 'v') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'v') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3)
      if (sym_text_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4)
      if (sym_text_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(35);
      END_STATE();
    case 10:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '+') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '+') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '+') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '+') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(22);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead == '#') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead == '#') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      if (lookahead == '#') ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      if (lookahead == '#') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND);
      if (lookahead == '#') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND_POUND);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS_PLUS);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS_PLUS);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(51);
      if (sym_text_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(53);
      if (sym_text_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(48);
      if (sym_text_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_text);
      if (sym_text_character_set_2(lookahead)) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_collapsed);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_collapsed);
      if (sym_text_character_set_2(lookahead)) ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_not_collapsed);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_not_collapsed);
      if (sym_text_character_set_2(lookahead)) ADVANCE(49);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_no_children);
      if (lookahead == ' ') ADVANCE(54);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS_PLUS] = ACTIONS(1),
    [sym_collapsed] = ACTIONS(1),
    [sym_not_collapsed] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym_root_project] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(13), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS,
    STATE(4), 2,
      sym_leaf_children,
      aux_sym_great_grandchild_project_repeat1,
    STATE(19), 2,
      sym_leaf_project,
      sym_great_grandchild_comment,
    ACTIONS(9), 7,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
  [27] = 6,
    ACTIONS(11), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(13), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_leaf_children,
      aux_sym_great_grandchild_project_repeat1,
    STATE(19), 2,
      sym_leaf_project,
      sym_great_grandchild_comment,
    ACTIONS(17), 7,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
  [54] = 6,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(26), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS,
    STATE(4), 2,
      sym_leaf_children,
      aux_sym_great_grandchild_project_repeat1,
    STATE(19), 2,
      sym_leaf_project,
      sym_great_grandchild_comment,
    ACTIONS(21), 7,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
  [81] = 6,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(13), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS,
    STATE(3), 2,
      sym_leaf_children,
      aux_sym_great_grandchild_project_repeat1,
    STATE(19), 2,
      sym_leaf_project,
      sym_great_grandchild_comment,
    ACTIONS(9), 7,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
  [108] = 6,
    ACTIONS(11), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(13), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(2), 2,
      sym_leaf_children,
      aux_sym_great_grandchild_project_repeat1,
    STATE(19), 2,
      sym_leaf_project,
      sym_great_grandchild_comment,
    ACTIONS(31), 7,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
  [135] = 4,
    ACTIONS(37), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    STATE(10), 2,
      sym_leaf_comment,
      aux_sym_leaf_project_repeat1,
    ACTIONS(35), 8,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS,
  [157] = 4,
    ACTIONS(37), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    STATE(11), 2,
      sym_leaf_comment,
      aux_sym_leaf_project_repeat1,
    ACTIONS(35), 8,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS,
  [179] = 4,
    ACTIONS(37), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    STATE(8), 2,
      sym_leaf_comment,
      aux_sym_leaf_project_repeat1,
    ACTIONS(41), 8,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS,
  [201] = 4,
    ACTIONS(37), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    STATE(11), 2,
      sym_leaf_comment,
      aux_sym_leaf_project_repeat1,
    ACTIONS(45), 8,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS,
  [223] = 4,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    STATE(11), 2,
      sym_leaf_comment,
      aux_sym_leaf_project_repeat1,
    ACTIONS(49), 8,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS,
  [245] = 6,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(60), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    STATE(14), 2,
      sym_project_great_grandchildren,
      aux_sym_grandchild_project_repeat1,
    STATE(30), 2,
      sym_great_grandchild_project,
      sym_grandchild_comment,
    ACTIONS(56), 5,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
  [270] = 6,
    ACTIONS(58), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(60), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(16), 2,
      sym_project_great_grandchildren,
      aux_sym_grandchild_project_repeat1,
    STATE(30), 2,
      sym_great_grandchild_project,
      sym_grandchild_comment,
    ACTIONS(64), 5,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
  [295] = 6,
    ACTIONS(58), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(60), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_project_great_grandchildren,
      aux_sym_grandchild_project_repeat1,
    STATE(30), 2,
      sym_great_grandchild_project,
      sym_grandchild_comment,
    ACTIONS(64), 5,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
  [320] = 6,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    STATE(15), 2,
      sym_project_great_grandchildren,
      aux_sym_grandchild_project_repeat1,
    STATE(30), 2,
      sym_great_grandchild_project,
      sym_grandchild_comment,
    ACTIONS(68), 5,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
  [345] = 6,
    ACTIONS(58), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(60), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_project_great_grandchildren,
      aux_sym_grandchild_project_repeat1,
    STATE(30), 2,
      sym_great_grandchild_project,
      sym_grandchild_comment,
    ACTIONS(78), 5,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
  [370] = 2,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(82), 8,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS,
  [386] = 6,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(90), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(22), 2,
      sym_project_grandchildren,
      aux_sym_child_project_repeat1,
    STATE(33), 2,
      sym_grandchild_project,
      sym_child_comment,
    ACTIONS(86), 3,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_PLUS_PLUS,
  [409] = 2,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(94), 7,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
  [424] = 6,
    ACTIONS(88), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(90), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_project_grandchildren,
      aux_sym_child_project_repeat1,
    STATE(33), 2,
      sym_grandchild_project,
      sym_child_comment,
    ACTIONS(98), 3,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_PLUS_PLUS,
  [447] = 6,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(90), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(23), 2,
      sym_project_grandchildren,
      aux_sym_child_project_repeat1,
    STATE(33), 2,
      sym_grandchild_project,
      sym_child_comment,
    ACTIONS(86), 3,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_PLUS_PLUS,
  [470] = 6,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(107), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(22), 2,
      sym_project_grandchildren,
      aux_sym_child_project_repeat1,
    STATE(33), 2,
      sym_grandchild_project,
      sym_child_comment,
    ACTIONS(102), 3,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_PLUS_PLUS,
  [493] = 6,
    ACTIONS(88), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(90), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_project_grandchildren,
      aux_sym_child_project_repeat1,
    STATE(33), 2,
      sym_grandchild_project,
      sym_child_comment,
    ACTIONS(112), 3,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_PLUS_PLUS,
  [516] = 2,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(116), 7,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
  [531] = 6,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      anon_sym_POUND,
    ACTIONS(122), 1,
      anon_sym_POUND_POUND,
    ACTIONS(124), 1,
      anon_sym_PLUS_PLUS,
    STATE(31), 2,
      sym_project_children,
      aux_sym_root_project_repeat1,
    STATE(40), 2,
      sym_child_project,
      sym_root_comment,
  [552] = 6,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      anon_sym_POUND,
    ACTIONS(130), 1,
      anon_sym_POUND_POUND,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    STATE(26), 2,
      sym_project_children,
      aux_sym_root_project_repeat1,
    STATE(40), 2,
      sym_child_project,
      sym_root_comment,
  [573] = 6,
    ACTIONS(122), 1,
      anon_sym_POUND_POUND,
    ACTIONS(124), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      anon_sym_POUND,
    STATE(26), 2,
      sym_project_children,
      aux_sym_root_project_repeat1,
    STATE(40), 2,
      sym_child_project,
      sym_root_comment,
  [594] = 2,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(142), 5,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
  [607] = 6,
    ACTIONS(122), 1,
      anon_sym_POUND_POUND,
    ACTIONS(124), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(27), 2,
      sym_project_children,
      aux_sym_root_project_repeat1,
    STATE(40), 2,
      sym_child_project,
      sym_root_comment,
  [628] = 2,
    ACTIONS(148), 3,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(150), 5,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PLUS_PLUS,
  [641] = 6,
    ACTIONS(122), 1,
      anon_sym_POUND_POUND,
    ACTIONS(124), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(26), 2,
      sym_project_children,
      aux_sym_root_project_repeat1,
    STATE(40), 2,
      sym_child_project,
      sym_root_comment,
  [662] = 2,
    ACTIONS(152), 3,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(154), 3,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_PLUS_PLUS,
  [673] = 2,
    ACTIONS(156), 3,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(158), 3,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_PLUS_PLUS,
  [684] = 3,
    ACTIONS(160), 1,
      sym_text,
    STATE(48), 1,
      sym_collapsed_icon,
    ACTIONS(162), 3,
      sym_collapsed,
      sym_not_collapsed,
      sym_no_children,
  [696] = 3,
    ACTIONS(164), 1,
      sym_text,
    STATE(52), 1,
      sym_collapsed_icon,
    ACTIONS(162), 3,
      sym_collapsed,
      sym_not_collapsed,
      sym_no_children,
  [708] = 3,
    ACTIONS(166), 1,
      sym_text,
    STATE(49), 1,
      sym_collapsed_icon,
    ACTIONS(162), 3,
      sym_collapsed,
      sym_not_collapsed,
      sym_no_children,
  [720] = 3,
    ACTIONS(168), 1,
      sym_text,
    STATE(44), 1,
      sym_collapsed_icon,
    ACTIONS(162), 3,
      sym_collapsed,
      sym_not_collapsed,
      sym_no_children,
  [732] = 3,
    ACTIONS(170), 1,
      sym_text,
    STATE(43), 1,
      sym_collapsed_icon,
    ACTIONS(162), 3,
      sym_collapsed,
      sym_not_collapsed,
      sym_no_children,
  [744] = 2,
    ACTIONS(174), 1,
      anon_sym_POUND,
    ACTIONS(172), 3,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND,
      anon_sym_PLUS_PLUS,
  [753] = 2,
    ACTIONS(178), 1,
      anon_sym_POUND,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND,
      anon_sym_PLUS_PLUS,
  [762] = 3,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      anon_sym_POUND,
    STATE(41), 2,
      sym_root_project,
      aux_sym_source_file_repeat1,
  [773] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    STATE(41), 2,
      sym_root_project,
      aux_sym_source_file_repeat1,
  [784] = 1,
    ACTIONS(187), 1,
      sym_text,
  [788] = 1,
    ACTIONS(189), 1,
      sym_text,
  [792] = 1,
    ACTIONS(191), 1,
      sym_text,
  [796] = 1,
    ACTIONS(193), 1,
      sym_text,
  [800] = 1,
    ACTIONS(195), 1,
      sym_text,
  [804] = 1,
    ACTIONS(197), 1,
      sym_text,
  [808] = 1,
    ACTIONS(199), 1,
      sym_text,
  [812] = 1,
    ACTIONS(201), 1,
      sym_text,
  [816] = 1,
    ACTIONS(203), 1,
      sym_text,
  [820] = 1,
    ACTIONS(205), 1,
      sym_text,
  [824] = 1,
    ACTIONS(207), 1,
      sym_text,
  [828] = 1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 157,
  [SMALL_STATE(9)] = 179,
  [SMALL_STATE(10)] = 201,
  [SMALL_STATE(11)] = 223,
  [SMALL_STATE(12)] = 245,
  [SMALL_STATE(13)] = 270,
  [SMALL_STATE(14)] = 295,
  [SMALL_STATE(15)] = 320,
  [SMALL_STATE(16)] = 345,
  [SMALL_STATE(17)] = 370,
  [SMALL_STATE(18)] = 386,
  [SMALL_STATE(19)] = 409,
  [SMALL_STATE(20)] = 424,
  [SMALL_STATE(21)] = 447,
  [SMALL_STATE(22)] = 470,
  [SMALL_STATE(23)] = 493,
  [SMALL_STATE(24)] = 516,
  [SMALL_STATE(25)] = 531,
  [SMALL_STATE(26)] = 552,
  [SMALL_STATE(27)] = 573,
  [SMALL_STATE(28)] = 594,
  [SMALL_STATE(29)] = 607,
  [SMALL_STATE(30)] = 628,
  [SMALL_STATE(31)] = 641,
  [SMALL_STATE(32)] = 662,
  [SMALL_STATE(33)] = 673,
  [SMALL_STATE(34)] = 684,
  [SMALL_STATE(35)] = 696,
  [SMALL_STATE(36)] = 708,
  [SMALL_STATE(37)] = 720,
  [SMALL_STATE(38)] = 732,
  [SMALL_STATE(39)] = 744,
  [SMALL_STATE(40)] = 753,
  [SMALL_STATE(41)] = 762,
  [SMALL_STATE(42)] = 773,
  [SMALL_STATE(43)] = 784,
  [SMALL_STATE(44)] = 788,
  [SMALL_STATE(45)] = 792,
  [SMALL_STATE(46)] = 796,
  [SMALL_STATE(47)] = 800,
  [SMALL_STATE(48)] = 804,
  [SMALL_STATE(49)] = 808,
  [SMALL_STATE(50)] = 812,
  [SMALL_STATE(51)] = 816,
  [SMALL_STATE(52)] = 820,
  [SMALL_STATE(53)] = 824,
  [SMALL_STATE(54)] = 828,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 3),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_project, 3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 4),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_project, 4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2), SHIFT_REPEAT(36),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2), SHIFT_REPEAT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_project, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leaf_project, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leaf_project, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leaf_project, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_leaf_project_repeat1, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_leaf_project_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_leaf_project_repeat1, 2), SHIFT_REPEAT(51),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_project, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_project, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grandchild_project_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grandchild_project_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grandchild_project_repeat1, 2), SHIFT_REPEAT(38),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grandchild_project_repeat1, 2), SHIFT_REPEAT(45),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_project, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_comment, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leaf_comment, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_project, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_children, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leaf_children, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_project, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_child_project_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_child_project_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_child_project_repeat1, 2), SHIFT_REPEAT(37),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_child_project_repeat1, 2), SHIFT_REPEAT(47),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_project, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_comment, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_great_grandchild_comment, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_project, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_project_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_project_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat1, 2), SHIFT_REPEAT(34),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat1, 2), SHIFT_REPEAT(50),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_project, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_comment, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grandchild_comment, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_project, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_great_grandchildren, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_great_grandchildren, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_comment, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_comment, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_grandchildren, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_grandchildren, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_comment, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_root_comment, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_children, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_children, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collapsed_icon, 1),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
