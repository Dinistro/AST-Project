// Options:   --no-global-variables --concise --seed 189 --output csmith_ex/prog189.c
#include "csmith.h"


static long __undefined;






static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    uint8_t l_2[8] = {1UL,0x1DL,1UL,1UL,0x1DL,1UL,1UL,0x1DL};
    int i;
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
