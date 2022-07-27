#include <bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int> &v)
{
    int n = v.size(), j, k;
    for (int i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (v[j] < v[k])
                k = j;
        }
        int temp = v[i];
        v[i] = v[k];
        v[k] = temp;
    }
}

int main()
{

    vector<int> v = {23, 8, 6, 9, 3, 5, 1, 4, 6};
    SelectionSort(v);
    for (auto x : v)
        cout << x << " ";

    return 0;
}