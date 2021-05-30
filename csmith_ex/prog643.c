// Options:   --no-global-variables --concise --seed 643 --output csmith_ex/prog643.c
#include "csmith.h"


static long __undefined;






static int16_t  func_1(void);




static int16_t  func_1(void)
{ 
    int64_t l_2[9] = {0x51CDCB363F9E923ELL,0x51CDCB363F9E923ELL,0x51CDCB363F9E923ELL,0x51CDCB363F9E923ELL,0x51CDCB363F9E923ELL,0x51CDCB363F9E923ELL,0x51CDCB363F9E923ELL,0x51CDCB363F9E923ELL,0x51CDCB363F9E923ELL};
    int i;
    return l_2[2];
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
