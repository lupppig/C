#include <stdio.h>

#define CHECK(x, y, n)                          \
    {                                           \
        return x < n - 1 && y <= n - 1 ? 1 : 0; \
    }

#define MEDIAN(x, y, z) ((x) + (y) + (z) -                                                 \
                         ((x) < (y) ? ((x) < (z) ? (x) : (z)) : ((y) < (z) ? (y) : (z))) - \
                         ((x) > (y) ? ((x) > (z) ? (x) : (z)) : ((y) > (z) ? (y) : (z))))

int main(void)
{

    printf("%d\n", MEDIAN(10, 12, 13));
    return 0;
}