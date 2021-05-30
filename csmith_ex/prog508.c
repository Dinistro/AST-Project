// Options:   --no-global-variables --concise --seed 508 --output csmith_ex/prog508.c
#include "csmith.h"


static long __undefined;






static int16_t  func_1(void);




static int16_t  func_1(void)
{ 
    int32_t l_2 = 0L;
    for (l_2 = (-2); (l_2 > 3); l_2 = safe_add_func_int16_t_s_s(l_2, 9))
    { 
        uint16_t l_5 = 5UL;
        int32_t l_7 = 0x23E52509L;
        int32_t *l_6 = &l_7;
        (*l_6) = l_5;
    }
    return l_2;
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
