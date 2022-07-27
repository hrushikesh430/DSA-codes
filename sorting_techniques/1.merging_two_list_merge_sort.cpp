#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sort(int arr[] , int m , int brr[] , int n)
{
    vector<int> crr(m+n);
    int i , j , k;
    i = k =j =0;

    while(i < m && j < n)
    {
        if(arr[i] < brr[j])
        {
            crr[k++] = arr[i++];
        }
        else
        {
            crr[k++] = brr[j++];
        }
    }

    for(; i < m ; i++) crr[k++] = arr[i];
    for(; j < n ; j++) crr[k++] = brr[j];

    return crr;

}


int main()
{
    int a[] = {1,3,5,7};
    int b[] = {2,4,6,8};
    vector<int> v;
    v = merge_sort(a , 4 , b , 4);

    for(auto x : v)
        cout << x << " ";

    cout << endl;
    return 0;
}