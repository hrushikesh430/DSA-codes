#include <bits/stdc++.h>
using namespace std;

class BFS
{
    int arr[8][8] = {0, 0, 0, 0, 0, 0, 0, 0,
                     0, 0, 1, 1, 1, 0, 0, 0,
                     0, 1, 0, 1, 0, 0, 0, 0,
                     0, 1, 1, 0, 1, 1, 0, 0,
                     0, 1, 0, 1, 0, 1, 0, 0,
                     0, 0, 0, 1, 1, 0, 1, 1,
                     0, 0, 0, 0, 0, 1, 0, 0,
                     0, 0, 0, 0, 0, 1, 0, 0};
    queue<int> q;
    int visited[7] = {0};

public:
    void bfs(int i)
    {
        int u;
        cout << i << " ";
        q.push(i);
        visited[i] = 1;

        while (!(q.empty()))
        {
            u = q.front();
            q.pop();

            for (int v = 1; v <= 7; v++)
            {
                if (arr[u][v] == 0 && visited[v] == 0)
                {
                    cout << v << " ";
                    visited[v] = 1;
                    q.push(v);
                }
            }
        }
    }
};

int main()
{
    BFS b;

    b.bfs(1);
    return 0;
}