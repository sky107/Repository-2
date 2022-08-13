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
int n;

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
    g.resize(10);
    for (int i = 0; i < n - 1; i++) {
      int u, v;
      cin >> u >> v;
      g[u].push_back(v);
    }
    vector<int> in(n), out(n);

    for (int i = 1; i <= n; i++) {
      // cout << i << "->";
      out[i] = g[i].size();
      // for (int j = 1; j <= n; j++) {
      //   if (i != j)
      for (auto e : g[i])
        in[e]++;
      // }
    }

    for (int i = 1; i <= n; i++) {
      cout << in[i] << "<->" << out[i] << '\n';
    }

    g.clear();
    cout << "------\n";
  }
  cerr << "Execution : " << (1.0 * clock()) / CLOCKS_PER_SEC << "s \n";
}
