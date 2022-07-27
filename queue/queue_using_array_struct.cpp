#include <bits/stdc++.h>
using namespace std;
struct Queue
{
    int front;
    int rear;
    int size;
    int *q;
};
void create(struct Queue *m , int x)
{
    m->size = x;
    m->front = m->rear = -1;
    m->q = new int[x];
}
void enqueue(struct Queue *m, int x)
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
void deque(struct Queue *m)
{
    if (m->front == m->rear)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        m->rear++;
        m->rear = 0;
    }
}

