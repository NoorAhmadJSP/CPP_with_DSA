#include <iostream>
using namespace std;

int main()
{
    char customer;
    cout << "Enter customer :";
    char time;
    cin >> customer;
    int minute;
    if (customer == 'p' || customer == 'P')
    {
        cout << "Enter time day or night : ";
        cin >> time;
        if (time == 'D' || time == 'd')
        {
            cout << "Enter minute of  used : ";
            cin >> minute;
            if (minute <= 75)
            {
                cout << "Your Charge is : $25";
            }
            else
            {

                cout << "Your Charge is: $" << ((25 + (minute - 75) * 0.10));
            }
        }
        else if (time == 'n' || time == 'N')
        {
            {
                cout << "Enter minute of  used :";
                cin >> minute;
                if (minute <= 100)
                {
                    cout << "Your Charge is : $25";
                }
                else
                {

                    cout << "Your Charge is: $" << ((25 + (minute - 100) * 0.05));
                }
            }
        }
        else
        {
            cout << "Invalid";
        }
    }
    else if (customer == 'r' || customer == 'R')
    {
        cout << "Enter minute of  used : ";
        cin >> minute;
        if (minute <= 50)
        {
            cout << "Your Charge is : $10";
        }
        else
        {

            cout << "Your Charge is: $" << ((10 + (minute - 50) * 0.20));
        }
    }
    else
    {
        cout << "Invalid";
    }
}
