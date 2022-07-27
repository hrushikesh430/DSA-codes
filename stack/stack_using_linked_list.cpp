#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;

}*top = NULL;
void push(int ele)
{
    struct node *t;
    t = new node;
    if(t == NULL)
    {
        cout << "stack is overflow " << endl;
    }
    else
    {
        t->data = ele;
        t->next = top;
        top = t;
    }   
}
void pop()
{
    if(top == NULL)
    {
        cout  << "stack is underflow" << endl;
    }
    else
    {
        struct node *p = top;
        top = top->next;
        delete p;
    }
}
void display(struct node *p)
{
    if(p == NULL)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        while(top != NULL)
        {
            cout << top->data << " ";
            top = top->next;
        }
    }
}
void peek( int pos)
{
    struct node *p = top;
    if(p == NULL)
        cout << "invalid position" << endl;
    else
     {  
        for(int i = 1 ; i < pos-1 ; i++)
        {
            p = p->next;
        }
        cout << p->data << endl;
     }
}
int main()
{   push(2);
    push(9);
   push(6);
   push(4);
   display(top);
    peek(2);
    return 0;
}