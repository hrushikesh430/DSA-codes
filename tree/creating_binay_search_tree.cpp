#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left , *right;
};

/*void insert(int x)
{
    struct node *t = root, *r , *p;
    if(root == NULL)
    {
        p = new node;
        p->data = x;
        p->left = p->right = NULL;
        root = p;
        return ;
    }
    while(t)
    {
        r = t;
        if(x < t->data)
        {
            t = t->left;
        }
        else if(x > t->data)
        {
            t = t->right;
        }
        else
        {
            return;
        }
    }
    
    t = new node;
    t->data = x;
    t->left = t->right = NULL;
    if(x < r->data)
    {
        r->left = t;
    }
    else
    {
        r->right = t;
    }
}  */
node* rinsert(struct node *p , int x)
{
    struct node *t ;
    if(p == NULL)
    {
        t = new node;
        t->data = x;
        t->left = t->right = NULL;
        return t;
    }
    if(x < p->data)
    {
        p->left = rinsert(p->left , x);
    }
    else if(x > p->data)
    {
        p->right = rinsert(p->right , x);
    }
    

    return p;
    
}

int search(class node *p , int x)
{
    while(p)
    {
        if(x < p->data)
        {
            p = p->left;
        }
        else if(x > p->data)
        {
            p = p->right; 
        }
        else 
        {
            return p->data;
        }

    }

    return 0;
}


int height(struct node *p)
{
    int x , y;
    if(p == NULL)
    {
        return 0;
    }
    x = height(p->left);
    y = height(p->right);

    return x>y ? x+1 : y+1;
    
}


node* Delete(struct node *p , int  x)
{
    struct node *q;
    
    if

    if(x < p->data)
    {
        p->left = Delete(p->left , x);;
    }
    else if(x > p->data)
    {
        p->right = Delete(p->right , x);
    }
    else{

        if(height(p->left) > height(p->right))
        {
            q = inord(p->left);
            p->data = q->data;
            p->left = Delete(p->left , q->data);
        }
        else
        {
            q = preord(p->right);
            p->data = q->data;
            p->right = Delete(p->right , q->data);
        }
    }



}

void preorder(struct node *p)
{
    if(p)
    {
        cout << p->data << " ";
        preorder(p->left);
        preorder(p->right);
    }
}
int main()
{
    struct node *root = NULL;
    root =  rinsert(root ,10);
    rinsert(root ,20);
    rinsert(root ,1900000);
    rinsert(root ,1);
    rinsert(root ,1000);
    
    preorder(root);
    int s;
    s = search(root , 20);
    if(s)
    {
        cout << endl << "yes, the element is present" << endl;
    }
    else{
        cout << endl << "no, the element is not present " << endl;
    }

    return 0;
}
