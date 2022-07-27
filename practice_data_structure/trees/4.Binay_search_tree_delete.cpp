#include <bits/stdc++.h>
using namespace std;

class Node *root = NULL;

class Node
{

    int data;
    Node *left, *right;

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

    int Height(Node *p)
    {
        int x, y;
        if (p == NULL)
            return 0;
        x = Height(p->left) + 1;
        y = Height(p->right) + 1;

        return max(x, y);
    }

    Node *Succ(Node *p)
    {
        while (p && p->left)
        {
            p = p->left;
        }

        return p;
    }

    Node *Pre(Node *p)
    {
        while (p && p->right)
        {
            p = p->right;
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
                q = Pre(p->left);
                p->data = q->data;
                p->left = Delete(p->left, q->data);
            }
            else
            {
                q = Succ(p->right);
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
    Node n;
    root = n.Insert(root, 10);
    n.Insert(root, 20);
    n.Insert(root, 30);
    n.preorder(root);
    cout << endl;
    n.Delete(root, 20);
    n.preorder(root);
    return 0;
}