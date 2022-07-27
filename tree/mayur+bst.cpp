#include <iostream>
using namespace std;
class Node
{
public:
    Node *lchiled;
    int data;
    Node *rchiled;
} ;

//
//*Recursive insert;
Node *Rinsert(Node *p, int x)
{
    Node *t = NULL;
    if (p == NULL)
    {
        t = new Node;
        t->data = x;
        t->rchiled = t->lchiled = NULL;
        return t;
    }
    if(x<p->data)
    p->lchiled=Rinsert(p->lchiled,x);
    else if(x>p->data)
    p->rchiled=Rinsert(p->rchiled,x);


    return p;
    
}


void inorder(Node *p)
{
    if (p)
    {
        inorder(p->lchiled);
        cout << p->data << " ";
        inorder(p->rchiled);
    }
}
void pre(Node *p)
{
    if (p)
    {
        cout << p->data << " ";
        pre(p->lchiled);
        pre(p->rchiled);
    }
}
int main()
{
    class Node *root = NULL;
    root = Rinsert(root ,10);
    Rinsert(root ,1000);
    Rinsert(root ,200);
    Rinsert(root ,190);
    Rinsert(root ,120);
    pre(root);
    
    
    return 0;
}