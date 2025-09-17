#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 10
#define COLUMN 10

int main()
{
    char letter = 'A';
    int row = 0, col = 0;
    char path[ROW][COLUMN] = {
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    };
    srand((unsigned)time(NULL));

    path[row][col] = letter;

    while (letter < 'Z')
    {
        int moves[4][2] = {
            {-1, 0},
            {0, 1},
            {1, 0},
            {0, -1},
        };
        int possible[4], count = 0;

        for (int d = 0; d < 4; d++)
        {
            int newRow = row + moves[d][0];
            int newCol = col + moves[d][1];

            if (
                newRow >= 0 && newRow < ROW &&
                newCol >= 0 && newCol < COLUMN && path[newRow][newCol] == '.')
                possible[count++] = d;
        }
        if (count == 0)
            break;
        int choice = possible[rand() % count];
        row += moves[choice][0];
        col += moves[choice][1];
        letter++;
        path[row][col] = letter;
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            printf("%c ", path[i][j]);
        }
        printf("\n");
    }
    return 0;
}