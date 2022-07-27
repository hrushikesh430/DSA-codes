#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;

}*first = NULL;

void create(int a[] , int n)
{
    struct node *last;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for(int i = 1 ; i < n ; i++)
    {
        struct node *t;
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;

    }




}
void insert_by_sorting(int ele)
{
    struct node *p , *q , *t;
    p = first;
    q = NULL;
    while((p->data < ele )&& p)
    {   
        q = p;
        p = p->next;

    }
    t = new node;
    t->data = ele;
    t->next = q->next;
    q->next = t;
}
void display(struct node *p)
{
    while(p != 0)
    {
        cout << p->data << " ";
        p = p->next;
    }


}

int main()
{
    int a[] = {1,2,3,4,4,5,5,7,8};
    create(a , 9);
    insert_by_sorting(9);
    display(first);


    return 0;
}