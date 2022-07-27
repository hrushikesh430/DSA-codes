#include<iostream>
#include<stdio.h>
using namespace std;

void union1(int a[],int b[],int c[],int x,int y,int z)
{
    int i,j,k;
    i=j=k=0;
    while(i<j)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else if(a[i]>b[j])
        {
            c[k++]=b[j++];
        }
        else
        {
            c[k++]=a[i++];
            j++;
        }

    }
    for(;i<x;i++){c[k++]=a[i];}
    for(;j<y;j++){c[k++]=b[j];}
}


int main()
{
    int a[5]={1,2,3,4,7};
    int b[5]={2,4,7,8,9};
    int c[10];
    union1(a,b,c,5,5,10);

    for(int i=0;i<10;i++)
    {
        cout<<c[i]<<endl;
    }

    return 0;
}