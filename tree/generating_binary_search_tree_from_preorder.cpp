#include <bits/stdc++.h>
using namespace std;
class node;
class Queue
{

    int size;
    node **q;
    int front, rear;

public:
    void create(int size)
    {
        this->size = size;
        q = new node *[size];
        front = rear = -1;
    }

    void enqueue(node *p)
    {
        front++;
        q[front] = p;
    }
    node *dequeue()
    {
        rear++;
        node *p = q[rear];
        return p;
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
};
class node *root = NULL;
class node
{

    int data;
    node *right;
    node *left;

public:
    void tcreate()
    {
        Queue q;
        q.create(100);

        int x;
        cout << "enter the root value" << endl;
        cin >> x;

        node *p, *t;
        root = new node;
        root->data = x;
        root->left = root->right = NULL;
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
                t->left = t->right = NULL;
                p->left = t;
                q.enqueue(t);
            }

            cout << "enter the value of right child of " << p->data << endl;
            cin >> x;
            if (x != -1)
            {
                t = new node;
                t->data = x;
                t->left = t->right = NULL;
                p->right = t;
                q.enqueue(t);
            }
        }
    }

    void generate(int arr[], int n)
    {

        node *p;
        stack<node *> s;
        int i = 0;

        root = new node;
        root->data = arr[i++];
        root->left = root->right = NULL;
        s.push(root);
        p = root;

        while (i < n)
        {
            if (arr[i] < p->data)
            {
                node *t = new node;
                t->data = arr[i++];
                t->left = t->right = NULL;
                p->left = t;
                s.push(p);
                p = t;
            }
            else
            {

                if ((arr[i] > p->data) && (arr[i] < s.top()->data) && !(s.empty()))
                {

                    node *t = new node;
                    t->data = arr[i++];
                    t->left = t->right = NULL;
                    p->right = t;
                    s.push(p);
                    p = t;
                }
                else
                {
                    p = s.top();
                    s.pop();
                }
            }
        }
    }

    void preoder(node *t)
    {
        if (t)
        {
            cout << t->data << " ";
            preoder(t->left);
            preoder(t->right);
        }
    }
};

int main()
{
    class node n;
    int arr[] = {100, 20, 40, 77, 2, 89};
    // n.tcreate();
    n.generate(arr, 5);
    n.preoder(root);
}