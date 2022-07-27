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
    }

    Queue(int size)
    {
        this->size = size;
        q = new int[size];
        front = rear = -1;
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

    int isFull()
    {
        if (rear == size - 1)
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
            rear++;
            q[rear] = x;
        }
        else
        {
            cout << "Queue overflow" << endl;
        }
    }

    int dequeue()
    {
        if (!(isEmpty()))
        {
            front++;
            int x = q[front];
            return x;
        }
        else
        {
            cout << "Queue underflow" << endl;
            return -1;
        }
    }
} q1(10), q2(10), temp(10);

class Stack : public Queue
{

public:
    void push(int x)
    {
        if (!(q1.isFull()))
        {
            q2.enqueue(x);

            while (!(q1.isEmpty()))
            {
                q2.enqueue(q1.dequeue());
            }

            temp = q1;
            q1 = q2;
            q2 = temp;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    int pop()
    {
        if (!(q1.isEmpty()))
        {
            int x = q1.dequeue();
            return x;
        }
        else
        {
            cout << "stack underflow" << endl;
            return -1;
        }
    }
} s1;

int main()
{

    s1.push(10);
    cout << s1.pop() << endl;

    return 0;
}