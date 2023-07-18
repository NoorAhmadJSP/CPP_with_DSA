#include <iostream>
using namespace std;

int main()
{
    int array[10];
    int largest;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter array numbers : ";
        cin >> array[i];
    }
    largest = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }
    cout << "Largest value of array is : " << largest;

    return 0;
}