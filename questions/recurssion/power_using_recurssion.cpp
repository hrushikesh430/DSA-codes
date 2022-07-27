#include <bits/stdc++.h>
using namespace std;
int pow(int base , int raise)
{
    if(raise == 0)
    {
        return 1;
    }
    else
    {
        return base * pow(base,raise-1);
    }

    return -1;

}
int main()
{
    int num , power;
    cout << "enter the number and power" << endl;
    cin >> num >> power ;
    int ans;
    ans = pow(num , power);
    cout << ans << endl;
    return 0;
}