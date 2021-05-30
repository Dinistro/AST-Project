#!/bin/bash

cp ./initial.c ./rewritten.c
TMP0='./tmp.txt'
TMP1='./tmp.txt'

if
gcc -Wstrict-prototypes -Wfatal-errors -pedantic -Wall -Wsystem-headers -O3 -c -I${CSMITH_HOME}/runtime ./initial.c -S -o ./init.s> $TMP1 2>&1  &&\
#! grep -q 'conversions than data arguments' "$TMP0" &&\
#! grep -q 'incompatible redeclaration' "$TMP0" &&\
#! grep -q 'ordered comparison between pointer' "$TMP0" &&\
#! grep -q 'eliding middle term' "$TMP0" &&\
#! grep -q 'end of non-void function' "$TMP0" &&\
#! grep -q 'invalid in C99' "$TMP0" &&\
#! grep -q 'specifies type' "$TMP0" &&\
#! grep -q 'should return a value' "$TMP0" &&\
#! grep -q 'uninitialized' "$TMP0" &&\
#! grep -q 'incompatible pointer to' "$TMP0" &&\
#! grep -q 'incompatible integer to' "$TMP0" &&\
##! grep -q 'comparison of distinct pointer types' "$TMP0" &&\
#! grep -q 'type specifier missing' "$TMP0" &&\
! grep uninitialized "$TMP1" &&\
! grep 'Wimplicit-int' "$TMP1" &&\
! grep 'function declaration isn’t a prototype' "$TMP1" &&\
! grep 'division by zero' "$TMP1" &&\
! grep 'without a cast' "$TMP1" &&\
! grep 'control reaches end' "$TMP1" &&\
! grep 'return type defaults' "$TMP1" &&\
! grep 'cast from pointer to integer' "$TMP1" &&\
! grep 'useless type name in empty declaration' "$TMP1" &&\
! grep 'no semicolon at end' "$TMP1" &&\
! grep 'type defaults to' "$TMP1" &&\
! grep 'too few arguments for format' "$TMP1" &&\
#! grep 'incompatible pointer' "$TMP1" &&\
! grep 'ordered comparison of pointer with integer' "$TMP1" &&\
! grep 'declaration does not declare anything' "$TMP1" &&\
! grep 'expects type' "$TMP1" &&\
#! grep 'comparison of distinct pointer types' "$TMP1" &&\
! grep 'pointer from integer' "$TMP1" &&\
! grep 'incompatible implicit' "$TMP1" &&\
! grep 'excess elements in struct initializer' "$TMP1" &&\
! grep 'return type of \‘main\’ is not \‘int\’' "$TMP1" &&\
! grep 'comparison between pointer and integer' "$TMP1" #&&\
then
  : # do nothing
else
  exit 1
fi

/mnt/ETH/AST/AST-Project/build/bin/ast-project ./rewritten.c --ifElseBreakup -- -I/usr/local/lib/clang/11.1.0/include -I${CSMITH_HOME}/runtime -Wno-narrowing -fpermissive -w 2> /dev/null

if
gcc -Wstrict-prototypes -Wfatal-errors -pedantic -Wall -Wsystem-headers -O3 -c -I${CSMITH_HOME}/runtime ./rewritten.c -S -o ./rewritten.s> $TMP1 2>&1  &&\
#! grep -q 'conversions than data arguments' "$TMP0" &&\
#! grep -q 'incompatible redeclaration' "$TMP0" &&\
#! grep -q 'ordered comparison between pointer' "$TMP0" &&\
#! grep -q 'eliding middle term' "$TMP0" &&\
#! grep -q 'end of non-void function' "$TMP0" &&\
#! grep -q 'invalid in C99' "$TMP0" &&\
#! grep -q 'specifies type' "$TMP0" &&\
#! grep -q 'should return a value' "$TMP0" &&\
#! grep -q 'uninitialized' "$TMP0" &&\
#! grep -q 'incompatible pointer to' "$TMP0" &&\
#! grep -q 'incompatible integer to' "$TMP0" &&\
##! grep -q 'comparison of distinct pointer types' "$TMP0" &&\
#! grep -q 'type specifier missing' "$TMP0" &&\
! grep -q uninitialized "$TMP1" &&\
! grep -q 'function declaration isn’t a prototype' "$TMP1" &&\
! grep -q 'Wimplicit-int' "$TMP1" &&\
! grep -q 'division by zero' "$TMP1" &&\
! grep -q 'without a cast' "$TMP1" &&\
! grep -q 'control reaches end' "$TMP1" &&\
! grep -q 'return type defaults' "$TMP1" &&\
! grep -q 'cast from pointer to integer' "$TMP1" &&\
! grep -q 'useless type name in empty declaration' "$TMP1" &&\
! grep -q 'no semicolon at end' "$TMP1" &&\
! grep -q 'type defaults to' "$TMP1" &&\
! grep -q 'too few arguments for format' "$TMP1" &&\
#! grep -q 'incompatible pointer' "$TMP1" &&\
! grep -q 'ordered comparison of pointer with integer' "$TMP1" &&\
! grep -q 'declaration does not declare anything' "$TMP1" &&\
! grep -q 'expects type' "$TMP1" &&\
#! grep -q 'comparison of distinct pointer types' "$TMP1" &&\
! grep -q 'pointer from integer' "$TMP1" &&\
! grep -q 'incompatible implicit' "$TMP1" &&\
! grep -q 'excess elements in struct initializer' "$TMP1" &&\
! grep -q 'return type of \‘main\’ is not \‘int\’' "$TMP1" &&\
! grep -q 'comparison between pointer and integer' "$TMP1" #&&\
then
  : # do nothing
else
  exit 1
fi

#gcc -Wstrict-prototypes -Wfatal-errors -fsanitize=undefined -pedantic -Wall -Wsystem-headers -O3 -I${CSMITH_HOME}/runtime ./initial.c -o thing.out

#(ulimit -t 500; ./thing.out)

INIT=$(( $(cat ./init.s | wc -l)))
REWRITTEN=$(( $(cat ./rewritten.s | wc -l)))

echo $INIT
echo $REWRITTEN

if ((REWRITTEN > INIT*3)); then 
    exit 0
else
    exit 1
fi


