#include <iostream>
using namespace std;
bool isleap(int year)
{
    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
    {
        return true;
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        return true;
    }
    else if (year % 4 != 0)
    {
        return false;
    }
    else if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0)
    {
        return false;
    }
    else
        return false;
}
int countLeapYears(int year1, int year2)
{
    int counter = 0;
    for (int i = 0; i < 10; i++)
    {
        if (isleap(year1 + i))
        {

            counter = counter + 1;
        }
    }
    return counter;
}
int main()
{
    int year;
    cout << "Please enter Year : ";
    cin >> year;
    if (isleap(year))
    {
        cout << "This is a Leap Year :" << endl;
    }
    else
    {
        cout << "Not a leap year : " << endl;
    }
    cout<<countLeapYears(20016, 2026);
    return 0;
}