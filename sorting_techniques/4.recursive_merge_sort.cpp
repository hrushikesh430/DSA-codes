#include <bits/stdc++.h>
using namespace std;

void merge(int arr[] , int l , int mid , int h)
{
    int i , j , k , a[h+1];
    i = k = 0;
    j  = mid + 1;

    while(i <= mid && j <= h)
    {
        if(arr[i] < arr[j])
            a[k++] = arr[i++];
        else
            a[k++] = arr[j++];
            
    }

    for(; i <= mid ; i++) a[k++] = arr[i];
    for(; j <= h ; j++) a[k++] = arr[j];

    for(int i = 0 ; i <= h ; i++)
        arr[i] = a[i];
}

void merge_sort(int arr[] , int l , int h)
{
    int mid = (l+h)/2;
    if(l < h)
    {
        merge_sort(arr ,l , mid );
        merge_sort(arr , mid+1 , h);
        merge(arr , l ,mid , h);
    }
}

int main()
{
    int arr[] = {2,1,3,5,4,6,7,8};
    merge_sort(arr , 0 , 7);
    for(int x : arr)
        cout << x << " ";

    cout << endl;
    return 0;
}