#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void moveToEndZeros(int arr[], int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int array[] = {1, 2, 0, 0, 0, 3, 6};
    int size = sizeof(array) / sizeof(array[0]);
    moveToEndZeros(array, size);

    printArray(array, size);


    return 0;
}