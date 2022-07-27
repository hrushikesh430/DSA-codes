#include <bits/stdc++.h>
using namespace std;

bool paalindrome(string s, int i)
{
    if (i < (s.size()) / 2)
    {
        if (s[i] == s[s.size() - 1 - i])
        {
            return true && paalindrome(s, i + 1);
        }
        return false;
    }

    return true;
}

int main()
{
    string s = "a";
    cout << paalindrome(s, 0) << endl;

    return 0;
}
