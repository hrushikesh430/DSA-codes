#include<iostream>
#include<stdio.h>
using namespace std;

void insert(int arr[],int n)
{

    for(int i=0;i<n;i++)
        cin>>arr[i];

}


int main()
{   int n;
 
    cout<<"enter the no "<<endl;
    cin>>n;
       int arr[n];
    insert(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;

    return 0;
}