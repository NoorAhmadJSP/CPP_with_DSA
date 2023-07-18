#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print3largest(int arr[], int n)
{
    int first, second, third;
    first = second = third = INT_MIN;

    for (int i = 0; i < n; i++) // { 12, 45, 1, -1, 45, 54, 23, 5, 0, -10};
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != second)
        {
            third = arr[i];
        }
    }
    cout << "First element is : " << first << "  second element is : " << second << "   third element is : " << third;
}

int main()
{
    // int array[] = {12, 45, 1, -1, 45, 54, 23, 5, 0, -10};
    // int size = sizeof(array)/sizeof(array[0]);

    vector<int> V = {11, 65, 193, 36, 209, 664, 32};
    partial_sort(V.begin(), V.begin() + 3, V.end(), greater<int>());

    cout << "first = " << V[0] << "\n";
    cout << "second = " << V[1] << "\n";
    cout << "third = " << V[2] << "\n";
    
    // print3largest(array, size);

    return 0;
}