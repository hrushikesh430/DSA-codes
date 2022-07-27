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

    void Insert(int key)
    {
        if (root == NULL)
        {
            root = new Node(key);
            return;
        }
        Node *p = root;
        Node *r;
        while (p)
        {
            r = p;
            if (key < p->data && p->left)
            {
                p = p->left;
            }
            else if (key > p->data && p->right)
            {
                p = p->right;
            }
            else
            {
                Node *temp = new Node(key);
                if (key < r->data)
                    r->left = temp;
                else
                    r->right = temp;

                return;
            }
        }
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
    n.Insert(100);
    n.Insert(20);
    n.Insert(30);
    n.preorder(root);
    return 0;
}