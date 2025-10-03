#include <stdio.h>

#line 1 "bar.c"

int main(void)
{
#line 200
    printf("Line: %d, File: %s\n", __LINE__, __FILE__);

    printf("%d\n", 10 / 0);
    return 0;
}