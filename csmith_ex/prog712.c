// Options:   --no-global-variables --concise --seed 712 --output csmith_ex/prog712.c
#include "csmith.h"


static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 18;
};
#pragma pack(pop)

struct S1 {
   int8_t  f0;
   unsigned f1 : 6;
   signed f2 : 1;
};





static struct S0  func_1(void);




static struct S0  func_1(void)
{ 
    struct S1 l_2[1] = {{0L,5,-0}};
    struct S1 *l_3 = &l_2[0];
    struct S0 l_4 = {25};
    int i;
    (*l_3) = l_2[0];
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
