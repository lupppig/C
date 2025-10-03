#include <stdio.h>
#define CHECK_ZERO(divisor)                           \
    if (divisor == 0)                                 \
    printf("*** Attempt to divide by zer on line %d " \
           "of file %s ***\n",                        \
           __LINE__ + 1, __FILE__)

#define JOIN(x, y, z) x##y##z

#define TEST(condition, ...) (condition) ? printf("Passed test: %s\n", #condition) : printf("failed to pass")

#define FUNCTION_CALLED() printf("%s called\n", __func__)
#define FUNCTION_RETURNS() printf("%s return\n", __func__)

int f(const char *func_name);

int main(void)
{
    printf("Wacky Windows (c) 2010 wacky software, Inc.\n");
    printf("Compiled on %s at %s\n", __DATE__, __TIME__);

    f(__func__);
    printf("line of code %d\n", __LINE__);

    int j = 0;
    CHECK_ZERO(j);

    int JOIN(a, b, c), JOIN(a, b, ), JOIN(a, , c), JOIN(, , c);

    return 0;
}

int f(const char *func_name)
{
    printf("you get called by %s\n", func_name);
    FUNCTION_CALLED();
    printf("function f\n");

    FUNCTION_RETURNS();
    return 0;
}