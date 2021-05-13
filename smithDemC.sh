#!/bin/bash

mkdir csmith_ex
for value in {0..999}
do
    csmith --seed $value > csmith_ex/prog$value.cpp
done
