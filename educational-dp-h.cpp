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
#define int  long  long

using namespace std;
constexpr int md=(int) 1e9+7;
typedef vector<int> vi;
typedef priority_queue<int> PQ;
typedef priority_queue<int,vector<int>,greater<int>> PQmin;
// 

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cin.tie(0);int tst(1);
  // cin>>tst;
  while(tst--){
    int n,m;
    cin >> n >> m;
    char a[n+1][m+1];

 int dp[n+1][m+1];


    // memset(dp,1,sizeof(dp));
    // dp[n][m]=1;

    for(int i=1;i<=n;i++){

      for(int j=1;j<=m;j++){

        cin >> a[i][j];
        dp[i][j]=1;
      }
    }

   



    for(int i=n;i>=1;i--){

      for(int j=m;j>=1;j--){

        if(i==n && j==m){
          continue;
        }
        if(a[i][j]=='#'){
          dp[i][j]=0; 
          continue;
        }

        dp[i][j]=(((i==n)?0:dp[i+1][j] )%md +((j==m)?0: dp[i][j+1])%md)%md;
        




      }
    }

   cout << dp[1][1];





  }
}