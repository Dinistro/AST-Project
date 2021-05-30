// Options:   --no-global-variables --concise --seed 843 --output csmith_ex/prog843.c
#include "csmith.h"


static long __undefined;






static const uint16_t  func_1(void);




static const uint16_t  func_1(void)
{ 
    int32_t l_3 = 0x532FE223L;
    int32_t *l_2 = &l_3;
    const uint16_t l_4 = 0x51F2L;
    (*l_2) = 3L;
    return l_4;
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
