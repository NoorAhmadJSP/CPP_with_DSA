#include <iostream>
using namespace std;

struct student
{
    int number;
    float digits;
    char chracter;
};


int main()
{   
    student std;
    std.number = 4;
    cout<<std.number;

    return 0;
}
