/*
Coded by: Siddharth Kumar Yadav
Email:siddharthksk101@gmail.com
*/
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


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cin.tie(0);int tst(1);
  cin>>tst;
  set<vector<int>>s;
  while(tst--){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &e:a)cin >> e;
    s.insert(a);
  }

  cout << s.size() ;
}