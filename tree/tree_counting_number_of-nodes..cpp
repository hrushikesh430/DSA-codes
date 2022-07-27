#include <bits/stdc++.h>

using namespace std;
class node;
class Queue
{
    int size;
    int front, rear;
    node **q;

public:
    void create(int x)
    {
        size = x;
        q = new node *[x];
        front = rear = -1;
    }

    void enqueue(class node *x)
    {
        if (is_full())
        {
            cout << "queue is full" << endl;
        }
        else
        {
            front++;
            q[front] = x;
        }
    }
    node *dequeue()
    {
        node *x = NULL;
        if (is_empty())
        {
            cout << "queue id empty" << endl;
        }
        else
        {
            rear++;
            x = q[rear];
        }
        return x;
    }

    int is_empty()
    {
        if (front == rear)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int is_full()
    {
        if (front == size - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
class node *root;
class node : public Queue
{
    int data;
    node *right;
    node *left;

public:
    void tcreate()
    {
        int x;
        class Queue q;
        class node *p;
        class node *t;
        q.create(100);

        cout << "enter the root value" << endl;
        cin >> x;
        root = new node;
        root->data = x;
        root->right = root->left = NULL;
        q.enqueue(root);

        while (!(q.is_empty()))
        {
            p = q.dequeue();
            cout << "enter the value of left child of " << p->data << endl;
            cin >> x;
            if (x != -1)
            {
                t = new node;
                t->data = x;
                t->right = t->left = NULL;
                p->left = t;
                q.enqueue(t);
            }
            cout << "enter the value of right child of " << p->data << endl;
            cin >> x;
            if (x != -1)
            {
                t = new node;
                t->data = x;
                t->right = t->left = NULL;
                p->right = t;
                q.enqueue(t);
            }
            cout << endl;
        }
    }

    int count(node *p)
    {
        int x, y;
        if (p)
        {
            x = count(p->left);
            y = count(p->right);
            return x + y + 1;
        }
        return 0;
    }
};

int main()
{
    class node n;
    n.tcreate();
    //   n.preorder(root);
    // n.level_order(root);
    cout << n.count(root) << endl;

    return 0;
}