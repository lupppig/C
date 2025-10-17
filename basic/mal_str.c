#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *concat(const char *s1, const char *s2);

int main(void)
{
    char *str = concat("abc", "def");
    printf("%s\n", str);

    int *a, n = 10;

    a = (int *)malloc(n * sizeof(int));

    
    free(a);
    free(str);
    return 0;
}

char *concat(const char *s1, const char *s2)
{
    char *result;

    result = (char *)malloc(strlen(s1) + strlen(s2) + 1);
    if (!result)
    {
        printf("Error: malloc failed in concat");
        free(result);
        exit(EXIT_FAILURE);
    }

    strcpy(result, s1);
    strcat(result, s2);
    return result;
}
