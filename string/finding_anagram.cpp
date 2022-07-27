#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s , s1;
    cin >> s >> s1;

    int a[26] = {0} ;

    for(int i = 0 ; a[i] != '\0' ; i++)
    {

        a[s[i] - 97]++;
        a[s1[i] - 97]--;

    }
    int flag = 1;
    for(int i = 0 ; i < 26 ; i++ )
    {
        if(a[i] == -1)
        {
            cout << "not anagram";
            break;

        }
        else{
            flag = 1;
        }
    }
    if(flag == 1)
    {
        cout << " anagram";
    }


    return 0;
}