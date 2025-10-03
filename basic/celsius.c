#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

#define DISK_CAPACITY (10 * \
                       20 * \
                       30 * \
                       10 * \)

#define assign =
#define multiply *
#define STR_LEN 80
#define TRUE 1
#define FALSE
#define PI 3.14159
#define CR '\r'
#define LOOP for (;;)
#define DEBUG
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define IS_EVEN(n) ((n) % 2 == 0)
#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))
#define getchar() getc(stdin)
#define PRINT_INT(n) printf("%d\n", n)
#define PRINT_INTN(n) printf(#n " = %d\n", n)
#define MK_ID(n) i##n
// generics
#define GENERIC_MAX(type)           \
    type type##_max(type x, type y) \
    {                               \
        return x > y ? x : y;        \
    }

GENERIC_MAX(float)

int main(void)
{
    printf("%f\n", float_max(10, 21));

    float fahreint, celcius;
    float a assign 10;

    int MK_ID(1), MK_ID(2), MK_ID(3);

    i1 = 12;
    i2 = 3;
    i3 = 4;

    if (MAX(i1, MAX(i2, i3)))
        printf("%d is bigger lol\n", MAX(i1, MAX(i2, i3)));

    PRINT_INTN(10 * 10);

    printf("%f\n", a multiply 10.f);
    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahreint);

    celcius = (fahreint - FREEZING_PT) * SCALE_FACTOR;
    printf("Celcius equivalent is: %1.f\n", celcius);
    return 0;
}
