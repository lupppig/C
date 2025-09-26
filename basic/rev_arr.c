#include <stdio.h>

/*

bool se a rc h (c o n st in t a [],
in t n,
in t k e y );
a is an array to be searched, n is the number of elements in lhc array, and k e y is the search
key. s e a r c h should return t r u e if k e y matches some element of a, and f a l s e if it
doesn’t. Use pointer arithmetic— not subscripting— to visit array elements
*/
void rev_arr(int *a, int n);
int sum_array(const int *a, int n);

void print_array(int *a);
int main(void)
{
    int *a = (int[10]){1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    rev_arr(a, 10);

    print_array(a);

    printf(" %d\n", sum_array(a, 10));
    return 0;
}

void rev_arr(int *a, int n)
{
    int temp, *q, *p;
    p = a, q = a + n - 1;
    printf("%d", p == &a[0]);
    printf(" %d", *p == a[0]);
    printf(" %d\n", p[0] == a[0]);

    while (p < q)
    {
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }
}

void print_array(int *a)
{
    for (int j = 0; j < 10; j++)
        printf("%d ", a[j]);
    printf("\n");
}

int sum_array(const int *a, int n)
{
    const int *p;
    int sum;

    sum = 0;
    for (p = a; p < a + n; p++)
        sum += *p;
    return sum;
}