// Options:   --no-global-variables --concise --seed 347 --output csmith_ex/prog347.c
#include "csmith.h"


static long __undefined;


union U1 {
   int32_t  f0;
   int32_t  f1;
   const unsigned f2 : 24;
   uint64_t  f3;
   const int64_t  f4;
};





static uint16_t  func_1(void);
static uint8_t  func_7(uint8_t  p_8, int16_t  p_9);




static uint16_t  func_1(void)
{ 
    uint8_t l_4 = 0x60L;
    int32_t l_25[7][2][9] = {{{0x77562375L,0L,0x151CD25BL,(-8L),0x151CD25BL,0L,0x77562375L,0xF844BA92L,1L},{0x73637828L,1L,1L,0x71D0C0B8L,0x5A27557BL,1L,0x5A27557BL,0x71D0C0B8L,1L}},{{(-8L),(-8L),0x2F1FCC10L,0x26067BBDL,1L,0x51D77F17L,0L,0xF844BA92L,0L},{1L,0x433AC254L,1L,1L,0x433AC254L,1L,2L,0x86FA66FAL,0L}},{{0xF844BA92L,0x9ED7D413L,0x2F1FCC10L,0xD907C4E7L,0x77562375L,0x77562375L,0xD907C4E7L,0x2F1FCC10L,0x9ED7D413L},{0x433AC254L,(-1L),0xCCE1CC0EL,1L,0x86FA66FAL,1L,0x71D0C0B8L,0x71D0C0B8L,1L}},{{0x51D77F17L,0L,0xF844BA92L,0L,0x51D77F17L,1L,0x26067BBDL,0x2F1FCC10L,(-8L)},{2L,(-1L),1L,1L,0x73637828L,1L,1L,(-1L),2L}},{{0x9ED7D413L,1L,0x151CD25BL,0x51D77F17L,0x2F1FCC10L,1L,0xD907C4E7L,1L,0x2F1FCC10L},{1L,0L,0L,1L,1L,1L,0x5A27557BL,0xCCE1CC0EL,0x86FA66FAL}},{{0x9ED7D413L,0x2F1FCC10L,0xD907C4E7L,0x77562375L,0x77562375L,0xD907C4E7L,0x2F1FCC10L,0x9ED7D413L,0xF844BA92L},{2L,0x433AC254L,0x86FA66FAL,0x71D0C0B8L,1L,0xCCE1CC0EL,0xCCE1CC0EL,1L,0x71D0C0B8L}},{{0x51D77F17L,0x26067BBDL,0x51D77F17L,1L,0x2F1FCC10L,0x77562375L,2L,0xF844BA92L,0xF844BA92L},{0L,2L,0x73637828L,0xCCE1CC0EL,0x73637828L,2L,0L,0x5A27557BL,0x86FA66FAL}}};
    union U1 l_26 = {1L};
    int64_t l_28 = 0x018177C418639784LL;
    int64_t *l_27 = &l_28;
    int32_t l_30 = 8L;
    int32_t *l_29 = &l_30;
    uint16_t l_31[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_31[i] = 0x36FEL;
    (*l_29) &= ((((*l_27) = ((l_25[2][1][0] = ((safe_add_func_uint32_t_u_u(l_4, (safe_mod_func_uint8_t_u_u(func_7(l_4, l_4), (safe_add_func_int64_t_s_s((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(func_7(l_4, l_4), (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(l_4, 0)), 1)))), ((((((safe_sub_func_uint64_t_u_u(((l_4 < l_4) < l_25[6][1][7]), 0x9032F82966B9117ALL)) == l_4) ^ (-4L)) > 0xC1A2C9DBE4FCD58FLL) , l_26) , l_25[4][0][3]))), l_26.f0)), 0x62C90ACEFCE06DFELL)))))) == l_26.f1)) , l_26.f2)) , l_26.f2) | 0xF90BF567D7132C26LL);
    return l_31[0];
}



static uint8_t  func_7(uint8_t  p_8, int16_t  p_9)
{ 
    uint32_t l_10 = 0x51D52AA0L;
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
