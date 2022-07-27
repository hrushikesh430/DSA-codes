#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    //we cannot increase the size of array staticly
    //we can by dynamically

    int *p=new int[3];
    for(int i=0;i<3;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<3;i++)
    {
        cout<<p[i];
    }
    int *q=new int[5];
    for(int i=0;i<3;i++)
    {
         //   cin>>p[i];
        q[i]=p[i];

    }
    q=p;
    p=NULL;
    cout<<endl<<"enter the 4 and 5 number "<<endl;
    cin>>q[3]>>q[4];
    for(int i=0;i<5;i++)
    {
        cout<<q[i];
    }
    return 0;
}