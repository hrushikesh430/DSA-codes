#include <bits/stdc++.h>
using namespace std;
class Node *root = NULL;
class Node
{
    int height;
    int data;
    Node *left, *right;

public:
    Node() {}
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
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

    int BalanceFactor(Node *p)
    {
        int x, y;
        x = p && p->left ? p->height : 0;
        y = p && p->right ? p->height : 0;
        return x - y;
    }

    Node *llrotation(Node *p)
    {
        Node *pl = p->left;
        Node *plr = pl->right;

        pl->left = plr;
        pl->right = p;

        pl->height = Height(pl);
        p->height = Height(p);
        plr->height = Height(p);

        if (p == root)
            root = pl;

        return p;
    }

    Node *rrrotation(Node *p)
    {
        Node *pr = p->right;
        Node *prl = pr->left;

        pr->left = p;
        pr->right = prl;

        p->height = Height(p);
        pr->height = Height(pr);
        prl->height = Height(prl);

        if (p == root)
            root = pr;

        return p;
    }

    Node *lrrotation(Node *p)
    {
        Node *pl = p->left;
        Node *plr = pl->right;

        pl->right = plr->left;
        p->left = plr->right;

        plr->left = pl;
        plr->right = p;

        p->height = Height(p);
        pl->height = Height(pl);
        plr->height = Height(plr);

        if (p == root)
            root = plr;

        return p;
    }

    Node *rlrotation(Node *p)
    {
        Node *pr = p->right;
        Node *prl = pr->left;

        p->right = prl->left;
        pr->left = prl->right;
        prl->left = p;
        prl->right = pr;

        if (p == root)
            root = prl;

        return p;
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

        p->height = Height(p);

        if (BalanceFactor(p) == 2 && (BalanceFactor(p->left) == 1))
        {
            return llrotation(p);
        }
        else if (BalanceFactor(p) == 2 && BalanceFactor(p->left) == -1)
        {
            return lrrotation(p);
        }
        else if (BalanceFactor(p) == -2 && BalanceFactor(p->right) == -1)
        {
            return rrrotation(p);
        }
        else if (BalanceFactor(p) == -2 && BalanceFactor(p->right) == 1)
        {
            return rlrotation(p);
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
    n.Insert(root, 20);
    n.Insert(root, 100);
    n.Insert(root, 230);
    n.Insert(root, 40);

    n.preorder(root);

    return 0;
}