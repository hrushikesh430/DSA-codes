#include<bits/stdc++.h>
using namespace std;

void swap(int &a , int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void insert(vector<int> &arr , int n )
{
    int i = n , j , temp;
    temp = arr[n];
    
    while(i > 1 && temp > arr[i/2])
    {
        arr[i] = arr[i/2];
        i = i/2;
    }

    arr[i] = temp;

}

void Delete(vector<int> &arr , int n)
{
    int i , j , x;
    x = arr[n];
    i = 1;
    j = i*2;
    arr[1] = arr[n];

    while(j < n-1)
    {
        if(arr[j] < arr[j +1])
            j = j+1;

        if(arr[i] < arr[j])
        {
            swap(arr[i] , arr[j]);
            i = j;
            j = j*2;
        }
        else
            break;
    }
}


int main()
{
    vector<int> arr(10);
    for(int i = 0 ; i < 10 ; i++)
        cin >> arr[i];

    for(int i = 2; i < 10 ; i++)
        insert(arr , i);

    for(auto x : arr)
        cout << x << " ";

    cout << endl;
    Delete(arr , 9);


    for(auto x : arr)
        cout << x << " ";

    cout << endl;

    return 0;
}