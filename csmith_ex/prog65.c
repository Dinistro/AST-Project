// Options:   --no-global-variables --concise --seed 65 --output csmith_ex/prog65.c
#include "csmith.h"


static long __undefined;






static const uint8_t  func_1(void);




static const uint8_t  func_1(void)
{ 
    uint8_t l_2[10] = {8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL};
    int32_t l_3[1][10];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
            l_3[i][j] = 0x439CB61DL;
    }
    for (l_3[0][7] = 9; (l_3[0][7] >= 0); l_3[0][7] -= 1)
    { 
        int i;
        if (l_2[l_3[0][7]])
            break;
        return l_2[l_3[0][7]];
    }
    return l_3[0][7];
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
