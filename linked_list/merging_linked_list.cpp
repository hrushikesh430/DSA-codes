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
void merging(struct node *p,struct node *q)
{
    struct node *last;
    last = new node;
    first = p; second = q;
    if(first->data < second->data)
    {
        third = last =first;
        first = first->next;
        last->next = NULL;
    }
    else
    {
        third = last = second;
        second = second->next;
        last->next = NULL;
    }

    while(first != NULL & second != NULL)
    {
        if(first->data < second->data)
        {
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }
        else{

            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
        }


    }
    if(first != NULL)
    {
        last->next = first;
    }
    else
    {
        last->next = second;
    }


}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    create(a,10);
    create2(a,10);
    merging(first,second);
    display(third);
    //display(first);
    return 0;
}