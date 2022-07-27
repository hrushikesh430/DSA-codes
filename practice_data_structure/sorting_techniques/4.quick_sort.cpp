#include <bits/stdc++.h>
using namespace std;

int QuickSort(vector<int> &v, int l, int h)
{
    int i, pivot, j;
    i = l;
    pivot = v[l];
    j = h;

    do
    {

        do
        {
            i++;
        } while (v[i] <= pivot);
        do
        {
            j--;
        } while (v[j] > pivot);

        if (i < j)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }

    } while (i < j);

    int temp = v[j];
    v[j] = v[l];
    v[l] = temp;

    return j;
}

void Sort(vector<int> &v, int l, int h)
{
    int j;
    if (l < h)
    {
        j = QuickSort(v, l, h);
        Sort(v, l, j);
        Sort(v, j + 1, h);
    }
}

int main()
{

    vector<int> v = {3, 1, 3, 59, 6, 3, 7, 7, INT32_MAX};
    Sort(v, 0, 8);

    for (auto x : v)
        cout << x << " ";
    cout << endl;
}