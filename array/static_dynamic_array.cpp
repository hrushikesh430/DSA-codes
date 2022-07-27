#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[5];//static;
    a[1]=10;
    int *p;
    p=(int *)malloc(5*sizeof(int));//c language
    int *q= new int[5]; // cpp
    q[0]=0;
    q[1]=10;


    return 0;
}