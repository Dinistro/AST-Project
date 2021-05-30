// Options:   --no-global-variables --concise --seed 653 --output csmith_ex/prog653.c
#include "csmith.h"


static long __undefined;






static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    uint8_t l_2 = 0x4CL;
    int32_t l_3 = 0x29CF3083L;
    int32_t l_5 = 9L;
    int32_t *l_4 = &l_5;
    int32_t *l_9 = &l_5;
    int32_t *l_10[10][5] = {{&l_5,&l_5,&l_5,&l_5,&l_5},{&l_3,&l_3,&l_3,&l_3,&l_3},{&l_5,&l_5,&l_5,&l_5,&l_5},{&l_3,&l_3,&l_3,&l_3,&l_3},{&l_5,&l_5,&l_5,&l_5,&l_5},{&l_3,&l_3,&l_3,&l_3,&l_3},{&l_5,&l_5,&l_5,&l_5,&l_5},{&l_3,&l_3,&l_3,&l_3,&l_3},{&l_5,&l_5,&l_5,&l_5,&l_5},{&l_3,&l_3,&l_3,&l_3,&l_3}};
    uint8_t l_11 = 255UL;
    uint16_t l_17 = 0xD505L;
    int i, j;
    (*l_4) |= (l_3 = l_2);
    for (l_3 = (-13); (l_3 > 29); ++l_3)
    { 
        uint64_t l_8 = 18446744073709551615UL;
        return l_8;
    }
    ++l_11;
    for (l_3 = (-29); (l_3 <= (-26)); l_3++)
    { 
        int32_t l_16 = 0xDBA1DD79L;
        return l_16;
    }
    return l_17;
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
