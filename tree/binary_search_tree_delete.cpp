#include <bits/stdc++.h>
using namespace std;
class node;
node *root = NULL;

class node
{

    int data;
    node *left, *right;

public:
    node *insert(node *p, int key)
    {
        node *t;

        if (p == NULL)
        {
            p = new node;
            p->data = key;
            p->left = p->right = NULL;
            return p;
        }

        if (key < p->data)
        {
            p->left = insert(p->left, key);
        }
        else if (key > p->data)
        {
            p->right = insert(p->right, key);
        }

        return p;
    }

    node *inpre(node *p)
    {
        while (p && p->right != NULL)
        {
            p = p->right;
        }

        return p;
    }

    node *insuc(node *p)
    {
        while (p && p->left != NULL)
        {
            p = p->left;
        }

        return p;
    }

    int height(node *p)
    {
        int x, y;
        if (p == NULL)
            return 0;
        x = height(p->left);
        y = height(p->right);
        return (x > y ? x + 1 : y + 1);
    }

    node *Delete(node *p, int key)
    {

        node *q;

        if (p == NULL)
            return NULL;

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

            if (height(p->left) > height(p->right))
            {
                q = inpre(p->left);
                p->data = q->data;
                p->left = Delete(p->left, q->data);
            }
            else
            {

                q = insuc(p->right);
                p->data = q->data;
                p->right = Delete(p->right, q->data);
            }
        }
        return p;
    }

    void preorder(node *p)
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
    node n;
    node *root = NULL;
    root = n.insert(root, 10);
    n.insert(root, 20);
    n.insert(root, 30);
    n.insert(root, 40);
    n.insert(root, 100);
    n.insert(root, 150);
    n.insert(root, 200);
    n.Delete(root, 100);
    n.preorder(root);
    return 0;
}