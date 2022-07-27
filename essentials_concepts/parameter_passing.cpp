#include<iostream>
#include<stdio.h>
using namespace std;

void swap(int *x, int &y)
{
    int temp;

    temp=*x;
    *x=y;
    y=temp;

}

int main()
{
        int a,b;
        cin>>a>>b;
        swap(a,b);
        cout<<endl<<a<<endl<<b<<endl;

    return 0;    
}