/**
 * Siddharth Kumar Yadav
 * sky has no limits!
 **/

#include "bits/stdc++.h"
#include <vector>
using namespace std;
void ps(bool args) { cout << (args ? "YES\n" : "NO\n"); };
int xorValue(int x, int y) { return x ^ y; }
const int mx = (int)1e5 + 5, md = (int)1e9 + 7;
vector<vector<int>> g(mx);
vector<bool> used(mx);
vector<int> p(mx), d(mx);

void bfs(int s) {

  queue<int> q;
  q.push(s);
  used[s] = true;
  p[s] = -1;

  while (!q.empty()) {
    int v = q.front();
    q.pop();

    for (auto child : g[v]) {
      if (!used[child]) {
        used[child] = true;
        q.push(child);
        p[child] = v;
        d[child] = d[v] + 1;
      }
    }
  }
}

void shortest_path(int src, int dest) {
  queue<int> q;
  q.push(src);
  used[src] = true;
  p[src] = -1;

  while (q.empty() == false) {

    int v = q.front();
    q.pop();

    for (int e : g[v]) {
      if (!used[e]) {
        used[e] = true;
        p[e] = v;
        d[e] = d[v] + 1;
        q.push(e);
      }
    }
  }
  if (!used[dest]) {
    cout << "No path\n";
  } else
    for (int i = dest; i != -1; i = p[i]) {
      cout << i << " ";
    }
  cout << '\n';
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
      int x, y;
      cin >> x >> y;
      g[x].push_back(y);
      g[y].push_back(x);
    }

    // bfs(x);
    shortest_path(1, 6);
    for (int i = 1; i <= (n + 1); i++) {
      cout << d[i] << " ";
    }
    cout << '\n';
  }
  cerr << "Execution : " << (1.0 * clock()) / CLOCKS_PER_SEC << "s \n";
}
