#include<iostream>
#include<stdio.h>
using namespace std;

struct arr{

int a[10];
int length;

};



/*struct arr *union1(struct arr *arr1,struct arr *arr2)
{
    struct arr *arr3=(struct arr*)malloc(sizeof(struct arr));
    int i,j,k;
    i=j=k=0;
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->a[i]<arr2->a[j])
        {
            arr3->a[k++]=arr1->a[i++];
        }
        else if(arr1->a[i]>arr2->a[j])
        {
            arr3->a[k++]=arr2->a[j++];
        }
        else
        {
            arr3->a[k++]=arr1->a[i++];
            j++;
        }

    }
    for(;i<arr1->length;i++){arr3->a[k++]=arr1->a[i];}
    for(;j<arr1->length;j++){arr3->a[k++]=arr2->a[j];}
    arr3->length=arr1->length+arr2->length;
    return arr3;
}*/
/*
struct arr *inter(struct arr *arr1,struct arr *arr2)
{
    struct arr *arr3=(struct arr*)malloc(sizeof(struct arr));
    int i,j,k;
    i=j=k=0;
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->a[i]<arr2->a[j])
        {
            //arr3->a[k++]=arr1->a[i++];
            i++;
        }
        else if(arr1->a[i]>arr2->a[j])
        {
            //arr3->a[k++]=arr2->a[j++];
            j++;
        }
        else
        {
            arr3->a[k++]=arr1->a[i++];
            j++;
        }

    }
    //for(;i<arr1->length;i++){arr3->a[k++]=arr1->a[i];}
    //for(;j<arr1->length;j++){arr3->a[k++]=arr2->a[j];}
    arr3->length=arr1->length+arr2->length;
    return arr3;
}*/
struct arr *diff(struct arr *arr1,struct arr *arr2)
{
    struct arr *arr3=(struct arr*)malloc(sizeof(struct arr));
    int i,j,k;
    i=j=k=0;
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->a[i]<arr2->a[j])
        {
            arr3->a[k++]=arr1->a[i++];
        }
        else if(arr1->a[i]>arr2->a[j])
        {
            arr3->a[k++]=arr2->a[j++];
        }
        else
        {
            //arr3->a[k++]=arr1->a[i++];
            j++;i++;
        }

    }
    for(;i<arr1->length;i++){arr3->a[k++]=arr1->a[i];}
    for(;j<arr1->length;j++){arr3->a[k++]=arr2->a[j];}
    arr3->length=arr1->length+arr2->length;
    return arr3;
}

int main()
{
    arr arr1={{1,2,3,4,7},5};
    arr arr2={{2,4,7,8,9},5};
    arr *arr3;
    arr3=diff(&arr1,&arr2);

    for(int i=0;i<10;i++)
    {
        cout<<arr3->a[i]<<endl;
    }

    return 0;
}