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
void deleting(struct node *p, int pos)
{
    struct node *temp = p, *q = NULL;
    for (int i = 1; i < pos ; i++)
    {
        q = temp;
        temp = temp->next;
    }
    q->next = temp->next;
    temp->next = NULL;
    delete temp;
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    create(a,10);
    deleting(head , 4);
    display(head);
    return 0;
}