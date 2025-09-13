#include <stdio.h>
#include <math.h>

int main()
{
    double value, new_guess = 1, old_guess;
    printf("Enter a positive number: ");
    scanf("%lf", &value);
    // double average;
    do
    {
        old_guess = new_guess;
        new_guess = (old_guess + value / old_guess) / 2;
    } while (fabs(old_guess - new_guess) > .00001 * new_guess);
    printf("Square root: %.3lf\n", new_guess);
    return 0;
}
