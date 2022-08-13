/**
 * Siddharth Kumar Yadav
 * sky has no limits!
 **/

#include "bits/stdc++.h"
#include <vector>
// #define int unsigned long long
using namespace std;
void ps(bool args) { cout << (args ? "YES\n" : "NO\n"); };
int xorValue(int x, int y) { return x ^ y; }
const int mx = (int)1e5 + 5, md = (int)1e9 + 7;
// vector<vector<int>> g(mx);
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
    string s;
    cin >> s;

    map<char, vector<pair<char, int>>> g;

    g['A'].push_back({'B', 1});
    g['A'].push_back({'A', 0});

    g['B'].push_back({'B', 1});
    g['B'].push_back({'C', 0});

    g['C'].push_back({'B', 1});
    g['C'].push_back({'D', 0});

    g['D'].push_back({'B', 1});
    g['D'].push_back({'E', 0});

    g['E'].push_back({'B', 1});
    g['E'].push_back({'A', 0});

    char src = 'A';
    int j = 0;
    n = s.size();
    cout << s << '\n';
    while (true) {
      bool ok = false;
      cout << src << "->";
      int i = 0;
      for (auto e = g[src][i]; i < g[src].size(); i++) {

        cout << "\nSZ" << g[src].size() << '\n';
        if (g[src][i].second == (int)(s[j] - '0')) {

          cout << src << "->";
          src = (char)e.first;

          j++;
          continue;
        }
        if (j >= n)
          break;
        // j++;
      }

      if (j < n) {
        cout << "NO\n";
        break;
      } else {
        cout << src << '\n';
        cout << "TODO\n";
        break;
      }
    }
  }
  cerr << "Execution : " << (1.0 * clock()) / CLOCKS_PER_SEC << "s \n";
}
