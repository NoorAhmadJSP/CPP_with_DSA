#include <iostream>
using namespace std;

int main()
{
    int array[] = {4, 6, 7, 8, 9, 20};
    int sum = 0;
    double average;

    cout << "The number are : ";
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
        sum = sum + array[i];
    }
    cout << "\nThe sum of all numbers are : " << sum;
    cout << "\nThe average of array is : " << (average = sum / 6.0);

    return 0;
}