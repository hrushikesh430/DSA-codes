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

    first = (struct node *)malloc(sizeof(struct node));
    first->data = a[0];
    first->next = 0;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
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
void recursively_display(struct node *p)
{
    if (p != 0)
    {
        cout << p->data << " ";
        recursively_display(p->next);
    }
}
void counting(struct node *p)
{
    int countt = 0;
    while (p != NULL)
    {
        countt++;
        p = p->next;
    }
    cout << endl
         << countt << endl;
}
int count(struct node *p)
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return (count(p->next) + 1);
    }
}
int sum(struct node *p)
{
    int s = 0;
    while (p != 0)
    {
        s = s + p->data;
        p = p->next;
    }
    return s;
}
int rsum(struct node *p)
{
    static int s1 = 0;

    if (p == 0)
    {
        return 0;
    }
    else
    {

        return (rsum(p->next) + p->data);
    }
}
int max(struct node *p)
{
    int maxx = p->data;
    while (p != 0)
    {
        if (maxx < p->data)
        {
            maxx = p->data;
        }

        p = p->next;
    }

    return maxx;
}
int rmax(struct node *p)
{
    static int x = 0;
    if (p == 0)
    {
        return INT16_MIN;
    }
    else
    {
        x = rmax(p->next);
        if (x > p->data)
        {
            return x;
        }
        else
        {
            return (p->data);
        }
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int co, cum, rcum, nmax , rmaxx;
    create(a, 10);
    recursively_display(first);
    counting(first);
    co = count(first);
    cum = sum(first);
    rcum = rsum(first);
    nmax = max(first);
    rmaxx = rmax(first);
    cout << endl
         << co << endl
         << cum << endl
         << rcum << endl
         << nmax << endl
         << rmaxx << endl;
    return 0;
}