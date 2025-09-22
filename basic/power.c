#include <stdio.h>

int power(int x, int n)
{
    int i, result = 1;
    for (i = 1; i <= n; i++)
        result = result * x;
    return result;
}

void store_zeros(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        a[i] = 1;
}

// variable length array can be used as argument for array c99
void print_arrays(int n, int a[n])
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int sum_two_dimensional_array(int n, int m, int a[n][m])
{
    int i, j, sum = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            sum += a[i][j];

    return sum;
}

// compound literal allows you to  initialize an array on the fly

int sum_array(int b[], int n)
{
    int i, j, sum = 0;

    for (i = 0; i < n; i++)
        sum += b[i];
    return sum;
}
// wrong
/*
int sum_array(int a[n], int n)
*/
int main(void)
{
    int a[5];
    store_zeros(a, 5);
    print_arrays(5, a);

    int sum = sum_array((int[]){3, 0, 3, 4, 1}, 5);
    printf("%d\n", sum);
    return 0;
}
