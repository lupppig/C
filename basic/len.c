#include <stdio.h>

#define SIZE 50
int str_len(const char *s, char *ch);

int main(void)
{
    char str[SIZE], *p, ch;

    printf("Enter words to count: ");
    for (p = str; p < str + SIZE && (ch = getchar()) != '\n'; p++)
        *p = ch;
    p = (p - 1);
    printf("Len string: %d\n", str_len(str, p));
    return 0;
}

int str_len(const char *s, char *p)
{
    return (p - s) + 1;
}
