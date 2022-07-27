#include <bits/stdc++.h>
using namespace std;

class Queue
{

    int front, rear;
    int size;
    int *q;

public:
    Queue()
    {
        this->size = 10;
        front = rear = -1;
        q = new int[size];
    }

    Queue(int size)
    {
        this->size = size;
        front = rear = -1;
        q = new int[size];
    }

    int isFull()
    {
        if ((rear + 1) % size == (front))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int isEmpty()
    {
        if (front == rear)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void enqueue(int x)
    {
        if (!(isFull()))
        {
            rear = (rear + 1) % size;
            q[rear] = x;
        }
        else
        {
            cout << "Queue is Full" << endl;
        }
    }

    int dequeue()
    {
        if (!(isEmpty()))
        {
            int x = q[front];
            front = (front + 1) % size;
            return x;
        }
        else
        {
            cout << "queue is empty" << endl;
            return -1;
        }
    }
};

int main()
{
    Queue q1(5);
    q1.enqueue(10);
    q1.enqueue(90);
    q1.enqueue(40);
    q1.enqueue(150);
    q1.enqueue(60);
    q1.dequeue();
    q1.dequeue(); // Always there will one vacent place
    q1.enqueue(10);

    return 0;
}
