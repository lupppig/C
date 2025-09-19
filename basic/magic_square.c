#include <stdio.h>
/*
    implement an odd size magic square
*/

#define MAX_SIZE 99
int main(void)
{
    int size;
    printf("Enter size of odd magic square: (1-99)");
    scanf("%d", &size);
    int magic_square[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            magic_square[i][j] = 0;

    int incr = 1;
    int row = 0;
    int col = size / 2;
    magic_square[row][col] = incr;

    for (incr = 2; incr <= size * size; incr++)
    {
        int next_row = (row - 1 + size) % size;
        int next_col = (col + 1) % size;

        if (magic_square[next_row][next_col] != 0)
            row = (row + 1) % size;
        else
        {
            row = next_row;
            col = next_col;
        }

        magic_square[row][col] = incr;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            printf("%d ", magic_square[i][j]);
        printf("\n");
    }
    return 0;
}