// Options:   --no-global-variables --concise --seed 536 --output csmith_ex/prog536.c
#include "csmith.h"


static long __undefined;






static int64_t  func_1(void);




static int64_t  func_1(void)
{ 
    uint64_t l_2 = 4UL;
    return l_2;
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
