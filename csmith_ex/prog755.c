// Options:   --no-global-variables --concise --seed 755 --output csmith_ex/prog755.c
#include "csmith.h"


static long __undefined;


struct S0 {
   unsigned f0 : 24;
   unsigned f1 : 15;
   signed f2 : 22;
};





static struct S0  func_1(void);




static struct S0  func_1(void)
{ 
    int32_t l_2[10][9] = {{1L,0L,0L,1L,0xBF25CBD9L,0x7806AA1CL,0xB01D91E6L,0L,0L},{(-1L),1L,0L,0L,0xF4E1C2E9L,0L,0L,1L,(-1L)},{0L,0L,0xB01D91E6L,0x7806AA1CL,0xBF25CBD9L,1L,0L,0L,1L},{0L,0x0D1B7136L,0L,0x34F09465L,0x9CF1813FL,(-1L),(-1L),0x9CF1813FL,0x34F09465L},{0L,0xBF25CBD9L,0L,0x161AB6ECL,0xE4BF748DL,0x2006887EL,0x161AB6ECL,0L,0xB01D91E6L},{(-1L),0L,5L,(-8L),(-1L),5L,(-1L),7L,(-1L)},{(-1L),0x161AB6ECL,0L,0L,0x161AB6ECL,(-1L),(-1L),0L,(-1L)},{0x2C32B96CL,0L,(-1L),0x2C32B96CL,7L,0x164F943AL,3L,0x5AA96141L,(-1L)},{3L,0x6F97812AL,(-1L),(-1L),1L,(-1L),(-1L),0x6F97812AL,3L},{(-1L),0x5AA96141L,3L,0x164F943AL,7L,0x2C32B96CL,(-1L),0L,0x2C32B96CL}};
    int32_t *l_3 = &l_2[9][5];
    int32_t *l_4[10] = {&l_2[2][7],&l_2[2][7],&l_2[2][7],&l_2[2][7],&l_2[2][7],&l_2[2][7],&l_2[2][7],&l_2[2][7],&l_2[2][7],&l_2[2][7]};
    uint8_t l_5[8][5] = {{9UL,9UL,0x96L,251UL,6UL},{9UL,0x71L,0x71L,9UL,0xC7L},{0xE3L,251UL,0xF3L,0xF3L,251UL},{0xC7L,0x71L,0UL,0x12L,0x12L},{0x1BL,9UL,0x1BL,0xF3L,0x96L},{0x4DL,9UL,0x12L,9UL,0x4DL},{0x1BL,0xE3L,9UL,251UL,9UL},{0xC7L,0xC7L,0x12L,0x4DL,9UL}};
    struct S0 l_8[9] = {{1155,91,917},{1155,91,917},{1155,91,917},{1155,91,917},{1155,91,917},{1155,91,917},{1155,91,917},{1155,91,917},{1155,91,917}};
    int i, j;
    l_5[4][1]--;
    return l_8[2];
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
