// Options:   --no-global-variables --concise --seed 952 --output csmith_ex/prog952.c
#include "csmith.h"


static long __undefined;


union U2 {
   int64_t  f0;
   const signed f1 : 19;
   uint8_t  f2;
};





static union U2  func_1(void);




static union U2  func_1(void)
{ 
    union U2 l_2 = {0x11151C3C39BA095ALL};
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
