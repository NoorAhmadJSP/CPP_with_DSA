#include <iostream>
using namespace std;

class Queue
{
public:
    int size;
    int *arr;
    int front;
    int rear;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "Queue is OverLoad. " << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        int ans = arr[front];
        if (front == rear)
        {
            cout << "Queue is Empty. " << endl;
            return -1;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front == 0;
                rear == 0;
            }
        }
        return ans;
    }

    int Qfront()
    {
        if (front == rear)
        {
            cout << "Queue is Empty so value is : ";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int Qrear()
    {
        if (rear == front)
        {
            cout << "Queue is Empty so value is : ";
            return -1;
        }
        else
        {
            return arr[rear-1];
        }
    }
};
int main()
{
    Queue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);


    cout << "Queue First/front Elemet is : " << q.Qfront() << endl;
    cout << "Queue Last/rear Elemet is : " << q.Qrear() << endl<<endl;

    if (q.isEmpty())
    {
        cout << "Queue is Empty. " << endl;
    }
    else
    {
        cout << "Queue is Not_Empty. " << endl;
    }

    q.dequeue();
    q.dequeue();

    cout << "Queue First/front Elemet is : " << q.Qfront() << endl;
    cout << "Queue Last/rear Elemet is : " << q.Qrear() << endl<<endl;


    q.dequeue();
    q.dequeue();

    cout << "Queue First/front Elemet is : " << q.Qfront() << endl;
    cout << "Queue Last/rear Elemet is : " << q.Qrear() << endl<<endl;

    q.dequeue();

    if (q.isEmpty())
    {
        cout << "Queue is Empty. " << endl;
    }
    else
    {
        cout << "Queue is Not_Empty. " << endl;
    }

    cout << "Queue First/front Elemet is : " << q.Qfront() << endl;
    cout << "Queue Last/rear Elemet is : " << q.Qrear() << endl<<endl;
    return 0;
}
