#include <stdio.h>

#define CUBE(x) ((x * x * x))
#define REMAINDER(n) ((n % 4))
#define PRODUCTIF(x, y) (((((x * y) < 100.0) ? x * y : 1)))

int main(void)
{
    printf("%d\n", CUBE(2));
    printf("%d\n", REMAINDER(10));

    printf("%d\n", PRODUCTIF(10, 200));
    return 0;
}