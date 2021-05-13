#!/bin/bash

mkdir csmith_ex
for value in {0..999}
do
    echo $value
    csmith --concise --seed $value --output csmith_ex/prog$value.c
done
