void shellSortIncreasing(int *arr, int len)
{
    int i, j, temp, step;
    step = len / 2;
    while (step > 0)
    {
        for (i = step; i < len; i+=step)
        {
            temp = arr[step];
            j = i - step;
            while (temp < arr[j] && j >= 0)
            {
                arr[j + step] = arr[j];
                j-=step;
            }
            arr[j] = temp;
        }
        step /= 2;
        
    }
}