#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *duplicate(const char *str);

int main(void)
{
    char *str, *arr, ch;

    int size = 1, len = 0;
    arr = (char *)malloc(sizeof(char));

    if (!arr)
    {
        printf("failed to allocate memory for characters\n");
        free(arr);
        return -1;
    }

    printf("Enter a  string value: ");
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        if (len + 1 >= size)
        {
            size *= 2;
            char *tmp = (char *)realloc(arr, size);
            if (!tmp)
            {
                printf("failed to reallocate space\n");
                free(tmp);
                return -1;
            }
            arr = tmp;
        }
        arr[len++] = ch;
    }
    arr[len] = '\0';
    str = duplicate(arr);

    if (!str)
    {
        free(str);
        return -1;
    }
    printf("original: %s duplicate: %s", arr, str);
    free(arr);
    free(str);
    return 0;
}

char *duplicate(const char *str)
{
    char *dup_str;
    int len_str = strlen(str);
    dup_str = (char *)malloc(len_str + 1);

    if (!dup_str)
        return NULL;
    strcpy(dup_str, str);
    return dup_str;
}