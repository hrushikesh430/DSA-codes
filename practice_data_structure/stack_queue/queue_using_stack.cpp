// Problem - first entery is always 0

#include <bits/stdc++.h>
using namespace std;
class Stack
{
    int *s;
    int size;
    int top;

public:
    void create(int size)
    {
        this->size = size;
        s = new int[size];
    }

    void push(int x)
    {
        if (top == (size - 1))
        {
            cout << "stackOverflow" << endl;
        }
        else
        {
            top++;
            s[top] = x;
        }
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "stackUnderflow" << endl;
            return -1;
        }
        else
        {
            int x = s[top];
            top--;
            return x;
        }
    }

    int isEmpty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }

    int isFull()
    {
        if (top == size - 1)
            return 1;
        else
            return 0;
    }
} s1, s2;

class Queue : public Stack
{
public:
    Queue()
    {
        s1.create(100);
        s2.create(100);
    }
    void enqueue(int x)
    {
        if (!(s1.isEmpty()))
        {
            while (!(s1.isEmpty()))
            {
                s2.push(s1.pop());
            }

            s1.push(x);

            while (!(s2.isEmpty()))
            {
                s1.push(s2.pop());
            }
        }
        else
        {
            s1.push(x);
        }
    }

    int dequeue()
    {
        if (!(s1.isEmpty()))
        {
            int x = s1.pop();
            return x;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    class Queue q1;
    q1.enqueue(10);

    cout << q1.dequeue() << endl;

    return 0;
}