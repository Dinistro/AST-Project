// Options:   --no-global-variables --concise --seed 771 --output csmith_ex/prog771.c
#include "csmith.h"


static long __undefined;






static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    int8_t l_2[8][10] = {{0x3EL,5L,5L,1L,0xD8L,(-7L),5L,1L,1L,5L},{0x3EL,0xD8L,5L,5L,0xD8L,0x3EL,5L,5L,1L,0xD8L},{0x3EL,5L,5L,1L,0xD8L,(-7L),5L,1L,1L,5L},{0x3EL,0xD8L,5L,5L,0xD8L,0x3EL,5L,5L,1L,0xD8L},{0x3EL,5L,5L,1L,0xD8L,(-7L),0x79L,0xD8L,0xD8L,0x79L},{(-9L),0xEEL,5L,5L,0xEEL,(-9L),0x79L,5L,0xD8L,0xEEL},{(-9L),0x79L,5L,0xD8L,0xEEL,(-9L),0x79L,0xD8L,0xD8L,0x79L},{(-9L),0xEEL,5L,5L,0xEEL,(-9L),0x79L,5L,0xD8L,0xEEL}};
    int32_t l_3 = 0xC7979B38L;
    int32_t l_4 = 1L;
    int i, j;
    for (l_3 = 0; l_3 < 8; l_3 += 1)
    {
        for (l_4 = 0; l_4 < 10; l_4 += 1)
        {
            l_2[l_3][l_4] = 0x4EL;
        }
    }
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
