// Options:   --no-global-variables --concise --seed 497 --output csmith_ex/prog497.c
#include "csmith.h"


static long __undefined;






static int8_t  func_1(void);




static int8_t  func_1(void)
{ 
    uint8_t l_2 = 255UL;
    int32_t *l_5 = (void*)0;
    int32_t l_6 = 4L;
    int32_t *l_7 = &l_6;
    int32_t *l_8 = &l_6;
    int32_t *l_9[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t l_10 = 0L;
    uint32_t l_11 = 1UL;
    uint16_t l_16[4][9] = {{0x9458L,0UL,0x78C7L,0x208DL,0x78C7L,0UL,0x9458L,0UL,0x78C7L},{65535UL,0x11AFL,0x11AFL,65535UL,0x11AFL,0x11AFL,65535UL,0x11AFL,0x11AFL},{0x9458L,0UL,0x78C7L,0x208DL,0x78C7L,0UL,0x9458L,0UL,0x78C7L},{65535UL,0x11AFL,0x11AFL,65535UL,0x11AFL,0x11AFL,65535UL,0x11AFL,0x11AFL}};
    uint16_t *l_15 = &l_16[2][5];
    uint8_t l_17 = 0x83L;
    int i, j;
    l_2++;
    ++l_11;
    (*l_8) |= ((void*)0 != &l_6);
    (*l_8) |= (~((*l_15) ^= 1UL));
    return l_17;
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
