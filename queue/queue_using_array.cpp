#include <bits/stdc++.h>
using namespace std;
int front = -1;
int rare = -1;
int n;
void push( int a[] , int ele)
{
    if(front == n-1)
    {
        cout << "stack is full" << endl;
    }
    else
    {
        front++;
        a[front] = ele;
    }
}
void pop(int a[])
{
    int x = -1;
    if(front == rare)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        rare++;
        x = a[rare];
        a[rare] = 0;
        cout << "stack is full" << x << endl;
    }

}
int main()
{
    
    cout << "enter the size of array" << endl;
    cin >> n;
    int *a = new int[n];
    push(a,20);
    push(a,89);
    push(a,56);
    pop(a);

    return 0;
}