#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *s;
    int size;
    int top;

    void create(int size)
    {
        this->size = size;
        s = new int[size];
        top = -1;
    }

    void push(int x)
    {
        if (top == size - 1)
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
        int x = -1;
        if (top == -1)
        {
            cout << "stack underflow" << endl;
        }
        else
        {
            x = s[top];
            top--;
        }
        return x;
    }
};

class specialStack : public Stack
{
    int *specialStack;
    int specialSize;
    int SpecialTop;

public:
    int is_empty()
    {
        if (top == -1)
        {
            return 1;
        }
        return 0;
    }

    int is_full()
    {
        if (SpecialTop == (size - 1))
        {
            return 1;
        }
        return 0;
    }

    void specialCreate(int x)
    {
        specialSize = x;
        create(x);
        SpecialTop = -1;
        specialStack = new int[size];
    }

    void specialPush(int x)
    {
        if (is_empty())
        {
            SpecialTop++;
            specialStack[SpecialTop] = x;
            push(x);
        }
        else
        {
            int y = specialPop();
            if (x < y)
            {
                SpecialTop++;
                specialStack[SpecialTop] = x;
                push(x);
            }
            else
            {
                SpecialTop++;
                specialStack[SpecialTop] = y;
                push(x);
            }
        }
    }

    int specialPop()
    {
        if (is_empty())
        {
            cout << "stack underflow";
            return -1;
        }
        else
        {

            int x = specialStack[SpecialTop];
            SpecialTop--;
            return x;
        }
    }
    int specialTopele()
    {
        int x = specialStack[SpecialTop];
        return x;
    }
    int getMin()
    {
        int x = specialTopele();
        return x;
    }
};

int main()
{
    class specialStack s;
    s.specialCreate(10);
    s.specialPush(20);
    s.specialPush(-1);
    s.specialPush(10);
    s.specialPush(0);
    cout << "the min value is " << s.getMin() << endl;
    s.specialPop();
    cout << "now the min value is " << s.getMin() << endl;
    return 0;
}