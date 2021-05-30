// Options:   --no-global-variables --concise --seed 550 --output csmith_ex/prog550.c
#include "csmith.h"


static long __undefined;






static const int64_t  func_1(void);




static const int64_t  func_1(void)
{ 
    int32_t l_3 = 6L;
    int32_t *l_2 = &l_3;
    int32_t *l_4 = &l_3;
    int32_t *l_5[2][5][4] = {{{&l_3,&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3,&l_3}},{{&l_3,&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3,&l_3}}};
    int8_t l_6 = (-1L);
    int16_t l_7[7] = {6L,6L,1L,6L,6L,1L,1L};
    int32_t l_8 = 1L;
    int16_t l_9 = (-6L);
    uint32_t l_10 = 1UL;
    const int64_t l_13 = 0x2C25470E9879A925LL;
    int i, j, k;
    l_10++;
    (*l_4) = 1L;
    return l_13;
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
