// Options:   --no-global-variables --concise --seed 995 --output csmith_ex/prog995.c
#include "csmith.h"


static long __undefined;






static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    int32_t l_3[7] = {0xF1DBECCCL,(-4L),0xF1DBECCCL,0xF1DBECCCL,(-4L),0xF1DBECCCL,0xF1DBECCCL};
    int32_t *l_2 = &l_3[2];
    uint64_t l_4 = 18446744073709551611UL;
    int i;
    l_2 = l_2;
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
