#include <iostream>

using namespace std;

int Vowel_Count(string text)
{
    int ctr = 0;
    for (int i = 0; i < int(text.size()); i++)
    {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
            ctr++;
        if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U')
            ctr++;
    }
    return ctr;
}

int main()
{
    string letter;
    cout << "Enter any letter : ";
    cin >> letter;
    cout << "Number of vowels -> " << Vowel_Count(letter) << endl;

    return 0;
}