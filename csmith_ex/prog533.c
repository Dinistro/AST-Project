// Options:   --no-global-variables --concise --seed 533 --output csmith_ex/prog533.c
#include "csmith.h"


static long __undefined;


struct S0 {
   const int32_t  f0;
   int32_t  f1;
   int32_t  f2;
   int32_t  f3;
   int64_t  f4;
   const uint64_t  f5;
   const int64_t  f6;
   unsigned f7 : 3;
   uint16_t  f8;
   uint16_t  f9;
};





static int16_t  func_1(void);




static int16_t  func_1(void)
{ 
    uint64_t l_2[7][3] = {{1UL,0UL,1UL},{0x1D8B9DBEA5223FA3LL,0xDB6D0374C7AF5AF8LL,0x1D8B9DBEA5223FA3LL},{1UL,0UL,1UL},{0x1D8B9DBEA5223FA3LL,0xDB6D0374C7AF5AF8LL,0x1D8B9DBEA5223FA3LL},{1UL,0UL,1UL},{0x1D8B9DBEA5223FA3LL,0xDB6D0374C7AF5AF8LL,0x1D8B9DBEA5223FA3LL},{1UL,0UL,1UL}};
    int32_t l_3 = 1L;
    int i, j;
    for (l_3 = 0; (l_3 <= 2); l_3 += 1)
    { 
        uint32_t l_4 = 1UL;
        return l_4;
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
