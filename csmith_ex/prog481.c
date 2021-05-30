// Options:   --no-global-variables --concise --seed 481 --output csmith_ex/prog481.c
#include "csmith.h"


static long __undefined;






static uint64_t  func_1(void);




static uint64_t  func_1(void)
{ 
    int8_t l_2[1];
    int32_t l_3 = 0x810D21DFL;
    int i;
    for (i = 0; i < 1; i++)
        l_2[i] = 0x03L;
    for (l_3 = 0; l_3 < 1; l_3 += 1)
    {
        l_2[l_3] = 0xB2L;
    }
    return l_2[0];
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
