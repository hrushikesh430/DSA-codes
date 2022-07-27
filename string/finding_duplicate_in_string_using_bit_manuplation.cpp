#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin >> name;

    int h = 0 ,x;

    for(int i = 0 ; name[i] != 0 ; i++)
    {
        int x = 1;
        x = x<<(name[i] - 97);

        if((h & x) > 0)
        {
            cout << name[i] << " is duplicate "<< endl;

        }
        else{
            h = h | x;

        }




    }
    return 0;
}