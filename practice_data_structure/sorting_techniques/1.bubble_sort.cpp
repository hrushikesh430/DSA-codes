#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int> &v)
{
    int n = v.size();
    int flag = 0;
    for (int i = 0; i < n - 1; i++) // no of passes
    {
        flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (v[j] > v[j + 1]) // camparison takes place in j
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}

int main()
{
    vector<int> v = {2, 4, 2, 1, 4, 5, 2, 6};
    bubblesort(v);
    for (auto x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}