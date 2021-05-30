// Options:   --no-global-variables --concise --seed 466 --output csmith_ex/prog466.c
#include "csmith.h"


static long __undefined;






static const uint16_t  func_1(void);




static const uint16_t  func_1(void)
{ 
    const int32_t l_4 = 0L;
    const int32_t *l_3 = &l_4;
    const int32_t **l_2 = &l_3;
    int32_t l_6 = 0L;
    int32_t *l_5 = &l_6;
    int32_t *l_7 = &l_6;
    int32_t *l_8 = &l_6;
    int32_t *l_9 = &l_6;
    int32_t *l_10 = &l_6;
    int32_t *l_11[7];
    int32_t l_12 = (-6L);
    uint32_t l_13 = 8UL;
    uint32_t l_16[2][3][10] = {{{0x6221EB1EL,0x6158E9D2L,4294967294UL,1UL,1UL,4294967294UL,0x6158E9D2L,0x6221EB1EL,0x6221EB1EL,0x6158E9D2L},{0x6221EB1EL,1UL,0x6158E9D2L,0x6158E9D2L,1UL,0x6221EB1EL,4294967294UL,4294967294UL,0x6221EB1EL,1UL},{1UL,0x6158E9D2L,0x6158E9D2L,1UL,0x6221EB1EL,4294967294UL,4294967294UL,0x6221EB1EL,1UL,0x6158E9D2L}},{{1UL,1UL,4294967294UL,0x6158E9D2L,0x6221EB1EL,0x6221EB1EL,0x6158E9D2L,4294967294UL,1UL,1UL},{0x6221EB1EL,0x6158E9D2L,4294967294UL,1UL,1UL,4294967294UL,0x6158E9D2L,0x6221EB1EL,0x6221EB1EL,0x6158E9D2L},{0x6221EB1EL,1UL,0x6158E9D2L,0x6158E9D2L,1UL,0x6221EB1EL,4294967294UL,4294967294UL,0x6221EB1EL,1UL}}};
    int64_t l_19 = 0L;
    int16_t l_20 = 0x2D8BL;
    int16_t l_21 = 0L;
    uint16_t l_22 = 0xCD96L;
    const uint32_t l_25[2][9][1] = {{{0x1AF31AB9L},{0x4F54D63FL},{0x4F54D63FL},{0x1AF31AB9L},{0x4F54D63FL},{0x4F54D63FL},{0x1AF31AB9L},{0x4F54D63FL},{0x4F54D63FL}},{{0x1AF31AB9L},{0x4F54D63FL},{0x4F54D63FL},{0x1AF31AB9L},{0x4F54D63FL},{0x4F54D63FL},{0x1AF31AB9L},{0x4F54D63FL},{0x4F54D63FL}}};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_11[i] = &l_6;
    (*l_2) = (void*)0;
    l_13++;
    l_16[0][1][4]++;
    --l_22;
    return l_25[1][3][0];
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
