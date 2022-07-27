#include <bits/stdc++.h>
using namespace std;
int taylor(int x , int n)
{
    static int p = 1;
    static int f = 1;
    if(n == 0)
    {
        return 1;
    }
    else
    {
        p = p*x;
        f= f*n;
        return p/f + taylor(x , n -1);
    }
}

int main()
{
    int num , raise;
    cout << "enter the num and raise" << endl;
    cin >> num >> raise;
    int ans;
    ans = taylor(num , raise);
    cout << ans << endl;


    return 0;
}