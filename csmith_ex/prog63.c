// Options:   --no-global-variables --concise --seed 63 --output csmith_ex/prog63.c
#include "csmith.h"


static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S2 {
   unsigned f0 : 5;
   const signed f1 : 16;
   unsigned f2 : 3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   signed f0 : 13;
};
#pragma pack(pop)

struct S3 {
   uint32_t  f0;
   unsigned f1 : 17;
   int8_t  f2;
   struct S2  f3;
   int64_t  f4;
   const int16_t  f5;
   struct S1  f6;
   unsigned f7 : 7;
   int32_t  f8;
};





static struct S3  func_1(void);




static struct S3  func_1(void)
{ 
    struct S3 l_2 = {18446744073709551606UL,338,0x1DL,{1,149,0},-4L,0L,{2},9,1L};
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
