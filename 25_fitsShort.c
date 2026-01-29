#include <stdio.h>

/* 
 * fitsShort - return 1 if x can be represented as a 
 *   16-bit, two's complement integer.
 *   Examples: fitsShort(33000) = 0, fitsShort(-32768) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 1
 */
int fitsShort(int x)
// TMax = 0111 1111 1111 1111
// TMin = 1000 0000 0000 0000
// To extend the short range to int, just use sign extension 
// Int:
// Short TMax = 0000 0000 0000 0000 0111 1111 1111 1111
//              = 0x00007FFF
// Short TMin = 1111 1111 1111 1111 1000 0000 0000 0000 
//              = 0xFFFF8000
// If the upper 17 bits are the same, then it fits a short
{
    return !((x >> 15) ^ (x >> 16));
}

int test_fitsShort(int x)
{
    short int sx = (short int) x;
    return x == sx;
}

int main(void)
{
    int x = 2;
    printf("expected: %x\n", fitsShort(x));
    printf("actual  : %x\n", test_fitsShort(x));
}
