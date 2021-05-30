// Options:   --no-global-variables --concise --seed 519 --output csmith_ex/prog519.c
#include "csmith.h"


static long __undefined;






static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    int32_t l_3 = (-8L);
    int32_t *l_2[2];
    uint32_t l_4 = 4294967287UL;
    uint32_t l_5 = 0xD04CD021L;
    int i;
    for (i = 0; i < 2; i++)
        l_2[i] = &l_3;
    l_4 ^= 0L;
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
