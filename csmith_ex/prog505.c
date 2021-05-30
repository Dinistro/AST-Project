// Options:   --no-global-variables --concise --seed 505 --output csmith_ex/prog505.c
#include "csmith.h"


static long __undefined;






static int16_t  func_1(void);




static int16_t  func_1(void)
{ 
    int16_t l_2[6] = {0x2887L,0x7D45L,0x2887L,0x2887L,0x7D45L,0x2887L};
    int32_t l_3[9][9] = {{(-1L),(-3L),0L,0x4FC2285FL,0xE7CCC895L,1L,1L,0xE7CCC895L,0x4FC2285FL},{0x5872D9EEL,1L,0x5872D9EEL,0L,2L,(-1L),(-9L),(-9L),(-1L)},{0L,(-3L),(-1L),(-3L),0L,0x4FC2285FL,0xE7CCC895L,1L,1L},{0x9ED9BA07L,0xB8E9646BL,(-1L),0L,(-1L),0xB8E9646BL,0x9ED9BA07L,2L,(-7L)},{(-7L),(-5L),(-3L),0x4FC2285FL,(-5L),(-5L),0xC13FE662L,0L,(-1L)},{3L,0xB8E9646BL,0x5872D9EEL,(-7L),0L,(-9L),0L,(-7L),0x5872D9EEL},{1L,1L,0xE7CCC895L,0x4FC2285FL,0L,(-3L),(-1L),(-3L),0L},{3L,0L,0L,3L,3L,(-1L),0x9ED9BA07L,0x5872D9EEL,0x9ED9BA07L},{(-1L),(-5L),0xE7CCC895L,0xE7CCC895L,(-5L),(-1L),(-5L),1L,(-7L)}};
    int i, j;
    for (l_3[6][5] = 0; l_3[6][5] < 6; l_3[6][5] += 1)
    {
        l_2[l_3[6][5]] = 0x3785L;
    }
    return l_3[3][8];
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
