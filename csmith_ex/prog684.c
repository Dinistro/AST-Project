// Options:   --no-global-variables --concise --seed 684 --output csmith_ex/prog684.c
#include "csmith.h"


static long __undefined;






static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    uint8_t l_2[5];
    int32_t l_4 = 0x4BC662A2L;
    int32_t *l_3 = &l_4;
    int16_t l_5 = 0x8DD4L;
    int i;
    for (i = 0; i < 5; i++)
        l_2[i] = 0x58L;
    (*l_3) = (l_2[3] , (-1L));
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
