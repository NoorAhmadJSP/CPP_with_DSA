#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *createNode(int data)
{
    Node *newNode = new Node(data);
    return newNode;
}

void postOderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOderTraversal(root->left);
    postOderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "PostOderTraversal is : ";
    postOderTraversal(root);
}