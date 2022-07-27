#include <bits/stdc++.h>
using namespace std;
class Stack
{

    int top1, top2;
    int *s;
    int size;

public:
    Stack(int size)
    {
        this->size = size;
        top1 = -1;
        top2 = size;
        s = new int[size];
    }

    int s1Empty()
    {
        if (top1 == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int s2Empty()
    {
        if (top2 == size)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int Full()
    {
        if (top1 == (top2 - 1))
            return 1;
        else
            return 0;
    }

    void push(int x, int y)
    {
        if (!(Full()))
        {
            top1++;
            s[top1] = x;
        }
        else
        {
            cout << "Stack1 overflow" << endl;
        }

        if (!(Full()))
        {
            top2--;
            s[top2] = y;
        }
        else
        {
            cout << "Stack2 overflow" << endl;
        }
    }

    int pop1()
    {
        if (!(s1Empty()))
        {
            int x;
            x = s[top1];
            top1--;
            return x;
        }
        else
        {
            cout << "stack1 underflow" << endl;
            return -1;
        }
    }

    int pop2()
    {
        if (!(s2Empty()))
        {
            int x;
            x = s[top2];
            top2++;
            return x;
        }
        else
        {
            cout << "stack2 underflow" << endl;
            return -1;
        }
    }
};

int main()
{
    Stack s1(10);
    s1.push(10, 100);
    s1.push(20, 90);
    s1.push(30, 80);
    s1.push(40, 70);
    s1.push(50, 60);
    cout << endl
         << endl;
    cout << s1.pop1() << " " << s1.pop2() << endl;
    //  cout << s1.pop1() << " " << s1.pop2() << endl;
}