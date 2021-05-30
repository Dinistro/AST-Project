// Options:   --no-global-variables --concise --seed 468 --output csmith_ex/prog468.c
#include "csmith.h"


static long __undefined;






static uint64_t  func_1(void);




static uint64_t  func_1(void)
{ 
    uint8_t l_2 = 0UL;
    int64_t l_3 = (-1L);
    uint8_t l_4 = 0xCFL;
    uint8_t l_5 = 1UL;
    l_3 = l_2;
    l_5 |= (l_2 > (l_4 || (0xED6BL ^ 1UL)));
    return l_4;
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
