#include <bits/stdc++.h>
using namespace std;
class Node;
Node *root = NULL;
class Queue
{

    Node **q;
    int size;
    int front, rear;

public:
    Queue()
    {
        this->size = 100;
        front = rear = -1;
        q = new Node *[100];
    }

    bool isFull()
    {
        if (front == size - 1)
            return true;
        else
            return false;
    }

    bool isEmpty()
    {
        if (front == rear)
            return true;
        else
            return false;
    }
    void enqueue(Node *p)
    {
        if (!(isFull()))
        {
            front++;
            q[front] = p;
        }
        else
        {
            cout << "Queue is Full" << endl;
        }
    }

    Node *Dequeue()
    {
        if (!(isEmpty()))
        {
            rear++;
            return q[rear];
        }
        else
        {
            return NULL;
        }
    }
};
class Node : public Queue
{
    int data;
    Node *left;
    Node *right;

public:
    Node() {}
    Node(int data)
    {
        Queue();
        this->data = data;
        left = right = NULL;
    }

    void Insert(int n)
    {
        Queue q;
        int x;
        cout << "Enter the value of root" << endl;
        cin >> x;
        root = new Node(x);
        q.enqueue(root);
        Node *t;
        while (!(q.isEmpty()))
        {
            t = q.Dequeue();
            cout << "Enter the value of left child of " << t->data << endl;
            cin >> x;
            if (x != -1)
            {
                Node *temp = new Node(x);
                t->left = temp;
                q.enqueue(temp);
            }
            cout << "Enter the value of right child of " << t->data << endl;
            cin >> x;
            if (x != -1)
            {
                Node *temp = new Node(x);
                t->right = temp;
                q.enqueue(temp);
            }
        }
    }

    void Preorder(Node *p)
    {
        if (p)
        {
            Preorder(p->left);
            cout << p->data << " ";
            Preorder(p->right);
        }
    }
};

int main()
{
    Node n;
    n.Insert(100);
    n.Preorder(root);

    return 0;
}