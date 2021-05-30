// Options:   --no-global-variables --concise --seed 945 --output csmith_ex/prog945.c
#include "csmith.h"


static long __undefined;






static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    int64_t l_2 = 0xCA0029BF390197F0LL;
    int32_t l_4[8] = {0xA1220985L,0xA1220985L,0xA1220985L,0xA1220985L,0xA1220985L,0xA1220985L,0xA1220985L,0xA1220985L};
    int32_t *l_3 = &l_4[3];
    int32_t l_5 = (-7L);
    int i;
    (*l_3) = (l_2 >= 1L);
    return l_5;
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
