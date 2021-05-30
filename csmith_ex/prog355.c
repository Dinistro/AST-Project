// Options:   --no-global-variables --concise --seed 355 --output csmith_ex/prog355.c
#include "csmith.h"


static long __undefined;






static const int16_t  func_1(void);




static const int16_t  func_1(void)
{ 
    uint32_t l_2[2][8] = {{0UL,0x28FBC781L,0x28FBC781L,0UL,0x51CDCB36L,1UL,0x51CDCB36L,0UL},{0x28FBC781L,0x51CDCB36L,0x28FBC781L,0x64F14790L,1UL,1UL,0x64F14790L,0x28FBC781L}};
    int32_t l_3 = 0xA4D63A88L;
    int32_t l_6 = (-3L);
    int32_t *l_11 = &l_3;
    int32_t **l_10 = &l_11;
    int32_t *l_12 = (void*)0;
    int32_t *l_13 = (void*)0;
    int32_t *l_14 = &l_6;
    const int16_t l_15 = 0x0698L;
    int i, j;
    for (l_3 = 0; (l_3 <= 1); l_3 += 1)
    { 
        int32_t l_8[1];
        int32_t *l_7 = &l_8[0];
        int i;
        for (i = 0; i < 1; i++)
            l_8[i] = (-5L);
        (*l_7) = (l_6 &= (safe_sub_func_uint16_t_u_u(0x8951L, l_2[0][1])));
        for (l_6 = 1; (l_6 >= 0); l_6 -= 1)
        { 
            int i, j;
            (*l_7) &= (!(l_2[l_3][l_6] <= (l_2[l_3][(l_3 + 6)] <= l_2[l_6][(l_6 + 1)])));
        }
    }
    (*l_14) &= (((*l_10) = &l_3) == &l_6);
    return l_15;
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
