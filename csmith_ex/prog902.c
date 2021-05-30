// Options:   --no-global-variables --concise --seed 902 --output csmith_ex/prog902.c
#include "csmith.h"


static long __undefined;






static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    uint64_t l_2[9] = {0x2B57E8B72FD4914DLL,0x2B57E8B72FD4914DLL,0x2B57E8B72FD4914DLL,0x2B57E8B72FD4914DLL,0x2B57E8B72FD4914DLL,0x2B57E8B72FD4914DLL,0x2B57E8B72FD4914DLL,0x2B57E8B72FD4914DLL,0x2B57E8B72FD4914DLL};
    int32_t l_3 = 0xEFA9D19AL;
    int i;
    for (l_3 = 8; (l_3 >= 0); l_3 -= 1)
    { 
        int i;
        if (l_2[l_3])
            break;
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
