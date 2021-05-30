// Options:   --no-global-variables --concise --seed 317 --output csmith_ex/prog317.c
#include "csmith.h"


static long __undefined;


union U4 {
   int32_t  f0;
   int32_t  f1;
   unsigned f2 : 19;
   uint16_t  f3;
};





static union U4  func_1(void);




static union U4  func_1(void)
{ 
    union U4 l_2 = {0L};
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
