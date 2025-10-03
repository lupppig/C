#include <stdio.h>

#define str(x) #x
#define xstr(x) str(x)

#define LINE_FILE "Line " xstr(__LINE__) " of file " __FILE__
int main(void)
{
    const char *str = LINE_FILE;

    printf("%s\n", str);
    return 0;
}