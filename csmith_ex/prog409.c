// Options:   --no-global-variables --concise --seed 409 --output csmith_ex/prog409.c
#include "csmith.h"


static long __undefined;


union U1 {
   int32_t  f0;
   const int8_t  f1;
   int8_t * f2;
   const int32_t  f3;
};





static uint64_t  func_1(void);




static uint64_t  func_1(void)
{ 
    union U1 l_4 = {0x64DC9ED9L};
    union U1 *l_3 = &l_4;
    union U1 **l_2 = &l_3;
    (*l_2) = (void*)0;
    return l_4.f1;
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
