#include "queue2.h"
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

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