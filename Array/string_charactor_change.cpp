#include <iostream>
using namespace std;

string Letter_change(string text)
{
    for (int i = 0; i < int(text.size()); i++)
    {
        if (text[i] == 'a')
        {
            text[i] = 'b';
        }
        else if (text[i] == 'p')
        {
            text[i] = 'q';
        }
        else if (text[i] == 'z')
        {
            text[i] = 'a';
        }
    }
    return text;
}
int main()
{
    string letter;
    cout << "Enter any letter : ";
    cin >> letter;
    cout << "Letter are changed : " << Letter_change(letter);
    return 0;
}