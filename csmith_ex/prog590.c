// Options:   --no-global-variables --concise --seed 590 --output csmith_ex/prog590.c
#include "csmith.h"


static long __undefined;






static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    int8_t l_2 = 1L;
    int32_t l_4 = 0xA60D0058L;
    int32_t *l_3[8][4][3] = {{{&l_4,&l_4,&l_4},{(void*)0,(void*)0,&l_4},{&l_4,(void*)0,&l_4},{&l_4,&l_4,(void*)0}},{{&l_4,&l_4,&l_4},{&l_4,&l_4,(void*)0},{&l_4,&l_4,&l_4},{(void*)0,(void*)0,&l_4}},{{(void*)0,&l_4,&l_4},{&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4}},{{&l_4,&l_4,&l_4},{&l_4,(void*)0,&l_4},{(void*)0,&l_4,&l_4},{&l_4,&l_4,&l_4}},{{&l_4,&l_4,&l_4},{&l_4,(void*)0,(void*)0},{&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4}},{{&l_4,(void*)0,&l_4},{&l_4,&l_4,&l_4},{(void*)0,&l_4,&l_4},{(void*)0,&l_4,&l_4}},{{&l_4,&l_4,&l_4},{&l_4,&l_4,(void*)0},{(void*)0,&l_4,&l_4},{(void*)0,&l_4,&l_4}},{{&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4}}};
    int32_t l_5 = 0x26A7609FL;
    int32_t **l_6 = &l_3[3][0][1];
    uint32_t l_7 = 1UL;
    int i, j, k;
    l_5 = l_2;
    (*l_6) = &l_4;
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
