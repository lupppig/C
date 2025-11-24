#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("dumb.txt", "r");

    if (fp == NULL)
        return -1;

    int n;
    while (fscanf(fp, "%d", &n) != 1)
    {
        printf("==========>\n");
        if (ferror(fp))
        {
            printf("could not read number\n");
            break;
        }

        if (feof(fp))
        {
            printf("end of line \n");
            break;
        }
        fscanf(fp, "%*[^\n]");
    }
    printf("%d\n", n);
    fclose(fp);
    return 0;
}