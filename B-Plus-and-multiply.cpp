/**
Siddharth Kumar Yadav
https://codeforces.com/problemset/problem/1542/B
**/

#include <bits/stdc++.h>

#define int unsigned long long int
using namespace std;

int power(int a, int b) {
  if (a == 1 or b == 0) {
    return 1;
  }
  const int temp = power(a, b / 2);
  if (b & 1) {
    return a * temp * temp;
  } else
    return temp * temp;

  return 0;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    if (a == 1) {
      if ((n - 1) % b == 0) {
        cout << "YES\n";

      } else
        cout << "NO\n";
    } else {

      int i = 1;
      bool fg = false;

      while (i <= n) {
        if (i % b == n % b) {
          fg = true;
          break;
        }
        i *= a;
      }

      cout << (fg ? "YES\n" : "NO\n");
    }
  }
}