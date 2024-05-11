module.exports = grammar({
  name: 'projects',

  rules: {
    source_file: $ => prec.right(seq(repeat1($.root_project),$.document_end)),

    root_project: $ => prec.right(seq(
      $.id,
      $.root_project_icon,
      $.text_line,
      optional(repeat($.section)),
      optional(repeat($.comment)),
      optional(repeat($.child_project)),
      $.root_project_end
    )),

    child_project: $ => prec.right(seq(
      $.id,
      $.child_project_icon,
      $.text_line,
      optional(repeat($.section)),
      optional(repeat($.comment)),
      optional(repeat($.grandchild_project)),
    )),

    grandchild_project: $ => prec.right(seq(
      $.id,
      $.grandchild_project_icon,
      $.text_line,
      optional(repeat($.section)),
      optional(repeat($.comment)),
      optional(repeat($.great_grandchild_project)),
    )),

    great_grandchild_project: $ => prec.right(seq(
      $.id,
      $.great_grandchild_project_icon,
      $.text_line,
      optional(repeat($.section)),
      optional(repeat($.comment)),
      optional(repeat($.leaf_project)),
    )),

    leaf_project: $ => prec.right(seq(
      $.id,
      $.leaf_project_icon,
      $.text_line,
      optional(repeat($.section)),
      optional(repeat($.comment)),
    )),

    comment: $ => seq(
      $.id,
      $.comment_icon,
      repeat1(choice($.text_line, '\n')),
    ),

    section: $ => seq(
      $.id,
      $.section_icon,
      $.text_line,
    ),
    root_project_icon: $ => '#',
    child_project_icon: $=> '##',
    grandchild_project_icon: $=> '###',
    great_grandchild_project_icon: $=> '####',
    leaf_project_icon: $=> '#####',

    comment_icon: $ => '+',
    section_icon: $ => '&',

    id: $ => seq(
      '|',
      $.id_number,
      '|')
   ,

    id_number: $=> token(/[0-9]+/),

    text_line: $ => token(/[^|&+#\n]+/),
    root_project_end: $ => token('---'),
    document_end: $ => token('***'),
  },
}
);
