#include <iostream>
using namespace std;
int peakMountain(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return mid;
}
int main()
{
    int peakarr[5] = {3, 4, 6, -4, -6};

    int result = peakMountain(peakarr, 5);
    cout<<"Peak number in array is : "<<peakarr[result];
}