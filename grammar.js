"use strict";
// TODO(9):     Go through SPECIAL_CARACTERS for `word` and `bracket_word` and ensure they are correct.
// TODO(16):    The "function/while/begin --help" should be a command
// TODO(17):    {"str"} or {} or test{nonvar} should be a concatenation / word
const SPECIAL_CHARACTERS = [
    '$',
    '*',
    '~',
    '#',
    '(', ')',
    '{', '}',
    '\\[', '\\]',
    '<', '>',
    '"', "'",
    '^',
    '&',
    '|',
    ';',
    '\\',
    '\\s',
];
function charMatch(characterArray, negate) {
    const regexSpecialCharacters = [
        '$', '\\', '*', '~', '#', '(', ')', '{', '}', '|', '^', '&',
    ];
    const escaped = characterArray.map((c) => regexSpecialCharacters.includes(c) ? '\\' + c : c);
    return new RegExp(`[${negate ? '^' : ''}${escaped.join('')}]+`);
}
function noneOf(characterArray) {
    return charMatch(characterArray, true);
}
module.exports = grammar({
    name: 'fish',
    externals: $ => [
        $._concat,
        $._brace_concat,
        $._concat_list,
    ],
    inline: $ => [
        $._terminator,
        $._statement,
        $._base_expression,
    ],
    extras: $ => [
        $.comment,
        /\\?\s/,
    ],
    rules: {
        program: $ => repeat(seq(optional($._statement), $._terminator)),
        conditional_execution: $ => choice(prec.right(-1, seq(choice('and', 'or'), $._statement)), prec.right(-1, seq($._statement, choice('||', '&&'), $._statement))),
        // Prec: higher than pipe
        redirected_statement: $ => prec(1, seq($._statement, choice($.file_redirect, $.stream_redirect))),
        stream_redirect: () => token(/\d*(>>|>|<)&[012-]/),
        direction: () => token(/(\d*|&)(>>?\??|<)/),
        file_redirect: $ => seq(field('operator', $.direction), field('destination', $._expression)),
        pipe: $ => prec.left(seq($._statement, '|', $._statement)),
        _terminator: () => choice(';', '&', '\n', '\r', '\r\n'),
        _statement: $ => choice($.conditional_execution, $.pipe, $.command, $.redirected_statement, $.begin_statement, $.if_statement, $.while_statement, $.for_statement, $.switch_statement, $.function_definition, $.break, $.continue, $.return, $.negated_statement, $.test_command),
        _terminated_statement: $ => seq($._statement, $._terminator),
        _terminated_opt_statement: $ => seq(optional($._statement), $._terminator),
        negated_statement: $ => prec.left(-1, seq(choice('!', 'not'), $._statement)),
        /* Added in 3.4.0. Syntax `$(cmd)` */
        command_substitution_dollar: $ => seq('$', '(', repeat(seq(optional($._statement), $._terminator)), optional($._statement), ')'),
        command_substitution_fish: $ => seq('(', repeat(seq(optional($._statement), $._terminator)), optional($._statement), ')'),
        command_substitution: $ => choice($.command_substitution_dollar, $.command_substitution_fish),
        function_definition: $ => seq('function', field('name', $._expression), optional(repeat1(field('option', $._expression))), $._terminator, optional(repeat1($._terminated_statement)), 'end'),
        integer: () => /(-|\+)?\d+/,
        float: () => /(-|\+)?\d+\.\d+/,
        return: $ => prec.left(seq('return', optional($._expression))),
        switch_statement: $ => seq('switch', field('value', $._expression), $._terminator, optional(repeat1($.case_clause)), 'end'),
        case_clause: $ => seq('case', repeat1($._expression), $._terminator, optional(repeat1($._terminated_statement))),
        break: () => 'break',
        continue: () => 'continue',
        for_statement: $ => seq('for', field('variable', $.variable_name), 'in', repeat1(field('value', $._expression)), $._terminator, optional(repeat1($._terminated_statement)), 'end'),
        while_statement: $ => seq('while', field('condition', $._terminated_statement), optional(repeat1($._terminated_opt_statement)), 'end'),
        if_statement: $ => seq('if', field('condition', $._terminated_statement), optional(repeat1($._terminated_opt_statement)), repeat($.else_if_clause), optional($.else_clause), 'end'),
        else_if_clause: $ => seq(seq('else', 'if'), field('condition', $._terminated_statement), optional(repeat1($._terminated_opt_statement))),
        else_clause: $ => seq('else', $._terminator, optional(repeat1($._terminated_opt_statement))),
        begin_statement: $ => seq('begin', optional(repeat1($._terminated_opt_statement)), 'end'),
        test_command: $ => choice(seq(alias(/\[\s/, '['), choice(']', repeat1(field('argument', $._test_expression)))), seq('test', repeat(field('argument', $._test_expression)))),
        _test_expression: $ => choice($._expression, '=', '!='),
        comment: () => token(prec(-11, /#.*/)),
        variable_name: () => /[a-zA-Z0-9_]+/,
        variable_expansion: $ => prec.left(seq('$', choice($.variable_name, $.command_substitution_dollar, $.variable_expansion), optional(repeat1(seq($._concat_list, $.list_element_access))))),
        index: $ => choice($.integer, $.single_quote_string, $.variable_expansion, $.double_quote_string, $.command_substitution),
        range: $ => prec.right(2, seq(optional($.index), '..', optional($.index))),
        list_element_access: $ => seq('[', optional(repeat1(choice($.index, $.range))), ']'),
        brace_expansion: $ => prec.right(seq('{', choice($.variable_expansion, seq(optional(','), optional($._brace_expression), repeat1(prec.right(seq(',', optional($._brace_expression)))))), '}')),
        double_quote_string: $ => seq('"', repeat(choice(token.immediate(/[^\$\\"]+/), $.variable_expansion, $.escape_sequence, $.command_substitution_dollar)), '"'),
        single_quote_string: $ => seq('\'', repeat(choice(token.immediate(/[^'\\]+/), $.escape_sequence)), '\''),
        escape_sequence: () => token(seq('\\', choice(/[^xXuUc]/, /[0-7]{1,3}/, /x[0-9a-fA-F]{0,2}/, /X[0-9a-fA-F]{0,2}/, /u[0-9a-fA-F]{0,4}/, /U[0-9a-fA-F]{0,8}/, /c[a-zA-Z]?/))),
        command: $ => seq(field('name', $._expression), repeat(field('argument', $._expression))),
        _special_character: () => token(choice('[', ']')),
        concatenation: $ => seq(choice($._base_expression, $._special_character), repeat1(seq($._concat, choice($._base_expression, $._special_character)))),
        _expression: $ => choice($._base_expression, $.concatenation, alias($._special_character, $.word)),
        _base_expression: $ => choice($.command_substitution, $.single_quote_string, $.double_quote_string, $.variable_expansion, $.word, $.integer, $.float, $.brace_expansion, $.escape_sequence, $.glob, $.home_dir_expansion),
        brace_concatenation: $ => seq(choice($._base_brace_expression, $.brace_expansion), repeat1(seq($._brace_concat, choice($._base_brace_expression, $.brace_expansion)))),
        _brace_expression: $ => choice(alias($.brace_concatenation, $.concatenation), $._base_brace_expression, $.brace_expansion),
        _base_brace_expression: $ => choice($.command_substitution, $.single_quote_string, $.double_quote_string, $.variable_expansion, alias($.brace_word, $.word), $.integer, $.float, $.escape_sequence, $.glob),
        home_dir_expansion: () => '~',
        glob: () => token(repeat1('*')),
        word: () => noneOf(SPECIAL_CHARACTERS),
        brace_word: () => noneOf(['$', '\'', '*', '"', ',', '\\', '{', '}', '(', ')']),
    },
});
