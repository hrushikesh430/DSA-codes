#include<iostream>
#include<stdio.h>
using namespace std;

int fac(int x)
{

    if(x==0)
    {
        return 1;
        //return (fac(x-1)*x);
    }
    else
    {
        return (fac(x-1)*x);
            //return 1;
    }




}


int main()
{
    int ans,a;
    cin>>a;
       ans=fac(a);
    cout<<" "<<ans<<endl;

    return 0;
}