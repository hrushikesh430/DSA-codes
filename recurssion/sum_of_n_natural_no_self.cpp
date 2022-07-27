#include<iostream>
#include<stdio.h>
using namespace std;
/*int fun(int x)
{
    //static int sum=0;
    if(x>0)
    {
       return fun(x-1)+x;
    }
    //else if(x==1)
    //{
    //    return 1;
    //}
    else{
        return 0;
    }
    

}*/
int fun(int x)
{
    return (x*(x+1)/2);
}
int main()

{   int n,sum;
    cin>>n;
    sum=fun(n);
    cout<<sum<<endl;
    return 0;
}