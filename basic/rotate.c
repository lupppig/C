#include <stdio.h>

void rotate_array(int *arr, int left, int size);
void print_arr(int *arr, int size);

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    // rotate_array(arr, 2, size);

    print_arr(arr, size);
    return 0;
}

// void rotate_array(int *arr, int left, int size)
// {

// }

void print_arr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}