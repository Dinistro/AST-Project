// Options:   --no-global-variables --concise --seed 46 --output csmith_ex/prog46.c
#include "csmith.h"


static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint8_t  f0;
   uint8_t  f1;
   int8_t  f2;
   uint32_t  f3;
   uint32_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

struct S2 {
   const signed f0 : 19;
   const signed f1 : 28;
   unsigned f2 : 30;
   signed f3 : 8;
   const struct S1  f4;
   signed f5 : 13;
};





static struct S2  func_1(void);




static struct S2  func_1(void)
{ 
    uint32_t l_2 = 0x5E53494AL;
    int32_t l_4[5][6][4] = {{{9L,0x324015FBL,8L,0x324015FBL},{0x23F126C7L,0x260389A9L,1L,0xEA28C7FFL},{(-3L),0L,9L,(-9L)},{(-1L),0x6C4F32B7L,(-9L),(-3L)},{(-1L),0xF5ECCE35L,9L,9L},{(-3L),(-3L),1L,(-3L)}},{{0x23F126C7L,1L,8L,0x260389A9L},{9L,0xEA2C39D5L,1L,8L},{8L,0xEA2C39D5L,(-3L),0x260389A9L},{0xEA2C39D5L,1L,0xEA2C39D5L,(-3L)},{0xF5ECCE35L,(-3L),0L,9L},{0xEA28C7FFL,0xF5ECCE35L,0xF5ECCE35L,8L}},{{0xEA28C7FFL,(-1L),0xF5ECCE35L,9L},{0x23F126C7L,1L,1L,0x23F126C7L},{0L,0xEA28C7FFL,2L,(-3L)},{2L,(-3L),8L,(-1L)},{0x260389A9L,0x324015FBL,(-9L),(-1L)},{0xEA2C39D5L,(-3L),0x260389A9L,(-3L)}},{{(-3L),0xEA28C7FFL,0x6C4F32B7L,0x23F126C7L},{8L,1L,0xEA2C39D5L,9L},{0x324015FBL,(-1L),9L,8L},{0x324015FBL,0L,0xEA2C39D5L,0xEA2C39D5L},{8L,8L,0x6C4F32B7L,0xF5ECCE35L},{(-3L),0x6C4F32B7L,0x260389A9L,0xEA28C7FFL}},{{0xEA2C39D5L,2L,(-9L),0x260389A9L},{0x260389A9L,2L,8L,0xEA28C7FFL},{2L,0x6C4F32B7L,2L,0xF5ECCE35L},{0L,8L,1L,0xEA2C39D5L},{0x23F126C7L,0L,0xF5ECCE35L,8L},{0xEA28C7FFL,(-1L),0xF5ECCE35L,9L}}};
    int32_t *l_3[5][7] = {{&l_4[2][5][2],&l_4[2][5][2],&l_4[2][5][2],&l_4[2][5][2],&l_4[2][5][2],&l_4[2][5][2],&l_4[2][5][2]},{&l_4[2][5][2],(void*)0,&l_4[2][5][2],(void*)0,&l_4[2][5][2],(void*)0,&l_4[2][5][2]},{&l_4[2][5][2],&l_4[2][5][2],&l_4[2][5][2],&l_4[2][5][2],&l_4[2][5][2],&l_4[2][5][2],&l_4[2][5][2]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_4[2][5][2],&l_4[2][5][2],&l_4[2][5][2],&l_4[2][5][2],&l_4[2][5][2],&l_4[2][5][2],&l_4[2][5][2]}};
    uint16_t l_5 = 1UL;
    uint8_t l_6 = 0xD9L;
    struct S1 l_11 = {0x72L,255UL,0x29L,0UL,0x25B66FFBL,0x242739A3L};
    struct S1 *l_12 = &l_11;
    struct S2 l_13[1][1][5] = {{{{349,-14303,15060,-13,{0x82L,0x88L,-3L,0x51C8BDC6L,0x2BFFD659L,0UL},16},{349,-14303,15060,-13,{0x82L,0x88L,-3L,0x51C8BDC6L,0x2BFFD659L,0UL},16},{349,-14303,15060,-13,{0x82L,0x88L,-3L,0x51C8BDC6L,0x2BFFD659L,0UL},16},{349,-14303,15060,-13,{0x82L,0x88L,-3L,0x51C8BDC6L,0x2BFFD659L,0UL},16},{349,-14303,15060,-13,{0x82L,0x88L,-3L,0x51C8BDC6L,0x2BFFD659L,0UL},16}}}};
    int i, j, k;
    l_6 &= (l_5 = l_2);
    for (l_5 = 8; (l_5 == 53); ++l_5)
    { 
        struct S1 l_9 = {0x6DL,0xF6L,0x73L,0UL,0xF37D796EL,0x900F1D91L};
        struct S1 *l_10 = &l_9;
        (*l_10) = l_9;
    }
    (*l_12) = l_11;
    return l_13[0][0][0];
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
