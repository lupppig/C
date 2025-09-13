#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("Enter a word: ");
    int sum = 0;
    char ch;

    while ((ch = getchar()) != '\n')
    {
        ch = tolower(ch);

        if (
            ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'l' || ch == 'n' || ch == 'o' ||
            ch == 'r' || ch == 's' || ch == 't' ||
            ch == 'u')
            sum += 1;
        else if (ch == 'd' || ch == 'g')
            sum += 2;
        else if (ch == 'b' || ch == 'c' || ch == 'm' || ch == 'p')
            sum += 3;
        else if (
            ch == 'f' || ch == 'h' || ch == 'v' ||
            ch == 'w' || ch == 'y')
            sum += 4;
        else if (ch == 'k')
            sum += 5;
        else if (ch == 'j' || ch == 'x')
            sum += 8;
        else if (ch == 'q' || ch == 'z')
            sum += 10;
    }

    printf("Scrabble value: %d\n", sum);
}