// Options:   --no-global-variables --concise --seed 212 --output csmith_ex/prog212.c
#include "csmith.h"


static long __undefined;






static uint64_t  func_1(void);
static int32_t  func_2(uint64_t  p_3, uint32_t  p_4);




static uint64_t  func_1(void)
{ 
    uint64_t l_5[10][8] = {{8UL,0x91C5534BF8F0AA6ELL,18446744073709551607UL,0xCF415D7249AAED6BLL,0xCF415D7249AAED6BLL,18446744073709551607UL,0x91C5534BF8F0AA6ELL,8UL},{8UL,0x91C5534BF8F0AA6ELL,18446744073709551607UL,0xCF415D7249AAED6BLL,0xCF415D7249AAED6BLL,18446744073709551607UL,0x91C5534BF8F0AA6ELL,8UL},{8UL,0x91C5534BF8F0AA6ELL,18446744073709551607UL,0xCF415D7249AAED6BLL,0xCF415D7249AAED6BLL,18446744073709551607UL,0x91C5534BF8F0AA6ELL,8UL},{8UL,0x91C5534BF8F0AA6ELL,18446744073709551607UL,0xCF415D7249AAED6BLL,0xCF415D7249AAED6BLL,18446744073709551607UL,0x91C5534BF8F0AA6ELL,8UL},{8UL,0x91C5534BF8F0AA6ELL,18446744073709551607UL,0xCF415D7249AAED6BLL,0xCF415D7249AAED6BLL,18446744073709551607UL,0x91C5534BF8F0AA6ELL,8UL},{8UL,0x91C5534BF8F0AA6ELL,18446744073709551607UL,0xCF415D7249AAED6BLL,0xCF415D7249AAED6BLL,18446744073709551607UL,0x91C5534BF8F0AA6ELL,8UL},{8UL,0x91C5534BF8F0AA6ELL,18446744073709551607UL,0xCF415D7249AAED6BLL,0xCF415D7249AAED6BLL,18446744073709551607UL,0x91C5534BF8F0AA6ELL,8UL},{8UL,0x91C5534BF8F0AA6ELL,18446744073709551607UL,0xCF415D7249AAED6BLL,0xCF415D7249AAED6BLL,18446744073709551607UL,0x91C5534BF8F0AA6ELL,8UL},{8UL,0x91C5534BF8F0AA6ELL,18446744073709551607UL,0xCF415D7249AAED6BLL,0xCF415D7249AAED6BLL,18446744073709551607UL,0x91C5534BF8F0AA6ELL,8UL},{8UL,0x91C5534BF8F0AA6ELL,18446744073709551607UL,0xCF415D7249AAED6BLL,0xCF415D7249AAED6BLL,18446744073709551607UL,0x91C5534BF8F0AA6ELL,8UL}};
    int32_t l_12[7][3] = {{0L,(-5L),0L},{0x639E6A41L,0xC5051DD2L,0x66193FE6L},{0L,0L,0x66193FE6L},{0xC5051DD2L,0x639E6A41L,0L},{(-5L),0L,(-5L)},{(-5L),0xC5051DD2L,0L},{0xC5051DD2L,(-5L),(-5L)}};
    int32_t *l_11 = &l_12[2][2];
    uint32_t l_13[7];
    int i, j;
    for (i = 0; i < 7; i++)
        l_13[i] = 18446744073709551606UL;
    (*l_11) = func_2(l_5[3][1], l_5[3][1]);
    return l_13[3];
}



static int32_t  func_2(uint64_t  p_3, uint32_t  p_4)
{ 
    int32_t l_7 = 0xB653B1DAL;
    int32_t *l_6 = &l_7;
    int32_t l_10 = (-5L);
    (*l_6) = 0xA6B42BE1L;
    (*l_6) = (safe_mod_func_int8_t_s_s(0x67L, (*l_6)));
    return l_10;
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
