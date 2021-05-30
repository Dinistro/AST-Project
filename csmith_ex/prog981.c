// Options:   --no-global-variables --concise --seed 981 --output csmith_ex/prog981.c
#include "csmith.h"


static long __undefined;






static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    int32_t l_3 = 1L;
    int32_t *l_2 = &l_3;
    int32_t l_6 = 1L;
    int32_t l_8 = (-4L);
    int32_t *l_7[4];
    uint32_t l_9 = 18446744073709551612UL;
    int32_t l_10 = (-10L);
    int i;
    for (i = 0; i < 4; i++)
        l_7[i] = &l_8;
    (*l_2) ^= 0x4EC2E0CFL;
    l_9 ^= (((*l_2) != (safe_add_func_int32_t_s_s((l_6 = (*l_2)), (*l_2)))) == (*l_2));
    return l_10;
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
