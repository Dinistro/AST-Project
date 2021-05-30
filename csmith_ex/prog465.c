// Options:   --no-global-variables --concise --seed 465 --output csmith_ex/prog465.c
#include "csmith.h"


static long __undefined;


union U1 {
   signed f0 : 5;
   int32_t  f1;
};





static union U1  func_1(void);




static union U1  func_1(void)
{ 
    uint64_t l_2 = 18446744073709551615UL;
    int32_t l_3 = 6L;
    int32_t *l_4 = &l_3;
    int32_t *l_5 = (void*)0;
    int32_t *l_6 = &l_3;
    int32_t *l_7 = &l_3;
    int32_t *l_8[6] = {&l_3,(void*)0,&l_3,&l_3,(void*)0,&l_3};
    uint64_t l_9 = 0x35DB5A26CDEE94CCLL;
    union U1 l_12 = {0x2AC30BCAL};
    int i;
    l_2 ^= 0x985A9576L;
    ++l_9;
    (*l_4) |= 0xC51AC06EL;
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
