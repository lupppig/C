#include <stdio.h>
#include <string.h>

#define WORD_LEN 20

int main(void)
{
    char word[WORD_LEN + 1];
    char small_words[WORD_LEN + 1], large_words[WORD_LEN + 1];
    printf("Enter a  word: ");

    fgets(word, WORD_LEN + 1, stdin);
    word[strcspn(word, "\n")] = 0;
    strcpy(large_words, word);
    strcpy(small_words, word);
    while (strlen(word) != 4)
    {
        printf("Enter a  word: ");

        fgets(word, WORD_LEN, stdin);
        word[strcspn(word, "\n")] = 0;
        if (strcmp(word, large_words) > 0)
            strncpy(large_words, word, WORD_LEN);

        if (strcmp(word, small_words) < 0)
            strncpy(small_words, word, WORD_LEN);
    }

    printf("Smallest word: %s\n", small_words);
    printf("Largest word: %s\n", large_words);
    return 0;
}