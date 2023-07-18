#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}
void printarray(int arr[], int size)
{
    cout << "Sorted array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    cout << "Enter Array size : ";
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter array values : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, size);
    printarray(arr, size);
}