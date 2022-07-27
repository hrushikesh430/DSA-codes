#include<iostream>
#include<stdio.h>
using namespace std;
void reverse(int a[],int n)
{
    int j,i;
    for(i=0,j=n-1;i<j;i++,j--)
    {
            swap(a[i],a[j]);
    }

    for(int i=0;i<n;i++)
    {

        cout<<a[i]<<endl;
    }
}
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{

    int a[5]={1,2,3,4,5};
    reverse(a,5);

    return 0;
}