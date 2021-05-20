#!/bin/bash

cp ./initial.c ./rewritten.c

gcc -I${CSMITH_HOME}/runtime -Wno-narrowing -fpermissive -w -O3 ./initial.c -S -o ./init.s

/mnt/ETH/AST/AST-Project/build/bin/ast-project ./rewritten.c --ifElseBreakup -- -I/usr/local/lib/clang/11.1.0/include -I${CSMITH_HOME}/runtime -Wno-narrowing -fpermissive -w 2> /dev/null

gcc -I${CSMITH_HOME}/runtime -Wno-narrowing -fpermissive -w -O3 ./rewritten.c -S -o ./rewritten.s

INIT=$(( $(cat ./init.s | wc -l)))
REWRITTEN=$(( $(cat ./rewritten.s | wc -l)))

echo $INIT
echo $REWRITTEN

if ((REWRITTEN > INIT*3)); then 
    exit 0
else
    exit 1
fi


