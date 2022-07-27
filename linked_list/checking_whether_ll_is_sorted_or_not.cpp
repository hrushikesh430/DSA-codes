#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first = NULL;
void create(int a[] , int n)
{
    struct node *t , *last;
    first = new node;
    first->data = a[0];
    first->next = 0;
    last = first;

    for(int i = 1 ; i < n ; i++)
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
    while(p != 0)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
void check(struct node *p)
{
    int x = INT16_MIN;
    int flag = 0;
    while( p != 0 && p)
    {
        if( x > p->data)
        {
            flag =1;
            break;
        }
        x = p->data;
        p = p->next;
    }
    if(flag == 1)
        cout << "list is not sorted "<< endl;
    else
    {
        cout << "sorted " << endl;
    }

}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    create(a ,10);
    check(first);
    return 0;
}