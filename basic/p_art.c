#include <stdio.h>

#define N 10

void rev_array(int a[], int n);
int main(void)
{
    int a[N], *p;

    // sum = 0;

    // for (p = a; p < a + N; p++)
    //     sum += *p;

    // printf("%d", sum);
    p = a;
    while (*p != 0)
        p++;

    printf("Enter %d numbers: ", N);
    for (p = a; p < a + N; p++)
        scanf("%d", p);
    printf("In reverse order: ");
    rev_array(a, N);
    return 0;
}

void rev_array(int a[], int n)
{
    for (int *p = a + n - 1; p >= a; p--)
        printf(" %d", *p);
    printf("\n");
}