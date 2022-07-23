#include <stdio.h>
void insertionSort(int *arr[]);
int main()
{
    int arr[] = {1, 432, 43, 52, 532, 6, 2, 72, 742, 22};
    insertionSort(&arr);
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("%d , ", arr[i]);
    }
}

void insertionSort(int **arr)
{
    int i = 2;
    for (; i < sizeof(*arr) / sizeof(int); i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j > 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}