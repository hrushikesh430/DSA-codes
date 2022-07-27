#include <bits/stdc++.h>
using namespace std;
class Node *root = NULL;
class Node
{
    int data;
    Node *left;
    Node *right;

public:
    Node() {}
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }

    Node *Insert(Node *p, int key)
    {
        if (p == NULL)
        {
            p = new Node(key);
            return p;
        }

        if (key < p->data)
        {
            p->left = Insert(p->left, key);
        }
        else if (key > p->data)
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
    Node n;
    root = n.Insert(root, 100);
    n.Insert(root, 20);
    n.Insert(root, 30);
    n.preorder(root);

    return 0;
}