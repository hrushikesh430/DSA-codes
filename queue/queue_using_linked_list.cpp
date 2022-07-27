#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;

}*head = NULL, *front = new node,  *rare =  new node;
void enqueue(int x)
{
    struct node *t;
    t = new node;
    if(t == NULL)
    {
        cout << "queue is full" << endl;
    }
    else
    {
        t->data = x;
        t->next = NULL;
        if(front == rare)
        {
            front = rare = t;
        }
        else
        {
            rare->next = t;
            rare = t;
        }
    }
}
void deque1(void)
{
    int x;
    struct node *p;
    if(front = NULL)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        x = front->data;
        p = front;
        front = front->next;
        delete p;
        cout << x << endl;
    }
}
void show()
{
    while(front != rare)
    {
        cout << front->data << " ";
        front = front->next;
    }
}
int main()
{
    enqueue(10);
    enqueue(99);
    enqueue(130);
    enqueue(50);
    enqueue(189);
    enqueue(101);
    deque1();
    show();
    return 0;
}