// TODO(1):     Implement job control and redirections.
// TODO(2):     Implement glob: '*' is still a special character inside bracket expansion.
// TODO(3):     Implement `begin`.
// TODO(4):     Implement `function`.
// TODO(5):     Implement `if`.
// TODO(6):     Implement `switch`.
// TODO(7):     Implement `while`.
// TODO(8):     Implement `for`.
// TODO(9):     Go through SPECIAL_CARACTERS for `word` and `bracket_word` and ensure they are correct.
// TODO(10):    "test[test]" should be a word

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

    rules: {
        program: $ => optional($._statements),

        _statements: $ => seq(
            repeat1(seq(
                optional(repeat1($._terminator)),
                $._top_statement,
            )),
            optional(repeat1($._terminator)),
        ),

        _top_statement: $ => prec(-1, choice(
            $._statement,
            $.comment,
            $.conditional_execution,
        )),

        conditional_execution: $ => prec.right(1, seq(
            $._top_statement,
            choice(
                choice(
                    '||',
                    seq(repeat1(';'), 'or'),
                ),
                choice(
                    '&&',
                    seq(repeat1(';'), 'and'),
                ),
            ),
            $._top_statement,
        )),

        redirection: $ => prec(1, choice(
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

        pipe: $ => prec.left(seq(
            $._statement,
            '|',
            $._statement,
        )),

        background: $ => seq($._statement, '&'),

        _terminator: $ => prec.left(-1, repeat1(choice(
            ';',
            '\n',
            '\r',
            '\r\n',
        ))),

        _statement: $ => choice(
            $.pipe,
            $.command,
            $.redirection,
            $.background,
        ),

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
            field('arguments', optional(repeat1($._expression))),
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

