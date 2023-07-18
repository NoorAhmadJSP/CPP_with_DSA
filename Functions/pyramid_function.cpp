#include <iostream>
#include <string>
#include <sstream>

using namespace std;

float pyramid(float a, float b, float c, string d)
{
    if (d == "cen")
    {
        a = a * 100;
        b = b * 100;
        c = c * 100;
        return ((a * b * c) / 3);
    }

    else if (d == "kilo")
    {
        a = a * 0.001;
        b = b * 0.001;
        c = c * 0.001;
        return ((a * b * c) / 3);
    }

    else if (d == "mili")
    {
        a = a * 1000;
        b = b * 1000;
        c = c * 1000;
        return ((a * b * c) / 3);
    }
    else
     return 0;
}
int main()
{
    cout << pyramid(18, 412, 93, "mili");
    return 0;
}
