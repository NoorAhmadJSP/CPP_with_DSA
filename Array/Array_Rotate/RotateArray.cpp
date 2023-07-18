#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {5, 6, 3, 8, 2, 8};
    int temparr[6];
    int n = 2;
    int idx = 0;
    int arrsize = sizeof(arr) / sizeof(int);
    for (int i = n; i < arrsize; i++)
    {
        temparr[idx] = arr[i];
        idx++;
    }
    for (int i = 0; i < n; i++)
    {
        temparr[idx] = arr[i];
        idx++;
    }
    for (int i = 0; i < arrsize; i++)
    {
        cout << temparr[i] << " ";
    }
    return 0;
}