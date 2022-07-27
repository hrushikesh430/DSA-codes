#include <bits/stdc++.h>
using namespace std;
class Node;
Node *root = NULL;
class Node
{

    int data;
    Node *left;
    Node *right;

public:
    Node *Insert(Node *p, int key)
    {
        if (p == NULL)
        {
            p = new Node;
            p->data = key;
            p->left = p->right = NULL;
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

    int Height(Node *p)
    {
        int x, y;
        if (p == NULL)
            return 0;

        x = Height(p->left) + 1;
        y = Height(p->right) + 1;
        return max(x, y);
    }

    Node *pre(Node *p)
    {
        while (p && p->right)
        {
            p = p->right;
        }
        return p;
    }

    Node *succ(Node *p)
    {

        while (p && p->left)
        {
            p = p->left;
        }
        return p;
    }

    Node *Delete(Node *p, int key)
    {

        Node *q;
        if (p == NULL)
        {
            return NULL;
        }

        if (p->left == NULL && p->right == NULL)
        {
            if (p == root)
            {
                root = NULL;
                return NULL;
            }
            delete p;
            return NULL;
        }

        if (key < p->data)
        {
            p->left = Delete(p->left, key);
        }
        else if (key > p->data)
        {
            p->right = Delete(p->right, key);
        }
        else
        {
            if (Height(p->left) > Height(p->right))
            {
                q = pre(p->left);
                p->data = q->data;
                p->left = Delete(p->left, q->data);
            }
            else
            {
                q = succ(p->right);
                p->data = q->data;
                p->right = Delete(p->right, q->data);
            }
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
    root = n.Insert(root, 10);
    n.Insert(root, 90);
    n.Insert(root, 3);
    n.Insert(root, 98);
    n.preorder(root);
    cout << endl;
    n.Delete(root, 90);
    n.preorder(root);

    return 0;
}