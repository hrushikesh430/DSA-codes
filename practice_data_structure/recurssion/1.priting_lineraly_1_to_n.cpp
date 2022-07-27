#include <bits/stdc++.h>
using namespace std;
int cnt = 1;
void fun()
{
    if (cnt == 11)
        return;
    cout << cnt << endl;
    cnt++;
    fun();
}

int main()
{
    fun();
    return 0;
}