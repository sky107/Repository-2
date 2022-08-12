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
int parent(int n) {
  if (n == 1)
    return -1;

  return n / 2;
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
    int a, b;
    cin >> a >> b;
    int i = -1;
    vector<int> a1, a2;
    for (i = b; i != -1; i = parent(i)) {
      a1.push_back(i);
    }

    for (int i = a; i != -1; i = parent(i)) {
      a2.push_back(i);
    }

    // for (int &e : a1)
    //   cout << e << " ";
    // cout << '\n';

    // for (int &e : a2)
    //   cout << e << " ";
    // cout << '\n';

    for (int i = 0, ok = false; i < (a1).size(); i++) {

      for (int j = 0; j < (a2).size(); j++) {
        // cout << a1[i] << "-" << a2[j] << '\n';
        if (a1[i] == a2[j]) {
          cout << i + j << '\n';
          ok = true;
          break;
        }
      }
      if (ok)
        break;
    }
  }

  cerr << "Execution : " << (1.0 * clock()) / CLOCKS_PER_SEC << "s \n";
}
