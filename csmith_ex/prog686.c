// Options:   --no-global-variables --concise --seed 686 --output csmith_ex/prog686.c
#include "csmith.h"


static long __undefined;


union U3 {
   int16_t  f0;
};





static union U3  func_1(void);




static union U3  func_1(void)
{ 
    union U3 l_2 = {0x60D0L};
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
