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

echo "Parsing failed for following files:"
printf $parse_errors
