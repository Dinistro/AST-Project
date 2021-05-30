// Options:   --no-global-variables --concise --seed 760 --output csmith_ex/prog760.c
#include "csmith.h"


static long __undefined;






static int64_t  func_1(void);




static int64_t  func_1(void)
{ 
    int32_t l_2 = 0x167FA5C6L;
    for (l_2 = (-28); (l_2 < 10); l_2++)
    { 
        int16_t l_5 = 0xED9AL;
        return l_5;
    }
    return l_2;
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
