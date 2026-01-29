#include <stdio.h>

/*
 * isTmin - returns 1 if x is the minimum, two's complement number,
 *     and 0 otherwise 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 10
 *   Rating: 1
 */
int isTmin(int x)
// TMin = 1000 0000 0000 0000 0000 0000 0000 0000 
// x ^ x = 0
{
    return !((0x1 << 31) ^ x);
}

int test_isTmin(int x)
{
    return x == 0x80000000;
}

int main(void)
{
    int x = 0;
    printf("expected: %x\n", isTmin(x));
    printf("actual  : %x\n", test_isTmin(x));
}
