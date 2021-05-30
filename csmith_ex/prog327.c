// Options:   --no-global-variables --concise --seed 327 --output csmith_ex/prog327.c
#include "csmith.h"


static long __undefined;






static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    int64_t l_2[5][10] = {{0x9B8BC588E1B61BABLL,0L,0x9B8BC588E1B61BABLL,0x9B8BC588E1B61BABLL,0L,0x9B8BC588E1B61BABLL,0x9B8BC588E1B61BABLL,0L,0x9B8BC588E1B61BABLL,0x9B8BC588E1B61BABLL},{0L,0L,6L,0L,0L,6L,0L,0L,6L,0L},{0L,0x9B8BC588E1B61BABLL,0x9B8BC588E1B61BABLL,0L,0x9B8BC588E1B61BABLL,0x9B8BC588E1B61BABLL,0L,0x9B8BC588E1B61BABLL,0x9B8BC588E1B61BABLL,0L},{0x9B8BC588E1B61BABLL,0L,0x9B8BC588E1B61BABLL,0x9B8BC588E1B61BABLL,0L,0x9B8BC588E1B61BABLL,0x9B8BC588E1B61BABLL,0L,0x9B8BC588E1B61BABLL,0x9B8BC588E1B61BABLL},{0L,0L,6L,0L,0L,6L,0x9B8BC588E1B61BABLL,0x9B8BC588E1B61BABLL,0L,0x9B8BC588E1B61BABLL}};
    int i, j;
    l_2[3][5] = 8L;
    return l_2[0][3];
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
