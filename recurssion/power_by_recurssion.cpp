#include<iostream>
#include<stdio.h>
using namespace std;

int exp(int n,int t)
{
    //static int k=t;
    if(t>1)
    {
        return (exp(n,t-1)*n); 
    }
    else{
        return n;
    }


}


int main()
{
        int ans,a,r;
        cin>>a>>r;
        ans=exp(a,r);
        cout<<ans;


    return 0;
}