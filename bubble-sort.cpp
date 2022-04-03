/********************
 * sky has no limits!
 ********************/

#pragma GCC optimize("-Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include <algorithm>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

// #include "bits/stdc++.h"
// #define int long long

using namespace std;

typedef vector<int> vi;
typedef priority_queue<int> PQ;

const int md = (int)1e9 + 7;
const int dx[] = {-1, 0, 1, 0, 1, 1, -1, -1};
const int dy[] = {0, 1, 0, -1, 1, -1, -1, 1};

template <typename B> void db(string s, B b) {
  cerr << s << " :=> " << b << '\n';
}

void ps(bool args) { cout << (args ? "YES\n" : "NO\n"); }

bool iv(int x, int y, int r, int c) {
  return (x >= 0 && y >= 0 && x < r and y < c);
}

long long power(int a, int n) {
  long long ans = 1;
  while (n > 0) {
    int last_bit = (n & 1);
    if (last_bit) {
      ans = ans * a;
    }
    a *= a;
    n = n >> 1;
  }
  return ans;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tst(1);
  cin >> tst;
  while (tst--) {
    int n;
    cin >> n;
    vi a(n);
    for (int &e : a)
      cin >> e;

    for (int pass = 1; pass <= (n - 1); pass++) {
      int fg = 0;

      for (int j = 0; j <= (n - 2); j++) {

        if (a[j] > a[j + 1]) {
          swap(a[j], a[j + 1]);
          fg = 1;
        }
      }

      if (fg == 0) // as all are already sorted now
        break;
    }

    for (auto e : a)
      cout << e << " ";
  }
}