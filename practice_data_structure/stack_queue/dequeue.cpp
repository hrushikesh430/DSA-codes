#include <bits/stdc++.h>
using namespace std;

class Dequeue
{

    int front, rear;
    int size;
    int *q;

public:
    Dequeue()
    {
        this->size = 10;
        front = -1;
        rear = 10;
    }

    Dequeue(int size)
    {
        this->size = size;
        front = -1;
        rear = size;
    }

    int isFull()
    {
        if (front == rear - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void enqueueFront(int x)
    {
        if (!(isFull()))
        {
            front++;
            q[front] = x;
        }
        else
        {
            cout << "Queue Overflow" << endl;
        }
    }

    int FrontIsEmpty()
    {
        if (front == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int BackIsEmpty()
    {
        if (rear == (size - 1))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void enqueueLast(int x)
    {
        if (!(isFull()))
        {
            rear--;
            q[rear] = x;
        }
        else
        {
            cout << "queue overflow" << endl;
        }
    }

    int dequeueFront()
    {
        if (!(FrontIsEmpty()))
        {
            int x = q[front];
            front--;
            return x;
        }
        else
        {
            cout << "queue underflow" << endl;
            return -1;
        }
    }

    int dequeueBack()
    {
        if (!(BackIsEmpty()))
        {
            int x = q[rear];
            rear++;
            return x;
        }
        else
        {
            cout << "queue underflow" << endl;
            return -1;
        }
    }
};

int main()
{
    Dequeue d1(100);
    d1.enqueueFront(10);
    d1.enqueueFront(20);
    d1.enqueueFront(30);
    d1.enqueueLast(100);
    d1.enqueueLast(90);
    cout << d1.dequeueBack() << " " << d1.dequeueFront() << endl;

    return 0;
}