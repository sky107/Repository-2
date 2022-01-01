//https://codeforces.com/contest/462/problem/A
#pragma GCC optimize("-Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef unsigned long long us;

constexpr int md = (int)1e9 + 7;

const int dx[] = {-1, 0, 1, 0, 1, 1, -1, -1};
const int dy[] = {0, 1, 0, -1, 1, -1, -1, 1};

class Point
{
public:
  int x, y;
};

template <class T>
istream &operator>>(istream &is, vector<T> &V)
{
  for (auto &e : V)
    is >> e;
  return is;
}

template <class T>
ostream &operator<<(ostream &os, vector<T> &V)
{
  for (auto e : V)
    os << e << " ";
  return os;
}

int a[500][500];
char b[500][500];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t(1);
  // cin>>t;
  while (t--)
  {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        cin >> b[i][j];
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
      {

        if (b[i][j] == 'x')
          a[i][j] = 0;
        else
          a[i][j] = 1;
      }
    int cnt = 0;
    auto is_valid = [&](int i, int j)
    {
      return i >= 0 and j >= 0 and i < n and j < n;
    };
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {

        int mask = a[i + dx[0]][j + dy[0]];
        bool fg = false;
        for (int k = 1; k < 4; k++)
        {
          if (is_valid(i + dx[k], j + dy[k]))
          {
            mask ^= a[i + dx[k]][j + dy[k]];
          }
          fg = true;
        }
        if (!mask && fg == true)
        {
          cnt++;
        }
      }
    }

    cout << ((cnt == n * n) ? "YES\n" : "NO\n");
  }
  return 0;
}