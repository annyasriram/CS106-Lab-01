#include <stdio.h>

/* 
 * TMax - return maximum two's complement integer 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmax(void)
// TMax = 2^n-1 - 1
// TMax = 0111 1111 1111 1111 1111 1111 1111 1111
{
    return ~(0x1 << 31);
}

int test_tmax(void)
{
    return 0x7FFFFFFF;
}

int main(void)
{
    printf("expected: %x\n", tmax());
    printf("actual  : %x\n", test_tmax());
}
