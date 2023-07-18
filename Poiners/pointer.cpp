#include <iostream>
using namespace std;
void fun(int &c)
{
    // *b= 10;
    // return b;
    c = 10;
    // return *b;
}
int main()
{
    int b = 6;

    // int *b;
    // b = &a;
    // fun(a);
    fun(b);
    cout << b;
    // int **c = &b;
    // cout << &a << endl;
    // cout << b << endl;
    // cout << *b << endl;
    // cout << c << endl;
    // cout << *c << endl;
    // cout << **c << endl;

    return 0;
}
