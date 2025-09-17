#include <stdio.h>

int main()
{

    int array[5][5];

    printf("Enter 5 value each for a row \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a new row %d: ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    int row = sizeof(array) / sizeof(array[0]);
    // int column = sizeof(array) / sizeof(array[0][0]);
    printf("Row totals: ");
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += array[i][j];
        }
        printf("%d ", sum);
    }

    printf("\n"); // column total
    printf("columns total: ");
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += array[j][i];
        }
        printf("%d ", sum);
    }
    printf("\n");
    return 0;
}
