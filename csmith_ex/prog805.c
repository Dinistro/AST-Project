// Options:   --no-global-variables --concise --seed 805 --output csmith_ex/prog805.c
#include "csmith.h"


static long __undefined;






static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    int32_t l_3 = 0x0B4FFB87L;
    int32_t *l_2 = &l_3;
    int32_t l_4 = 0x2CB51DBAL;
    int32_t l_5 = 0x43250E6DL;
    int32_t *l_6 = &l_5;
    int32_t *l_7[2][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_4,&l_4,&l_4,&l_4,&l_4,&l_4,&l_4,&l_4,&l_4}};
    int64_t l_8 = 4L;
    uint8_t l_9 = 0xDBL;
    int8_t l_12 = 0xC9L;
    int i, j;
    ++l_9;
    return l_12;
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
