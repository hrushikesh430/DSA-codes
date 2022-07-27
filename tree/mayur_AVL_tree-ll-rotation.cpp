#include <iostream>
using namespace std;

class Node
{
public:
    Node *lchiled;
    int height;
    int data;
    Node *rchiled;
} *root = NULL;
int nodeHeight(Node *p)
{
    int hrt, hlt;
    hlt = p && p->lchiled ? p->lchiled->height : 0;
    hrt = p && p->rchiled ? p->rchiled->height : 0;

    return (hlt > hrt ? hlt + 1 : hrt + 1);
}
int balanceFactor(Node *p)
{
    int hrt, hlt;
    hlt = p && p->lchiled ? p->lchiled->height : 0;
    hrt = p && p->rchiled ? p->rchiled->height : 0;

    return (hlt - hrt);
}
Node *LLrotation(Node *p)
{
    Node *pl = p->lchiled;
    Node *plr = pl->rchiled;

    p->lchiled = plr;
    pl->rchiled = p;

    p->height = nodeHeight(p);
    pl->height = nodeHeight(pl);

    if (root == p)
        root = pl;

    return pl;
}
Node *LRrotation(Node *p)
{
    Node *pl = p->lchiled;
    Node *prl = pl->rchiled;

    pl->rchiled = prl->lchiled;
    p->lchiled = prl->rchiled;
    prl->lchiled = pl;
    prl->rchiled = p;

    if (root == p)
        root = prl;

    p->height = nodeHeight(p);
    pl->height = nodeHeight(pl);
    prl->height = nodeHeight(prl);

    return prl;
}
Node *RRrotation(Node *p)
{
    Node *pl = p->rchiled;

    p->rchiled = pl->lchiled;
    pl->lchiled = p;

    if (root == p)
        root = pl;
    pl->height = nodeHeight(pl);
    p->height = nodeHeight(p);

    return pl;
}
Node *RLrotation(Node *p)
{
    Node *pl = p->rchiled;
    Node *plr = pl->lchiled;

    p->rchiled = plr;
    plr->rchiled = p;

    p->rchiled = plr->lchiled;
    plr->lchiled = p;

    if (root == p)
        root = plr;
    p->height = nodeHeight(p);
    plr->height = nodeHeight(plr);
    pl->height = nodeHeight(pl);

    return plr;
}

Node *Rinsert(Node *p, int x)
{
    Node *t = new Node;

    if (p == NULL)
    {
        t = new Node;
        t->data = x;
        t->lchiled = t->rchiled = NULL;
        t->height = 1;
        return t;
    }
    if (p->data < x)
        p->rchiled = Rinsert(p->rchiled, x);
    else if (p->data > x)
        p->lchiled = Rinsert(p->lchiled, x);

    p->height = nodeHeight(p);

    if (balanceFactor(p) == 2 && balanceFactor(p->lchiled) == 1)
        return LLrotation(p);
    else if (balanceFactor(p) == 2 && balanceFactor(p->lchiled) == -1)
        return LRrotation(p);
    else if (balanceFactor(p) == -2 && balanceFactor(p->rchiled) == -1)
        return RRrotation(p);
    else if (balanceFactor(p) == -2 && balanceFactor(p->rchiled) == 1)
        return RLrotation(p);

    return p;
}

void preorder(Node *p) {
            if(p)
            {
                cout << p->data << " ";
                preorder(p->lchiled);
                preorder(p->rchiled);
            }
}

int main()
{   
   root = Rinsert(root , 10);
    Rinsert(root , 5);
    Rinsert(root , 2);
    preorder(root);

    return 0;
}