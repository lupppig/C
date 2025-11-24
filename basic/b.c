#include <stdio.h>
#include "a.h"

#define N 2
static inline double average(double a, double b);

int main(void)
{
    print_counter();

    printf("%d\n", not_counter);
    printf("%d\n", counter);

    register int i;

    int sum = 0;

    for (i = 0; i < 20; i++)
        sum += i;

    printf("%d\n", sum);

    int j = 10;
    int powers[5] = {1, N, j, N * N * N * N, N * N * N * N * N};

    int *(*x[10])(void);
    return 0;
}

static inline double average(double a, double b)
{
    return (a * b) / 2;
}

typedef int *Fcn(void);
typedef Fcn *Fcn_ptr;
typedef Fcn_ptr Fcn_ptr_array[10];