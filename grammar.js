module.exports = grammar({
  name: 'projects',

  rules: {
    source_file: $ => repeat($.root_project),

    root_project: $ => seq(
      '# ',
      $.text,
      optional(repeat($.comment)),
      optional(repeat($.section)),
      optional(repeat($.child_project))
    ),

    child_project: $ => seq(
      '## ',
      $.text,
      optional(repeat($.comment)),
      optional(repeat($.section)),
      optional(repeat($.grandchild_project))
    ),

    grandchild_project: $ => seq(
      '### ',
      $.text,
      optional(repeat($.comment)),
      optional(repeat($.section)),
      optional(repeat($.great_grandchild_project))
    ),

    great_grandchild_project: $ => seq(
      '#### ',
      $.text,
      optional(repeat($.comment)),
      optional(repeat($.section)),
      optional(repeat($.leaf_project))
    ),

    leaf_project: $ => seq(
      '##### ',
      $.text,
      optional(repeat($.section)),
      optional(repeat($.comment))
    ),

    comment: $ => seq(
      '+ ',
      $.text
    ),

    section: $ => seq(
      '/ ',
      $.text
    ),

    text: $ => /[a-zA-Z0-9_ \p{P}\p{S}]+/,

  }
});
