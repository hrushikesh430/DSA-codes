#include<iostream>
#include<stdio.h>
using namespace std;

template <class t>class arthemetic
{
    int a,b;
    public:

        t add();
        void show(void);
         arthemetic(t x, t y);
         //{
         //       a=x;b=y;
         //}



};
template <class t>
arthemetic<t> :: arthemetic ( t x, t y)
{
    a=x;
    b=y;
}

template <class t>
t arthemetic<t> :: add()
{
    return a+b;
};
template <class t>
void arthemetic<t> :: show()
{
    cout<<a<<" "<<b;
}

int main()
{   int t;
    arthemetic<int> sample(10,9);
    t=sample.add();
    cout<<" "<<t<<endl;
    sample.show();
    return 0;
}