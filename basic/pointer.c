#include <stdio.h>

void decompose(double x, long *, double *);

int main(void)
{
    int i, j, *p, *q;

    p = &i;
    q = &j;

    i = 10;

    printf("%d\n", *p);

    *q = *p;
    printf("%d\n", j);

    long int_p;
    double frac_part;
    decompose(3.14159, &int_p, &frac_part);
    printf("%ld\n", int_p);
    printf("%lf\n", frac_part);
    return 0;
}

void decompose(double x, long *int_part, double *frac_part)
{
    *int_part = (long)x;
    *frac_part = x - *int_part;
}