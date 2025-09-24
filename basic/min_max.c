#include <stdio.h>

#define N 10
void max_min(const int a[], int n, int *max, int *min);

const int *max(const int *a, const int *b);

int main()
{
    int min, m, a[N];

    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    max_min(a, N, &m, &min);

    printf("Largest: %d\n", m);
    printf("Smallest: %d\n", min);

    const int *x = max(&m, &min);

    printf("%d\n", *(*&x));
    return 0;
}

void max_min(const int a[], int n, int *max, int *min)
{
    *max = *min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > *max)
            *max = a[i];
        else if (a[i] < *min)
            *min = a[i];
    }
}

const int *max(const int *a, const int *b)
{
    return (*a > *b) ? a : b;
}