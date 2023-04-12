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
    int len = 0;
    len = (int)sizeof(arr) / sizeof(*arr);

    int *prt = arr;
    printf("%d\n",sizeof(prt));

    printf("Before Srot :");
    PrintOutput(arr, len);

    MergeSort(arr);

    return 0;

    /*
    printf("Increasing sequence :");
    PrintOutput(arr, len);
ShellSortIncreasing(arr, len);
    ShellSortDescending(arr,len);
    */
}