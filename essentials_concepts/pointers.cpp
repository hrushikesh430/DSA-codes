#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    //int *p;
    //p = new int[4];
    //p[0]=0;
    //p[1]=10;
    //p[2]=20;            ---> This is using cpp
    //p[3]=30;
    //for(int i=0;i<4;i++)
    //{
//
    //    cout<<p[i]<<endl;
//
    //}

    int *p;
    p=(int *)malloc(4*2);
    p[0]=0;
    p[1]=10;
    p[2]=20;            
    p[3]=30;

    for(int i=0;i<4;i++)
    {
        cout<<p[i]<<endl;
    }




    return 0;
}
