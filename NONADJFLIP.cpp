// Problem: Non Adjacent Flips
// Contest: CodeChef - CodeChef Starters 33 Division 2 (Rated)
// URL: https://www.codechef.com/START33B/problems/NONADJFLIP
// Memory Limit: 256 MB
// Time Limit: 500 ms

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
  os << "\n";
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
  		cin >>n;
  		
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  }
}