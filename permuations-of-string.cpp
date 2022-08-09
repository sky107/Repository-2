/**
 * Siddharth Kumar Yadav
 * sky has no limits!
 **/

#pragma GCC optimize("-Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include <algorithm>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <ctime>
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
#define int long long
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()

using namespace std;

typedef vector<int> vi;
typedef priority_queue<int> PQ;
// typedef priority_queue<int, vector<int>, greater<int>> PQmin;

const int md = (int)1e9 + 7;
const int dx[] = {-1, 0, 1, 0, 1, 1, -1, -1};
const int dy[] = {0, 1, 0, -1, 1, -1, -1, 1};
const int dx_knight[] = {2, 1, -1, -2, -2, -1, 1, 2};
const int dy_knight[] = {1, 2, 2, 1, -1, -2, -2, -1};

template <class T> istream &operator>>(istream &is, vector<T> &V) {
  for (auto &e : V)
    is >> e;
  return is;
}
template <class T> ostream &operator<<(ostream &os, vector<T> &V) {
  for (auto e : V)
    os << e << " ";
  return os;
}

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
  return os << '(' << p.first << ", " << p.second << ')';
}

template <typename A, typename B>
ostream &operator<<(ostream &os, map<A, B> M) {
  for (auto e : M)
    os << e.first << " => " << e.second << "\n";
  return os;
}
template <typename T, typename U> static inline void amin(T &x, U y) {
  if (y < x)
    x = y;
}
template <typename T, typename U> static inline void amax(T &x, U y) {
  if (x < y)
    x = y;
}

template <typename B> void db(string s, B b) {
  cerr << s << " :=> " << b << '\n';
}

void ps(bool args) { cout << (args ? "YES\n" : "NO\n"); };
bool isv(char a) {
  return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
};
bool iv(int x, int y, int r, int c) {
  return (x >= 0 && y >= 0 && x < r and y < c);
};

/*
 *  A='65',B='66',Z='90',dif= '32'
 *  a='97',b='98',z='122',
 *  1='48',9='57'
 */

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

int gcd(int a, int b) {
  if (!a || !b)
    return a | b;
  unsigned shift = __builtin_ctz(a | b);
  a >>= __builtin_ctz(a);
  do {
    b >>= __builtin_ctz(b);
    if (a > b)
      swap(a, b);
    b -= a;
  } while (b);
  return a << shift;
}

static int a[10] = {0};
static char res[10];

void perm(char s[], int k) {

  if (s[k] == '\0') {
    res[k] = '\0';
    cout << res << '\n';
    return;
  }
  int i;

  for (int i = 0; s[i]; i++) {
    if (a[i] == 0) {
      res[k] = s[i];
      a[i] = 1;
      perm(s, k + 1);
      a[i] = 0;
      // check , backtracking
    }
  }
}

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
    char a[] = "abcd";
    perm(a, 0);
  }
  cerr << "Execution : " << (1.0 * clock()) / CLOCKS_PER_SEC << "s \n";
}
