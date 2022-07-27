#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *head = NULL;
void create(int a[], int n)
{
    struct node *t, *last;
    head = new node;
    head->data = a[0];
    head->next = head;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;

    } while (p != head);
}

void insert(struct node *p, int ele, int pos)
{
    struct node *t = head;

    if(pos < )
    for (int i = 1; i < pos - 1; i++)
    {
        t = t->next;
    }
    struct node *temp = new node;
    temp->data = ele;
    temp->next = t->next;
    t->next = temp;
}
int main()
{
    int k;
    //cin >> k;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    create(a, 10);
    insert(head ,9999 ,13);
    display(head);
    return 0;
}