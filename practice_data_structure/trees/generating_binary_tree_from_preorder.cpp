#include <bits/stdc++.h>
using namespace std;
class Node;
Node *root = NULL;
class Node
{
    int data;
    Node *left;
    Node *right;

public:
    void Insert(int arr[], int n)
    {
        Node *p;
        int i = 0;
        stack<Node *> s;
        root = new Node;
        root->data = arr[i++];
        root->left = root->right = NULL;
        s.push(root);
        p = root;

        while (i < n)
        {

            if (arr[i] < p->data)
            {
                Node *t = new Node;
                t->data = arr[i++];
                t->left = t->right = NULL;
                p->left = t;
                s.push(p);
                p = t;
            }
            else
            {
                if ((arr[i] > p->data) && (arr[i] < s.top()->data) && !(s.empty()))
                {
                    Node *t = new Node;
                    t->data = arr[i++];
                    t->left = t->right = NULL;
                    p->right = t;
                    s.push(p);
                    p = t;
                }
                else
                {
                    p = s.top();
                    s.pop();
                }
            }
        }
    }

    void preorder(Node *k)
    {
        if (k)
        {
            preorder(k->left);
            cout << k->data << " ";
            preorder(k->right);
        }
    }
};

int main()
{
    Node n;
    int arr[] = {100, 20, 40, 77, 2, 89};
    n.Insert(arr, 5);
    n.preorder(root);
    return 0;
}