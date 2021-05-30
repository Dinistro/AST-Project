// Options:   --no-global-variables --concise --seed 759 --output csmith_ex/prog759.c
#include "csmith.h"


static long __undefined;






static uint64_t  func_1(void);




static uint64_t  func_1(void)
{ 
    int32_t l_2 = 4L;
    int32_t l_7 = 6L;
    for (l_2 = 1; (l_2 > 26); ++l_2)
    { 
        uint64_t l_5[3];
        int32_t l_6 = 1L;
        int i;
        for (i = 0; i < 3; i++)
            l_5[i] = 0x7BB00868BB4AAD9DLL;
        for (l_6 = 0; l_6 < 3; l_6 += 1)
        {
            l_5[l_6] = 0xB4456E348CC3837ALL;
        }
        l_7 |= l_5[1];
    }
    return l_7;
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
