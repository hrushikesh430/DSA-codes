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

    int isEmpty()
    {
        if (rear == front)
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
        if (rear == (size - 1))
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
            cout << "queue overflow" << endl;
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
            cout << "queue underflow" << endl;
            return -1;
        }
    }
} q1(100);

class Stack : public Queue
{
    int StackSize;

public:
    Stack()
    {
        StackSize = 0;
    }

    void push(int x)
    {
        q1.enqueue(x);
        StackSize++;
    }

    int pop()
    {
        while (StackSize > 0)
        {
            q1.enqueue(q1.dequeue());
            StackSize--;
        }
        int x = q1.dequeue();
        return x;
    }
};

int main()
{
    Stack s1;
    s1.push(100);
    s1.push(90);
    s1.push(90);
    s1.push(90);
    s1.push(90);

    cout << s1.pop() << endl;
    return 0;
}