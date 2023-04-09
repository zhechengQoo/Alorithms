/* Bubble Sortting */
/*
Only sort for int number
*/
void swap(int*, int*);

void BubbleSortIncreasing(int *arr, int len)
{
    int i, j;
    for (i = 0; i < len; i++)
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
}
void BubbleSortDescending(int *arr, int len)
{
    int i, j;
    for (i = 0; i < len; i++)
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
}
