#include <iostream>
using namespace std;
int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int counter = 0;
    for (int i = start; i < end ; i++)
    {
        if (arr[i] <= pivot)
        {
            counter++;
        }
    }
    swap(arr[start + counter], arr[end]);
    int index_pivot = start + counter;

    int i = start, j = end;
    while (i < index_pivot && j > index_pivot)
    {
        while (arr[i] <= arr[index_pivot] && i < index_pivot)
        {
            i++;
        }
        while (arr[j] > arr[index_pivot] && j > index_pivot)
        {
            j--;
        }
        if (arr[i] > arr[index_pivot] && arr[j] > arr[index_pivot])
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return index_pivot;
}

void quicksort(int arr[], int start, int end)
{
   
    if (start >= end)
    {
        return;
    }
    int pivot = partition(arr, start, end);
    quicksort(arr, start, pivot - 1);
    quicksort(arr, pivot + 1, end);
}
int main()
{
    int arr[10] = {1, 3, 4, 15, 6,33,44,66,77,1};
    int n = 10;
    
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
