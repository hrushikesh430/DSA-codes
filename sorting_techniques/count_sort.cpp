#include <bits/stdc++.h>
using namespace std;

int maxi(int arr[] , int n)
{
    int max = INT_MIN;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    return (max+1);
}

void count_sort(int arr[] , int n)
{
    int max = maxi(arr , n);
    int  v[max] = {0};



    for(int i = 0 ; i < n ; i++)
        v[arr[i]]++;

    int i = 0 , j = 0;
    while(i < max)
    {
        if(v[i] > 0)
        {
            arr[j++] = i;
            v[i]--;
        }
        else
        {
            i++;
        }
    }

    for(int i = 0 ; i < n ; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[] = {3,2,12,5,6,4,7,9};
    count_sort(arr , 8);
    return 0;
}
