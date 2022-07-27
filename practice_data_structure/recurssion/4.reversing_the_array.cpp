#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void fun(vector<int> &v, int i)
{
    if (i < (v.size()) / 2)
    {
        swap(v[i], v[(v.size() - 1) - i]);
        fun(v, i + 1);
    }
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    fun(v, 0);
    for (auto x : v)
        cout << x << " ";
    cout << endl;
    return 0;
}