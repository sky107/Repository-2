/**
 * Siddharth Kumar Yadav
 * sky has no limits!
 **/

#include "bits/stdc++.h"
using namespace std;
void ps(bool args) { cout << (args ? "YES\n" : "NO\n"); };
const int mx = (int)1e5 + 5, md = (int)1e9 + 7;
int dp[mx];
int ans(int n) {
  if (dp[n] != -1)
    return dp[n];
  if (n == 1)
    return 0;
  int a = INT_MAX;
  if (n % 2 == 0)
    a = min(a, ans(n / 2));
  if (n % 3 == 0)
    a = min(a, ans(n / 3));
  a = min(a, ans(n - 1));
  return a + 1;
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
    memset(dp, -1, sizeof dp);
    cout << ans(n);
  }
  cerr << "Execution : " << (1.0 * clock()) / CLOCKS_PER_SEC << "s \n";
}
