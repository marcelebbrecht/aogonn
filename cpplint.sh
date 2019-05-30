#!/bin/bash
# aogonn - cpplint check
# copyright by Marcel Ebbrecht, 2019 <marcel.ebbrecht@googlemail.com>

### preamble ###
LANG=C

### execution ###
FILES="$(ls *.cpp) $(find ./src -type f) $(find ./include -type f)"
echo
echo "Starting code checking, please wait"
echo

for FILE in $FILES; do
    REPEAT="r"
    while [[ $REPEAT =~ "r" ]]; do
        cpplint $FILE
        echo
        echo "Please check file $FILE for warnings and errors, press 'r' to repeat"
        echo "check, or 'c' to abort, followed by enter. To check next file just enter"
        echo
        read REPEAT
        if [[ $REPEAT =~ "c" ]]; then
            echo
            echo "Code checking aborted!"
            echo
            exit 1
        fi
    done
done

echo
echo "Code checking finished!"
echo
exit 0