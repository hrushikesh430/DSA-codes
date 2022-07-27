#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first = NULL;
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
void bef_insert(struct node *p, int ele)
{
    struct node *t;
    t = new node;
    t->data = ele;
    t->next = first;
    first = t;
}
void insert_any_position(struct node *p, int poi, int ele)
{
    struct node *t;
    t = new node;
    p = first;
    t->data = ele;
    for (int i = 0; i < poi - 1 && p; i++)
        p = p->next;

    t->next = p->next;
    p->next = t;
}
void display(struct node *p)
{
    while (p != 0)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    create(a, 10);
    // bef_insert(first ,1000);
    insert_any_position(first, 3, 99);
    display(first);
    cout << "done";
    return 0;
}