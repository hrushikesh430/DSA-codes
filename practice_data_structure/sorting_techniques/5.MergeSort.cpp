#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &v, int l, int mid, int h)
{
    int firstSize = mid - l + 1;
    int secondSize = h - mid;

    vector<int> nums1(firstSize), nums2(secondSize);

    for (int i = 0; i < firstSize; i++)
    {
        nums1[i] = v[l + i];
    }
    for (int i = 0; i < secondSize; i++)
    {
        nums2[i] = v[mid + 1 + i];
    }

    int i = 0, j = 0;
    int k = l;

    while (i < firstSize && j < secondSize)
    {
        if (nums1[i] < nums2[j])
            v[k++] = nums1[i++];
        else
            v[k++] = nums2[j++];
    }

    for (; i < firstSize; i++)
        v[k++] = nums1[i];
    for (; j < secondSize; j++)
        v[k++] = nums2[j];
}

void MergeSort(vector<int> &v, int l, int h)
{
    if (l < h)
    {
        int mid = l + (h - l) / 2;
        MergeSort(v, l, mid);
        MergeSort(v, mid + 1, h);
        Merge(v, l, mid, h);
    }
}

void IterativeMergeSort(vector<int> &v, int n)
{
    int p, i, j, l, h;

    for (p = 2; p <= n; p = p * 2)
    {
        for (int i = 0; p + i - 1 < n; i = p + i)
        {
            l = i;
            h = p + i - 1;
            int mid = (l + h) / 2;
            Merge(v, l, mid, h);
        }
    }

    if (p / 2 < n)
        Merge(v, 0, p / 2, n);
}

int main()
{
    vector<int> v = {2, 4, 2, 99, 4, 3, 5, 80, 6, 4, 6};
    IterativeMergeSort(v, 11);
    for (auto x : v)
        cout << x << " ";
    cout << endl;
    return 0;
}