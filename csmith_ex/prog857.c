// Options:   --no-global-variables --concise --seed 857 --output csmith_ex/prog857.c
#include "csmith.h"


static long __undefined;






static uint64_t  func_1(void);




static uint64_t  func_1(void)
{ 
    int32_t l_3 = 0xE1D925B0L;
    int32_t *l_2 = &l_3;
    int32_t l_5 = 0x45DB34E6L;
    int32_t *l_4 = &l_5;
    int64_t l_6 = 0L;
    (*l_4) = ((*l_2) |= 0x61F9C28AL);
    return l_6;
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
