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

// #include "bits/stdc++.h"
#define int  long  long

using namespace std;
constexpr int md=(int) 1e9+7;
typedef vector<int> vi;
typedef priority_queue<int> PQ;
typedef priority_queue<int,vector<int>,greater<int>> PQmin;

const int dx[]={-1,0,1,0,1,1,-1,-1};
const int dy[]={0,1,0,-1,1,-1,-1,1};



signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cin.tie(0);int tst(1);
  // cin>>tst;
  while(tst--){
    int n;
    cin >> n;
    int dp[n+1][3];
    int a,b,c;
    cin >> a >> b >> c;

    dp[0][0]=a;
    dp[0][1]=b;
    dp[0][2]=c;

    for(int i=1;i<n;i++){
      cin >> a >> b >> c;
      dp[i][0]=max(dp[i-1][2],dp[i-1][1])+a;
      dp[i][1]=max(dp[i-1][0],dp[i-1][2])+b;
      dp[i][2]=max(dp[i-1][1],dp[i-1][0])+c;

    }

    cout << max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));




  }
}

