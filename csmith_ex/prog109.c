// Options:   --no-global-variables --concise --seed 109 --output csmith_ex/prog109.c
#include "csmith.h"


static long __undefined;






static int16_t  func_1(void);




static int16_t  func_1(void)
{ 
    int32_t l_3 = 1L;
    int32_t *l_2 = &l_3;
    int32_t **l_4 = &l_2;
    uint64_t l_5 = 18446744073709551608UL;
    l_2 = (void*)0;
    (*l_4) = &l_3;
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
