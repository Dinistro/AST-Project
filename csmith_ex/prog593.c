// Options:   --no-global-variables --concise --seed 593 --output csmith_ex/prog593.c
#include "csmith.h"


static long __undefined;






static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    uint8_t l_2[9][6] = {{0x3EL,0x98L,0x3EL,0x3EL,0x98L,0x3EL},{0x3EL,0x98L,0x3EL,0x3EL,0x98L,0x3EL},{0x3EL,0x98L,0x3EL,0x3EL,0x98L,0x3EL},{0x3EL,0x98L,0x3EL,0x3EL,0x98L,0x3EL},{0x3EL,0x98L,0x3EL,0x3EL,0x98L,0x3EL},{0x3EL,0x98L,0x3EL,0x3EL,0x98L,0x3EL},{0x3EL,0x98L,0x3EL,0x3EL,0x98L,0x3EL},{0x3EL,0x98L,0x3EL,0x3EL,0x3EL,0x41L},{0x41L,0x3EL,0x41L,0x41L,0x3EL,0x41L}};
    int32_t l_4 = 0x73948B08L;
    int32_t *l_3 = &l_4;
    uint32_t l_5 = 0xBA028EA3L;
    uint8_t l_6 = 1UL;
    int i, j;
    l_5 = ((*l_3) = l_2[5][0]);
    return l_6;
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
