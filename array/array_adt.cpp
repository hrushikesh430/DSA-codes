#include<iostream>
#include<stdio.h>
using namespace std;

struct sample
{
    int arr[20];
    int lenght;
    int size;


};

int binsea(struct sample a,int h,int l,int ele)
{
    int mid;
    while(l<=h)
    {

    mid=(l+h)/2;

        if(a.arr[mid]==ele)
        {
            return mid;
        }
        else if(ele<mid)
        {   
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }

    }
    return -1;

}

int rbinsea(struct sample a,int h,int l,int ele)
{
        int mid;
   

    mid=(l+h)/2;

    if(l<=h)
    {
        if(a.arr[mid]==ele)
        {
            return mid;
        }
        else if(ele<mid)
        {   
          //  h=mid-1;
            return rbinsea(a,mid-1,l,ele);
        }
        else
        {
          //  l=mid+1;
            return rbinsea(a,h,mid+l,ele);
        }

    }
    return -1;    

}

int linearsearch(struct sample a,int x)
{
    for(int i=0;i<a.lenght;i++)
    {
        if(a.arr[i]==x)
        {
            return i;
        }
     
    }

    return -1;
}
int improved_linearsearch(struct sample a,int x)
{
    for(int i=0;i<a.lenght;i++)
    {
        if(a.arr[i]==x)
        {   
          //  swap(a.arr[i],a.arr[i-1]); even you can swap it to first position
            return i;
        }
     
    }

    return -1;
}

void display(struct sample a)
{
    for(int i=0;i<a.lenght;i++)
    cout<<a.arr[i]<<endl;
}
void add(struct sample a, int x)
{
    a.arr[a.lenght]=x;
    a.lenght++;
}
void insert(struct sample *a,int index,int ele)
{
        for(int i=a->lenght;i>index;i--)
        {
            a->arr[i]=a->arr[i-1];
        }
        a->arr[index]=ele;
        a->lenght++;
}
void del(struct sample *a,int index)
{
        for(int i=index;i<a->lenght-1;i++)
        a[i]=a[i+1];

        a->lenght--;
}

int main()
{
    struct sample any;
    int ans;
    cout<<"enter the length of array"<<endl;
    cin>>any.lenght;
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<any.lenght;i++)
    {
    cin>>any.arr[i];
    }
    //display(any);
    cout<<endl;
    //add(any,100);
   // insert(&any,2,100);
    //cout<<endl<<endl;
    //display(any);
    cout<<endl;
    //del(&any,3);
    //   ans=linearsearch(any,4);
    //cout<<ans<<endl;
   // display(any);
    ans=rbinsea(any,any.lenght-1,0,2);
    cout<<ans<<endl;

    
    
    

    return 0;
}