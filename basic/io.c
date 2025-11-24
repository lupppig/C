#include <stdio.h>

int main(void)
{

    int i = 10;
    printf("%6.d\n", i);
    printf("%*.6d\n", 6, i);
    printf("%6.*d", 4, i);
    printf("------------------->\n");
    FILE *fp1, *fp2;

    fp1 = fopen("dumb.txt", "r");

    if (!fp1)
    {
        printf("could not open file: dumb.txt");
        return 1;
    }

    fp2 = freopen("dumb.txt", "r", stdout);

    if (!fp2)
    {
        printf("could not open file\n");
        return 0;
    }

    char buffer[10];
    int n = setvbuf(fp1, buffer, _IOFBF, 10);

    printf("-------------> %d\n", n);
    fclose(fp1);
    return 0;
}