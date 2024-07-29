module.exports = grammar({
  name: 'projects',

  rules: {
    source_file: $ => seq(repeat1($.root_project), $.sync_token),

    root_project: $ => seq(
      $.root_project_icon,
      $.text_line,
      optional($.id),
      repeat($.comment),
      repeat($.section),
      repeat($.child_project),
    ),

    child_project: $ => seq(
      $.child_project_icon,
      $.text_line,
      optional($.id),
      repeat($.comment),
      repeat($.section),
      repeat($.grandchild_project),
    ),

    grandchild_project: $ => seq(
      $.grandchild_project_icon,
      $.text_line,
      optional($.id),
      repeat($.comment),
      repeat($.section),
      repeat($.great_grandchild_project),
    ),

    great_grandchild_project: $ => seq(
      $.great_grandchild_project_icon,
      $.text_line,
      optional($.id),
      repeat($.comment),
      repeat($.section),
      repeat($.leaf_project),
    ),

    leaf_project: $ => seq(
      $.leaf_project_icon,
      $.text_line,
      optional($.id),
      repeat($.comment),
      repeat($.section),
    ),

    comment: $ => seq(
      $.comment_icon,
      repeat1(choice($.text_line, $.markdown_url, '\n')),
      optional($.id),
    ),

    section: $ => seq(
      $.section_icon,
      $.text_line,
      optional($.id),
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

    markdown_url: $ => seq(
            optional(seq('[',
            $.url_description,
            ']')),
            '(',$.url,')'
    ),

    url_description: $ => /[^\[\]()]+/,
    url: $ => /https?:\/\/[^\s\[\]()].[^\s\[\]()]*/,


    id_number: $=> /[0-9]+/,

    text_line: $ => choice(/[^@\\>\|&+\[\]()#\n]+/, $.escaped_left_bracket, $.escaped_right_bracket, $.escaped_left_parenthesis, $.escaped_right_parenthesis, $.escaped_at),

    escaped_left_bracket: $ => '\\[',
    escaped_right_bracket: $ => '\\]',
    escaped_left_parenthesis: $ => '\\(',
    escaped_right_parenthesis: $ => '\\)',
    escaped_at: $ => '\\@',
  },
}
);
