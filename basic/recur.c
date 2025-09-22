#include <stdio.h>

int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}

int power(int x, int n)
{
    if (n == 0)
        return 1;
    else
        return x * power(x, n - 1);
}

int powerx(int x, int n)
{
    return n == 0 ? 1 : x * power(x, n - 1);
}