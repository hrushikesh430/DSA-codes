#include<iostream>
#include<stdio.h>
using namespace std;

int sorted_arr(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {

            return -1;
        }
    }
    return 1;

}
int insert(int a[],int n,int x)
{
    int i;
    i=n;
    while(a[i]>x)
    {
        i--;
    }
    a[i+1]=x;
}

void leftshift(int a[],int n)
{
    int i,j;
    i=0;
    j=n-1;
    while(a[i]<0){i++;}
    while(a[j]>0){j--;}
    if(i<j)
    {
        swap(a[i],a[j]);
        
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
    int a[6]={2,-1,4,-4,3,5};
    leftshift(a,6);
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}
