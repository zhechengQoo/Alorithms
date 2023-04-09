/* Select Sortting */
void swap(int*, int*);
void SelectSortIncreasing(int *arr, int len)
{
    int i, j, min = 0;
    for (i = 0; i < len; i++)
    {
        min = i;
        for (j = i + 1; j < len; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        if (min > i)
            swap(&arr[min], &arr[i]);
    }
}

void SelectSortDescending(int *arr, int len)
{
    int i, j, max = 0;
    for (i = 0; i < len; i++)
    {
        max = i;
        for (j = i + 1; j < len; j++)
        {
            if (arr[max] < arr[j])
                max = j;
        }
        if (max > i)
            swap(&arr[max], &arr[i]);
    }
}