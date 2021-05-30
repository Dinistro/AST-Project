// Options:   --no-global-variables --concise --seed 78 --output csmith_ex/prog78.c
#include "csmith.h"


static long __undefined;






static uint16_t  func_1(void);




static uint16_t  func_1(void)
{ 
    int8_t *l_2 = (void*)0;
    int32_t l_3 = 0x585B7F37L;
    l_3 ^= (l_2 != l_2);
    return l_3;
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
