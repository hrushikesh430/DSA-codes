#include <bits/stdc++.h>
using namespace std;
class node;
node *root = NULL;

class node{

    int data;
    node *left , *right;

    public :

        node* insert(node *p,int key)
        {
            node *t ;
        

            if(p == NULL)
            {
                p = new node;
                p->data = key;
                p->left = p->right = NULL;
                return p;
            }

            if(key < p->data)
            {
                p->left = insert(p->left , key);
            }
            else if(key > p->data)
            {
                p->right = insert(p->right , key);
            }

            return p;
        }


        void preorder(node *p)
        {
            if(p)
            {
                preorder(p->left);
                cout << p->data << " ";
                preorder(p->right);
            }
        }

};




int main()
{
    node n;
    node *root = NULL;
    root =  n.insert(root ,10);
    n.insert(root ,20);
    n.insert(root ,30);
    n.insert(root ,40);
    n.insert(root ,100);
    n.insert(root ,150);
    n.insert(root ,200);
    n.preorder(root);
    return 0;
}