#include <iostream>
using namespace std;

bool is_digit_in_number(int number, int digit){
    while (number > 0)
    {
        if (number==digit || number%10==digit)
        {
            return true;
        }
        else {
            number=number/10;
        }
        
    }
    return false;
    
}

string sevenBoom(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (is_digit_in_number(arr[i],7))
        {
            return "Boom!";
        }
     
    }
    return "not boom!";
}

int main()
{
    // cout<<"True or 1 in case of digit find in number else False or 0 : ";
    // if(is_digit_in_number(156789,7))
    // {
    //     cout<<"true";
    
    // }
    // else{
    //     cout<<"false";
    // }
    int numbers;
    cout << "Enter array size : ";
    cin >> numbers;
    int array[numbers];
    for (int i = 0; i < numbers; i++)
    {
        cout << "Enter array element : ";
        cin >> array[i];
    }
    cout << sevenBoom(array, numbers);
    return 0;
}
