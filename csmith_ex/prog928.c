// Options:   --no-global-variables --concise --seed 928 --output csmith_ex/prog928.c
#include "csmith.h"


static long __undefined;






static uint64_t  func_1(void);




static uint64_t  func_1(void)
{ 
    uint16_t l_2[2];
    int32_t l_3 = 0x90A624CDL;
    int i;
    for (i = 0; i < 2; i++)
        l_2[i] = 0xC4B4L;
    l_3 ^= l_2[0];
    return l_3;
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
