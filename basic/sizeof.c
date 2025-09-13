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

    printf("int -> %d\n", sizeof(int));
    printf("short int -> %d\n", sizeof(short));
    printf("long int -> %d\n", sizeof(long));
    printf("float -> %d\n", sizeof(float));
    printf("double -> %d\n", sizeof(double));
    printf("long double -> %d\n", sizeof(long double));
    return 0;
}