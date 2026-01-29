#include <stdio.h>

/* 
 * bitAnd - x&y using only ~ and | 
 *   Example: bitAnd(6, 5) = 4
 *   Legal ops: ~ |
 *   Max ops: 8
 *   Rating: 1
 */
int bitAnd(int x, int y)
// De Morgan's law: NOT(A & B) = NOT(A) + NOT(B)
// (A & B) = NOT(NOT(A & B)) = NOT(NOT(A) + NOT(B))
{
    return ~(~x | ~y);
}

int test_bitAnd(int x, int y)
{
    return x & y;
}

int main(void)
{
    int x = 0;
    int y = 0;
    printf("expected: %x\n", test_bitAnd(x, y));
    printf("actual  : %x\n", bitAnd(x, y));
}
