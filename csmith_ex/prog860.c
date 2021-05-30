// Options:   --no-global-variables --concise --seed 860 --output csmith_ex/prog860.c
#include "csmith.h"


static long __undefined;






static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    int32_t l_2 = 0xE91A049FL;
    for (l_2 = (-11); (l_2 <= 26); l_2++)
    { 
        int32_t l_5 = (-1L);
        for (l_5 = 28; (l_5 < 23); l_5--)
        { 
            int32_t l_8 = 3L;
            return l_8;
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
