// Options:   --no-global-variables --concise --seed 311 --output csmith_ex/prog311.c
#include "csmith.h"


static long __undefined;






static int16_t  func_1(void);




static int16_t  func_1(void)
{ 
    int32_t l_4 = 0L;
    int32_t *l_3 = &l_4;
    int32_t **l_2 = &l_3;
    (*l_2) = (void*)0;
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
