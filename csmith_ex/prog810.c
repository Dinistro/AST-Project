// Options:   --no-global-variables --concise --seed 810 --output csmith_ex/prog810.c
#include "csmith.h"


static long __undefined;






static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    uint32_t l_2 = 18446744073709551609UL;
    int32_t l_4 = 1L;
    int32_t *l_3[7] = {&l_4,&l_4,&l_4,&l_4,&l_4,&l_4,&l_4};
    uint16_t l_5 = 0xE63EL;
    uint32_t l_6 = 0xB44CF592L;
    int i;
    l_5 |= l_2;
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
