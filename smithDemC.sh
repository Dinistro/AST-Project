#!/bin/bash

mkdir csmith_ex
for value in {0..99}
do
    echo $value
    csmith --no-global-variables --concise --seed $value --output csmith_ex/prog$value.c
done
