#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value);

int main(void)
{

    int *arr = create_array(10, 1);

    free(arr);
    return 0;
}

int *create_array(int n, int inital_value)
{
    int *arr = (int *)malloc(sizeof(int) * n);
    if (!arr)
        return NULL;

    for (int i = 0; i < n; i++)
        arr[i] = inital_value;
    return arr;
}