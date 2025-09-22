#include <stdio.h>

void print_count(int n);
void print_pun(void);

int main(void)
{
    int i;

    for (i = 10; i > 0; i--)
        print_count(i);

    print_pun();
    return 0;
}

void print_count(int n)
{
    printf("T minus %d and counting\n", n);
}

void print_pun(void)
{
    printf("To C, or not to C: that is the question\n");
}


