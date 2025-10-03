#include <stdio.h>
#include <math.h>
#include <string.h>

#define NELEMS(arr)                                            \
    {                                                          \
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) \
            printf("%d ", arr[i]);                             \
        printf("\n");                                          \
    }

#define DOUBLE(x) (2 * (x))
#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c)) // will expand each macro and increment i each time the macro is exapanded
#define DISP(f, x)                         \
    {                                      \
        printf(#f "(%g) = %g\n", x, f(x)); \
    }

#define GENERIC_MAX(type)           \
    type type##_max(type x, type y) \
    {                               \
        return x > y ? x : y;       \
    }

typedef unsigned long unsigned_long;

GENERIC_MAX(float);
GENERIC_MAX(unsigned_long);

int main(void)
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    NELEMS(arr);

    printf("%d\n", DOUBLE(1 + 2));
    printf("%d\n", 4 / DOUBLE(2));

    char s[5] = "";
    strcpy(s, "abcd");

    int i = 0;

    putchar(TOUPPER(s[++i]));
    printf("\n%d\n", i);

    strcpy(s, "0123");
    i = 0;
    putchar(TOUPPER(s[++i]));
    printf("\n");
    DISP(sqrt, 2.0);

    float_max(10.0, 2);

    unsigned_long a = 10000, b = 300000;
    unsigned_long m = unsigned_long_max(a, b);
    return 0;
}