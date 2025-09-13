#include <stdio.h>

int main(void)
{
    long i;
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%10ld%10ld\n", i, i * i);
        if (i % 24 == 0)
        {
            printf("Press Enter to continue...\n");
            while (getchar() != '\n')
                ;
            getchar();
        }
    }
    return 0;
}