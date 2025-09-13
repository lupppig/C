#include <stdio.h>

int main()
{

    printf("Enter first and last name: ");
    char ch;
    char first_initials;
    int map = 0;
    first_initials = getchar();
    while ((ch = getchar()) != '\n')
    {
        if ((ch != ' ' && map != 1))
            continue;
        else if (ch == ' ')
        {
            map = 1;
            continue;
        }
        printf("%c", ch);
    }
    printf(", %c\n", first_initials);
    return 0;
}