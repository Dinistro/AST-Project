// Options:   --no-global-variables --concise --seed 336 --output csmith_ex/prog336.c
#include "csmith.h"


static long __undefined;






static int64_t  func_1(void);




static int64_t  func_1(void)
{ 
    int32_t l_3 = 0xACD40988L;
    int32_t *l_2[7];
    uint32_t l_4 = 0x587C7AB8L;
    uint32_t l_7 = 0x8C9A01C7L;
    int i;
    for (i = 0; i < 7; i++)
        l_2[i] = &l_3;
    l_4--;
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
