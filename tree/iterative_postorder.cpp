#include <bits/stdc++.h>
using namespace std;
class node;
class Queue{

    int size;
    int front , rear;
    node **q;

    public :

    void create(int size)
    {
        this->size = size;
        q = new node*[size];
        front = rear = -1;
    }

    void enqueue(class node* x)
    {
        if(front == size -1)
        {
            cout << "queue is full" << endl;
        }
        else
        {
            front++;
            q[front] = x;
        }
    }

    node* dequeue()
    {
        node* x = NULL;
        if(front == rear)
        {
            cout << "queue is empty" << endl;
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
        if(front == rear)
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
class node
{
    class node * left;
    class node * right;
    int data;

    public :

        void tcreate()
        {
            int x;
            class node *p; 
            class node *t;
            class Queue q;
            q.create(100);

            cout << "enter the value of root" << endl;
            cin >> x;
            root = new node;
            root->data = x;    
            root->left = root->right = NULL;
            q.enqueue(root);

            while(!(q.is_empty()))
            {
                p = q.dequeue();
                cout << "enter the left child of " << p->data << endl;
                cin >> x;
                if(x != -1)
                {
                    t = new node;
                    t->data = x;
                    t->left = t->right = NULL;
                    p->left = t;
                    q.enqueue(t);
                }


                cout << "enter the right child of " << p->data << endl;
                cin >> x;
                if(x != -1)
                {
                    t = new node;
                    t->data = x;
                    t->left = t->right = NULL;
                    p->right = t;
                    q.enqueue(t);
                }


            }




        }

    void preorder(class node* p)
    {
    stack<node*> s;
    long int temp;
        while (p != NULL || !s.empty() )
        {
            if(p != NULL)
            {
               
                s.push(p);
                p = p->left;    
            }
            else
            {
                temp = (int)s.top();
                s.pop();
                if(temp > 0)
                {    
                    s.push(-temp);
                    t = ((node*)temp)->right;
                }
            }
        }
    
    }
    


};


int main()
{
    class node n;
    n.tcreate();
    n.preorder(root);


    return 0;
}