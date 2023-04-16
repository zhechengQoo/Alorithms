void MergeSortRecursive(int *arr, int *reg, int start, int end);
void MergeSort(int *arr, int len);
void PrintOutput(int *arr, int len);

void MergeSort(int *arr, int len)
{
    int start, end;
    int reg[len];
    start = 0;
    end = len;
    for (int i = 0; i < len; i++)
        reg[i] = 0;
    MergeSortRecursive(arr, reg, start, end - 1);
    // index final number is "end-1", but Recursive is index of arrar.
}

void MergeSortRecursive(int *arr, int *reg, int start, int end)
{
    int len = end - start;
    if (len < 1)
        return;
    int Lstart, Lend, Rstart, Rend;
    Lstart = start;
    Lend = start + len / 2;
    Rstart = start + len / 2 + 1;
    Rend = end;
    // printf("%d  %d ||  %d  %d\n", Lstart, Lend, Rstart, Rend);
    MergeSortRecursive(arr, reg, Lstart, Lend);
    MergeSortRecursive(arr, reg, Rstart, Rend);
    int index = start;
    while (Lstart <= Lend && Rstart <= Rend)
    {
        if (arr[Lstart] <= arr[Rstart])
        {
            reg[index] = arr[Lstart];
            Lstart++;
            index++;
        }
        else
        {
            reg[index] = arr[Rstart];
            Rstart++;
            index++;
        }

        //Runoob:一行就...可以，但真的滿難的。
        //reg[index++] = arr[Lstart] < arr[Rstart] ?  arr[Lstart++] : arr[Rstart++];
    }
    while (Lstart <= Lend)
    {
        reg[index] = arr[Lstart];
        Lstart++;
        index++;
    }
    while (Rstart <= Rend)
    {
        reg[index] = arr[Rstart];
        Rstart++;
        index++;
    }
    // save reg into arr , because arr is sorted arrar
    for (int i = start; i < end + 1; i++)
        arr[i] = reg[i];
}