#include <bits/stdc++.h>
using namespace std;

int max( int a[] ,int  n)
{
    int maxx = a[0];

    for(int  i = 0 ; i < n ; i++)
    {
        if(maxx < a[i])
        {
            maxx = a[i];
        }

    }

    return maxx;


}
void missing(int arr[] , int n , int m)
{
    int h[m] = {0};

    for(int i = 0 ; i < n ; i++)
    {
        h[arr[i]]++;
    }
    for(int i = 0 ; i < m ; i++)
    {
        if( h[i] == 0)
        {
            cout << i << " ";
        }
    }




}


int main()
{
    int arrr[10] = {3,4,2,6,7,8,5,8,9,10};



    int sam;
    sam = max(arrr , 10);
    missing(arrr , 10 , sam); 

    return 0;
}