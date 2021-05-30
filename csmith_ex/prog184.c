// Options:   --no-global-variables --concise --seed 184 --output csmith_ex/prog184.c
#include "csmith.h"


static long __undefined;






static const uint32_t  func_1(void);




static const uint32_t  func_1(void)
{ 
    const uint16_t l_2 = 65527UL;
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
