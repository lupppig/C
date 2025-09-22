#include <stdio.h>

double polynomial(double coefficient[6], int value_x, int size);

int main()
{

    int value_x;
    printf("Enter a value for x: ");
    scanf("%d", &value_x);

    double coefficientX[6] = {3.0, 2.0, 5.0, 1.0, 7.0, 6};
    int size = sizeof(coefficientX) / sizeof(coefficientX[0]);
    double ans = polynomial(coefficientX, value_x, size);

    printf("answer is: %.2lf", ans);
    return 0;
}

double polynomial(double coefficient[6], int value_x, int size)
{
    double result = coefficient[0];
    for (int i = 1; i < size; i++)
        result = result * value_x + coefficient[i];
    return result;
}