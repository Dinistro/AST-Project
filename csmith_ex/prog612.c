// Options:   --no-global-variables --concise --seed 612 --output csmith_ex/prog612.c
#include "csmith.h"


static long __undefined;






static int8_t  func_1(void);




static int8_t  func_1(void)
{ 
    uint32_t l_2[6] = {0x83C8FC55L,0xB3F4F46DL,0x83C8FC55L,0x83C8FC55L,0xB3F4F46DL,0x83C8FC55L};
    int32_t l_3[10] = {0x7D214C40L,0x7D214C40L,0x7D214C40L,0x7D214C40L,0x7D214C40L,0x7D214C40L,0x7D214C40L,0x7D214C40L,0x7D214C40L,0x7D214C40L};
    int i;
    l_3[1] = l_2[0];
    return l_2[0];
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
