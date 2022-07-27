#include<iostream>
using namespace std;
void merg(int a[],int b[],int x,int y,int c[])
{
    int i,j,k;
    i=0;j=0;
    k=0;
    while(i<x && i<y)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
    }
    for(;i<x;i++){c[k++]=a[i];}
        for(;j<y;j++){c[k++]=b[j];}

//        for(int i=0;i<10;i++)
  //      cout<<c[i]<<endl;

}
int main()
{
   int c[10];
    int a[4]={1,2,3,4};
    int b[6]={5,6,7,8,9,10};
    merg(a,b,4,6,c);
    for(int i=0;i<10;i++)
    {
        cout<<c[i]<<endl;
    }

    return 0;
}
