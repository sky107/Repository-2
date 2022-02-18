/**
 * Siddharth Kumar Yadav
 * sky has no limits!
**/

#pragma GCC optimize("-Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include <iostream>
#include <algorithm>
#include <functional>
#include <bitset>
#include <climits>
#include <cassert>
#include <numeric>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <vector>
#include <stack>
#include <queue>

// #include "bits/stdc++.h"
// #define int  long  long

using namespace std;

typedef vector<int> vi;
typedef priority_queue<int> PQ;
typedef priority_queue<int, vector<int>, greater<int>> PQmin;

constexpr int md = (int)1e9 + 7;
const int dx[] = {-1, 0, 1, 0, 1, 1, -1, -1};
const int dy[] = {0, 1, 0, -1, 1, -1, -1, 1};
vi dx_knight = {2, 1, -1, -2, -2, -1, 1, 2};
vi dy_knight = {1, 2, 2, 1, -1, -2, -2, -1};

template <class T>
istream& operator>>(istream& is, vector<T>& V) {
  for (auto& e : V) is >> e;
  return is;
}
template <class T>
ostream& operator<<(ostream& os, vector<T>& V) {
  for (auto e : V) os << e << " ";
  os << "\n";
  return os;
}

template <typename A, typename B>
ostream& operator<<(ostream& os, const pair<A, B>& p) {
  return os << '(' << p.first << ", " << p.second << ')';
}

template <typename A, typename B>
ostream& operator<<(ostream& os, map<A, B> M) {
  for (auto e : M) os << e.first << " => " << e.second << "\n";
  return os;
}

template <typename B>
void db(string s, B b) {
  cerr << s << " :=> " << b << '\n';
}

function<void(bool)> ps = [=](bool args) { cout << (args ? "YES\n" : "NO\n"); };
function<bool(int, int, int, int)> iv = [=](int x, int y, int r, int c) {
  return (x >= 0 && y >= 0 && x < r and y < c);
};

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

int n, cnt = 1;
vector<vector<int>> ans;
vector<int> vis;
map<int, vector<int>> g;

void dfs(int s) {
  if (vis[s]) return;
  vis[s] = true;

  for (auto e : g[s]) {
    if (vis[e]) continue;
    cnt++;
    dfs(e);
  }
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tst(1);
  cin >> tst;
  while (tst--) {
    cin >> n;
    int an;
    cin >> an;
    vector<pair<int, int>> a(an);
    vis = vector<int>(n, false);
    for (int i = 0; i < an; i++) {
      cin >> a[i].first >> a[i].second;
      g[a[i].first].push_back(a[i].second);
      g[a[i].second].push_back(a[i].first);
    }
    int ans = 1;
    for (int i = 0; i < n; i++) {
      if (vis[i] == false) {
        dfs(i);
        cout << cnt << '\n';
        ans *= cnt;
      }
      cnt = 1;
    }
    cout << ans << '\n';
  }
}