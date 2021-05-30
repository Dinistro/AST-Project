// Options:   --no-global-variables --concise --seed 123 --output csmith_ex/prog123.c
#include "csmith.h"


static long __undefined;






static const uint64_t  func_1(void);




static const uint64_t  func_1(void)
{ 
    int32_t l_2[7];
    int i;
    for (i = 0; i < 7; i++)
        l_2[i] = 3L;
    for (l_2[4] = 0; (l_2[4] < 5); l_2[4] = safe_add_func_int32_t_s_s(l_2[4], 1))
    { 
        int64_t l_5 = 0x5E4B7834D8A94B2ALL;
        if (l_5)
            break;
    }
    return l_2[6];
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
