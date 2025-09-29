#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[10] = "Hello";
    char str2[10] = "Hello";

    char *str = strcpy(str1, str2);

    printf("%s\n", str);
    printf("%s\n", str1);
    char *stri = strncpy(str1, str2, sizeof(str1) - 1);
    str1[sizeof(str1) - 1] = '\0';
    printf("%s\n", stri);

    int len;

    len = strlen("abc");
    printf("%d\n", len);
    len = strlen("");
    printf("%d\n", len);
    strcpy(str1, "abc");
    len = strlen(str1);
    printf("%d\n", len);

    strcat(str1, "def");
    printf("%d\n", (int)strlen(str1));
    printf("%s\n", str1);

    printf("%d\n", (int)sizeof(str1));
    strncat(str1, str2, sizeof(str1) - strlen(str1) - 1);
    printf("%s\n", str1);

    strncpy(str2, str1, sizeof(str2) - 1);
    printf("%s\n", str2);
    if (strcmp(str1, str2) == 0)
        printf("%d\n", 1);
    return 0;
}