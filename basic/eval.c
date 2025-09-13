#include <stdio.h>

int main(void)
{
    double value, number;
    char operands;

    printf("Enter an expression: ");

    scanf("%lf", &value);

    while (scanf("%c", &operands) == 1)
    {
        if (operands == '\n')
            break;
        if (scanf("%lf", &number) != 1)
            break;

        switch (operands)
        {
        case '+':
            value += number;
            break;
        case '*':
            value *= number;
            break;
        case '-':
            value -= number;
            break;
        case '/':
            value /= number;
            break;
        default:
            printf("Unknown operator %c", operands);
            return 1;
        }
    }

    printf("value of expression %.1lf\n", value);
}