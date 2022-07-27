#include <bits/stdc++.h>
using namespace std;
class node;
 class node *root = NULL;

class node{
    int data;
    int height;
    node *left;
    node *right;
    
    public :
   

    int Nodeheight(node *p)
    {
        int hl , hr;

        hl = p && p->left ? p->left->height : 0;
        hr = p && p->right ? p->right->height : 0;

        return hl>hr ? hl + 1: hr+1;

    }

    int balancefactor(node *p)
    {
        int hl , hr;
        hl = p && p->left ? p->left->height : 0;
        hr = p && p->right ? p->right->height : 0;

        return (hl - hr);

    }

    node* rlrotation(node *p)\
    {
        node *pr = p->right;
        node *prl = pr->left;

        p->right = prl->left;
        pr->left = prl->right;

        prl->left = p;
        prl->right = pr;

        if(p == root)
            root = prl;

        return prl;

    }

    node* lrrotation(node *p)
    {
        node *pl = p->left;
        node *plr = pl->right;

        pl->right = plr->left;
        p-> left = plr->right;


        plr->left = pl;
        plr->right = p;

        p->height = Nodeheight(p);
        pl->height = Nodeheight(pl);
        plr->height = Nodeheight(plr);

        if(p == root)
            root = plr;

        return plr;

    }
    node* rrrotation(node *p)
    {
        node *pr = p->right;
        node *prl = pr->left;

        p->right = prl;
        pr->left = p;

        p->height = Nodeheight(p);
        pr->height = Nodeheight(pr);

         if(p == root)
            root = pr;

        return pr;

    }
    node* llrotation(node *p)
    {
        node *pl , *plr;
        pl = p->left;
        plr = pl->right;

        p->left = plr;  
        pl->right = p;

        p->height = Nodeheight(p);
        pl->height = Nodeheight(pl);

        if(p == root)
            root = pl;

        return pl;
    }


    node* insert(class node* p ,int key)
    {
        node *t = NULL;

        if(p == NULL)
        {
            p = new node;
            p->data = key;
            p->height = 1;
            p->left = p->right = NULL;
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
        else if(balancefactor(p) == 2 && balancefactor(p->left) == -1)
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