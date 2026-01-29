#include <stdio.h>

/* 
 * thirdBits - return word with every third bit (starting from the LSB) set to 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 1
 */
int thirdBits(void)
// Want to get: 0010 0100 1001 0010 0100 1001 0010 0100
{
    return (0x492 << 20) | (0x492 << 8) | (0x49);
}

int test_thirdBits(void)
{
    int result = 0;
    int i;
    for (i = 0; i < 32; i += 3)
        result |= 1 << i;
    return result;
}

int main(void)
{
    printf("expected: %x\n", thirdBits());
    printf("actual  : %x\n", test_thirdBits());
}
