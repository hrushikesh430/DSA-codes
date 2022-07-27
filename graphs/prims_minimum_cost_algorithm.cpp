#include <bits/stdc++.h>
using namespace std;
#define i INT_MAX

int cost[8][8] = {i, i, i, i, i, i, i, i,
                  i, i, 25, i, i, i, 5, i,
                  i, 25, i, 12, i, i, i, 10,
                  i, i, 12, i, 8, i, i, i,
                  i, i, i, 8, i, 18, i, 10,
                  i, i, i, i, 18, i, 20, 19,
                  i, 5, i, i, i, 20, i, 19,
                  i, i, 10, i, 10, 19, i, i};

int near[8] = {i, i, i, i, i, i, i, i};
int t[2][6];

int main()
{

    int ii, j, k, u, v, n = 7, min = i;
    for (ii = 1; ii <= n; ii++)
    {
        for (j = ii; j <= n; j++)
        {
            if (min > cost[ii][j])
            {
                min = cost[ii][j];
                u = ii;
                v = j;
            }
        }
    }
    t[0][0] = u;
    t[1][0] = v;
    near[v] = near[u] = 0;

    for (ii = 1; ii <= n; ii++)
    {
        if (cost[ii][u] < cost[ii][v] && near[ii] != 0)
        {
            near[ii] = u;
        }
        else if (cost[ii][u] >= cost[ii][v] && near[ii] != 0)
            near[ii] = v;
    }

    // repeating procedure starts

    for (ii = 1; ii < n - 1; ii++)
    {
        min = i;

        for (j = 1; j <= n; j++)
        {
            if (min > cost[j][near[j]] && near[j] != 0)
            {
                min = cost[j][near[j]];
                k = j;
            }
        }

        t[0][ii] = k;
        t[1][ii] = near[k];
        near[k] = 0;
        for (j = 1; j <= n; j++)
        {
            if (near[j] != 0 && cost[j][k] < cost[j][near[j]])
                near[j] = k;
        }
    }

    for (int ii = 0; ii < 2; ii++)
    {
        for (j = 0; j < n - 1; j++)
        {
            cout << t[ii][j] << " ";
        }
        cout << endl;
    }
    return 0;
}