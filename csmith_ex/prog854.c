// Options:   --no-global-variables --concise --seed 854 --output csmith_ex/prog854.c
#include "csmith.h"


static long __undefined;


struct S1 {
   uint32_t  f0;
   const int64_t  f1;
};





static struct S1  func_1(void);




static struct S1  func_1(void)
{ 
    struct S1 l_2 = {0xC25FCC58L,-5L};
    return l_2;
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
