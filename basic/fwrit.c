#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("dumb.txt", "a+");
    char buf[10] = "I am a boy";

    fwrite(buf, sizeof(buf[0]), sizeof(buf) / sizeof(buf[0]), fp);

    rewind(fp);
    fseek(fp, 0, 1);
    char buff[10000];
    size_t n = fread(buff, 1, 1000, fp);
    buff[n] = '\0'; // add null terminator

    printf("%s\n", buff);
    return 0;
}