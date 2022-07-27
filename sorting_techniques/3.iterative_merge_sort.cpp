#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr , int l , int mid , int h)
{
    int i , j , k;
    i = k = l;
    j = mid;
    vector<int> v;
    while(i <= mid && j <= h)
    {
        if(arr[i] < arr[j])
         v.push_back(arr[i]);
        else
         v.push_back(arr[j]);   
     } 
     for(; i <= mid ; i++) v.push_back(arr[i]);
     for(; j <= h ; j++) v.push_back(arr[j]);

     for(int i = 0 ; i < v.size() ; i++)
        arr[i] = v[i];

}

void merge_sort(vector<int> &arr , int n)
{
    int l , mid , h , p;

    for(p = 2 ; p <= n ; p = p*2)
    {
        for(int i = 0 ; i+p-1 < n ; i = i+p)
        {
            l = i;
            h = i+p-1;
            mid = (l+h)/2;

            merge(arr , l , mid , h);
        }

    }
    if(p/2 < n)
        merge(arr , l , mid , h);
}


int main()
{
    vector<int> v(8);
    for(int i = 0; i < 8 ; i++)
        cin >> v[i];
    
    merge_sort(v , 8);

    for(auto x : v)
        cout << x << " ";

    cout << endl;


    return 0;
}