#include <bits/stdc++.h>
using namespace std;
void pallindrome(string s)
{
    int i, j , flag = 0;
    string s1;
    s1 = s;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    i--;
    char temp;
    for (j = 0; j < i; i--, j++)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    for(int i = 0 ; s[i] != '\0' ; i++)
    {
        if(s[i] != s1[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        cout << "string is pallindrome" << endl;
    }
    else
    {
        cout << "string is not pallindrome" << endl;
    }

    

    
}

int main()
{
    string s;
    cin >> s;

    pallindrome(s);

    return 0;
}