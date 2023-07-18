// C++ program to rearrange the elements
// in the array such that even positioned are
// greater than odd positioned elements
#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // if index is even
        if (i % 2 == 0)
        {
            if (arr[i] > arr[i - 1])
            {
                swap(arr[i], arr[i - 1]);
            }
        }
        // if index is odd
        else
        {
            if (arr[i] < arr[i - 1])
            {
                swap(arr[i], arr[i - 1]);
            }
        }
    }
}

int main()
{
    int n = 5;
    int arr[] = {4, 3, 2, 2, 5};
    rearrange(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}
