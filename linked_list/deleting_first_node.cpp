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
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
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
void deleting_first_node()
{
    struct node *p;
    int x;
    p = first;
    first = first->next;
    x = p->data;
    delete p;
    cout << endl
         << x << endl;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    create(a, 10);
    deleting_first_node();
    display(first);

    return 0;
}