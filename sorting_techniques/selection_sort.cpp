#include <bits/stdc++.h>
using namespace std;

void swap(int &a , int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selection_sort(vector<int> &arr , int n)
{
    int i ,j , k;

    for(i = 0 ; i < n-1 ; i++)
    {
        for(k = j = i ; j < n ; j++)
        {
            if(arr[j] < arr[k])
                k = j;
        }
        swap(arr[i], arr[k]);
    }
}

int main()
{
    vector<int> v(5);
    for(int i = 0 ; i < 5 ; i++)
        cin >> v[i];

    selection_sort(v , 5);

    for(auto x : v)
        cout << x << " ";
    
    cout << endl;
    
    return 0;
}