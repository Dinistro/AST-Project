// Options:   --no-global-variables --concise --seed 656 --output csmith_ex/prog656.c
#include "csmith.h"


static long __undefined;


struct S1 {
   uint64_t  f0;
   unsigned f1 : 28;
};





static struct S1  func_1(void);




static struct S1  func_1(void)
{ 
    struct S1 l_2 = {6UL,2991};
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
