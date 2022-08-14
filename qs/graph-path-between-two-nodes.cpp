/**
 * Siddharth Kumar Yadav
 * sky has no limits!
 **/

#include "bits/stdc++.h"
// #define int unsigned long long
using namespace std;
void ps(bool args) { cout << (args ? "YES\n" : "NO\n"); };
int xorValue(int x, int y) { return x ^ y; }
const int mx = (int)1e5 + 5, md = (int)1e9 + 7;
vector<vector<int>> g(mx);
vector<bool> used(mx);
vector<int> p(mx), d(mx);

signed main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tst(1);
  cin >> tst;
  while (tst--) {

    // is it possible to reach from a to b

    // bfs and then dfs
    int n, m;
    cin >> n >> m;
    for (int i = 0, u, v; i < m; i++) {
      cin >> u >> v;
      g[u].push_back(v);
    }

    // using bfs is it possibel to reach form 1- 7
    int src, dest;
    src = 1, dest = 4;
    queue<int> q;
    used[src] = true;
    q.push(src);
    p[src] = -1;
    while (q.size()) {

      int t = q.front();
      q.pop();

      for (auto child : g[t]) {
        if (!used[child]) {
          q.push(child);
          p[child] = t;
          used[child] = true;
        }
      }
    }

    if (!used[dest]) {
      cout << "No path\n";
    } else {
      cout << "Yes\n";

      for (int i = dest; i != -1; i = p[i]) {
        cout << i << " ";
      }
    }

    used.assign(mx, false);

    // using dfs
    cout << '\n';

    vector<int> path;
    function<void(int, int)> dfs = [&](int src, int dest) {
      used[src] = true;
      path.push_back(src);
      if (src == dest) {
        for (auto e : path)
          cout << e << " ";
        return;
      }

      for (auto child : g[src]) {
        if (!used[child]) {
          dfs(child, dest);
        }
      }
    };

    p.assign(mx, -1);
    used.assign(mx, false);

    // using dfs parent array menthod
    function<void(int, int)> dfs2 = [&](int src, int dest) {
      used[src] = true;
      path.push_back(src);

      for (auto child : g[src]) {

        if (!used[child]) {
          // cout << child << ' ';

          dfs2(child, dest);
          p[child] = src;
        }
      }
    };

    // dfs(src, dest);
    dfs2(src, dest);
    // reversed path similar to bfs cout << '\n';

    for (int i = dest; i != -1; i = p[i]) {
      cout << i << " ";
    }

    cout << '\n';
  }
  cerr << "Execution : " << (1.0 * clock()) / CLOCKS_PER_SEC << "s \n";
}
