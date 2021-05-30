// Options:   --no-global-variables --concise --seed 412 --output csmith_ex/prog412.c
#include "csmith.h"


static long __undefined;






static uint64_t  func_1(void);




static uint64_t  func_1(void)
{ 
    int32_t l_2 = 0x91A049FEL;
    int32_t l_9 = 3L;
    for (l_2 = 18; (l_2 != 21); l_2++)
    { 
        const uint32_t l_5[7][3][4] = {{{0xEB987642L,6UL,0xB3F36565L,5UL},{5UL,6UL,6UL,5UL},{0xEB987642L,6UL,0xB3F36565L,5UL}},{{5UL,6UL,6UL,5UL},{0xEB987642L,6UL,0xB3F36565L,5UL},{5UL,6UL,6UL,5UL}},{{0xEB987642L,6UL,0xB3F36565L,5UL},{5UL,6UL,6UL,5UL},{0xEB987642L,6UL,0xB3F36565L,5UL}},{{5UL,6UL,6UL,5UL},{0xEB987642L,6UL,0xB3F36565L,5UL},{5UL,6UL,6UL,5UL}},{{0xEB987642L,6UL,0xB3F36565L,5UL},{5UL,6UL,6UL,5UL},{0xEB987642L,6UL,0xB3F36565L,5UL}},{{5UL,6UL,6UL,5UL},{0xEB987642L,6UL,0xB3F36565L,5UL},{5UL,6UL,6UL,5UL}},{{0xEB987642L,6UL,0xB3F36565L,5UL},{5UL,6UL,6UL,5UL},{0xEB987642L,6UL,0xB3F36565L,5UL}}};
        int32_t *l_6 = (void*)0;
        int32_t l_8 = 0xA969AC54L;
        int32_t *l_7[4] = {&l_8,&l_8,&l_8,&l_8};
        int i, j, k;
        l_9 |= (l_5[2][1][3] < (l_2 > l_2));
        return l_9;
    }
    return l_2;
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
