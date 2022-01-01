//Brute Force O(n!)
#include <bits/stdc++.h>
using namespace std;
#define V 4

// implementation of traveling Salesman Problem
int travllingSalesmanProblem(int graph[][V], int s)
{
    // store all vertex apart from source vertex
    vector<int> vertex;
    for (int i = 0; i < V; i++)
        if (i != s)
            vertex.push_back(i);
 
    // store minimum weight Hamiltonian Cycle.
    int min_path = INT_MAX;
    do {
 
        // store current Path weight(cost)
        int current_pathweight = 0;
 
        // compute current path weight
        int k = s;// starting from source
        for (int i = 0; i < vertex.size(); i++) {
            current_pathweight += graph[k][vertex[i]];
            k = vertex[i]; //now new node will be next one
        }

        //last wale node se first wale node tak ka distance
        current_pathweight += graph[k][s];
 
        // update minimum
        min_path = min(min_path, current_pathweight);
 
    } while (
        next_permutation(vertex.begin(), vertex.end()));
 
    return min_path;
}
 

int main()
{
    // matrix representation of graph
    int graph[][V] = { { 0, 10, 15, 20 },
                       { 10, 0, 35, 25 },
                       { 15, 35, 0, 30 },
                       { 20, 25, 30, 0 } };
    int s = 0;
    cout << travllingSalesmanProblem(graph, s) << endl;
    return 0;
}


// //somewhat similar to travelling salesma
// //https://atcoder.jp/contests/abc183/tasks/abc183_c
// #pragma GCC optimize("-Ofast,unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

// #include "bits/stdc++.h"

// using namespace std;
// typedef long long ll;
// typedef unsigned long long us;

// constexpr int md = (int)1e9 + 7;

// const int dx[] = {-1, 0, 1, 0, 1, 1, -1, -1};
// const int dy[] = {0, 1, 0, -1, 1, -1, -1, 1};

// class Point
// {
// public:
//   int x, y;
// };

// template <class T>
// istream &operator>>(istream &is, vector<T> &V)
// {
//   for (auto &e : V)
//     is >> e;
//   return is;
// }

// template <class T>
// ostream &operator<<(ostream &os, vector<T> &V)
// {
//   for (auto e : V)
//     os << e << " ";
//   return os;
// }

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   int t(1);
//   // cin >> t;
//   while (t--)
//   {
//     int n, k;
//     cin >> n >> k;

//     int t[10][10];
//     for (int i = 1; i < n + 1; i++)
//     {
//       for (int j = 1; j < n+1; j++)
//       {
//         cin >> t[i][j];
//       }
//     }

//     vector<int> perm;
//     for (int i = 2; i < n + 1; i++)
//     perm.push_back(i);
//     int ans = 0;
//     do
//     {
//         int cost = 0;
//       int cur = 1;
//       for (int x : perm)
//       {
//         cost += t[cur][x];
//         cur = x;
//       }
//       cost += t[perm.back()][1];
//       if (cost == k)
//         ans++;
//     } while (next_permutation(perm.begin(), perm.end()));

//     cout << ans << endl;
//   }
//   return 0;
// }