// Options:   --no-global-variables --concise --seed 619 --output csmith_ex/prog619.c
#include "csmith.h"


static long __undefined;






static int16_t  func_1(void);




static int16_t  func_1(void)
{ 
    int32_t l_3 = 0xF2000252L;
    int32_t *l_2 = &l_3;
    int32_t *l_4 = (void*)0;
    int32_t *l_5 = &l_3;
    int32_t *l_6 = &l_3;
    int32_t l_7 = 0x58BD4DFBL;
    int32_t *l_8 = (void*)0;
    int32_t *l_9 = &l_7;
    int32_t *l_10 = &l_3;
    int32_t *l_11 = &l_3;
    int32_t *l_12[10] = {&l_3,&l_3,&l_3,&l_3,&l_3,&l_3,&l_3,&l_3,&l_3,&l_3};
    uint64_t l_13 = 0UL;
    uint8_t l_16[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    int i;
    --l_13;
    return l_16[4];
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
