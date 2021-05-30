// Options:   --no-global-variables --concise --seed 342 --output csmith_ex/prog342.c
#include "csmith.h"


static long __undefined;


union U0 {
   int8_t  f0;
   uint32_t  f1;
   int8_t * f2;
   uint8_t  f3;
   uint32_t  f4;
};





static union U0  func_1(void);




static union U0  func_1(void)
{ 
    int32_t l_3 = 0xD8D38330L;
    int32_t *l_2[7][8][1] = {{{&l_3},{&l_3},{(void*)0},{&l_3},{(void*)0},{&l_3},{&l_3},{&l_3}},{{(void*)0},{&l_3},{(void*)0},{&l_3},{&l_3},{&l_3},{(void*)0},{&l_3}},{{(void*)0},{&l_3},{&l_3},{&l_3},{(void*)0},{&l_3},{(void*)0},{&l_3}},{{&l_3},{&l_3},{(void*)0},{&l_3},{(void*)0},{&l_3},{&l_3},{&l_3}},{{(void*)0},{&l_3},{(void*)0},{&l_3},{&l_3},{&l_3},{(void*)0},{&l_3}},{{(void*)0},{&l_3},{&l_3},{&l_3},{(void*)0},{&l_3},{&l_3},{&l_3}},{{&l_3},{&l_3},{&l_3},{&l_3},{&l_3},{&l_3},{&l_3},{&l_3}}};
    uint64_t l_4 = 0xFCA5EB5A40A7B48FLL;
    union U0 l_5 = {0L};
    int i, j, k;
    l_4 = 1L;
    return l_5;
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
