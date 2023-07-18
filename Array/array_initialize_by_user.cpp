#include <iostream>
using namespace std;

int main()
{
    int array[5];
    cout << "Enter vale of 1st index : ";
    cin >> array[0];

    cout << "Enter vale of 2nd index : ";
    cin >> array[1];

    cout << "Enter vale of 3rd index : ";
    cin >> array[2];

    cout << "Enter vale of 4th index : ";
    cin >> array[3];

    cout << "Enter vale of 5th index : ";
    cin >> array[4];

    cout << "1st vale of index is : "<<array[0]<<endl;
    cout << "last vale of index is : "<<array[4]<<endl;
    cout<<*array;

    return 0;
}