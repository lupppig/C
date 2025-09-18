#include <stdio.h>

int main()
{
    char words[100];
    char ch;
    int i;
    int b;
    printf("Enter a sentence: ");
    for (i = 0; i < 99 && (ch = getchar()) != '\n'; i++)
        words[i] = ch;

    b = i;
    printf("Reversal of sentence: ");
    while (i >= 0)
    {
        ch = words[i];
        if (ch == ' ')
        {
            for (int j = i; j <= b; ++j)
                printf("%c", words[j]);
            b = i;
        }
        else if (ch != ' ' && i == 0)
        {
            for (int j = i; j <= b; ++j)
                printf("%c", words[j]);
        }
        i--;
    }
    printf("\n");
    return 0;
}