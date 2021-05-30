// Options:   --no-global-variables --concise --seed 121 --output csmith_ex/prog121.c
#include "csmith.h"


static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   signed f1 : 9;
   unsigned f2 : 30;
   unsigned f3 : 15;
   unsigned f4 : 21;
   signed f5 : 14;
   signed f6 : 18;
   signed f7 : 31;
   unsigned f8 : 22;
};
#pragma pack(pop)





static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    struct S1 l_2[9] = {{1L,3,14236,165,468,-67,469,44642,1798},{1L,3,14236,165,468,-67,469,44642,1798},{1L,3,14236,165,468,-67,469,44642,1798},{1L,3,14236,165,468,-67,469,44642,1798},{1L,3,14236,165,468,-67,469,44642,1798},{1L,3,14236,165,468,-67,469,44642,1798},{1L,3,14236,165,468,-67,469,44642,1798},{1L,3,14236,165,468,-67,469,44642,1798},{1L,3,14236,165,468,-67,469,44642,1798}};
    int32_t l_3[8][8] = {{1L,0L,(-1L),(-1L),0xAFB5D1CBL,0x623B4709L,0x600D5493L,0x623B4709L},{0x13F5E3D1L,0L,0L,0L,0x13F5E3D1L,(-1L),7L,8L},{(-1L),0xAFB5D1CBL,0x13F5E3D1L,7L,0x3CCD2466L,(-1L),0L,0L},{0x600D5493L,0L,0x13F5E3D1L,0x13F5E3D1L,0L,0x600D5493L,7L,0x3CCD2466L},{0x3CCD2466L,0x623B4709L,0L,8L,0L,0x13F5E3D1L,0L,0L},{8L,(-1L),0L,7L,0L,(-1L),8L,0xA7F4EA14L},{0xAFB5D1CBL,0L,3L,1L,0x13F5E3D1L,0xA7F4EA14L,0x623B4709L,(-1L)},{7L,0x600D5493L,0L,0x13F5E3D1L,0x13F5E3D1L,0L,0x600D5493L,7L}};
    int32_t l_8[10];
    uint64_t l_11 = 0x20C256FAE7A4860CLL;
    int i, j;
    for (i = 0; i < 10; i++)
        l_8[i] = 0x5E0C0A10L;
    for (l_3[5][7] = 5; (l_3[5][7] >= 0); l_3[5][7] -= 1)
    { 
        int32_t l_4 = 1L;
        int32_t l_9 = (-9L);
        int32_t l_10 = 1L;
        for (l_4 = 2; (l_4 <= 8); l_4 += 1)
        { 
            int32_t l_6 = (-7L);
            int32_t *l_5 = &l_6;
            int32_t *l_7[8] = {&l_6,&l_6,(void*)0,&l_6,&l_6,(void*)0,&l_6,&l_6};
            int i;
            --l_11;
        }
        return l_8[2];
    }
    return l_3[5][7];
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
