#include <iostream>
using namespace std;

int main()
{
    int array[10];
    cout << "Enter array numbers : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    cout << endl;

    int j = 9;
    int i = 0;
    while (j >= i)
    {
        swap(array[i], array[j]);

        i++;
        j--;
    }

    for (int j = 0; j < 10; j++)
    {
        cout << array[j] << " ";
    }
    return 0;
}