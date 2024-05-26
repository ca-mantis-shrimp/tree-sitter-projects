module.exports = grammar({
  name: 'projects',

  rules: {
    source_file: $ => seq(repeat1($.root_project), $.sync_token),

    root_project: $ => seq(
      $.root_project_icon,
      $.text_line,
      $.id,
      repeat($.section),
      repeat($.comment),
      repeat($.child_project),
    ),

    child_project: $ => seq(
      $.child_project_icon,
      $.text_line,
      $.id,
      repeat($.section),
      repeat($.comment),
      repeat($.grandchild_project),
    ),

    grandchild_project: $ => seq(
      $.grandchild_project_icon,
      $.text_line,
      $.id,
      repeat($.section),
      repeat($.comment),
      repeat($.great_grandchild_project),
    ),

    great_grandchild_project: $ => seq(
      $.great_grandchild_project_icon,
      $.text_line,
      $.id,
      repeat($.section),
      repeat($.comment),
      repeat($.leaf_project),
    ),

    leaf_project: $ => seq(
      $.leaf_project_icon,
      $.text_line,
      $.id,
      repeat($.section),
      repeat($.comment),
    ),

    comment: $ => seq(
      $.comment_icon,
      repeat1(choice($.text_line, '\n')),
      $.id,
    ),

    section: $ => seq(
      $.section_icon,
      $.text_line,
      $.id,
    ),
    root_project_icon: $ => '#',
    child_project_icon: $=> '##',
    grandchild_project_icon: $=> '###',
    great_grandchild_project_icon: $=> '####',
    leaf_project_icon: $=> '#####',

    comment_icon: $ => '+',
    section_icon: $ => '&',

    id: $ => seq(
      '|>',
      $.id_number)
    ,

    sync_token: $ => seq(
      '@',
      $.text_line),

    id_number: $=> token(/[0-9]+/),

    text_line: $ => token(/[^>\|&+#\n]+/),
  },
}
);
