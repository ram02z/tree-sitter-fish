#!/bin/bash

parse_errors=''

for file in ./examples/fish/share/functions/*.fish
do
    ./node_modules/.bin/tree-sitter parse $file > /dev/null

    if test "$?" != "0"; then
        parse_errors+=$file
        parse_errors+='\n'
    fi
done

[[ -z "$parse_errors" ]] && echo "Parsing passed" && exit 0

echo "Parsing failed for following files:"
printf '%b' "$parse_errors"
exit 1
