#include <stdio.h>
#include <ctype.h>
/*
    a program that encrypt and decrypt a text using julius cypher
*/
int main()
{
    char message[80];
    char ch;
    int shift_by;
    int i;

    printf("Enter a message to be encrypted: ");

    for (i = 0; i < 80 && (ch = getchar()) != '\n'; i++)
        message[i] = ch;

    printf("Enter a shift amount: (1-25) ");
    scanf("%d", &shift_by);

    printf("Encrypted shift amount: ");
    for (int j = 0; j < i; j++)
    {
        ch = message[j];
        if (isupper(ch))
            ch = ((ch - 'A') + shift_by) % 26 + 'A';
        if (islower(ch))
            ch = ((ch - 'a') + shift_by) % 26 + 'a';
        printf("%c", ch);
    }
    putchar('\n');
    return 0;
}