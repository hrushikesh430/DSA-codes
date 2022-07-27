#include <bits/stdc++.h>
using namespace std;

class Stack
{

    int *s;
    int top;
    int size;

public:
    void create(int size)
    {
        this->size = size;
        s = new int[size];
        top = -1;
    }

    int is_empty()
    {
        if (top == -1)
            return 1;

        return 0;
    }

    int is_full()
    {
        if (top == size - 1)
            return 1;

        return 0;
    }

    void push(int x)
    {
        if (is_full())
        {
            cout << "stack overflow" << endl;
        }
        else
        {
            top++;
            s[top] = x;
        }
    }

    int pop()
    {
        int x = s[top];
        top--;
        return x;
    }
};

int main()
{
    Stack s1, s2;

    s1.create(10);
    s2.create(10);
    int x = 0;
    while (x != -1)
    {
        cout << "enter your choice " << endl;
        cout << "1. enqueue" << endl;
        cout << "2. dequeue" << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "enter tbe" s1.push(a);
            break;

        default:
            break;
        }
    }

    return 0;
}