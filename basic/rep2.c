#include <stdio.h>
#include <stdbool.h>

int main()
{
    int digit, n;
    int digit_seen[10] = {false};

    printf("Enter a digit: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }
    printf("Repeated digit(s): ");
    for (int i = 0; i < 10; i++)
    {
        if (digit_seen[i] > 1)
            printf("%d ", i);
    }
    return 0;
}