#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_POUND = 1,
  anon_sym_POUND_POUND = 2,
  anon_sym_POUND_POUND_POUND = 3,
  anon_sym_POUND_POUND_POUND_POUND = 4,
  anon_sym_POUND_POUND_POUND_POUND_POUND = 5,
  anon_sym_PLUS = 6,
  anon_sym_SLASH = 7,
  sym_text = 8,
  sym_source_file = 9,
  sym_root_project = 10,
  sym_child_project = 11,
  sym_grandchild_project = 12,
  sym_great_grandchild_project = 13,
  sym_leaf_project = 14,
  sym_comment = 15,
  sym_section = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_root_project_repeat1 = 18,
  aux_sym_root_project_repeat2 = 19,
  aux_sym_root_project_repeat3 = 20,
  aux_sym_child_project_repeat1 = 21,
  aux_sym_grandchild_project_repeat1 = 22,
  aux_sym_great_grandchild_project_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "# ",
  [anon_sym_POUND_POUND] = "## ",
  [anon_sym_POUND_POUND_POUND] = "### ",
  [anon_sym_POUND_POUND_POUND_POUND] = "#### ",
  [anon_sym_POUND_POUND_POUND_POUND_POUND] = "##### ",
  [anon_sym_PLUS] = "+ ",
  [anon_sym_SLASH] = "/ ",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym_root_project] = "root_project",
  [sym_child_project] = "child_project",
  [sym_grandchild_project] = "grandchild_project",
  [sym_great_grandchild_project] = "great_grandchild_project",
  [sym_leaf_project] = "leaf_project",
  [sym_comment] = "comment",
  [sym_section] = "section",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_root_project_repeat1] = "root_project_repeat1",
  [aux_sym_root_project_repeat2] = "root_project_repeat2",
  [aux_sym_root_project_repeat3] = "root_project_repeat3",
  [aux_sym_child_project_repeat1] = "child_project_repeat1",
  [aux_sym_grandchild_project_repeat1] = "grandchild_project_repeat1",
  [aux_sym_great_grandchild_project_repeat1] = "great_grandchild_project_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [anon_sym_POUND_POUND_POUND] = anon_sym_POUND_POUND_POUND,
  [anon_sym_POUND_POUND_POUND_POUND] = anon_sym_POUND_POUND_POUND_POUND,
  [anon_sym_POUND_POUND_POUND_POUND_POUND] = anon_sym_POUND_POUND_POUND_POUND_POUND,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym_root_project] = sym_root_project,
  [sym_child_project] = sym_child_project,
  [sym_grandchild_project] = sym_grandchild_project,
  [sym_great_grandchild_project] = sym_great_grandchild_project,
  [sym_leaf_project] = sym_leaf_project,
  [sym_comment] = sym_comment,
  [sym_section] = sym_section,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_root_project_repeat1] = aux_sym_root_project_repeat1,
  [aux_sym_root_project_repeat2] = aux_sym_root_project_repeat2,
  [aux_sym_root_project_repeat3] = aux_sym_root_project_repeat3,
  [aux_sym_child_project_repeat1] = aux_sym_child_project_repeat1,
  [aux_sym_grandchild_project_repeat1] = aux_sym_grandchild_project_repeat1,
  [aux_sym_great_grandchild_project_repeat1] = aux_sym_great_grandchild_project_repeat1,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
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
      if (eof) ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(2);
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '#') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '#') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '#') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '#') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(8)
      if (sym_text_character_set_1(lookahead)) ADVANCE(18);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND_POUND);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(17);
      if (sym_text_character_set_1(lookahead)) ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_text);
      if (sym_text_character_set_2(lookahead)) ADVANCE(18);
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
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(51),
    [sym_root_project] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [2] = {
    [sym_leaf_project] = STATE(27),
    [sym_comment] = STATE(3),
    [sym_section] = STATE(11),
    [aux_sym_root_project_repeat1] = STATE(3),
    [aux_sym_root_project_repeat2] = STATE(11),
    [aux_sym_great_grandchild_project_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_POUND_POUND] = ACTIONS(7),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(7),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(7),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(13),
  },
  [3] = {
    [sym_leaf_project] = STATE(26),
    [sym_comment] = STATE(16),
    [sym_section] = STATE(12),
    [aux_sym_root_project_repeat1] = STATE(16),
    [aux_sym_root_project_repeat2] = STATE(12),
    [aux_sym_great_grandchild_project_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(15),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(15),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(13),
  },
  [4] = {
    [sym_great_grandchild_project] = STATE(31),
    [sym_comment] = STATE(5),
    [sym_section] = STATE(15),
    [aux_sym_root_project_repeat1] = STATE(5),
    [aux_sym_root_project_repeat2] = STATE(15),
    [aux_sym_grandchild_project_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND_POUND] = ACTIONS(17),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(17),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(13),
  },
  [5] = {
    [sym_great_grandchild_project] = STATE(32),
    [sym_comment] = STATE(16),
    [sym_section] = STATE(14),
    [aux_sym_root_project_repeat1] = STATE(16),
    [aux_sym_root_project_repeat2] = STATE(14),
    [aux_sym_grandchild_project_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(21),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(21),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(25), 1,
      anon_sym_POUND_POUND_POUND,
    STATE(16), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(19), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(37), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
  [27] = 5,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    STATE(17), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(18), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
  [50] = 7,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(25), 1,
      anon_sym_POUND_POUND_POUND,
    STATE(6), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(20), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(35), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
  [77] = 5,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    STATE(7), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(21), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
  [100] = 7,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_POUND_POUND,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    STATE(16), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(23), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(39), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [126] = 5,
    ACTIONS(9), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    STATE(17), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(26), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(15), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
  [148] = 5,
    ACTIONS(9), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    STATE(17), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(24), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
  [170] = 7,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_POUND_POUND,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    STATE(10), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    STATE(28), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(40), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [196] = 5,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(19), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    STATE(17), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(33), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
  [217] = 5,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(19), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    STATE(17), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(32), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
  [238] = 3,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    STATE(16), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
      anon_sym_SLASH,
  [255] = 3,
    ACTIONS(50), 1,
      anon_sym_SLASH,
    STATE(17), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    ACTIONS(48), 7,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
      anon_sym_PLUS,
  [272] = 3,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    STATE(16), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
  [288] = 5,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(25), 1,
      anon_sym_POUND_POUND_POUND,
    STATE(17), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(34), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
  [308] = 5,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(25), 1,
      anon_sym_POUND_POUND_POUND,
    STATE(17), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(37), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
  [328] = 3,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    STATE(16), 2,
      sym_comment,
      aux_sym_root_project_repeat1,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
  [344] = 1,
    ACTIONS(57), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
      anon_sym_PLUS,
      anon_sym_SLASH,
  [355] = 5,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_POUND_POUND,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    STATE(17), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(41), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [374] = 3,
    ACTIONS(9), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    STATE(25), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
  [389] = 3,
    ACTIONS(65), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    STATE(25), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
  [404] = 3,
    ACTIONS(9), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    STATE(25), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
  [419] = 3,
    ACTIONS(9), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    STATE(25), 2,
      sym_leaf_project,
      aux_sym_great_grandchild_project_repeat1,
    ACTIONS(15), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
  [434] = 5,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_POUND_POUND,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    STATE(17), 2,
      sym_section,
      aux_sym_root_project_repeat2,
    STATE(39), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [453] = 1,
    ACTIONS(68), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
      anon_sym_PLUS,
      anon_sym_SLASH,
  [464] = 3,
    ACTIONS(72), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    STATE(30), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
  [478] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    STATE(30), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
  [492] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    STATE(30), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
  [506] = 3,
    ACTIONS(19), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    STATE(30), 2,
      sym_great_grandchild_project,
      aux_sym_grandchild_project_repeat1,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
  [520] = 3,
    ACTIONS(25), 1,
      anon_sym_POUND_POUND_POUND,
    STATE(36), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
  [533] = 3,
    ACTIONS(25), 1,
      anon_sym_POUND_POUND_POUND,
    STATE(36), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
  [546] = 3,
    ACTIONS(81), 1,
      anon_sym_POUND_POUND_POUND,
    STATE(36), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
  [559] = 3,
    ACTIONS(25), 1,
      anon_sym_POUND_POUND_POUND,
    STATE(36), 2,
      sym_grandchild_project,
      aux_sym_child_project_repeat1,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
  [572] = 3,
    ACTIONS(86), 1,
      anon_sym_POUND_POUND,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    STATE(38), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [584] = 3,
    ACTIONS(35), 1,
      anon_sym_POUND_POUND,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    STATE(38), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [596] = 3,
    ACTIONS(35), 1,
      anon_sym_POUND_POUND,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    STATE(38), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [608] = 3,
    ACTIONS(35), 1,
      anon_sym_POUND_POUND,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    STATE(38), 2,
      sym_child_project,
      aux_sym_root_project_repeat3,
  [620] = 3,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      anon_sym_POUND,
    STATE(42), 2,
      sym_root_project,
      aux_sym_source_file_repeat1,
  [631] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(42), 2,
      sym_root_project,
      aux_sym_source_file_repeat1,
  [642] = 1,
    ACTIONS(98), 1,
      sym_text,
  [646] = 1,
    ACTIONS(100), 1,
      sym_text,
  [650] = 1,
    ACTIONS(102), 1,
      sym_text,
  [654] = 1,
    ACTIONS(104), 1,
      sym_text,
  [658] = 1,
    ACTIONS(106), 1,
      sym_text,
  [662] = 1,
    ACTIONS(108), 1,
      sym_text,
  [666] = 1,
    ACTIONS(110), 1,
      sym_text,
  [670] = 1,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 27,
  [SMALL_STATE(8)] = 50,
  [SMALL_STATE(9)] = 77,
  [SMALL_STATE(10)] = 100,
  [SMALL_STATE(11)] = 126,
  [SMALL_STATE(12)] = 148,
  [SMALL_STATE(13)] = 170,
  [SMALL_STATE(14)] = 196,
  [SMALL_STATE(15)] = 217,
  [SMALL_STATE(16)] = 238,
  [SMALL_STATE(17)] = 255,
  [SMALL_STATE(18)] = 272,
  [SMALL_STATE(19)] = 288,
  [SMALL_STATE(20)] = 308,
  [SMALL_STATE(21)] = 328,
  [SMALL_STATE(22)] = 344,
  [SMALL_STATE(23)] = 355,
  [SMALL_STATE(24)] = 374,
  [SMALL_STATE(25)] = 389,
  [SMALL_STATE(26)] = 404,
  [SMALL_STATE(27)] = 419,
  [SMALL_STATE(28)] = 434,
  [SMALL_STATE(29)] = 453,
  [SMALL_STATE(30)] = 464,
  [SMALL_STATE(31)] = 478,
  [SMALL_STATE(32)] = 492,
  [SMALL_STATE(33)] = 506,
  [SMALL_STATE(34)] = 520,
  [SMALL_STATE(35)] = 533,
  [SMALL_STATE(36)] = 546,
  [SMALL_STATE(37)] = 559,
  [SMALL_STATE(38)] = 572,
  [SMALL_STATE(39)] = 584,
  [SMALL_STATE(40)] = 596,
  [SMALL_STATE(41)] = 608,
  [SMALL_STATE(42)] = 620,
  [SMALL_STATE(43)] = 631,
  [SMALL_STATE(44)] = 642,
  [SMALL_STATE(45)] = 646,
  [SMALL_STATE(46)] = 650,
  [SMALL_STATE(47)] = 654,
  [SMALL_STATE(48)] = 658,
  [SMALL_STATE(49)] = 662,
  [SMALL_STATE(50)] = 666,
  [SMALL_STATE(51)] = 670,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_project_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat1, 2), SHIFT_REPEAT(48),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_project_repeat2, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat2, 2), SHIFT_REPEAT(47),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf_project, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_great_grandchild_project, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_great_grandchild_project_repeat1, 2), SHIFT_REPEAT(46),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grandchild_project_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grandchild_project_repeat1, 2), SHIFT_REPEAT(44),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grandchild_project, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_project, 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_child_project_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_child_project_repeat1, 2), SHIFT_REPEAT(49),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_project_repeat3, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_project_repeat3, 2), SHIFT_REPEAT(45),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_project, 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [112] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
