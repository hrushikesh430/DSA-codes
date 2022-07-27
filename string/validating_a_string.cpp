#include <bits/stdc++.h>
using namespace std;

int validate(string s)
{

    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((!(s[i] >= 'A' && s[i] <= 'Z')) &&
            (!(s[i] >= 'a' && s[i] <= 'z')) && (!(s[i] >= '1' && s[i] <= '9')))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string name = "Hruhikesh";

    if (validate)
    {
        cout << "string is validate";
    }
    else
    {
        cout << "string is not validate";
    }

    return 0;
}