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

    inline: $ => [
        $._statements,
        $._statement,
        $._expression,
        $._base_expression,
        $._terminator,
    ],

    externals: $ => [
        $._concat,
    ],

    rules: {
        program: $ => optional($._statements),

        _statements: $ => prec(1, seq(
            repeat(seq($._statement, $._terminator)),
            $._statement,
            optional($._terminator),
        )),

        _job_control_background: $ => '&',
        _terminator: $ => choice(';', '\n', '\r', '\r\n', $._job_control_background),

        _statement: $ => choice(
            $.comment,
            $.command,
        ),

        comment: $ => seq('#', /.*/),

        //variable_name: $ => /[a-zA-Z0-9_]+/,

        variable_expansion: $ => seq('$', /[\w_\$]+/),

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
            field('arguments', optional(repeat1($._expression))),
        )),

        concatenation: $ => prec(-1, seq(
            choice($._base_expression, $.escape_sequence),
            repeat1(prec(1, seq(
                $._concat,
                choice($._base_expression, $.escape_sequence)
            ))),
        )),

        _expression: $ => choice(
            $._base_expression,
            $.concatenation,
        ),

        _base_expression: $ => choice(
            $.single_quote_string,
            $.double_quote_string,
            $.variable_expansion,
        ),

        word: $ => prec.left(repeat1(choice(
            $.escape_sequence,
            noneOf(SPECIAL_CHARACTERS),
        ))),
    },
});

