#include <bits/stdc++.h>
using namespace std;
#define I INT_MAX
int edged[3][9] = {
    {1, 1, 2, 2, 3, 4, 4, 5, 5},
    {2, 6, 3, 7, 4, 5, 7, 6, 7},
    {25, 5, 12, 10, 8, 16, 14, 20, 18}};

int s[8] = {-1, -1, -1, -1, -1, -1, -1, -1};
int included[9] = {0};
int t[2][6];

void Union(int u, int v)
{
    if (s[u] < s[v])
    {
        s[u] = s[u] + s[v];
        s[v] = u;
    }
    else
    {
        s[v] = s[u] + s[v];
        s[u] = v;
    }
}

int find(int X)
{
    int x = X;
    while (s[x] > 0)
    {
        x = s[x];
    }
    return x;
}

int main()
{
    int i = 0, n = 7, e = 9, u, v, k, min, j;

    while (i < n - 1)
    {
        min = I;
        for (j = 0; j < e; j++)
        {
            if (min > edged[2][j] && included[j] == 0)
            {
                min = edged[2][j];
                u = edged[0][j];
                v = edged[1][j];
                k = j;
            }
        }

        if (find(u) != find(v))
        {
            t[0][i] = u;
            t[1][i] = v;
            Union(find(u), find(v));
            i++;
        }
        included[k] = 1;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}