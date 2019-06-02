#!/bin/bash
# aogonn - git check-in
# copyright by Marcel Ebbrecht, 2019 <marcel.ebbrecht@googlemail.com>

### preamble ###
LANG=C

### variables ###
CONFIGREPLACESTRING="receiver sender server user pass port apiserver apiuser \
    apitoken apitype"
CONFIGREPLACE="tls count"

### execution ###
if [[ $1 =~ [a-z] ]]; then
    echo
    echo "Please make sure, you checked the code with cpplint.sh before checkin"
    echo
    echo "Commit message: $1 - commit?"
    read

    # clean configs
    cat config/aogonn.cfg > config/aogonn.sample
    for CR in $CONFIGREPLACESTRING; do
        sed -i "s/ $CR:.*/ $CR: \"$(echo $CR | tr a-z A-Z)\";/g" \
            config/aogonn.sample
    done
    for CR in $CONFIGREPLACE; do
        sed -i "s/ $CR:.*/ $CR: $(echo $CR | tr a-z A-Z);/g" \
            config/aogonn.sample
    done

    # chmod and git checkin
    chmod -R o-rwx .
    git add *
    git commit -a -m "$1"
    git push
else
    echo
    echo "Please provide commit message in hyperns"
    echo
fi
