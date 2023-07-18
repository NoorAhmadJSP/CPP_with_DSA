#include <iostream>
#include <string>
using namespace std;

string ancestor(int a, char b)
{
    if (a == -3)
    {
        if (b == 'm')
        {
            return "Great Grandfather ";
        }
        else if (b == 'f')
        {
            return "Great Grandmother ";
        }
        else
        {
            return "Invalid";
        }
    }
    else if (a == -2)
    {
        if (b == 'm')
        {
            return "Great Grandfather ";
        }
        else if (b == 'f')
        {
            return "Great Grandmother ";
        }
        else
        {
            return "Invalid";
        }
    }
    else if (a == -1)
    {
        if (b == 'm')
        {
            return "Great Grandfather ";
        }
        else if (b == 'f')
        {
            return "Great Grandmother ";
        }
        else
        {
            return "Invalid";
        }
    }
    else if (a == 0)
    {
        if (b == 'm')
        {
            return "Great Grandfather ";
        }
        else if (b == 'f')
        {
            return "Great Grandmother ";
        }
        else
        {
            return "Invalid";
        }
    }
    else if (a == 1)
    {
        if (b == 'm')
        {
            return "Great Grandfather ";
        }
        else if (b == 'f')
        {
            return "Great Grandmother ";
        }
        else
        {
            return "Invalid";
        }
    }
    if (a == 2)
    {
        if (b == 'm')
        {
            return "Great Grandfather ";
        }
        else if (b == 'f')
        {
            return "Great Grandmother ";
        }
        else
        {
            return "Invalid";
        }
    }
    if (a == 3)
    {
        if (b == 'm')
        {
            return "Great Grandfather ";
        }
        else if (b == 'f')
        {
            return "Great Grandmother ";
        }
        else
        {
            return "Invalid";
        }
    }
     return "Invalid";
}
    int main()
    {
        int n;
        char c;
        cout << "Enter number :";
        cin >> n;

        cout << "Enter character :";
        cin >> c;


        cout<<ancestor(n, c);

        return 0;
    }
