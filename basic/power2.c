#include <stdio.h>

int power(int value, int exponent);

int main()
{
    int value_x, n;
    printf("Enter a value for x and its exponent n: ");
    scanf("%d %d", &value_x, &n);

    int ans = power(value_x, n);

    printf("\n");
    printf("%d\n", ans);
    return 0;
}

int power(int value, int exponent)
{
    int half_power;
    if (exponent == 0)
        return 1;

    if (exponent < 0)
        return 0;

    if (exponent % 2 == 0)
    {
        half_power = power(value, exponent / 2);
        return half_power * half_power;
    }
    return value * power(value, exponent - 1);
}