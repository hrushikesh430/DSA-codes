#include<iostream>
#include<stdio.h>
using namespace std;

int* fun(int n)
{

    int *a=new int[n];
    //a=(int *)malloc(n*sizeof(int));
    return a;

}


int main()
{   
    int *p;
    p=fun(3);

    for(int i=0;i<3;i++)
    {
        cin>>p[i];
    }

 for(int i=0;i<3;i++)
    {
        cout<<endl<<p[i]<<endl;
    }


    return 0;
}