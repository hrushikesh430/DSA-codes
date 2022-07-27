#include <bits/stdc++.h>
using namespace std;

// for doing operations on middle element on stack
// best way to do with doubly-linked-list

class Stack
{
public:
    struct node
    {
        int num;
        node *prev, *next;

        node(int num)
        {
            this->num = num;
        }
    };

    struct node *head = NULL, *mid = NULL, *temp = NULL;
    int size = 0;

    void push(int x)
    {
        temp = new node(x);
        if (head == NULL)
        {
            head = temp;
            head->next = head->prev = NULL;
            mid = head;
            size++;
            return;
        }

        head->next = temp;
        temp->prev = head;
        head = head->next;
        if (size % 2 == 1)
        {
            mid = mid->next;
        }
        size++;
    }

    void pop()
    {
        if (size == 0)
        {
            cout << "Error" << endl;
            return;
        }
        else
        {
            if (size == 1)
            {
                head = NULL;
                mid = NULL;
                return;
            }

            head = head->prev;
            head->next = NULL;

            if (size % 2 == 0)
            {
                mid = mid->prev;
            }
            size--;
        }
    }

    int midEle()
    {
        if (mid == NULL)
        {
            return -1;
        }
        else
        {
            return mid->num;
        }
    }

    void deleteMid()
    {
        if (size == 1)
        {
            head = NULL;
            mid = NULL;
            return;
        }
        else
        {
            head = head->prev;
            head->next = NULL;

            if (size % 2 == 0)
            {
                mid = mid->prev;
            }
            size--;
        }
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(100);
    s.push(90);
    s.push(1000);
    s.push(9);
    s.pop();
    s.pop();
    cout << s.midEle() << endl;

    return 0;
}