#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10

void generate_random_walk(char walk[SIZE][SIZE]);
void print_array(char walk[SIZE][SIZE]);

int main()
{

    char walk[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            walk[i][j] = '.';

    generate_random_walk(walk);
    print_array(walk);
    return 0;
}

void generate_random_walk(char walk[SIZE][SIZE])
{
    int row = 0, col = 0;
    char letter = 'A';

    srand((unsigned)time(NULL));

    walk[row][col] = letter;
    while (letter < 'Z')
    {
        int moves[4][2] = {
            {-1, 0}, // up
            {1, 0},  // right
            {0, 1},  // left
            {0, -1}, // down
        };
        int possible[4], count = 0;
        for (int d = 0; d < 4; d++)
        {
            int newRow = row + moves[d][0];
            int newCol = col + moves[d][1];
            if (
                newRow < SIZE && newRow >= 0 &&
                newCol >= 0 && newCol < SIZE &&
                walk[newRow][newCol] == '.')
                possible[count++] = d;
        }
        if (count == 0)
            break;
        int choice = possible[rand() % count];
        row += moves[choice][0];
        col += moves[choice][1];

        letter++;
        walk[row][col] = letter;
    }
}

void print_array(char walk[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            printf("%c ", walk[i][j]);
        printf("\n");
    }
}