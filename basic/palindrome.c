#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define NIL '\n'
#define SIZE 100
bool is_palindrome(char *chStr, const char *nch);

int main()
{
    char ch, *c;
    char chStr[SIZE];

    printf("Enter a message: ");
    for (c = chStr; c < chStr + SIZE && (ch = getchar()) != NIL; c++)
        *c = ch;

    if (is_palindrome(chStr, c))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
}

bool is_palindrome(char *chStr, const char *nch)
{
    char *ch;
    ch = chStr;
    while (ch < nch)
    {
        if (!isalpha(*ch) || !isalpha(*nch))
        {
            ch++;
            nch--;
            continue;
        }
        if (islower(*ch) != islower(*nch))
            return false;
        ch++;
        nch--;
    }
    return true;
}