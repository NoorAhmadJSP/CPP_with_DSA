#include <iostream>
using namespace std;
int main()
{

    string word;
    char n;
    int lenght;
    cout << "Enter any sentence : ";
    cin >> word;

    lenght = word.size();
    
   lenght = lenght-1;

    if (word[lenght] == 'n')
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }
    
    return 0;
}