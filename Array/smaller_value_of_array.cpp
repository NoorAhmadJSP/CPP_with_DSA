#include <iostream>
using namespace std;

int main()
{
    int array[10];
    int smaller;
    cout << "Enter array numbers : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }

    smaller = array[0];
    for (int j = 0; j < 10; j++)
    {
        if (array[j] < smaller)
        {
            smaller = array[j];
        }
    }
    cout <<"\nSmaller value is : "<< smaller << endl;
    return 0;
}