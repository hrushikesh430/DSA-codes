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
void insert( int ele)