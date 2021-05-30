// Options:   --no-global-variables --concise --seed 812 --output csmith_ex/prog812.c
#include "csmith.h"


static long __undefined;


struct S0 {
   unsigned f0 : 4;
};





static uint8_t  func_1(void);




static uint8_t  func_1(void)
{ 
    struct S0 l_2 = {0};
    struct S0 *l_3[10];
    struct S0 l_4 = {3};
    int i;
    for (i = 0; i < 10; i++)
        l_3[i] = &l_2;
    l_4 = l_2;
    return l_2.f0;
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
