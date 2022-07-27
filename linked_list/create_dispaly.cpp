#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
        
}*head=NULL;
void create(int n)
{
    node *last=new node;
    node *t=new node;
    
    t->data=n;
    t->next=NULL;
    last=t;


   /* if(head==NULL)
    {
    //head=t=last;
    last->data=n;
    last->next=NULL;
    head=last;
    }
    else{
        t->data=n;
        t->next=NULL;
        last->next=t;


    }*/
    while()




}



int main()
{

    return 0;
}