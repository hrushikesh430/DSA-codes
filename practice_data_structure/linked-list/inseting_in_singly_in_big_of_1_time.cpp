#include <bits/stdc++.h>
using namespace std;
class Node;
Node *head = NULL, *last = NULL;
class Node
{
    Node *next;
    int data;

public:
    Node()
    {
        head = NULL;
    }

    Node(int data)
    {
        this->data = data;
    }

    void insert(int data)
    {
        if (head == NULL)
        {
            Node *temp = new Node(data);
            head = temp;
            temp->next = NULL;
            last = temp;
            return;
        }

        Node *temp = new Node(data);
        last->next = temp;
        temp->next = NULL;
        last = temp;
    }

    void Traverse(Node *p)
    {
        Node *q = p;

        while (q != NULL)
        {
            cout << q->data << " ";
            q = q->next;
        }

        cout << endl;
    }
};

int main()
{
    Node n;
    n.insert(10);
    n.insert(20);
    n.insert(30);
    n.insert(40);
    n.Traverse(head);
    return 0;
}