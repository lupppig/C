#include <stdio.h>

#define SIZE 10

void print_array(int arr[][SIZE]);

int main(void)
{
    int a[SIZE][SIZE];
    // initializing an enptry array using pointers

    for (int *p = &a[0][0]; p < &a[SIZE][SIZE]; p++)
        *p = 0;

    printf("--------------->\n");
    print_array(a);
    printf("------------------>\n");
    for (int i = 0; i < SIZE; i++)
        for (int *p = a[i]; p < a[i] + SIZE; p++)
            *p = 0;

    print_array(a);
    printf("----------------_> 1\n");
    int (*p)[SIZE];
    for (p = a; p < &a[SIZE]; p++)
        for (int i = 0; i < SIZE; i++)
            (*p)[i] = i;

    print_array(a);

    printf("------------>\n");

    for (p = a; p < a + SIZE; p++)
        for (int i = 0; i < SIZE; i++)
            (*p)[i] = 0;

    return 0;
}

void print_array(int a[][SIZE])
{

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            printf("%d ", i[a][j]);
        printf("\n");
    }
}

// C99 VLA
// void f(int n, int m)
// {
//     int a[n], *p;
//     p = a;

//     // 2d
//     int b[m][n], (*c)[n];
//     c = b;
// }