#include <bits/stdc++.h>
using namespace std;
class node;
class Queue{

    int size;
    node **q;
    int front , rear;

    public :

    void create(int size)
    {
        this->size = size;
        q = new node*[size];
        front = rear = -1;

    }

    void enqueue(node *p)
    {
        front++;
        q[front] = p; 
    }
    node* dequeue()
    {
        rear++;
        node *p = q[rear];
        return p;
    }

    int is_full()
    {
        if(front == size -1)
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
class node *root = NULL;
class node{

    int data;
    node *right;
    node *left;

public :

    void tcreate()
    {
        Queue q;
        q.create(100);

        int x;
        cout << "enter the root value" << endl;
        cin >> x;

        node *p ,*t;
        root = new node;
        root->data = x;
        root->left = root->right = NULL;
        q.enqueue(root);

        while(!(q.is_empty()))
        {
            p = q.dequeue();
            
         
            cout << "enter the value of left child of "<< p->data << endl;
            cin >> x;
            if(x != -1)
            {
                t = new node;
                t->data = x;
                t->left = t->right = NULL;
                p->left = t;
                q.enqueue(t);
            }
            

        
            cout << "enter the value of right child of " << p->data << endl;
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


    void preoder(node *t)
    {
        if(t)
        {
            preoder(t->left);
            cout << t->data << " ";
            preoder(t->right);
        }


    }

};




int main()
{
    class node n;
    n.tcreate();
    n.preoder(root);
}