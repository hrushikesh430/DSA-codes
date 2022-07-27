#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;

} *first = NULL;
void create(int a[], int n)
{
    struct node *last, *t;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
    while (p != 0)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
void duplicate(struct node *p)
{
    struct node  *q;
    
    q = p->next;

    while (q != 0)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}
int main()
{
    int a[] = {1,1,2,3,4,5,6,6,6,7};
    create(a , 10);
    duplicate(first);
    display(first);

    return 0;
}