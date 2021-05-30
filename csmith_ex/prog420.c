// Options:   --no-global-variables --concise --seed 420 --output csmith_ex/prog420.c
#include "csmith.h"


static long __undefined;






static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    int32_t *l_2 = (void*)0;
    int32_t l_4 = 0xBAC04EE7L;
    int32_t *l_3 = &l_4;
    int32_t *l_5[2];
    int8_t l_6 = 0x51L;
    uint32_t l_7 = 0x20410224L;
    uint16_t l_10 = 7UL;
    int8_t l_13 = 0L;
    uint32_t l_14 = 1UL;
    int32_t l_17 = 0x0DEC5331L;
    int i;
    for (i = 0; i < 2; i++)
        l_5[i] = &l_4;
    ++l_7;
    ++l_10;
    ++l_14;
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
