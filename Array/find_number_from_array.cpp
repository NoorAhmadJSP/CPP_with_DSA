#include <iostream>
using namespace std;

int main()
{
    int range, n, flag=0;
    cout << "Enter array range : ";
    cin >> range;
    int array[range];
    for (int i = 0; i < range; i++)
    {   
        cout << "Enter value of array : ";
        cin >> array[i];
    }
    cout << "\nEnter value of do you want to find : ";
    cin >> n;
    for (int j = 0; j < range; j++)
    {
        if (array[j] == n)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "\nValue is match : " << n;
    }
    else
    {
        cout << "\nValue not match : " << n;
    }
    return 0;
}