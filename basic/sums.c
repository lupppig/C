#include <stdio.h>
#include <limits.h>

int a_atoi(const char *str);

int main(int argc, char *argv[])
{

    int sum = 0;
    if (argc <= 1)
        return -1;

    char **argp = argv + 1;

    for (; argp < argv + argc; argp++)
        sum += a_atoi(*argp);
    printf("%d\n", sum);
    return 0;
}

int a_atoi(const char *str)
{
    int sign = 1, res = 0;
    while (*str == ' ')
        str++;

    if (*str == '-')
    {
        sign = -1;
        str++;
    }

    while (*str >= '0' && *str <= '9')
    {
        int d = *str - '0';
        if ((sign == 1) && (res > INT_MAX / 10 || (res == INT_MAX / 10 && d > INT_MAX % 10)))
        {
            res = INT_MAX;
            break;
        }
        else if ((sign == -1) && (res > INT_MAX / 10 || (res == INT_MAX / 10 && d > (INT_MAX % 10 + 1))))
        {
            res = INT_MIN;
            break;
        }
        res = res * 10 + d;
        str++;
    }
    return sign * res;
}