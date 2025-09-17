#include <stdio.h>

int main(void)
{
    int digit, n;
    int occurence[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        occurence[digit]++;
        n /= 10;
    }

    printf("Digit: ");
    for (int i = 0; i < 10; i++)
        printf(" %d", i);

    printf("\nOccurences: ");
    for (int i = 0; i < 10; i++)
        printf(" %d", occurence[i]);
    return 0;
}