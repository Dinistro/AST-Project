// Options:   --no-global-variables --concise --seed 892 --output csmith_ex/prog892.c
#include "csmith.h"


static long __undefined;






static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    int32_t l_2 = 1L;
    for (l_2 = 16; (l_2 < 2); l_2 = safe_sub_func_uint8_t_u_u(l_2, 1))
    { 
        int32_t l_5 = 0xB22124F8L;
        return l_5;
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
