#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {11, 34, 2, 8, 7};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                // cout<<i<<" "<<arr[i]<<" , "<<j<<" "<<arr[j]<<endl;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                
            }
        }
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}