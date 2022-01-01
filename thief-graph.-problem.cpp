//https://www.geeksforgeeks.org/shortest-path-for-a-thief-to-reach-the-nth-house-avoiding-policemen/
#include <bits/stdc++.h>
using namespace std;

unordered_map<int, vector<int>> g;

int main()
{
    int n = 5;
    int e = 5;
    int a[] = {0, 1, 0, 0, 0}; //means ith house if of poilice if 1
    int path[][2] = {{0, 1}, {0, 2}, {1, 4}, {2, 3}, {3, 4}};
    for (int i = 0; i < e; i++)
    {
        if (!a[path[i][0]] and !a[path[i][1]])
        { //so that we will not connect two policeman houses
            g[path[i][0]].push_back(path[i][1]);
        }
    }
    if (a[0] == 1 or a[n - 1] == 1)
    { //if root or end is police
        cout << -1;
        exit(0);
    }

    //BFS
    vector<int> vis(n, 0);
    int dist[n];
    dist[0] = 0;
    queue<int> q;
    q.push(0);
    vis[0] = 1;

    while (q.empty() == false)
    {
        int cur = q.front();
        q.pop();
        for (auto child : g[cur])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                dist[child] = dist[cur] + 1; //incrementing distance
            }
        }
    }

    if (!vis[n - 1])
    {
        cout << "Not possible to reach the end\n";
    }
    else
        cout << "Distance : " << dist[n - 1] << endl;
    return 0;
}