// Options:   --no-global-variables --concise --seed 896 --output csmith_ex/prog896.c
#include "csmith.h"


static long __undefined;






static int8_t  func_1(void);




static int8_t  func_1(void)
{ 
    int32_t l_3 = 0x3185299DL;
    int32_t *l_2[6][3] = {{&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3}};
    int32_t l_4 = 0xBB265D63L;
    uint16_t l_5 = 0x30B5L;
    int16_t l_15 = 0L;
    int i, j;
    ++l_5;
    for (l_3 = (-13); (l_3 <= 5); l_3++)
    { 
        int8_t l_10 = 0xD4L;
        int32_t l_11[5][7] = {{0x9CC13236L,1L,0x9CC13236L,0x9CC13236L,1L,0x9CC13236L,0x9CC13236L},{(-3L),(-5L),0xD6D23037L,(-5L),(-3L),0x33686A8EL,(-3L)},{1L,0x9CC13236L,0x9CC13236L,1L,0x9CC13236L,0x9CC13236L,1L},{0x38E5EFB4L,(-5L),0x38E5EFB4L,(-1L),(-3L),(-1L),0x38E5EFB4L},{0x9CC13236L,0x9CC13236L,1L,0x9CC13236L,0x9CC13236L,1L,0x9CC13236L}};
        int i, j;
        l_11[1][6] &= l_10;
    }
    for (l_5 = (-25); (l_5 < 1); l_5++)
    { 
        int32_t *l_14 = &l_3;
        l_2[5][2] = l_14;
    }
    return l_15;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
