// Options:   --no-global-variables --concise --seed 211 --output csmith_ex/prog211.c
#include "csmith.h"


static long __undefined;






static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    int32_t l_4 = 8L;
    uint32_t l_5 = 0UL;
    int32_t l_6 = 5L;
    l_6 &= (safe_mul_func_uint16_t_u_u(l_4, l_5));
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
