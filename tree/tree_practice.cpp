#include <bits/stdc++.h>
using namespace std;
class node;
class Queue{
    int size;
    node **q;
    int front , rare;
    public :

        void create(int size)
        {
            this->size = size;
            q = new node*[size];
            front = rare = 0 ;
    
        }
        void enqueue(node *x)
        {
            front++;
            if(!(is_full()))
            {
                q[front] = x;
            }
            else{
                cout << "QUEUE IS FULL" << endl;
            }
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
            if(rare == front )
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        node* dequeue()
        {
            node *x;
            rare++;
            x = q[rare];
            return x;
        }

    

};
class node *root;
class node{
    int data;
    node *left;
    node *right;

    public :

    void tcreate()
    {
        int x;
        ///node *root;
        node *p , *t;
        
        Queue q;
        q.create(100);
        
        root = new node;
        cout << "enter the root value " << endl;
        cin >> x;
        root->data = x;
        root->left = root->right = NULL;
        q.enqueue(root);

        while(!(q.is_empty()))
        {
            p = q.dequeue();
            cout << "enter the left child value of " << p->data << endl;
            cin >> x;
            if(x != -1)
            {
                t = new node;
                t->data = x;
                t->left = t->right = NULL;;
                p->left = t;
                q.enqueue(t);
            }

            cout << "enter the right child value of " << p->data << endl;
            cin >> x;
            if(x != -1)
            {
                t = new node;
                t->data = x;
                t->left = t->right = NULL;;
                p->right = t;
                q.enqueue(t);
            }
        }


    }

    void postorder(node *p)
    {
        if(p)
        {
            cout << p->data << " ";
            postorder(p->left);
            postorder(p->right);
        }
    }

};
int main()
{
    node n;
    n.tcreate();
    n.postorder(root);
    return 0;
}