#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *first = NULL;
void create(int a[], int n)
{
    struct node *t, *last;
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

void delete_ele (int pos )
{
    struct node *p, *q = NULL;
    p = first;
    int x;
    for (int i = 0; i < pos - 1; i++)
    {
        q = p;
        p = p->next;
    }
    q->next = p->next;
    x = p->data;
    delete p;
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    create(a , 10);
    delete_ele(4);
    display(first);

    return 0;
}