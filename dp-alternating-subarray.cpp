/**
 * Siddharth Kumar Yadav
 * sky has no limits!
 **/

#include "bits/stdc++.h"
using namespace std;
void ps(bool args) { cout << (args ? "YES\n" : "NO\n"); };
int xorValue(int x, int y) { return x ^ y; }
bool sign(int n) { return n > 0; }
const int mx = (int)1e5 + 5, md = (int)1e9 + 7;
int a[mx], dp[mx];
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
      cin >> a[i];
      dp[i] = 1;
    }

    // dp[i]= > till ith how max len of alternatiing sequence
    dp[n - 1] = 1;

    for (int i = n - 2; i >= 0; i--) {

      if (sign(a[i]) != sign(a[i + 1])) {
        dp[i] = dp[i + 1] + 1;
      }
    }

    for (int i = 0; i < n; i++)
      cout << dp[i] << " ";
    cout << '\n';
  }
  cerr << "Execution : " << (1.0 * clock()) / CLOCKS_PER_SEC << "s \n";
}
