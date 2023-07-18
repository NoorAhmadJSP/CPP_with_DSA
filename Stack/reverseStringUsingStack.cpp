#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string name = "NoorAhmad";

    string reverseString = "";
    
    stack<char> ch;

    for (int i = 0; i < name.length(); i++)
    {
        char character = name[i];
        ch.push(character);
    }


    while (!ch.empty())
    {
        char charact = ch.top();
        reverseString.push_back(charact);
        ch.pop();
    }
     cout<<"String Before Reverse is : "<<name<<endl;
    cout<<"String After Reverse is : "<<reverseString;

    return 0;
}