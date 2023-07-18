#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "Size of Queue is : " << q.size() << endl;
    cout << "Front of Queu is : " << q.front() << endl;
    cout << "Last of Queue is : " << q.back() << endl << endl << endl;

    q.pop();
    q.pop();
    q.pop();
    q.pop();

    cout << "Front of Queu is : " << q.front() << endl;
    cout << "Size of Queue is : " << q.size() << endl << endl;

    if (q.empty())
    {
        cout << "Queue is Empty." << endl;
    }
    else
    {
        cout << "Queue is Not Empty. " << endl << endl;
    }

    q.pop();

    if (q.empty())
    {
        cout << "Queue is Empty." << endl;
    }
    else
    {
        cout << "Queue is Not Empty. " << endl;
    }

    return 0;
}
