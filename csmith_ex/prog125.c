// Options:   --no-global-variables --concise --seed 125 --output csmith_ex/prog125.c
#include "csmith.h"


static long __undefined;






static const int8_t  func_1(void);




static const int8_t  func_1(void)
{ 
    uint8_t l_2 = 0xB6L;
    int32_t l_4 = 0x43D837BCL;
    int32_t *l_3 = &l_4;
    const int32_t l_5 = 0x61C0F806L;
    (*l_3) |= l_2;
    (*l_3) = 0x871D976FL;
    return l_5;
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
