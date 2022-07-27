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
void reversing(struct node *p)
{
    struct node *temp;
    
    while(p)
    {
        temp = p->next;
        p->next= p->prev;
        p->prev = temp;
        p = p->prev;
        if(p->next == NULL)
        {
            first = p;
        }
    }
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    create(a,10);
    reversing(first);
    display(first);
    return 0;
}