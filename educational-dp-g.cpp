#pragma GCC optimize("-Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include <iostream>
#include <algorithm>
#include <functional>
#include <cmath>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <unordered_map>

#include "bits/stdc++.h"
// #define int  long  long

using namespace std;
constexpr int md=(int) 1e9+7;
typedef vector<int> vi;
typedef priority_queue<int> PQ;
typedef priority_queue<int,vector<int>,greater<int>> PQmin;

const int dx[]={-1,0,1,0,1,1,-1,-1};
const int dy[]={0,1,0,-1,1,-1,-1,1};


vector<int>dp(1000001,-1);
 map<int,vector<int>>g;
int solve(int src){
  if(dp[src]!=-1){
    return dp[src];
  }
  bool leaf=true;
  int maxi=0;
  for(auto child:g[src]){
    leaf=false;
    maxi=max(maxi,solve(child));
  }

  if( leaf==true){
    return 0;
  }else{
    return dp[src]=maxi+1;
  }
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cin.tie(0);int tst(1);
  // cin>>tst;
  while(tst--){
    int n,m;
    cin >> n  >>m;
    while(m--){
      int x,y;
      cin >> x >> y;
      g[x].push_back(y);
    }

    int ans=0;
    for(int i=1;i<=n;i++){
      ans=max(ans,solve(i));
    }

    cout << ans <<"\n";




  }
}