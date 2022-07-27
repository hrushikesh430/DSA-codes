#include<iostream>
#include<stdio.h>
using namespace std;
struct sample
{
    int lenght;
    int breadth;

};
int main()
{
    struct sample *any;//in cpp compiler you can drop struct
    any=(struct sample *)malloc(sizeof(struct sample));
    (*any).lenght=9;
    any->lenght=10;
    cout<<(*any).lenght<<endl;

    return 0;
}
