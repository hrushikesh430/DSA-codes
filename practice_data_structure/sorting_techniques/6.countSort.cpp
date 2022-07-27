#include <bits/stdc++.h>
using namespace std;

int Maxi(vector<int> &v)
{
    int max = v[0];

    for (int i = 0; i < v.size(); i++)
    {
        if (max < v[i])
        {
            max = v[i];
        }
    }
    return max;
}

void CountSort(vector<int> &v)
{
    int max = Maxi(v);
    int *p = new int[max + 1];

    for (int i = 0; i < max + 1; i++)
        p[i] = 0;
    for (int i = 0; i < v.size(); i++)
    {
        p[v[i]]++;
    }

    int i = 0, j = 0;
    while (i < max + 1)
    {
        if (p[i] > 0)
        {
            v[j++] = i;
            p[i]--;
        }
        else
            i++;
    }
}

int main()
{
    vector<int> v = {12, 3, 10, 34, 2, 4, 2, 5, 9};
    CountSort(v);
    for (auto x : v)
        cout << x << " ";
    cout << endl;
    return 0;
}