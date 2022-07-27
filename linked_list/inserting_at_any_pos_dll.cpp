#include <bits/stdc++.h>
using namespace std;

struct node
{
    struct node *prev;
    int data;
    struct node *next;

} *first = NULL;

void create(int a[], int n)
{
    struct node *t, *last;
    first = new node;
    first->prev = NULL;
    first->next = NULL;
    first->data = a[0];
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->prev = last;
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
void insert( struct node *p , int ele , int pos)
{
    struct node *t;
    t = new node;
    t->data = ele;
    struct node *k = p ;
    for(int i = 1 ; i < pos-1 ; i++)
    {
        k = k->next;
    }
    t->next = k->next;
    t->prev = k;
    if(k->next)
    {
        k->next->prev = t;
    }
    k->next = t;
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    create(a,10);
    insert(first,999,7);
    display(first);

    return 0;
}