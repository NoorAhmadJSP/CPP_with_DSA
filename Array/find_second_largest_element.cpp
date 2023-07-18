#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print3largest(int arr[], int n)
{
    int first, second;
    first = second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    cout << "First element is : " << first << "  second element is : " << second;
}

int main()
{
    int array[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(array)/sizeof(array[0]);
    print3largest(array , size);


    return 0;
}