// Options:   --no-global-variables --concise --seed 5 --output csmith_ex/prog5.c
#include "csmith.h"


static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   uint8_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   unsigned f0 : 31;
   signed f1 : 27;
   struct S0  f2;
};
#pragma pack(pop)





static struct S1  func_1(void);




static struct S1  func_1(void)
{ 
    struct S1 l_2 = {3992,605,{0xE5L,0xE5L}};
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
