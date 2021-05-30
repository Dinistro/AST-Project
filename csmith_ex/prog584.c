// Options:   --no-global-variables --concise --seed 584 --output csmith_ex/prog584.c
#include "csmith.h"


static long __undefined;






static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    uint32_t l_2 = 0xEB32A831L;
    int32_t l_4 = 0x5C285CE9L;
    int32_t *l_3 = &l_4;
    int32_t l_5 = 0xC25B054DL;
    (*l_3) = l_2;
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
