#include <stdio.h>

int main()
{
    long long int a, b;

    printf("Enter a positive integer: ");
    scanf("%lld", &a);

    b = 1;

    for (int i = 1; i <= a; i++)
        b *= i;
    printf("Factorial of %d: %d", a, b);
    return 0;
}