#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

int roll_dice(void);
bool play_game(void);

int main()
{
    srand((unsigned)time(NULL));
    int win = 0, losses = 0;
    char ch;

    printf("roll a die: ");
    for (ch = getchar(); tolower(ch) == 'y' || ch == '\n';)
    {
        if (play_game())
        {
            printf("You win!\n");
            win++;
        }
        else
        {
            printf("You lose!\n");
            losses++;
        }
        printf("Play again: ");
        ch = getchar();

        printf("\n");
    }

    printf("Wins: %d  Losses: %d", win, losses);
    return 0;
}

bool play_game(void)
{
    printf("roll a die: ");
    int roll1, roll2;
    int point = 0;

    roll1 = roll_dice();
    roll2 = roll_dice();

    int sum = roll1 + roll2;

    printf("You rolled: %d\n", sum);
    if ((sum == 7 || sum == 11))
        return true;
    else if (sum == 2 || sum == 3 || sum == 5)
        return false;

    printf("Your point is: %d\n", sum);

    point = sum;

    while (true)
    {
        roll1 = roll_dice();
        roll2 = roll_dice();
        sum = roll1 + roll2;
        printf("You rolled: %d\n", sum);

        if (point == sum)
            return true;
        else if (sum == 7)
            return false;
    }
}

int roll_dice(void)
{
    return (rand() % 6) + 1;
}