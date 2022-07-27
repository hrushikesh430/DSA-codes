#include <bits/stdc++.h>
using namespace std;
int sumofn(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n + sumofn(n-1);
    }
}
int main()
{
    int k;
    cout << "enter thr number" << endl;
    cin >> k;
    int ans;
    ans = sumofn(k);
    cout << ans << endl;


    return 0;
}