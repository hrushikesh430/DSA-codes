#include <bits/stdc++.h>
using namespace std;
static int cnt = 0;
void fun()
{
    if (cnt == 3)
        return;
    cout << "Hrushikesh" << endl;
    cnt++;
    fun();
}

int main()
{
    fun();
    return 0;
}