#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
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
    // cout << "Enter Array size : ";
    // int size;
    // cin >> size;
    // int arr[size];
    // cout << "Enter array values : ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    // bubbleSort(arr, size);
    // printarray(arr, size);
    //     char arr[4]= {'A', 'b', '\0', 'r'};
    //      string noor= "ab\0cd";
    //      cout<<arr<<endl;
    //      cout<<noor;

    int b = 5;
    int c=0;
    int* a = &b;
    a=&c;
    // *a = 50;
    // int a= 60;
    // cout << b;
    cout<<*a;
    // cout << b<<endl;
    // cout << *a<<endl;

    // cout << a<<endl;
    // cout << &b<<endl;

    // cout << &a;
    // int size;
    // cin >> size;
    // int arr[size];
}