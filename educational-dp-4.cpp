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

class item{
public:
  int val,wgt;
};


int knapsack(vector<item>a,int n,int w){


  if(n==0 or w==0){
    return 0;
  }
  if(a[n-1].wgt > w){
    return knapsack(a,n-1,w);
  }

int option1=a[n-1].val+knapsack(a,n-1,w-a[n-1].wgt);
int optino2=knapsack(a,n-1,w);


return  max(optino2,option1);


}






signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cin.tie(0);int tst(1);
  // cin>>tst;
  while(tst--){
    int n,w;
    cin >> n >> w;
    vector<item>item(n);
    for(int i=0;i<n;i++){
      cin>>item[i].wgt;
      cin>> item[i].val;
    }

    // cout << knapsack(item,n,w);

    int dp[n+1][w+1];

    for(int i=0;i<=n;i++){

      for(int j=0;j<=w;j++){

        if(i==0 or j==0){
          dp[i][j]=0;
        }else if( item[i-1].wgt > j){
          dp[i][j]=dp[i-1][j];
        }else{
          int inc=item[i-1].val + dp[i-1][j-item[i-1].wgt];
          int exc=dp[i-1][j];

          dp[i][j]=max(inc,exc);
        }
      }
    }


  

  cout << dp[n][w] <<"\n";
}
}