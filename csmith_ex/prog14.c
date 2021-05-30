// Options:   --no-global-variables --concise --seed 14 --output csmith_ex/prog14.c
#include "csmith.h"


static long __undefined;






static int64_t  func_1(void);




static int64_t  func_1(void)
{ 
    uint32_t l_2 = 18446744073709551606UL;
    int32_t l_3 = 0L;
    int32_t l_5 = 0xD5816210L;
    int32_t *l_4 = &l_5;
    int32_t l_6 = 6L;
    l_3 = l_2;
    (*l_4) &= l_3;
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
