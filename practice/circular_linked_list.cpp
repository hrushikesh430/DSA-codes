#include <bits/stdc++.h>
using namespace std;
class node;
node *head = NULL;
class node
{
    int data;
    node *next;

    public :

        void create(int arr[] , int n)
        {
                node *last , *t;
                head->data = arr[0];
                head->next = NULL;
                last  = head;

                for(int i = 1 ; i < n ; i++)
                {
                    t = new node;
                    t->data = arr[i];
                    t->next = NULL;
                    last->next = t;
                    last = t;        
                }

                last->next = head;


        }

        void insert(int x)
        {


        }
};
int main()
{


    return 0;
}