// Options:   --no-global-variables --concise --seed 107 --output csmith_ex/prog107.c
#include "csmith.h"


static long __undefined;






static uint8_t  func_1(void);




static uint8_t  func_1(void)
{ 
    int32_t l_3 = 0L;
    int32_t *l_2 = &l_3;
    uint8_t l_4[5][3][1] = {{{255UL},{0xADL},{255UL}},{{0xADL},{255UL},{0xADL}},{{255UL},{0xADL},{255UL}},{{0xADL},{255UL},{0xADL}},{{255UL},{0xADL},{255UL}}};
    int i, j, k;
    (*l_2) |= 1L;
    return l_4[4][0][0];
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
