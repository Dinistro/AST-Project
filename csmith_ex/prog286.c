// Options:   --no-global-variables --concise --seed 286 --output csmith_ex/prog286.c
#include "csmith.h"


static long __undefined;






static uint64_t  func_1(void);




static uint64_t  func_1(void)
{ 
    uint64_t l_2[6] = {0xD453606DE713A473LL,8UL,0xD453606DE713A473LL,0xD453606DE713A473LL,8UL,0xD453606DE713A473LL};
    int32_t l_3 = 1L;
    int i;
    for (l_3 = 5; (l_3 >= 0); l_3 -= 1)
    { 
        int i;
        return l_2[l_3];
    }
    return l_3;
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
