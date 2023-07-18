#include <iostream>
using namespace std;

int main()
{
    int n;
    int array[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter value of array : ";
        cin >> array[i];
    }

    cout << "Enter value of scalar : " ;
    cin >> n;

    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " \t "<< n * array[i] << endl;
    }
    return 0;
}