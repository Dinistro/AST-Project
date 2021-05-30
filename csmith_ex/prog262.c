// Options:   --no-global-variables --concise --seed 262 --output csmith_ex/prog262.c
#include "csmith.h"


static long __undefined;






static const int32_t  func_1(void);




static const int32_t  func_1(void)
{ 
    const int32_t *l_3 = (void*)0;
    const int32_t **l_2 = &l_3;
    const uint64_t l_4 = 0xBEFA5F9C7104272BLL;
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
