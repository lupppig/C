#include <stdio.h>

int main(void)
{

    // >> shift an operator to ther right
    // << shift an operator to the left

    // bitwise operators can only works on integers including chars...
    int i, j;

    i = 13;
    j = i << 2;
    // is equivalent to i * (2^2)
    printf("%d\n", j);
    j = i >> 2;
    printf("%d\n", j);

    // Bitwise complement, And, Exclusive Or, and Inclusive Or
    // ~ operator is unary: the integer promotions are performed on its operand

    unsigned short b, e, k;

    b = 21;
    e = 56;
    k = ~b;
    printf("%d\n", k);
    k = b & e;
    printf("%d\n", k);

    k = b ^ e;
    printf("%d\n", k);

    k = b | e;
    printf("%d\n", k);

    i = 0x0000;
    i |= 0x0010;

    printf("%d\n", i);
    return 0;
}