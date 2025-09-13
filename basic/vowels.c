#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("Enter a sentence: ");
    int sum = 0;
    char ch;

    while ((ch = getchar()) != '\n')
    {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            sum += 1;
    }

    printf("Your sentence contains %d vowels\n", sum);
    return 0;
}