// Options:   --no-global-variables --concise --seed 100 --output csmith_ex/prog100.c
#include "csmith.h"


static long __undefined;






static uint64_t  func_1(void);




static uint64_t  func_1(void)
{ 
    int16_t l_4[1];
    int32_t l_5 = 0x665683C8L;
    int i;
    for (i = 0; i < 1; i++)
        l_4[i] = (-1L);
    l_5 ^= (safe_sub_func_int8_t_s_s(l_4[0], 0x05L));
    return l_4[0];
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
