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
struct node *root;
void tcreate()
{
  int x;
  struct Queue q;
  struct node *p ,*t;
  create1(&q ,100);
  
  cout << "enter the root value" << endl;
  cin >> x;
  root = new node;
  root->data = x;
  root->right = root->left = NULL;
  enqueue(&q , root);
  
  while(!is_empty(q))
  {
      p = dequeue(&q);
      cout << "enter the value of left child of " << ;
      cin >> x;
      if(x != -1)
      {
          t = new node;
          t->data = x;
          t->right = t->left = NULL;
          enqueue(&q,t); 
      }
       cout << "enter the value of right child of " << ;
      cin >> x;
      if(x != -1)
      {
          t = new node;
          t->data = x;
          t->right = t->left = NULL;
          enqueue(&q,t); 
      }
    
}

}
void preoder(struct node *p)
{
    if(p)
    {
        cout << p->data << " ";
        preoder(p->left);
        preoder(p->right);
    }
}

int main()
{
    tcreate();
    preoder(root);  
    return 0;
}