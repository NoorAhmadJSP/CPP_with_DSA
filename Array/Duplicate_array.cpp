#include <iostream>
using namespace std;
int dublicate(int arr[], int size){
    int ans =0;
    for (int i = 0; i < size; i++)
    {
     ans = ans^arr[i];
    }
    
    for (int i = 1; i < 5; i++)
    {
       ans = ans^i;
    }
    return ans;
    
}
int main()
{
   int arr[100];
   int size;
   cin>>size;
   for (int i = 0; i < size; i++)
   {
        cin>>arr[i];
   }
    cout<<dublicate(arr, size);
    return 0;
}
