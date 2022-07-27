#include<iostream>
#include<stdio.h>
using namespace std;

//template <class x>
//x bigno( x a, x b)
//{
//    if(a>b)
//    {
//        return a;
//    }
//    else
//    {
//        return b;
//    }
//
//}
template <class x,class y>
x bigno( x a, y b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }

}
 
 

int main()
{   int integer;
float sample;
    integer=bigno(90,100.29);
    sample=bigno(9.98,8.20);
    cout<<endl<<integer<<endl<<sample;
    return 0;
}