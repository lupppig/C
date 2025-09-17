#include <stdio.h>
#include <ctype.h>

#define MAXLINE 100

int main(void)
{
    char message[MAXLINE];
    int i = 0;
    char ch;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && i < MAXLINE - 1)
    {
        message[i] = ch;
        i++;
    }

    printf("In B1FF-speak: ");
    for (int j = 0; j < i; j++)
    {
        ch = message[j];
        if (isalpha(ch))
            ch = toupper(ch);
        switch (ch)
        {
        case 'A':
            ch = '4';
            break;
        case 'B':
            ch = '8';
            break;
        case 'E':
            ch = '3';
            break;
        case 'I':
            ch = '1';
            break;
        case 'O':
            ch = '0';
            break;
        case 'S':
            ch = '5';
            break;
        }
        putchar(ch);
    }

    printf("!!!!!\n");
    return 0;
}