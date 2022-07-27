#include <bits/stdc++.h>
using namespace std;
int top = -1;
void push(char a[] , int n , char ch)
{
    top++;
    a[top] = ch;
}
void pop()
{
    top--;
}
int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(int n)
{
    if(top == n-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{   
    char a[4] = {'0'};
    //string s;
    cout << "enter the string " << endl;
    //cin >> s;
    
    for(int i = 0 ; i < 4 ; i++)
    {
        cin >> a[i];
        if(a[i] == '(')
        {
            push(a,4,'(');
        }
        if(a[i] == ')')
        {
            pop();
        }
    }
    if(isEmpty())
    {
        cout << "true" << endl;
    }
   else
    {
        cout << "false" << endl;
    }


    return 0;
}