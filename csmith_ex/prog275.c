// Options:   --no-global-variables --concise --seed 275 --output csmith_ex/prog275.c
#include "csmith.h"


static long __undefined;


union U1 {
   signed f0 : 29;
   const uint8_t  f1;
   int8_t * f2;
   uint16_t  f3;
};





static union U1  func_1(void);




static union U1  func_1(void)
{ 
    uint32_t l_2 = 0x1AB6EC79L;
    union U1 l_5 = {3L};
    ++l_2;
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
