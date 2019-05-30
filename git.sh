#!/bin/bash
# aogonn - git check-in
# copyright by Marcel Ebbrecht, 2019 <marcel.ebbrecht@googlemail.com>

### preamble ###
LANG=C

### execution ###
if [[ $1 =~ [a-z] ]]; then
    echo
    echo "Commit message: $1 - commit?"
    read
    chmod -R o-rwx .
    git add *
    git commit -a -m "$1"
    git push
else
    echo
    echo "Please provide commit message in hyperns"
    echo
fi
