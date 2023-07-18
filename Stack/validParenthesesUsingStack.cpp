#include <iostream>
#include <stack>
using namespace std;

bool validParentheses(string parentheses);

int main()
{
    string parentheses;
    cout << "Enter any Parentheses : ";
    cin >> parentheses;
    if (validParentheses(parentheses))
    {
        cout << "Your Parentheses are Valid ";
    }
    else
    {
        cout << "Your Parentheses are not Valid ";
    }
    return 0;
}

bool validParentheses(string parentheses)
{
    stack<char> s;
    for (int i = 0; i < parentheses.length(); i++)
    {
        char ch = parentheses[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            if (!s.empty())
            {
                char top = s.top();
                if (ch == ')' && top == '(' || ch == '}' && top == '{' || ch == ']' && top == '[')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}