#include <bits/stdc++.h>
using namespace std;
class Node;
Node *root = NULL;
class Node
{
    int data;
    Node *left, *right;

public:
    void Insert(Node *p, int key)
    {
        Node *r;
        if (root == NULL)
        {
            root = new Node;
            root->data = key;
            root->left = root->right = NULL;
            return;
        }

        while (p)
        {
            r = p;
            if (key < p->data)
            {
                p = p->left;
            }
            else if (key > p->data)
            {
                p = p->right;
            }
            else
            {
                return;
            }
        }

        Node *t;
        t = new Node;
        t->data = key;
        t->right = t->left = NULL;

        if (key < r->data)
            r->left = t;
        else
            r->right = t;
    }

    void preorder(Node *p)
    {
        if (p)
        {
            preorder(p->left);
            cout << p->data << " ";
            preorder(p->right);
        }
    }
};
int main()
{
    Node n;
    n.Insert(root, 10);
    n.Insert(root, 70);
    n.Insert(root, 20);
    n.Insert(root, 30);
    n.preorder(root);
    return 0;
}