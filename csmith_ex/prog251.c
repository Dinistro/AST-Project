// Options:   --no-global-variables --concise --seed 251 --output csmith_ex/prog251.c
#include "csmith.h"


static long __undefined;






static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    int32_t l_3 = 0L;
    int32_t *l_2 = &l_3;
    int32_t *l_4[2];
    int8_t l_5 = 0L;
    uint8_t l_6 = 4UL;
    int16_t l_9 = 0xCE55L;
    int i;
    for (i = 0; i < 2; i++)
        l_4[i] = &l_3;
    --l_6;
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
