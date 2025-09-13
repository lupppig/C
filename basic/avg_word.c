#include <stdio.h>

int main()
{
    float word_sum = 1, word_count = 0;
    char ch;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
            word_sum += 1;
        else if (ch != ' ')
            word_count++;
    }

    float average_word = word_count / word_sum;
    printf("Average word length: %.1f\n", average_word);
    return 0;
}