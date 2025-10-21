#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *duplicate(const char *str);

int main(void)
{
    char *str = "darasimi";

    char *p = duplicate(str);

    printf("original: %s dup: %s", str, p);
    free(p);
    return 0;
}

char *duplicate(const char *str)
{
    char *dup_str;
    int len_str = strlen(str);
    dup_str = (char *)malloc(len_str + 1);

    if (!dup_str)
    {
        dup_str = "";
        return dup_str;
    }
    strcpy(dup_str, str);
    return dup_str;
}