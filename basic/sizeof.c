#include <stdio.h>
#include <limits.h>

int main()
{
    int x = 10;

    printf("%x\n", x);
    printf("%d\n", sizeof(void));

    char ch = '\xdb';
    printf("%c\n", ch);

    printf("\?\n");
    printf("Signed int: %d to %d\n", INT_MIN, INT_MAX);

    return 0;
}