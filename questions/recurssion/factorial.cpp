#include <bits/stdc++.h>
using namespace std;

int fac(int n)
{
    if(n == 1)
    {5
    
        return 1;
    }
    else
    {
        return n*fac(n-1);
    }
}

int main()
{
    int k;
    cout << "enter the number" << endl;
    cin >> k;
    int ans;
    ans = fac(k);
    cout << ans << endl;
    return 0;
}