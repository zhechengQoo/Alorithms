#include <stdio.h>
#include "BubbleSort.h"
#include "SelectSort.h"
#include "InsertionSort.h"
#include "ShellSort.h"
void PrintOutput(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int arr[10] = {5, 4, 8, 6, 9, 1, 10, 3, 2, 7};
    int len = 0;
    len = (int)sizeof(arr) / sizeof(*arr);
    printf("Before Srot :");
    PrintOutput(arr, len);

    SelectSortIncreasing(arr,len);
    printf("Increasing sequence :");
    PrintOutput(arr, len);
    SelectSortDescending(arr,len);
    printf("descending sequence :");
    PrintOutput(arr, len);

    /*
        BubbleSortIncreasing(arr, len);
        BubbleSortDescending(arr, len);
        SelectSortDescending(arr, len);
SelectSortIncreasing(arr, len);
    */

    return 0;
}