// Options:   --no-global-variables --concise --seed 486 --output csmith_ex/prog486.c
#include "csmith.h"


static long __undefined;






static uint16_t  func_1(void);




static uint16_t  func_1(void)
{ 
    int32_t l_3 = 7L;
    int32_t *l_2 = &l_3;
    uint16_t l_4[3][6] = {{0x1957L,0x5768L,0x5768L,0x1957L,2UL,0x89A6L},{0x89A6L,0x1957L,0xA4ADL,0x1957L,0x89A6L,0x44D0L},{0x1957L,0x89A6L,0x44D0L,0x44D0L,0x89A6L,0x1957L}};
    uint64_t l_6[6];
    int i, j;
    for (i = 0; i < 6; i++)
        l_6[i] = 0xBEFA5F9C7104272BLL;
    (*l_2) &= 0x19AC196AL;
    for (l_3 = 2; (l_3 >= 0); l_3 -= 1)
    { 
        uint16_t l_5 = 0xAE50L;
        return l_5;
    }
    return l_6[2];
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
