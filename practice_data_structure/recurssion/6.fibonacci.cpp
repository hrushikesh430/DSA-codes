#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n == 0)
        return 1;

    return n * fib(n - 1);
}

int main()
{
    cout << fib(5) << endl;
    return 0;
}