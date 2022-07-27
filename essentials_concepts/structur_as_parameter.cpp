#include<iostream>
#include<stdio.h>
using namespace std;
struct ractangle
{

    int lenght;
    int breadth;

};
struct sample{

    int lenght;


};

struct sample_two{

    int a[5]={10,20,30,40,50};

};

int area(struct ractangle p)
{
    return p.lenght*p.breadth;

}
void lengthsize(struct sample &any)
{
    any.lenght=1000;
    
}
void change(struct sample_two *any3)
{

    any3->a[0]=100;



}
int main()
{
    struct ractangle r{10,20};
    int area1;
    area1=area(r);
    struct sample one{20};
    lengthsize(one);
    cout<<"lenght is "<<one.lenght<<endl;
    struct sample_two any2;
    change(&any2); 
    for(int i=0;i<5;i++)
    {
        cout<<endl<<any2.a[i]<<endl;
    }   
    
    return 0;
}