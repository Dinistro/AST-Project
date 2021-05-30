// Options:   --no-global-variables --concise --seed 538 --output csmith_ex/prog538.c
#include "csmith.h"


static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S1 {
   signed f0 : 22;
   signed f1 : 13;
};
#pragma pack(pop)





static int64_t  func_1(void);




static int64_t  func_1(void)
{ 
    const struct S1 l_2 = {1401,75};
    struct S1 l_4 = {1,42};
    struct S1 *l_3 = &l_4;
    int8_t l_5 = 0x9DL;
    (*l_3) = l_2;
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
