#include <iostream>
using namespace std;
void fibonacci(int a, int b, int n)
{
    int next;
    cout << a << " , ";
    cout << b;

    for (int i = 1; i < n - 1; i++)
    {
        next = a + b;
        cout << " , " << next;
        a = b;
        b = next;
    }
}

void factorial(int number)
{
    int fac = 1;
    for (int i = 1; i <= number; i++)
    {

        fac = fac * i;
    }
    cout << "Factorial of " << number << " is :" << fac;
}

int main()
{
    // int x = 0, y = 1, n;
    string user;
     cout << "Enter User name :";
    cin>>user;
    
    while (user != "End")
    {
       
        
        cout << "Hello : "<<user<<endl;
        cout << "Enter username : ";
        cin >> user;

    }
     cout << "End : " <<user;

    // factorial(n);
    // fibonacci(x, y, n);

    return 0;
}
