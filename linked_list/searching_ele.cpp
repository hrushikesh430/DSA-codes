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
    first->next = 0;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = 0;
        last->next = t;
        last = t;
    }
}

void search(struct node *p, int key)
{
    while (p != 0)
    {
        if (key == p->data)
        {
            cout << key << " found " << endl;
            break;
        }

        p = p->next;
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
void improved_search(struct node *p, int key)
{
    struct node *q = NULL;

    while (p != 0)
    {
        if (p->data == key)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            break;
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    create(a, 10);
    ///search(first , 3);
    improved_search(first, 6);
    display(first);

    return 0;
}