#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class linkedList
{
public:
    Node *head;
    linkedList()
    {
        head = NULL;
    }
    void insertAtTail(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAtTop(int d)
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "NULL";
    }
};
int main()
{
    linkedList obj;
    for (int i = 0; i < 10; i++)
    {
        obj.insertAtTop(i);
    }
    obj.print();
}