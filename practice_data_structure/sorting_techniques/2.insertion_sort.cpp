#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int> &v)
{
    int n = v.size();

    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int x = v[i];
        while (j > -1 && v[j] >= x)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = x;
    }
}

int main()
{
    vector<int> v = {3, 1, 3, 4, 5, 2, 2};
    InsertionSort(v);
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}