#include <iostream>
using namespace std;
void calculateYears(int humanyears){
    if (humanyears == 1)
    {
        cout << "Human Years : " << humanyears << endl;
        cout << "Cat Years : 15"<<endl;
        cout << "Dog Years : 15"<<endl;
    }

    else if (humanyears == 2)
    {
        cout << "Human Years : " << humanyears << endl;
        cout << "Cat Years : 24"<<endl;
        cout << "Dog Years : 24"<<endl;
    }

    else if (humanyears > 2)
    {
        cout << "Human Years : " << humanyears << endl;
        cout << "Cat Years : " << (24 + ((humanyears -2) * 4))<<endl;
        cout << "Dog Years : " << (24 + ((humanyears -2)* 5))<<endl;
    }
}
int main()
{
    int year;
    cout << "Enter HumanYears : ";
    cin >> year;
    cout<<endl;
    calculateYears(year);
    return 0;
}