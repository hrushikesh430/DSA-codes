#include <bits/stdc++.h>
using namespace std;

class DFS
{
    int arr[8][8] = {0, 0, 0, 0, 0, 0, 0, 0,
                     0, 0, 1, 1, 1, 0, 0, 0,
                     0, 1, 0, 1, 0, 0, 0, 0,
                     0, 1, 1, 0, 1, 1, 0, 0,
                     0, 1, 0, 1, 0, 1, 0, 0,
                     0, 0, 0, 1, 1, 0, 1, 1,
                     0, 0, 0, 0, 0, 1, 0, 0,
                     0, 0, 0, 0, 0, 1, 0, 0};
    int visited[8] = {0};

public:
    void dfs(int u)
    {
        if (visited[u] == 0)
        {
            cout << u << " ";
            visited[u] = 1;

            for (int v = 1; v <= 7; v++)
            {
                if (arr[u][v] == 0 && visited[v] == 0)
                {
                    dfs(v);
                }
            }
        }
    }
};

int main()
{
    DFS d;
    d.dfs(1);
    return 0;
}