// Options:   --no-global-variables --concise --seed 84 --output csmith_ex/prog84.c
#include "csmith.h"


static long __undefined;






static uint64_t  func_1(void);




static uint64_t  func_1(void)
{ 
    int32_t l_3[5][8][3] = {{{1L,0x6F5A9C4CL,1L},{1L,0x0B4074DDL,(-10L)},{1L,0xB7C7CE53L,1L},{1L,0x6F5A9C4CL,1L},{1L,0x0B4074DDL,(-10L)},{1L,0xB7C7CE53L,1L},{1L,0x6F5A9C4CL,1L},{1L,0x0B4074DDL,(-10L)}},{{1L,0xB7C7CE53L,1L},{1L,0x6F5A9C4CL,1L},{1L,0x0B4074DDL,(-10L)},{1L,0xB7C7CE53L,1L},{1L,0x6F5A9C4CL,1L},{1L,0x0B4074DDL,(-10L)},{1L,0xB7C7CE53L,1L},{1L,(-10L),5L}},{{5L,1L,0L},{5L,1L,(-7L)},{5L,(-10L),5L},{5L,1L,0L},{5L,1L,(-7L)},{5L,(-10L),5L},{5L,1L,0L},{5L,1L,(-7L)}},{{5L,(-10L),5L},{5L,1L,0L},{5L,1L,(-7L)},{5L,(-10L),5L},{5L,1L,0L},{5L,1L,(-7L)},{5L,(-10L),5L},{5L,1L,0L}},{{5L,1L,(-7L)},{5L,(-10L),5L},{5L,1L,0L},{5L,1L,(-7L)},{5L,(-10L),5L},{5L,1L,0L},{5L,1L,(-7L)},{5L,(-10L),5L}}};
    int32_t *l_2[6] = {&l_3[2][4][0],&l_3[2][4][0],&l_3[2][4][0],&l_3[2][4][0],&l_3[2][4][0],&l_3[2][4][0]};
    int32_t **l_4 = &l_2[5];
    uint64_t l_5 = 8UL;
    int i, j, k;
    (*l_4) = l_2[5];
    return l_5;
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
