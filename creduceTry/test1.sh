#!/bin/bash

cp ./initial.c ./rewritten.c

PROTO=$(( $(gcc -I${CSMITH_HOME}/runtime -Wstrict-prototypes -O3 ./initial.c -S -o ./init.s 2> >(grep Wstrict-prototype) | wc -l)))

if ((PROTO != 0)); then
    exit 1 
fi


/mnt/ETH/AST/AST-Project/build/bin/ast-project ./rewritten.c --ifElseBreakup -- -I/usr/local/lib/clang/11.1.0/include -I${CSMITH_HOME}/runtime -Wno-narrowing -fpermissive -w 2> /dev/null

PROTO=$(( $(gcc -I${CSMITH_HOME}/runtime -Wstrict-prototypes -O3 ./rewritten.c -S -o ./rewritten.s 2> >(grep Wstrict-prototype) | wc -l)))

if ((PROTO != 0)); then
    exit 1 
fi

INIT=$(( $(cat ./init.s | wc -l)))
REWRITTEN=$(( $(cat ./rewritten.s | wc -l)))

echo $INIT
echo $REWRITTEN

if ((REWRITTEN > INIT*3)); then 
    exit 0
else
    exit 1
fi


