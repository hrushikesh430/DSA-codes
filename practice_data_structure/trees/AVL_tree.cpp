#include <bits/stdc++.h>
using namespace std;

class Node;
class Node *root = NULL;
class Node
{

    int data;
    Node *left;
    Node *right;
    int height;

public:
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
        int hl, hr;
        hl = p && p->left ? p->height : 0;
        hr = p && p->right ? p->height : 0;
        return (hl - hr);
    }

    Node *llrotation(Node *p)
    {
        Node *pl = p->left;
        Node *plr = pl->right;

        pl->left = plr;
        pl->right = p;

        pl->height = Height(pl);
        p->height = Height(p);

        if (p == root)
            root = pl;

        return pl;
    }

    Node *rrrotation(Node *p)
    {
        Node *pr = p->right;
        Node *prl = pr->left;

        pr->left = p;
        pr->right = prl;

        pr->height = Height(pr);
        p->height = Height(p);

        if (p == root)
            root = pr;
        return pr;
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

        return plr;
    }

    Node *rlrotaion(Node *p)
    {
        Node *pr = p->right;
        Node *prl = pr->left;

        p->right = prl->left;
        pr->left = prl->right;

        prl->left = p;
        prl->right = pr;

        p->height = Height(p);
        pr->height = Height(pr);
        prl->height = Height(prl);

        if (p == root)
            root = prl;

        return prl;
    }

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
            return rlrotaion(p);
        }
        return p;
    }

    void Preorder(Node *p)
    {
        if (p)
        {
            Preorder(p->left);
            cout << p->data << " ";
            Preorder(p->right);
        }
    }
};

int main()
{
    class Node n;
    root = n.Insert(root, 20);
    n.Insert(root, 720);
    n.Insert(root, 10);
    n.Insert(root, 30);
    n.Insert(root, 230);

    n.Preorder(root);

    return 0;
}