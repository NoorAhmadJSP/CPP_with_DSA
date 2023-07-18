#include <iostream>
using namespace std;
void amplify(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (i % 4 == 0)
        {
            int j = i * 10;
            cout << j << " ";
        }
        else
        {
            cout<< i << " ";
        }
    }
}
int main()
{
    int sequ;
    cout << "Create a sequence from 1 to ";
    cin >> sequ;
    cout << endl;
    amplify(sequ);
    return 0;
}