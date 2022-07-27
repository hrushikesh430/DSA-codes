#include <bits/stdc++.h>
using namespace std;
struct node
{
    node *right;
    node *left;
    int data;
};
struct Queue
{
    int front;
    int rear;
    int size;
    node **q;
};
void create1(struct Queue *m , int x)
{
    m->size = x;
    m->front = m->rear = -1;
    m->q = new node*[x];
}
void enqueue(struct Queue *m, node* x)
{
    if (m->front == m->size - 1)
    {
        cout << "queue is full" << endl;
    }
    else
    {
        m->front++;
        m->q[m->front] = x;
    }
}
node* deque(struct Queue *m)
{
    node *x;
    if (m->front == m->rear)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        m->rear++;
        x = m->q[m->rear];
        m->rear = 0;
    }
    return x;
}
int is_empty(struct Queue *m)
{
    if(m->front == m->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int is_full(struct Queue *m)
{
    if(m->front == m->size -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
