/**
 * Siddharth Kumar Yadav
 * sky has no limits!
 **/

#include "bits/stdc++.h"
#include <vector>
using namespace std;
void ps(bool args) { cout << (args ? "YES\n" : "NO\n"); };
const int mx = (int)1e5 + 5, md = (int)1e9 + 7;
int dp[mx];
int ans(vector<int> &a, int n) {
  if (n == 1)
    return a[0];

  dp[0] = a[0];
  dp[1] = max(a[0], a[1]);

  int b = INT_MIN;

  for (int i = 2; i < n; i++) {
    dp[i] = max(a[i] + dp[i - 2], dp[i - 1]);
  }
  return dp[n - 1];
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
    vector<int> a(n);
    for (int &e : a)
      cin >> e;

    cout << ans(a, n);
  }
  cerr << "Execution : " << (1.0 * clock()) / CLOCKS_PER_SEC << "s \n";
}
