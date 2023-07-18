#include <iostream>
using namespace std;

string student(float number)
{
    string result;
    if (number > 15)
    {
        result = "Pass";
    }
    else
    {
        result = "Fail";
    }
    return result;
}
int main()
{
    float stu[5];
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter student marks : ";
        cin >> stu[i];
    }
    for (int j = 0; j < 5; j++)
    {
        cout << "Student is " << student(stu[j]) << endl;
    }

    return 0;
}
