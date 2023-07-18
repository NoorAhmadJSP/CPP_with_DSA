#include <iostream>
using namespace std;
main()
{
string Names[100];
int IDs[100];
float Gpa[100];
int count;
cout << "How many records you want to enter: ";
cin >> count;
for (int idx = 0; idx < count; idx = idx + 1) //For Taking Input
{
cout << "Name: ";
cin >> Names[idx];
cout << "Roll Number: ";
cin >> IDs[idx];
cout << "GPA: ";
cin >> Gpa[idx];
}
cout << "Name" << "\t" << "ID" << "\t" << "GPA" << endl;
for (int idx = 0; idx < count; idx = idx + 1) //For Displaying Output
{
cout << Names[idx] << "\t" << IDs[idx] << "\t" << Gpa[idx] << endl;
}
}