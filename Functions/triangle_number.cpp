#include <iostream>
using namespace std;
int triangle(int number)
{
    int j = 0;
    for (int i = 1; i <= number; i++)
    {

        j = j + i;
    }
    return j;
}

int main()
{
    int sequence;
    cout << "Enter Sequence : ";
    cin >> sequence;
    cout << triangle(sequence);

    return 0;
}