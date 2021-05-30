// Options:   --no-global-variables --concise --seed 69 --output csmith_ex/prog69.c
#include "csmith.h"


static long __undefined;






static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    int32_t l_3 = 0x5362DAABL;
    int32_t *l_2 = &l_3;
    int32_t **l_4[9];
    int32_t *l_5 = &l_3;
    uint32_t l_6 = 18446744073709551613UL;
    int i;
    for (i = 0; i < 9; i++)
        l_4[i] = &l_2;
    l_5 = l_2;
    return l_6;
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
