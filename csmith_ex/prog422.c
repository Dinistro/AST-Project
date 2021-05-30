// Options:   --no-global-variables --concise --seed 422 --output csmith_ex/prog422.c
#include "csmith.h"


static long __undefined;






static uint16_t  func_1(void);




static uint16_t  func_1(void)
{ 
    uint32_t l_2[9] = {0xCEFA9D19L,0xCEFA9D19L,0xCEFA9D19L,0xCEFA9D19L,0xCEFA9D19L,0xCEFA9D19L,0xCEFA9D19L,0xCEFA9D19L,0xCEFA9D19L};
    int32_t l_3 = 0x73BF38C0L;
    int32_t l_4 = 0x70A50B5FL;
    int i;
    for (l_3 = 6; (l_3 >= 2); l_3 -= 1)
    { 
        l_4 ^= (-1L);
    }
    return l_4;
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
