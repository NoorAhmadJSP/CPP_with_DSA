#include <iostream>
using namespace std;

int* sunFun(int* a , int* b){
    static int c = *a+*b;
    return &c;
}


int main()
{   
    int a = 10;
    int b = 7;
    int* c = sunFun(&a,&b);
    cout<<"The value of C is : "<<c<<endl;
    cout<<"The value of C is : "<<&c<<endl;
    cout<<"The value of C is : "<<*c<<endl;



    // int arr[5]={0};
    // int size = sizeof(arr)/sizeof(int);
    // cout<<size;

    // int number;
    // cout<<"Enter array size : "<<endl;
    // cin>>number;
    // int array[number];
    // cout<<"Enter 5 input from user : "<<endl;

    // for (int i = 0; i < number ; i++)
    // {
    //       cin>>array[i];
    // }
    // cout<<"\nThe numbers are : ";
    // for (int n = 0; n < number; n++)
    // {
    //     cout<<array[n]<<" ";
    // }
    return 0;
}