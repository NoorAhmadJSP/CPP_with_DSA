#include <iostream>

using namespace std;

int main()
{
    string ticket[5] = {"Gladiator", "Starwars", "Terminator", "Takinglives", "Tombrider"};
    string name;
    cout << "Enter Movie name : ";
    cin >> name;

    for (int j = 0; j < 5; j++)
    {
        if (name == ticket[j])
        {
            if (ticket[j] == ticket[0] || ticket[j] == ticket[2] || ticket[j] == ticket[4])
            {
                cout << "Movie name is : " << name << " and discout is : 50";
            }
            else
            {
                cout << "Movie name is : " << name << " and discout is : 25";
            }
        }
    }

    return 0;
}