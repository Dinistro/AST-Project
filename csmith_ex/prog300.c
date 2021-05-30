// Options:   --no-global-variables --concise --seed 300 --output csmith_ex/prog300.c
#include "csmith.h"


static long __undefined;






static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    int32_t l_2 = (-1L);
    for (l_2 = (-8); (l_2 <= 22); l_2 = safe_add_func_int32_t_s_s(l_2, 2))
    { 
        int32_t l_5 = 0xB1658084L;
        for (l_5 = 1; (l_5 < (-30)); l_5--)
        { 
            uint32_t l_8 = 4294967295UL;
            int32_t l_10 = 0xC3938DD4L;
            int32_t *l_9 = &l_10;
            (*l_9) = l_8;
        }
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
