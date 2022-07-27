#include<iostream>
#include<stdio.h>
using namespace std;
int ele(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=(i+1))
        {
            return (i+1); 
        }
    }

    return -1;


}
int ele2(int a[],int n)
{
    int diff;
    diff=a[0];

    for(int i=0;i<n;i++)
    {
        if(a[i]-i!=diff)
        {
            return (diff+i);
        }
    }
    return -1;


}

int main()
{
    int n,ans;
    n=10;
    int a[10]={1,2,3,5,6,7,8,9,10,11};
    int b[6]={6,7,8,10,11,12};
    //ans=ele(a,n);
    ans=ele2(b,6);
    cout<<ans<<endl;

    return 0;
}