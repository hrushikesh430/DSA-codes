#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    node *next;
    int data;
};

int maxi(int arr[] , int n)
{
    int max = INT_MIN;

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    return (max+1);
}

void insert(node *p , int x)
{
    class node *temp = p , *q;
    if(p == NULL)
    {
        p = new node;
        p->data = x;
        p->next = NULL;
        return;
    }
    while(temp->next != NULL)
        temp = temp->next;

    q = new node;
    q->next = NULL;
    q->data = x;
    temp->next = q;

}

int Delete(node *p)
{
    int x;
   
    node *temp = p->next;
    p->next = temp->next;
    x = temp->data;
    delete temp;

    return x;

}

void bin_sort(int arr[] , int n)
{
    node **bins;
    int max = maxi(arr , n);

    bins = new node*[max];

    for(int i = 0 ; i < max ; i++)
        bins[i] = NULL;

    for(int i = 0 ; i < n ; i++)
    {
        insert(bins[arr[i]] , arr[i]);
    }
    int i , j;
    i = j = 0;
    int b[n];
    while(i < max)
    {
        while(bins[i] != NULL)
        {
            b[j++] = Delete(bins[i]); 
        }
        i++;
    }
    
    for(int i = 0; i < n ; i++)
        cout << b[i] << " ";

    cout << endl;
}

int main()
{
    int arr[] = {9,7,8,6,5,4,2,3,1};
    bin_sort(arr , 9);
    for(int x : arr)
        cout << x << " ";

    cout << endl;
    return 0;
}