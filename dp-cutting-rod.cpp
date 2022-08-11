/**
 * Siddharth Kumar Yadav
 * sky has no limits!
 **/

#include "bits/stdc++.h"
using namespace std;
void ps(bool args) { cout << (args ? "YES\n" : "NO\n"); };
const int mx = (int)1e5 + 5, md = (int)1e9 + 7;
int aa[mx];
int dp[mx];
int ans(int n) {
  if (n == 0)
    return 0;

  if (dp[n] != -1)
    return dp[n];

  int a = INT_MIN;
  for (int i = 1; i <= n; i++) {
    // let the last move be a cut of 1 unit ,2 unit, 3 unit all upto n unit
    a = max(a, ans(n - i) + aa[i]);
  }

  return dp[n] = a;
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
    for (int i = 1; i <= n; i++)
      cin >> aa[i];
    memset(dp, -1, sizeof dp);
    cout << ans(n) << '\n';
  }
  cerr << "Execution : " << (1.0 * clock()) / CLOCKS_PER_SEC << "s \n";
}
