// Options:   --no-global-variables --concise --seed 751 --output csmith_ex/prog751.c
#include "csmith.h"


static long __undefined;


union U2 {
   uint32_t  f0;
   uint16_t  f1;
   uint32_t  f2;
   unsigned f3 : 15;
   int8_t  f4;
};





static union U2  func_1(void);




static union U2  func_1(void)
{ 
    union U2 l_2[8][3] = {{{0x7F6FB807L},{18446744073709551615UL},{18446744073709551615UL}},{{0xF377CC42L},{5UL},{0xF377CC42L}},{{0x7F6FB807L},{0x7F6FB807L},{18446744073709551615UL}},{{1UL},{5UL},{1UL}},{{0x7F6FB807L},{18446744073709551615UL},{18446744073709551615UL}},{{0xF377CC42L},{5UL},{0xF377CC42L}},{{0x7F6FB807L},{0x7F6FB807L},{18446744073709551615UL}},{{1UL},{5UL},{1UL}}};
    int i, j;
    return l_2[4][2];
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
