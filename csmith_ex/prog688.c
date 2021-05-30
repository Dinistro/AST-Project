// Options:   --no-global-variables --concise --seed 688 --output csmith_ex/prog688.c
#include "csmith.h"


static long __undefined;


union U3 {
   int8_t * f0;
   int64_t  f1;
};





static union U3  func_1(void);




static union U3  func_1(void)
{ 
    int8_t l_3 = 1L;
    const int8_t * const l_2 = &l_3;
    int32_t l_5 = 7L;
    int32_t *l_4 = &l_5;
    union U3 l_6[4] = {{0},{0},{0},{0}};
    int i;
    (*l_4) ^= (l_2 == &l_3);
    return l_6[3];
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
