// Options:   --no-global-variables --concise --seed 543 --output csmith_ex/prog543.c
#include "csmith.h"


static long __undefined;






static int8_t  func_1(void);




static int8_t  func_1(void)
{ 
    int32_t l_2 = 0x5F394A2AL;
    int32_t l_4 = 0xD832937AL;
    int32_t *l_3 = &l_4;
    uint32_t l_5 = 18446744073709551611UL;
    (*l_3) ^= l_2;
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
