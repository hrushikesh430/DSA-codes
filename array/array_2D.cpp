#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    //for creating 2D array there are 3 methods
    //the frist method is 
    int array[2][3];

    //the second method is 
    int *p[2];
    p[0]=new int[3]; 
    p[1]=new int[3];

    //the third method is 
    int **q;
    q=new int*[2];
    q[0]=new int[3];
    q[1]=new int[3];
    

    return 0;
}