// Options:   --no-global-variables --concise --seed 160 --output csmith_ex/prog160.c
#include "csmith.h"


static long __undefined;






static uint16_t  func_1(void);




static uint16_t  func_1(void)
{ 
    uint64_t l_3 = 0xA8D3A18E418A5273LL;
    int32_t l_5 = (-1L);
    int32_t *l_4[7] = {&l_5,&l_5,&l_5,&l_5,&l_5,&l_5,&l_5};
    int64_t l_6 = 0L;
    uint8_t l_7 = 0xE3L;
    int32_t l_8[10] = {(-3L),0x4F230135L,(-3L),0x4F230135L,(-3L),0x4F230135L,(-3L),0x4F230135L,(-3L),0x4F230135L};
    int i;
    l_7 = (l_6 = (~l_3));
    return l_8[7];
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
