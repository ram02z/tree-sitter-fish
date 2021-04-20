// TODO(9):     Go through SPECIAL_CARACTERS for `word` and `bracket_word` and ensure they are correct.
// TODO(10):    "test[test]" should be a word
// TODO(11):    "begin & end" should be invalid
// TODO(12):    Background commands cannot be used as conditionals "while echo &; end"
// TODO(13):    Should "and", "or" be highlighted as a commands or as operators?
// TODO(14):    The statement "begin >&0 end" should be invalid
// TODO(16):    The "function/while/begin --help" should be a command
// TODO(17):    {"str"} or {} or {nonvar} should be a concatenation / word
// TODO(18):    add (test_command) [ $i != 0 ]
// TODO(19):    echo [ should be a command, [ / ] should be a word
// TODO(20):    set paths $paths ( string replace -rfi '^\s*Include\s+' '' <$config \
//              | string trim | string replace -r -a '\s+' ' ')

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
        $._brace_concat,
        $._concat_list,
    ],

    inline: $ => [
        $._terminator,
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

        // Prec: higher than pipe
        redirected_statement: $ => prec(1, seq(
            $._statement,
            choice($.file_redirect, $.stream_redirect),
        )),

        stream_redirect: $ => token(/[012]?(>>|>|<)&[012-]/),
        direction: $ => token(/[012&]?(>>?\??|<)/),

        file_redirect: $ => seq(
            field('operator', $.direction),
            field('destination', $._expression),
        ),

        pipe: $ => prec.left(seq(
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
            $.redirected_statement,
            $.begin_statement,
            $.if_statement,
            $.while_statement,
            $.for_statement,
            $.switch_statement,
            $.function_definition,
            $.break,
            $.continue,
            $.return,
            $.negated_statement,
        ),

        _terminated_statement: $ => prec(1, seq(
            $._statement,
            $._terminator,
        )),

        _terminated_opt_statement: $ => seq(
            optional($._statement),
            $._terminator,
        ),

        negated_statement: $ => prec.left(-1, seq(
            choice('!', 'not'),
            $._statement,
        )),

        command_substitution: $ => seq(
            '(',
            repeat(seq(
                optional($._statement),
                $._terminator,
            )),
            optional($._statement),
            ')',
        ),

        function_definition: $ => seq(
            'function',
            field('name', $._function_name),
            field('option', optional(repeat1($._expression))),
            $._terminator,
            optional(repeat1($._terminated_statement)),
            'end',
        ),

        integer: $ => /(-|\+)?\d+/,

        return: $ => prec.left(seq(
            'return',
            optional($._expression),
        )),

        _function_name: $ => choice(
            $.concatenation,
            choice(
                $.single_quote_string,
                $.double_quote_string,
                $.variable_expansion,
                $.list_element_access,
                $.word,
                $.variable_name,
                $.brace_expansion,
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
            optional(repeat1($._terminated_statement)),
            'end',
        ),

        while_statement: $ => prec.right(-3, seq(
            'while',
            field('condition', $._terminated_statement),
            optional(repeat1($._terminated_opt_statement)),
            'end',
        )),

        if_statement: $ => prec.right(-3, seq(
            'if',
            field('condition', $._terminated_statement),
            optional(repeat1($._terminated_opt_statement)),
            repeat($.else_if_clause),
            optional($.else_clause),
            'end'
        )),

        else_if_clause: $ => seq(
            seq('else', 'if'),
            optional(repeat1($._terminated_opt_statement)),
        ),

        else_clause: $ => seq(
            'else',
            $._terminator,
            optional(repeat1($._terminated_opt_statement)),
        ),

        begin_statement: $ => prec(6, seq(
            'begin',
            optional(repeat1($._terminated_opt_statement)),
            'end',
        )),

        comment: $ => token(prec(-11, /#.*/)),

        variable_name: $ => /[a-zA-Z0-9_]+/,

        variable_expansion: $ => prec.right(seq(
            repeat1('$'),
            $.variable_name,
            optional(repeat1(seq(
                $._concat_list,
                $.list_element_access,
            ))),
        )),

        index: $ => choice(
            $.integer,
            $.single_quote_string,
            $.variable_expansion,
            $.double_quote_string,
            $.command_substitution,
        ),

        range: $ => prec.right(2, seq(
            optional($.index), '..', optional($.index)
        )),

        list_element_access: $ => prec.right(1, seq(
            '[',
            optional(repeat1(choice(
                $.index,
                $.range,
            ))),
            ']',
        )),

        brace_expansion: $ => prec.right(seq(
            '{',
            choice(
                $.variable_expansion,
                seq(
                    optional(','),
                    optional($._brace_expression),
                    repeat1(
                        prec.right(seq(',', optional($._brace_expression))),
                    ),
                ),
            ),
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

        escape_sequence: $ => token(seq('\\', choice(
            /[^xu]/,
            /u[0-9a-fA-F]{4}/,
            /u{[0-9a-fA-F]+}/,
            /x[0-9a-fA-F]{1,2}/
        ))),

        command: $ => prec.right(seq(
            field('name', $._expression),
            field('argument', repeat($._expression)),
        )),

        _special_character: $ => token(choice('[', ']')),

        concatenation: $ => prec(-1, seq(
            choice($._base_expression, $._special_character),
            repeat1(seq(
                $._concat,
                choice($._base_expression, $._special_character)
            )),
        )),

        _expression: $ => choice(
            $._base_expression,
            $.concatenation,
            $.command_substitution,
            alias($._special_character, $.word),
        ),

        _base_expression: $ => choice(
            $.single_quote_string,
            $.double_quote_string,
            $.variable_expansion,
            $.word,
            $.integer,
            $.variable_name,
            $.brace_expansion,
            $.escape_sequence,
            $.glob,
            $.home_dir_expansion,
        ),

        brace_concatenation: $ => prec(-1, seq(
            $._base_brace_expression,
            repeat1(prec(1, seq(
                $._brace_concat,
                $._base_brace_expression,
            ))),
        )),

        _brace_expression: $ => choice(
            alias($.brace_concatenation, $.concatenation),
            $._base_brace_expression,
        ),

        _base_brace_expression: $ => choice(
            $.single_quote_string,
            $.double_quote_string,
            $.variable_expansion,
            alias($.brace_word, $.word),
            $.escape_sequence,
            $.variable_name,
            $.glob,
        ),

        home_dir_expansion: $ => '~',

        glob: $ => token.immediate(repeat1('*')),

        // In order to use it as a "word":
        // word: $ => token(prec.left(noneOf(SPECIAL_CHARACTERS))),
        word: $ => noneOf(SPECIAL_CHARACTERS),
        brace_word: $ => noneOf(['\\s', '$', '\'', '*', '"', ',', '\\', '{', '}', '(', ')', '\\]', '\\[']),
    },
});

