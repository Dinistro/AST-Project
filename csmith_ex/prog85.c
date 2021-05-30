// Options:   --no-global-variables --concise --seed 85 --output csmith_ex/prog85.c
#include "csmith.h"


static long __undefined;






static uint16_t  func_1(void);




static uint16_t  func_1(void)
{ 
    const int32_t l_2 = (-10L);
    int32_t *l_3 = (void*)0;
    int8_t l_4 = 0x54L;
    int64_t l_5 = 0xB6D0374C7AF5AF8BLL;
    int32_t *l_6 = (void*)0;
    int32_t l_8 = 0xA3A92BD4L;
    int32_t *l_7 = &l_8;
    int32_t l_9 = 0x79F6A715L;
    l_4 = l_2;
    (*l_7) ^= l_5;
    return l_9;
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
