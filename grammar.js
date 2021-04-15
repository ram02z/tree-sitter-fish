// TODO(2):     Implement glob: '*' is still a special character inside bracket expansion.
// TODO(9):     Go through SPECIAL_CARACTERS for `word` and `bracket_word` and ensure they are correct.
// TODO(10):    "test[test]" should be a word
// TODO(11):    "begin & end" should be invalid
// TODO(12):    Background commands cannot be used as conditionals "while echo &; end"

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
    const special = [
        '$', '\\', '*', '~', '#', '(', ')', '{', '}',
        '|', '^', '&',
    ];
    const escaped = characterArray.map((c) => special.includes(c) ? '\\' + c : c);

    const r = new RegExp(`[${negate ? '^' : ''}${escaped.join('')}]+`);
    process.stderr.write('>> charMatch:' + r.toString() + '\n');
    return r;
}

function noneOf(characterArray) {
    return charMatch(characterArray, true);
}

module.exports = grammar({
    name: 'fish',

    externals: $ => [
        $._concat,
        $._bracket_concat,
    ],

    inline: $ => [
        $._terminator,
        $._top_statement,
        $._statement,
    ],

    extras: $ => [
        $.comment,
        /\s/,
    ],

    rules: {
        program: $ => prec.right(-1, optional(
            prec.left(1, repeat1(seq(
                optional($._statement),
                $._terminator,
            ))),
        )),

        _top_statement: $ => choice(
            $._statement,
            $._terminator,
        ),

        conditional_execution: $ => prec.right(-1, seq(
            $._statement,
            choice(
                '||',
                /;+\s*or/,
                '&&',
                /;+\s*and/,
            ),
            $._statement,
        )),

        redirection: $ => prec.left(5, choice(
            seq(
                $._statement,
                /[012]?(>{1,2}|<{1})\&[-012]/,
            ),
            seq(
                $._statement,
                /[012]?((>|<)|>{2}|((>|<){1}\?))/,
                $._expression,
            ),
        )),

        pipe: $ => prec.left(4, seq(
            $._statement,
            '|',
            $._statement,
        )),


        _terminator: $ => choice(
            ';',
            '&',
            '\n',
            '\r',
            '\r\n',
        ),

        _statement: $ => choice(
            $.conditional_execution,
            $.pipe,
            $.command,
            $.redirection,
            $.begin_statement,
            $.if_statement,
            $.while_statement,
            $.for_statement,
            $.switch_statement,
            $.function_definition,
        ),

        _terminated_statement: $ => prec(1, seq(
            $._statement,
            $._terminator,
        )),

        function_definition: $ => seq(
            'function',
            field('name', $._function_name),
            field('option', optional(repeat1($._expression))),
            $._terminator,
            optional(repeat1($._terminated_statement)),
            'end',
        ),

        _function_name: $ => choice(
            $.concatenation,
            choice(
                $.single_quote_string,
                $.double_quote_string,
                $.variable_expansion,
                $.list_element_access,
                $.word,
                $.variable_name,
                $.bracket_expansion,
            ),
        ),

        switch_statement: $ => seq(
            'switch',
            field('value', $._expression),
            $._terminator,
            optional(repeat1($.case_clause)),
            'end',
        ),

        case_clause: $ => seq(
            'case',
            repeat1($._expression),
            $._terminator,
            optional(repeat1($._terminated_statement)),
        ),

        break: $ => 'break',
        continue: $ => 'continue',

        for_statement: $ => seq(
            'for',
            field('variable', $.variable_name),
            'in',
            field('value', repeat1($._expression)),
            $._terminator,
            optional(repeat1(choice($.break, $.continue, $._top_statement))),
            'end',
        ),

        while_statement: $ => prec.right(-3, seq(
            'while',
            field('condition', $._terminated_statement),
            optional(repeat1(choice($.break, $.continue, $._top_statement))),
            'end',
        )),

        if_statement: $ => prec.right(-3, seq(
            'if',
            field('condition', $._terminated_statement),
            optional(repeat1($._top_statement)),
            repeat($.else_if_clause),
            optional($.else_clause),
            'end'
        )),

        else_if_clause: $ => seq(
            /else[ ]+if/,
            optional(repeat1($._terminated_statement)),
        ),

        else_clause: $ => seq(
            'else',
            $._terminator,
            optional(repeat1($._top_statement)),
        ),

        begin_statement: $ => prec(6, seq(
            'begin',
            optional(repeat1($._top_statement)),
            'end',
        )),

        comment: $ => seq('#', /.*/),

        variable_name: $ => /[a-zA-Z0-9_]+/,

        variable_expansion: $ => prec.right(seq(
            repeat1('$'),
            $.variable_name,
            optional(repeat1($.list_element_access)),
        )),

        index: $ => choice(
            /(-|\+)?\d+/,
            /'(-|\+)?\d+'/,
            $.variable_expansion,
            $.double_quote_string,
        ),

        range: $ => seq($.index, '..', $.index),

        list_element_access: $ => seq(
            '[',
            optional(repeat1(choice(
                $.index,
                $.range,
            ))),
            ']',
        ),

        bracket_expansion: $ => prec.right(-1, seq(
            '{',
            optional(','),
            optional($._bracket_expression),
            prec.left(1, repeat1(
                seq(',', optional($._bracket_expression)),
            )),
            '}',
        )),

        double_quote_string: $ => seq(
            '"',
            repeat(choice(
                token.immediate(/[^\$\\"]+/),
                $.variable_expansion,
                $.escape_sequence,
            )),
            '"',
        ),

        single_quote_string: $ => prec(1, seq(
            '\'',
            repeat(choice(
                token.immediate(/[^'\\]+/),
                $.escape_sequence,
            )),
            '\'',
        )),

        escape_sequence: $ => token.immediate(seq('\\', choice(
            /[^xu]/,
            /u[0-9a-fA-F]{4}/,
            /u{[0-9a-fA-F]+}/,
            /x[0-9a-fA-F]{2}/
        ))),

        command: $ => prec.right(seq(
            field('name', $._expression),
            field('argument', optional(repeat1($._expression))),
        )),

        concatenation: $ => prec(-1, seq(
            choice($._base_expression, $.escape_sequence),
            repeat1(seq(
                $._concat,
                choice($._base_expression, $.escape_sequence)
            )),
        )),

        _expression: $ => choice(
            $._base_expression,
            $.concatenation,
        ),

        _base_expression: $ => choice(
            $.single_quote_string,
            $.double_quote_string,
            $.variable_expansion,
            $.list_element_access,
            $.word,
            $.variable_name,
            $.bracket_expansion,
        ),

        bracket_concatenation: $ => prec(-1, seq(
            choice($._base_bracket_expression, $.escape_sequence),
            repeat1(prec(1, seq(
                $._bracket_concat,
                choice($._base_bracket_expression, $.escape_sequence),
            ))),
        )),

        _bracket_expression: $ => choice(
            alias($.bracket_concatenation, $.concatenation),
            $._base_bracket_expression,
        ),

        _base_bracket_expression: $ => choice(
            $.single_quote_string,
            $.double_quote_string,
            $.variable_expansion,
            alias($.bracket_word, $.word),
            $.escape_sequence,
            $.variable_name,
            $.list_element_access,
        ),

        // In order to use it as a "word":
        // word: $ => token(prec.left(noneOf(SPECIAL_CHARACTERS))),
        word: $ => noneOf(SPECIAL_CHARACTERS),
        bracket_word: $ => noneOf(['\\s', '$', '\'', '"', ',', '\\', '{', '}', '(', ')', '\\]', '\\[']),
    },
});

