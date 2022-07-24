#include <algorithm>
#include <functional>
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

const int mxn = 2e5 + 10;
int parent[mxn];
int size[mxn];

void make(int u) {
  if (parent[u] == -1) {
    parent[u] = u;
    size[u] = 1;
  }
  // begin
}

int find(int u) {
  if (parent[u] == u)
    return u;
  return parent[u] = find(parent[u]);
}

void Union(int u, int v) {
  u = find(u);
  v = find(v);
  if (u != v) {
    if (size[u] < size[v])
      swap(u, v);
    parent[u] = v;
    size[u] += size[v];
  }
}

signed main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    parent[i] = -1;
    make(i);
  }

  for (int i = 1; i <= 10; i++) {
    cout << parent[i] << " \n"[i == 10];
  }
  int q;
  cin >> q;

  while (q--) {
    int u, v;
    cin >> u >> v;
    Union(u, v);

    for (int i = 1; i <= 10; i++) {
      cout << parent[i] << " ";
    }
    cout << '\n';
  }
}
