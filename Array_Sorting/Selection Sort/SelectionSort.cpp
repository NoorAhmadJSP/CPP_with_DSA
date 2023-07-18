# include <iostream>
using namespace std;
void selectionSort(int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        int index = i;

        for (int j = 1+i; j < size; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }  
        }
        swap(arr[index], arr[i]);   
    }
}
void printarray(int arr[], int size){
    cout<<"Sorted array is : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    cout<<"Enter Array size : ";
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter array values : ";
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];
    }
    selectionSort(arr, size);
    printarray(arr,size);
    
}