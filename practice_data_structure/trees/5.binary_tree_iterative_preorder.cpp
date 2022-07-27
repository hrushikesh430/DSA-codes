#include <bits/stdc++.h>
using namespace std;
class Node;
class Stack
{

    Node **s;
    int size;
    int top;

public:
    Stack() {}
    Stack(int size)
    {
        this->size = size;
        this->s = new Node *[size];
        top = -1;
    }

    int isFull()
    {
        if (top == size - 1)
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
        if (top == -1)
            return 1;

        return 0;
    }

    void push(Node *x)
    {
        if (!(isFull()))
        {
            top++;
            s[top] = x;
        }
        else
        {
            cout << "Stack is Full" << endl;
        }
    }
    Node *pop()
    {
        if (!(isEmpty()))
        {
            Node *x = s[top];
            top--;
            return x;
        }
        return NULL;
    }
};
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
        q = new Node *[size];
        front = rear = -1;
    }

    int isQueueFull()
    {
        if (front == size - 1)
            return 1;
        return 0;
    }
    int isQueueEmpty()
    {
        if (front == rear)
            return 1;
        return 0;
    }

    void enqueue(Node *p)
    {
        if (!(isQueueFull()))
        {
            front++;
            q[front] = p;
        }
        else
        {
            cout << "Queue is Full" << endl;
        }
    }

    Node *dequeue()
    {
        if (!(isQueueEmpty()))
        {
            rear++;
            Node *p = q[rear];
            return p;
        }
        else
            return NULL;
    }
};
class Node *root = NULL;
class Node : public Stack, public Queue
{
    Node *left, *right;
    int data;

public:
    Node() {}
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }

    void Create(int size)
    {
        Queue q(100);
        int x;
        cout << "Enter the value of root\n"
             << endl;
        cin >> x;
        root = new Node(x);
        q.enqueue(root);

        while (!(q.isQueueEmpty()))
        {
            Node *p = q.dequeue();
            cout << "Enter the left child value of " << p->data << endl;
            cin >> x;
            if (x != -1)
            {
                Node *temp = new Node(x);
                p->left = temp;
                q.enqueue(temp);
            }
            cout << "Enter the right child value of " << p->data << endl;
            cin >> x;
            if (x != -1)
            {
                Node *temp = new Node(x);
                p->right = temp;
                q.enqueue(temp);
            }
        }
    }

    void IterativePreorder(Node *p)
    {
        Stack s(100);
        if (p == NULL)
        {
            return;
        }
        Node *q;
        // s.push(p);
        while (p || !(s.isEmpty()))
        {
            if (p)
            {
                cout << p->data << " ";
                s.push(p);
                p = p->left;
            }
            else
            {
                p = s.pop();
                p = p->right;
            }
        }
    }

    void preorder(Node *p)
    {
        if (p)
        {
            cout << p->data << " ";
            preorder(p->left);
            preorder(p->right);
        }
    }
};

int main()
{
    Node n;
    n.Create(100);
    n.IterativePreorder(root);
    n.preorder(root);
    return 0;
}