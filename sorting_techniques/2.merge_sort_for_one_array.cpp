#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sort(int arr[], int l, int mid, int h)
{
    int i, j, k;
    vector<int> v;
    i = l;
    j = mid + 1;
    k = l;

    while (i <= mid && j <= h)
    {
        if (arr[i] < arr[j])
            v.push_back(arr[i]);
        else
            v.push_back(arr[j]);
    }
    for (; i <= mid; i++)
        v.push_back(arr[i]);
    for (; j <= h; j++)
        v.push_back(arr[j]);

    return v;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 2, 6, 7, 9};
    vector<int> v;

    v = merge_sort(arr, 0, 3, 7);
    for (auto x : v)
        cout << x << " ";

    cout << endl;
    return 0;
}