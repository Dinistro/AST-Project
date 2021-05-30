// Options:   --no-global-variables --concise --seed 18 --output csmith_ex/prog18.c
#include "csmith.h"


static long __undefined;






static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    int16_t l_2[4][5][8] = {{{(-1L),0x1705L,(-4L),0x161DL,1L,0L,3L,0x1F6FL},{3L,6L,(-4L),6L,6L,(-4L),6L,3L},{1L,0L,(-1L),1L,5L,0x1705L,(-1L),(-4L)},{(-1L),0x161DL,5L,(-1L),1L,0x1705L,1L,(-1L)},{6L,0L,6L,(-1L),0x1705L,(-4L),0x161DL,1L}},{{(-1L),6L,1L,(-1L),(-1L),0L,0x161DL,0x161DL},{1L,0x161DL,(-1L),(-1L),0x161DL,1L,(-4L),0x1F6FL},{1L,(-1L),(-4L),(-4L),3L,0L,6L,0L},{0L,0x1F6FL,0L,(-4L),(-1L),(-4L),0L,0x1F6FL},{6L,(-1L),5L,(-1L),0L,6L,0L,0x161DL}},{{(-1L),(-1L),0x1F6FL,5L,6L,0L,0L,6L},{6L,5L,5L,6L,0x1F6FL,0L,0L,1L},{0x1F6FL,0L,0L,1L,(-1L),1L,6L,(-1L)},{(-4L),0L,(-4L),3L,(-4L),0L,(-4L),(-1L)},{(-1L),5L,(-1L),0L,6L,0L,0x161DL,(-1L)}},{{(-1L),(-1L),3L,(-1L),6L,6L,(-1L),3L},{(-1L),(-1L),1L,(-1L),(-4L),(-4L),3L,0L},{(-4L),0x1F6FL,(-1L),(-4L),(-1L),0L,5L,0L},{0x1F6FL,(-1L),6L,(-1L),0x1F6FL,1L,1L,3L},{6L,0x161DL,(-1L),(-1L),6L,(-4L),(-1L),(-1L)}}};
    int i, j, k;
    l_2[0][2][6] &= (-7L);
    return l_2[0][2][6];
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
