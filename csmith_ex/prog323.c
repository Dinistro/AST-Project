// Options:   --no-global-variables --concise --seed 323 --output csmith_ex/prog323.c
#include "csmith.h"


static long __undefined;






static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    const int32_t l_3 = (-1L);
    const int32_t *l_2[4][1];
    int32_t l_6 = 0x0F680299L;
    int32_t *l_5 = &l_6;
    int32_t **l_4 = &l_5;
    int32_t l_7 = 1L;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_2[i][j] = &l_3;
    }
    (*l_4) = l_2[3][0];
    return l_7;
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
