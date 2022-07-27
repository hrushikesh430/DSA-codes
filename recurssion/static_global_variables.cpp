#include<iostream>
#include<stdio.h>
using namespace std;

//void fun(int x)
//{
//
//    if(x>0)
//    {
//        fun(x-1);
//        printf("%d",x);
//    }
//
//
//}

int  fun(int x)
{   
    int sum;
    static int y=0;//it can also be used as global variable it will act as same
    if(x>0)
    {
         y++;
        sum=fun(x-1)+y;
        cout << sum << endl;

    }
    return 0;
}




int main()
{
    int a=3;
    fun(a);


    return 0;
}