#include <stdio.h>
#include <ctype.h>

/*
    check if a word is an anagram
*/
int main(void)
{
    char ch;
    int alphabet[26];
    int i;

    for (i = 0; i < 26; i++)
        alphabet[i] = 0;

    printf("Enter your first word: ");
    for (i = 0; i < 26 && (ch = getchar()) != '\n'; i++)
    {
        if (!isalpha(ch))
            continue;
        ch = tolower(ch);
        int idx = (ch - 'a') % 26;
        alphabet[idx]++;
    }

    printf("Enter your second word: ");
    for (i = 0; i < 26 && (ch = getchar()) != '\n'; i++)
    {
        if (!isalpha(ch))
            continue;
        ch = tolower(ch);
        int idx = (ch - 'a') % 26;
        alphabet[idx]--;
    }

    for (i = 0; i < 26; i++)
    {
        if (alphabet[i] > 0)
        {
            printf("this is word is not an anagram\n");
            return 1;
        }
    }
    printf("this word is an anagram\n");
    return 0;
}