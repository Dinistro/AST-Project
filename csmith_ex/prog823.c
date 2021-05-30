// Options:   --no-global-variables --concise --seed 823 --output csmith_ex/prog823.c
#include "csmith.h"


static long __undefined;






static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    int32_t l_3 = 0x85C6F1BFL;
    int32_t *l_2 = &l_3;
    int32_t *l_4 = &l_3;
    int32_t *l_5 = &l_3;
    int32_t *l_6 = &l_3;
    int32_t *l_7 = &l_3;
    int32_t *l_8 = (void*)0;
    int32_t *l_9 = &l_3;
    int32_t *l_10[8] = {&l_3,(void*)0,&l_3,&l_3,(void*)0,&l_3,&l_3,(void*)0};
    uint8_t l_11 = 8UL;
    int8_t l_14[4] = {0xFBL,0xFBL,0xFBL,0xFBL};
    int i;
    --l_11;
    return l_14[1];
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
