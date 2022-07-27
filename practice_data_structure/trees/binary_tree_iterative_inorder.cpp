#include <bits/stdc++.h>
using namespace std;
class Node;
class Queue
{

    Node **q;
    int size;
    int front, rear;

public:
    Queue() {}

    Queue(int size)
    {
        this->size = size;
        front = rear = -1;
        q = new Node *[size];
    }

    int isFull()
    {
        if (rear == size - 1)
        {
            return 1;
        }
        else
            return 0;
    }

    int isEmpty()
    {
        if (rear == front)
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
            cout << "Queue is full" << endl;
    }

    Node *dequeue()
    {
        if (!(isEmpty()))
        {
            front++;
            Node *x = q[front];
            return x;
        }
        else
        {
            return NULL;
        }
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
        Node *p, *t;
        Queue q(size);
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

    void preoder(Node *p)
    {
        if (p)
        {
            preoder(p->left);
            cout << p->data << " ";
            preoder(p->right);
        }
    }

    void IterativePreorder(Node *p)
    {
        stack<Node *> s;

        while (!(s.empty()) || p)
        {
            if (p)
            {
                cout << p->data << " ";
                s.push(p);
                p = p->left;
            }
            else
            {
                p = s.top();
                s.pop();
                p = p->right;
            }
        }
    }

    void IterativeInorder(Node *p)
    {
        stack<Node *> s;
        while (!(s.empty()) || p)
        {
            if (p)
            {
                s.push(p);
                p = p->left;
            }
            else
            {
                p = s.top();
                s.pop();
                cout << p->data << " ";
                p = p->right;
            }
        }
    }
};

int main()
{
    class Node n;
    n.Create(100);
    // n.preoder(root);
    // n.IterativePreorder(root);
    n.IterativeInorder(root);

    return 0;
}