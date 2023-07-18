#include <iostream>
using namespace std;
int main()
{
    int number;
    int row = 1;
    cin >> number;
    while (row <= number)
    {
        int value = row;
        int col = 1;
        while (col <= row)
        {
            cout << value << " ";
            value--;
            col++;
        }
        cout << endl;
        row++;
    }
}
