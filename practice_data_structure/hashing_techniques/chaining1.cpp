#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
    }
    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
    }
};

class Chaining
{

    Node **Hash;

public:
    Chaining()
    {
        Hash = new Node *[10];
        for (int i = 0; i < 10; i++)
        {
            Hash[i] = nullptr;
        }
    }

    int hashKey(int ele)
    {
        return (ele % 10);
    }

    void Insert(int val)
    {
        int index = hashKey(val);
        Node *temp = new Node(val);

        if (Hash[index] == nullptr)
        {
            Hash[index] = temp;
        }
        else
        {
            Node *p = Hash[index];
            Node *q = p;

            while (p && p->data < val)
            {
                q = p;
                p = p->next;
            }

            if (q == Hash[index])
            {
                temp->next = Hash[index];
                Hash[index] = temp;
            }
            else
            {
                temp->next = q->next;
                q->next = temp;
            }
        }
    }

    int Search(int val)
    {
        int index = hashKey(val);
        Node *p = Hash[index];

        while (p)
        {
            if (p->data == val)
                return val;
        }
        return -1;
    }
};

int main()
{
    Chaining n;
    n.Insert(19);
    n.Insert(9);
    cout << n.Search(9) << endl;
    return 0;
}