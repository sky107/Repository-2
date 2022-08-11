// /**
//  * Siddharth Kumar Yadav
//  * sky has no limits!
//  **/

// #include "bits/stdc++.h"
// using namespace std;
// void ps(bool args) { cout << (args ? "YES\n" : "NO\n"); };
// int xorValue(int x, int y) { return x ^ y; }
// const int mx = (int)1e5 + 5, md = (int)1e9 + 7;
// int colors[3][mx];
// int dp[3][mx];
// signed main() {
// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif
//   ios_base::sync_with_stdio(false);
//   cin.tie(nullptr);
//   int tst(1);
//   // cin >> tst;
//   while (tst--) {
//     int n;
//     cin >> n;
//     for (int i = 0; i < 3; i++) {
//       for (int j(0); j < n; j++) {
//         cin >> colors[i][j];
//       }
//     }

//     dp[0][0] = colors[0][0];
//     dp[0][1] = colors[1][0];
//     dp[0][2] = colors[2][0];

//     // 28+11 -> 39
//     for (int i = 1; i < n; i++) {
//       dp[i][0] = max(dp[i - 1][1] + colors[0][i], dp[i - 1][2] +
//       colors[0][i]); dp[i][1] = max(dp[i - 1][0] + colors[0][i], dp[i - 1][2]
//       + colors[0][i]); dp[i][2] = max(dp[i - 1][0] + colors[0][i], dp[i -
//       1][1] + colors[0][i]);
//     }

//     cout << max(dp[0][n - 1], max(dp[1][n - 1], dp[2][n - 1])) << '\n';
//   }
//   cerr << "Execution : " << (1.0 * clock()) / CLOCKS_PER_SEC << "s \n";
// }

/**
 * Siddharth Kumar Yadav
 * sky has no limits!
 **/

#include "bits/stdc++.h"
using namespace std;
void ps(bool args) { cout << (args ? "YES\n" : "NO\n"); };
int xorValue(int x, int y) { return x ^ y; }
const int mx = (int)1e5 + 5, md = (int)1e9 + 7;
int a[3][mx];
int dp[3][mx];
signed main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tst(1);
  // cin >> tst;
  while (tst--) {
    int n, x;
    cin >> n;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < n; j++) {
        cin >> a[i][j];
      }
    }

    dp[0][0] = a[0][0];
    dp[1][0] = a[1][0];
    dp[2][0] = a[2][0];

    for (int i = 0; i < n; i++) {
      dp[0][i] = min(dp[1][i - 1] + a[0][i], dp[2][i - 1] + a[0][i]);
      dp[1][i] = min(dp[0][i - 1] + a[1][i], dp[2][i - 1] + a[1][i]);
      dp[2][i] = min(dp[0][i - 1] + a[2][i], dp[1][i - 1] + a[2][i]);
    }
    cout << min(dp[0][n - 1], min(dp[1][n - 1], dp[2][n - 1])) << '\n';

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < n; j++) {
        cout << dp[i][j] << " ";
      }
      cout << '\n';
    }
  }
  cerr << "Execution : " << (1.0 * clock()) / CLOCKS_PER_SEC << "s \n";
}
