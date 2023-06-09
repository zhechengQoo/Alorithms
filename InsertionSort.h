//tmp is a factor
void InsertionSortIncreasing(int *arr, int len)
{
    int i, j, temp, tmp = 1;
    for (i = tmp; i < len; i++)
    {
        temp = arr[i];
        j = i;
        while (temp < arr[j-tmp] && j >= tmp)
        {
            arr[j] = arr[j-tmp];
            j--;
        }
        arr[j] = temp;
    }
}

void InsertionSortDescending(int *arr, int len)
{
    int i, j, temp;
    for (i = 1; i < len; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (temp > arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j] = temp;
    }
}