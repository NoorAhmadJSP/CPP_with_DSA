#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;   
};
Node* createNode(int data){
    Node* newNode = new Node();
    newNode ->data = data;
    newNode ->left =nullptr;
    newNode ->right =nullptr;
    return newNode;
} 

int main()
{

    Node* root = createNode(1);    ///or 
    /*  Node* root = NULL;
     root = createNode(1); */

    root ->left = createNode(2);
    root ->right = createNode(3);
    root ->left ->left = createNode(4);

    return 0;
}