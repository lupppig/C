#include <stdio.h>

int main(void)
{
    int a[10], *p, *q;
    for (int i = 0; i < 10; i++)
        a[i] = i;
    p = &a[0];
    *p = -1;

    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    p = &a[2];
    q = p + 3;

    printf("%d \n", *q);

    p += 6;

    printf("%d\n", *(p - 3));

    p -= 6;
    printf("%d\n", *p);

    a[1] = 20;
    p = &a[5], q = &a[1];

    int i = p - q;

    a[4] = 2;
    printf("%d ", i);
    i = q - p;
    printf("%d ", i);

    printf("\n%d ", p >= q);
    printf("\n%d", q <= p);

    int *c = (int[]){2, 0, 3, 1, 3};
    p = c;

    printf("\n%d ", *c);
    printf("%d ", *p++);
    printf("%d ", *(p += 3));

    // *p++ or *(p++) value of expression is *p before increment; increment p later
    // *(p)++ value of expression is *p before increment: increment *p later
    // *++p or *(++p) increment p first; value of expression is *p after increment
    // ++*p or ++(*p)  increment *p first: value of expression is *p after increment

    p = &a[0];

    int sum = 0;
    while (p < &a[10])
        sum += *p++;

    printf("%d \n", sum);
    return 0;
}