#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int *arr;
    int top;
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is Overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is Underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);

    // int array = st.arr[2]; //check for check to arr 3rd value
    // cout<<"array value :"<<array<<endl;

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;
    

    if (st.isEmpty())
    {
        cout << "Stack isEmpty";
    }
    else
    {
        cout << "Stack is not Empty";
    }

    return 0;
}