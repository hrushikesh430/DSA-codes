#include <bits/stdc++.h>
using namespace std;
class node;
node *root = NULL;

class node{
    int data;
    node *left , *right;

    public :

        void insert(int key)
        {
            node *p , *r , *t;
            p = root;

            if(root == NULL)
            {
                root = new node;
                root->data = key;
                root->left = root->right = NULL;
                return;
            }

            while(p)
            {
                r = p;
                if( key < p->data)
                {
                    p = p->left;
                }
                else if (key > p->data){
                    p = p->right;
                }
                else
                {
                    return;
                }
            }

            t = new node;
            t->data = key;
            t->left = t->right = NULL;

            if(key < r->data) r->left = t;
            else r->right = t;


        }

        void preorder(node *t)
        {
            if(t)
            {
                preorder(t->left);
                cout << t->data << " ";
                preorder(t->right);
            }
        }



};


int main()
{
    class node n;
    n.insert(10);
    n.insert(20);
    n.insert(30);
    n.insert(40);
    n.insert(100);
    n.insert(150);
    n.insert(200);
    n.preorder(root);

    return 0;
}