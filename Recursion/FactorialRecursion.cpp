#include <iostream>
using namespace std;
int factorial(int n)
{
    // Base case
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // recursion relation
    return n * factorial(n - 1);
}

int main()
{
    int any;
    cout << "Enter any number for Factorial : ";
    cin >> any;
    int ans = factorial(any);
    cout << "Factorial of " << any << "! is : " << ans;
    return 0;
}
