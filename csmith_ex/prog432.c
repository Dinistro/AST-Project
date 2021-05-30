// Options:   --no-global-variables --concise --seed 432 --output csmith_ex/prog432.c
#include "csmith.h"


static long __undefined;






static int16_t  func_1(void);




static int16_t  func_1(void)
{ 
    int32_t l_2[7][9] = {{0xF8F576C5L,0xCF54C3C6L,0xF8F576C5L,0xF8F576C5L,0xCF54C3C6L,0xF8F576C5L,0xF8F576C5L,0xCF54C3C6L,0xF8F576C5L},{(-1L),0x65352F76L,(-1L),0x3126FF23L,1L,0x3126FF23L,(-1L),0x65352F76L,(-1L)},{0xF8F576C5L,0xCF54C3C6L,0xF8F576C5L,0xF8F576C5L,0xCF54C3C6L,0xF8F576C5L,0xF8F576C5L,0xCF54C3C6L,0xF8F576C5L},{(-1L),0x65352F76L,(-1L),0x3126FF23L,1L,0x3126FF23L,(-1L),0x65352F76L,(-1L)},{0xF8F576C5L,0xCF54C3C6L,0xF8F576C5L,0xF8F576C5L,0xCF54C3C6L,0xF8F576C5L,0xF8F576C5L,0xCF54C3C6L,0xF8F576C5L},{(-1L),0x3126FF23L,0xCCCDDD1DL,0x3B6182EAL,(-1L),0x3B6182EAL,0xCCCDDD1DL,0x3126FF23L,0xCCCDDD1DL},{1L,0xF8F576C5L,1L,1L,0xF8F576C5L,1L,1L,0xF8F576C5L,1L}};
    int32_t l_9 = 0x6C218E99L;
    int32_t *l_15 = &l_2[2][0];
    int32_t **l_14 = &l_15;
    int64_t l_17 = (-7L);
    int i, j;
    for (l_2[2][0] = (-1); (l_2[2][0] < (-27)); --l_2[2][0])
    { 
        int32_t l_6 = 0xC9C3D069L;
        int32_t *l_5 = &l_6;
        int32_t *l_7 = (void*)0;
        int32_t *l_8 = &l_6;
        int32_t *l_10[3];
        uint16_t l_11 = 0xF985L;
        int32_t **l_16 = &l_7;
        int i;
        for (i = 0; i < 3; i++)
            l_10[i] = &l_6;
        l_11--;
        l_16 = l_14;
        (*l_8) = 0xA5F27A41L;
        if ((*l_15))
            continue;
    }
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
