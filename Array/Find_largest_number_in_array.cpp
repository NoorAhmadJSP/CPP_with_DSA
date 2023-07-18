#include <iostream>

using namespace std;

int main()
{
    int number[5];
    int largest;
    for (int j = 0; j < 5; j++)
    {
        cout << "Enter number : ";
        cin >> number[j];
    }
    largest = number[0];
    for (int i = 0; i < 5; i++)
    {
        if (largest < number[i])
        {
            largest = number[i];
        }
    }
    cout << "Largest number is : " << largest;

    return 0;
}