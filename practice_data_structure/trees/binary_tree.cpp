#include <bits/stdc++.h>
using namespace std;
class Node;
class Queue
{

    int size;
    Node **q;
    int front, rear;

public:
    Queue()
    {
    }

    Queue(int size)
    {
        this->size = size;
        q = new Node *[size];
        front = rear = -1;
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

    int isEmpty()
    {
        if (front == rear)
            return 1;
        else
            return 0;
    }

    void enqueue(Node *x)
    {
        if (!(isFull()))
        {
            rear++;
            q[rear] = x;
        }
        else
            cout << "Queue is Full" << endl;
    }

    Node *dequeue()
    {
        if (!(isEmpty()))
        {
            front++;
            Node *x = q[rear];
            return x;
        }
        else
            return NULL;
    }
};
class Node *root = NULL;
class Node : public Queue
{
    int data;
    Node *left;
    Node *right;

public:
    void Create(int size)
    {
        Queue q(size);
        Node *p, *t;
        root = new Node;
        int x;

        cout << "Enter the value of root" << endl;
        cin >> x;
        root->data = x;
        root->left = root->right = NULL;
        q.enqueue(root);

        while (!(q.isEmpty()))
        {
            p = q.dequeue();
            cout << "enter the value of left child of " << p->data << endl;
            cin >> x;
            if (x != -1)
            {
                t = new Node;
                t->data = x;
                p->left = t;
                t->left = t->right = NULL;
                q.enqueue(t);
            }

            cout << "enter the value of right child of " << p->data << endl;
            cin >> x;
            if (x != -1)
            {
                t = new Node;
                t->data = x;
                p->right = t;
                t->left = t->right = NULL;
                q.enqueue(t);
            }
        }
    }

    void preorder(Node *p)
    {
        if (p)
        {
            preorder(p->left);
            cout << p->data << " ";
            preorder(p->right);
        }
    }
};

int main()
{
    Node n;
    n.Create(100);
    n.preorder(root);
    return 0;
}