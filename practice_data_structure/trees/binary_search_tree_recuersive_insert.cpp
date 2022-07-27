#include <bits/stdc++.h>
using namespace std;
class Node;
class Node *root = NULL;
class Node
{
    int data;
    Node *left;
    Node *right;

public:
    Node *Insert(Node *p, int key)
    {
        Node *t;

        if (p == NULL)
        {
            p = new Node;
            p->data = key;
            p->left = p->right = NULL;
            return p;
        }

        if (p->data > key)
        {
            p->left = Insert(p->left, key);
        }
        else if (p->data < key)
        {
            p->right = Insert(p->right, key);
        }
        return p;
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
    class Node n;
    root = n.Insert(root, 90);
    n.Insert(root, 10);
    n.Insert(root, 30);
    n.Insert(root, 50);
    n.preorder(root);
    return 0;
}