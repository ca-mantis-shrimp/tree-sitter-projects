module.exports = grammar({
  name: 'projects',

  rules: {
    source_file: $ => repeat($.root_project),

    root_project: $ => seq(
      $.root_project_icon,
      $.text,
      optional(repeat($.comment)),
      optional(repeat($.section)),
      optional(repeat($.child_project))
    ),

    child_project: $ => seq(
      $.child_project_icon,
      $.text,
      optional(repeat($.comment)),
      optional(repeat($.section)),
      optional(repeat($.grandchild_project))
    ),

    grandchild_project: $ => seq(
      $.grandchild_project_icon,
      $.text,
      optional(repeat($.comment)),
      optional(repeat($.section)),
      optional(repeat($.great_grandchild_project))
    ),

    great_grandchild_project: $ => seq(
      $.great_grandchild_project_icon,
      $.text,
      optional(repeat($.comment)),
      optional(repeat($.section)),
      optional(repeat($.leaf_project))
    ),

    leaf_project: $ => seq(
      $.leaf_project_icon,
      $.text,
      optional(repeat($.section)),
      optional(repeat($.comment))
    ),

    comment: $ => seq(
      $.comment_icon,
      $.text
    ),

    section: $ => seq(
      $.section_icon,
      $.text
    ),

    text: $ => /[a-zA-Z0-9_ \p{P}\p{S}]+/,

    root_project_icon: $ => '# ',
    child_project_icon: $ => '## ',
    grandchild_project_icon: $ => '### ',
    great_grandchild_project_icon: $ => '#### ',
    leaf_project_icon: $ => '##### ',

    comment_icon: $ => '+ ',
    section_icon: $ => '/ ',
  }

});
