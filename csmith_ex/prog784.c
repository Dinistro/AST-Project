// Options:   --no-global-variables --concise --seed 784 --output csmith_ex/prog784.c
#include "csmith.h"


static long __undefined;






static uint64_t  func_1(void);




static uint64_t  func_1(void)
{ 
    int32_t l_3 = 3L;
    int32_t *l_2 = &l_3;
    int32_t **l_4[1][9];
    int32_t *l_5 = (void*)0;
    int32_t *l_6 = &l_3;
    uint64_t l_7[5];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
            l_4[i][j] = &l_2;
    }
    for (i = 0; i < 5; i++)
        l_7[i] = 0xDCBD5F5AB95DFEA4LL;
    l_5 = l_2;
    l_6 = (void*)0;
    return l_7[1];
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
