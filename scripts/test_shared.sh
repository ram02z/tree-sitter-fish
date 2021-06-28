#!/bin/bash

code=0

for file in ./examples/fish/share/**/*.fish
do
    errors=$(./node_modules/.bin/tree-sitter parse $file | grep ERROR)

    if test "$errors" != ""; then
        snap_file=$(echo $file | sed -r -e "s/[\.\/_]+/_/g")
        snapshot="$(cat ./scripts/shared_out/$snap_file)"

        if test "$errors" != "$snapshot"; then
            echo Ouput does not match the snapshot
            printf "output:\n$errors"
            printf "\n\n----------\n\n"
            printf "snapshot:\n$snapshot\n"
            code=1
        fi
    fi
done

exit $code

