#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while (start <= end)
    {
        if (arr[mid] == key)                /// 2 3 4 5 6 7 6
        {
            return arr[mid];
        }
        if (arr[mid] > key)
        {
            end = mid -1;
        }
        else{
            start =  mid + 1;
        }
        mid = (start+end)/2;
        
    }
    return -1;
}
int main()
{
    int evenarr[8] = {2, 4, 6, 8, 10, 12, 14, 16};
    int oddarr[7] = {1, 3, 5, 7, 9, 11, 13};

    int back = binarySearch(evenarr, 4 , 10);
    // int back = binarySearch(evenarr, 8 , 54);

    cout<< "Even Array is : " <<back;

    
    return 0;
}
