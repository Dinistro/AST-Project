// Options:   --no-global-variables --concise --seed 531 --output csmith_ex/prog531.c
#include "csmith.h"


static long __undefined;






static uint8_t  func_1(void);




static uint8_t  func_1(void)
{ 
    int16_t l_2[8] = {0x7A87L,1L,0x7A87L,0x7A87L,1L,0x7A87L,0x7A87L,1L};
    int32_t l_4 = 9L;
    int32_t *l_3 = &l_4;
    int16_t l_5[4];
    int i;
    for (i = 0; i < 4; i++)
        l_5[i] = 0L;
    (*l_3) = l_2[6];
    return l_5[3];
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
