#include <bits/stdc++.h>
using namespace std;

void fun(int i, int n)
{
    if (i > 0)
    {
        fun(i - 1, n);
        cout << i << endl;
    }
}

int main()
{
    fun(10, 10);

    return 0;
}