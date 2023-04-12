void MergeSortRecursive(int *arr, int *reg, int start, int end);
void MergeSort(int *arr);


void MergeSort(int *arr)
{
    int len, start, end;
    
    len = sizeof(brr)/sizeof(*brr);
    printf("%d\n", len);
    start = 0;
    end = len;
    int *reg = arr;
    MergeSortRecursive(arr, reg, start, end);
}

void MergeSortRecursive(int *arr, int *reg, int start, int end)
{
    int len = end - start;
    if (len < 1)
        return;
    int Lstart, Lend, Rstart, Rend;
    Lstart = start;
    Lend = len / 2;
    Rstart = len / 2 + 1;
    Rend = end;
    MergeSortRecursive(arr, reg, Lstart, Lend);
    printf("%d  %d ||  %d\n", Lstart, Lend, len);
}