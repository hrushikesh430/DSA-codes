#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;

} *first = NULL, *second = NULL , *third = NULL;
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
void create2(int a[], int n )
{
    struct node *last, *t;
    second = new node;
    second->data = a[0];
    second->next = NULL;
    last = second;

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
void concate(struct node *p , struct node *q)
{
    third = p;
    while(p != NULL)
    {
        p = p -> next;
    }
    p->next = q;
    q = NULL;
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    create(a,10);
    create2(a,10);
    concate(first,second);
    display(third);
    //display(second);

    return 0;
}