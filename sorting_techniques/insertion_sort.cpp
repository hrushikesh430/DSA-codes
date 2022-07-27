#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr , int n)
{
    for(int i = 1 ; i < n ; i++)
    {
        int j = i -1;
        int x = arr[i];

        while(j > -1  && arr[j] > x)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}

int main()
{
    vector<int> arr(5);
    for(int i = 0 ; i < 5 ; i++)
     cin >> arr[i];

    insertion_sort(arr , 5);

    for(int x : arr)
        cout << x << " ";
    
    cout << endl;
    return 0;
}