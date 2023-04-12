void PrintOutput(int *arr, int len);
void ShellSortIncreasing(int *arr, int len)
{
    int i, j, temp, step;
    step = len / 2;
    while (step > 0)
    {
        for (i = step; i < len; i++)
        {
            temp = arr[i];
            j = i;
            while (temp < arr[j - step] && j >= step)
            {
                arr[j] = arr[j - step];
                j -= step;
            }
            arr[j] = temp;
            //printf("step = %d , i = %d \t",step,i);
            //PrintOutput(arr, len);
        }
        step /= 2;
    }
}

void ShellSortDescending(int *arr, int len)
{
    int i, j, temp, step;
    step = len / 2;
    while (step > 0)
    {
        for (i = step; i < len; i++)
        {
            temp = arr[i];
            j = i;
            while (temp > arr[j - step] && j >= step)
            {
                arr[j] = arr[j - step];
                j -= step;
            }
            arr[j] = temp;
            //printf("step = %d , i = %d \t",step,i);
            //PrintOutput(arr, len);
        }
        step /= 2;
    }
}