#include <bits/stdc++.h>
using namespace std;

class node;
class node *root = NULL;

class node{

    node *left , *right;
    int data , height;

    public :

    

    node* llrotation(node *p)
    {
        node *pl = p->left;
        node *plr = pl->right;
        p->left = plr;
        pl->right = p;

        if(p == root)
            root = pl;

        pl->height = Nodeheight(pl);
        p->height = Nodeheight(p);

        return pl;
    }

    node* rrrotation(node *p)
    {
        node *pr = p->right;
        node *prl = pr->left;

        p->right = prl;
        pr->left = p;

        if(p == root)
            root = pr;

        pr->height = Nodeheight(pr);
        p->height = Nodeheight(p);

        return pr;
    }

    node* lrrotation(node *p)
    {
        node *pl = p->left;
        node *plr = pl->right;

        pl->right = plr->left;
        p->left = plr->right;

        plr->right = p;
        plr->left = pl;

        if(root == plr)
            root = plr;

        p->height = Nodeheight(p);
        plr->height = Nodeheight(plr);
        pl->height = Nodeheight(pl);

        return plr;


    }

    node * rlrotation(node *p)
    {
        node *pr = p->right;
        node *prl = pr->left;

        p->right = prl->left;
        pr->left = prl->right;

        prl->right = pr;
        prl->left = p;

        p->height = Nodeheight(p);
        prl->height = Nodeheight(prl);
        pr->height = Nodeheight(pr);

        if(root == p)
            root = prl;

        return prl;

    }

    int Nodeheight(node *p)
    {
        int hl , hr;

        hl = p && p->left ? p->left->height : 0;
        hr = p && p->right ? p->right->height : 0;

        return  hl > hr ? hl + 1 : hr + 1;
    }

    int balancefactor(node *p)
    {
        int hl , hr;

        hl = p && p->left ? p->left->height : 0;
        hr = p && p->right ? p->right->height : 0;

        return (hl - hr);
    }
    node* insert(node *p , int key)
    {

        if(p == NULL)
        {
            p = new node;
            p->data = key;
            p->left = p->right = NULL;
            p->height = 1;
            return p;
        }

        if(key < p->data)
        {
            p->left = insert(p->left , key);
        }
        else if(key > p->data)
        {
            p->right = insert(p->right , key);
        }

        p->height = Nodeheight(p);
  
        if(balancefactor(p) == 2 && balancefactor(p->left) == 1)
        {
                return llrotation(p);
        }
        else if (balancefactor(p) == 2 && balancefact or (p->left) == -1)
        {
                return lrrotation(p);
        }
        else if(balancefactor(p) == -2 && balancefactor(p->right) == -1)
        {
            return rrrotation(p);
        }
        else if(balancefactor(p) == -2 && balancefactor(p->right) == 1)
        {
                return rlrotation(p);
        }

        return p;
    }
    void preorder(node *p)
    {
        if(p)
        {
            cout << p->data << " ";
            preorder(p->left);
            preorder(p->right);
        }
    }

};




int main()
{
    node n;
   root = n.insert(root , 40);
    n.insert(root , 30);
    n.insert(root , 15);
    n.preorder(root);   


    return 0;
}