#!/bin/bash

for value in {0..999}
do
    (gcc -fsanitize=undefined -O3 -I${CSMITH_HOME}/runtime ./csmith_ex/prog$value.c -o ./tmp.out &> /dev/null && (ulimit -t 5; ./tmp.out &> /dev/null))
    if ! test "$?" = "0"; then
        echo $value >> failures.txt 
    fi
done 

