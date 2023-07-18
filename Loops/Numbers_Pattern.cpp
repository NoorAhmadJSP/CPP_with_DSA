#include <iostream>
using namespace std;
int main()
{
    int number;
    int row = 1;
    int count = 1;
    cin >> number;
    while (row <= number)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count<<" ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}
