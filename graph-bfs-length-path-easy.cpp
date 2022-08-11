/**
 * Siddharth Kumar Yadav
 * sky has no limits!
 **/

#include "bits/stdc++.h"
#include <queue>
using namespace std;

void ps(bool args) { cout << (args ? "YES\n" : "NO\n"); };
int xorValue(int x, int y) { return x ^ y; }
const int mx = (int)1e5 + 5;

vector<vector<int> > g(mx);
vector<bool> used(mx);
vector<int> p(mx, -1), d(mx, 0);
void bfs(int src) {

  queue<int> q;
  q.push(src);
  used[src] = true;
  p[src] = -1;
  cout<<src<<" ";
  while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int u : g[v]) {
      if (!used[u]) {
        used[u] = true;
         cout<<u<<" ";
        q.push(u);
        d[u] = d[v] + 1;
        p[u] = v;
      }
    }
  }

}

void shortest_path(int src, int dest) {
  queue<int> q;

  q.push(src);
  used[src] = true;
  p[src] = -1;
  while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int u : g[v]) {
      if (!used[u]) {
       
        used[u] = true;
        q.push(u);
        // length of shortest path from src  to {u} that point 
        d[u] = d[v] + 1;
        p[u] = v;
      }
    }
  }

  if (!used[dest]) {
    cout << "No path found\n";
  } else {
    vector<int> path;
    for (int i = dest; i != -1; i = p[i]) {
      path.push_back(i);
    }
    cout << "Path: -> ";
    for (int e : path)
      cout << e << " ";
    cout << '\n';
  }
}

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

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
      int u, v;
      cin >> u >> v;
      g[u].push_back(v);
      g[v].push_back(u);
    }

    // shortest_path(1, 7);
    bfs(1);
  }
  cerr << "Execution : " << (1.0 * clock()) / CLOCKS_PER_SEC << "s \n";
}
