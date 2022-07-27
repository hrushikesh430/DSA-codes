#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b;
    int &r=a;
        b=10;
        r=b;
        cout<<a<<endl;


        return 0;
}