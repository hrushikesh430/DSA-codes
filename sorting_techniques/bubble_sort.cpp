#include <bits/stdc++.h>
using namespace std;

void swap(int &a , int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void bubble_sort(vector<int> &arr , int n)
{
    int flag;

    for(int i = 0 ; i < n-1; i++)
    {
        flag = 0;

        for(int j = 0 ; j < n - 1 - i ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                 flag = 1;
                swap(arr[j] , arr[j+1]);
            }
        }

        if(flag == 0) break;
    }
}

int main()
{   
    vector<int> arr(5);
    for(int i = 0 ; i < 5 ; i++)
    {
        cin >> arr[i];
    }

    bubble_sort(arr , 5);
    for(auto x : arr)
        cout << x << " ";

    cout << endl;

    return 0;
}