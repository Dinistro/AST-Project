// Options:   --no-global-variables --concise --seed 568 --output csmith_ex/prog568.c
#include "csmith.h"


static long __undefined;






static uint8_t  func_1(void);




static uint8_t  func_1(void)
{ 
    int32_t l_3 = 0x61E3FF14L;
    int32_t *l_2 = &l_3;
    int32_t *l_4 = (void*)0;
    int32_t *l_5 = &l_3;
    int32_t *l_6 = (void*)0;
    int32_t *l_7 = (void*)0;
    int32_t *l_8[3];
    uint8_t l_9 = 255UL;
    int32_t l_12 = (-1L);
    int32_t l_13[6][2][5] = {{{0x8F04B746L,0x475AC351L,0x8F04B746L,0x8F04B746L,0x475AC351L},{0x475AC351L,0x8F04B746L,0x8F04B746L,0x475AC351L,0x8F04B746L}},{{0x475AC351L,0x475AC351L,(-1L),0x475AC351L,0x475AC351L},{0x8F04B746L,0x475AC351L,0x8F04B746L,0x8F04B746L,0x475AC351L}},{{0x475AC351L,0x8F04B746L,0x8F04B746L,0x475AC351L,0x8F04B746L},{0x475AC351L,0x475AC351L,(-1L),0x475AC351L,0x475AC351L}},{{0x8F04B746L,0x475AC351L,0x8F04B746L,0x8F04B746L,0x475AC351L},{0x475AC351L,0x8F04B746L,0x8F04B746L,0x475AC351L,0x8F04B746L}},{{0x475AC351L,0x475AC351L,(-1L),0x475AC351L,0x475AC351L},{0x8F04B746L,0x8F04B746L,(-1L),(-1L),0x8F04B746L}},{{0x8F04B746L,(-1L),(-1L),0x8F04B746L,(-1L)},{0x8F04B746L,0x8F04B746L,0x475AC351L,0x8F04B746L,0x8F04B746L}}};
    uint32_t l_14 = 0UL;
    int32_t l_17 = (-3L);
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_8[i] = &l_3;
    l_9++;
    for (l_9 = 0; (l_9 <= 2); l_9 += 1)
    { 
        int i;
        (*l_5) = (*l_2);
    }
    --l_14;
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
