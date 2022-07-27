#include<bits/stdc++.h>
using namespace std;
struct node 
{
    node *right;
    node *left;
    int data;
};
queue < node*> q[100];

struct node *root;
void tcreate()
{
  int x;
  
  struct node *p ,*t;

  
  cout << "enter the root value" << endl;
  cin >> x;
  root = new node;
  root->data = x;
  root->right = root->left = NULL;
  q.push( root);
  
  while(!q.empty())
  {
      p = q.front();
      q.pop();
      cout << "enter the value of left child of " << ;
      cin >> x;
      if(x != -1)
      {
          t = new node;
          t->data = x;
          t->right = t->left = NULL;
          q.push(t); 
      }
       cout << "enter the value of right child of " << ;
      cin >> x;
      if(x != -1)
      {
          t = new node;
          t->data = x;
          t->right = t->left = NULL;
          q.push(t); 
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
