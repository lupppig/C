#include <stdio.h>

#define N 10
void quicksort(int a[], int low, int hight);
int split(int a[], int low, int high);

int main(void)
{
    int a[N];
    printf("Enter %d number to be sorted ", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    quicksort(a, 0, N - 1);
    printf("In sorted order: ");
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

void quicksort(int a[], int low, int high)
{
    int middle;

    if (low >= high)
        return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high)
{
    int part_element = a[low];
    int i = low + 1;
    int j = high;
    for (;;)
    {
        while (i <= high && a[i] < part_element)
            i++;
        while (a[j] > part_element)
            j--;
        if (i >= j)
            break;
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    int temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}

// int split(int a[], int low, int high)
// {
//     int part_element = a[low];
//     for (;;)
//     {
//         while (low < high && part_element <= a[high])
//             high--;
//         if (low >= high)
//             break;
//         a[low++] = a[high];

//         while (low < high && a[low] <= part_element)
//             low++;
//         if (low >= high)
//             break;
//         a[high--] = a[low];
//     }
//     return high;
// }