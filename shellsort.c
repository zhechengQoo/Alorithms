#include <stdio.h>
#include "ShellSort.h"
#include "MergeSort.h"

void PrintOutput(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[10] = {5, 4, 8, 6, 9, 1, 10, 3, 2, 7};
    int len = (int)sizeof(arr) / sizeof(*arr);

    printf("Before Srot :");
    PrintOutput(arr, len);

    MergeSort(arr, len);
    printf("Increasing sequence :");
    PrintOutput(arr, len);
    return 0;

    /*

ShellSortIncreasing(arr, len);
    ShellSortDescending(arr,len);
    */
}