// Options:   --no-global-variables --concise --seed 750 --output csmith_ex/prog750.c
#include "csmith.h"


static long __undefined;






static int8_t  func_1(void);




static int8_t  func_1(void)
{ 
    int32_t l_2 = 0x6318D581L;
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
