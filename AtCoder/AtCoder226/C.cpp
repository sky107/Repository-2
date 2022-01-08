/*
Coded by: Siddharth Kumar Yadav
Email:siddharthksk101@gmail.com
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <functional>
#include <set>
#include <cmath>

#define int long long
using namespace std;

signed main(){
  ios_base::sync_with_stdio(false);int tt(1);
  cin.tie(nullptr);cout.tie(nullptr);
  // cin >> tt;

  map<int,set<int>>g;

  int ans=0;


  while(tt--){
      int n;
      cin >> n;
      vector<int>time(n+1);
      for(int i=1;i<=n;i++){
        cin >> time[i];
        int k;
        cin >> k;
        while(k--){
          int v;cin >> v;
          g[i].insert(v);
        }

      }
      map<int,bool>vis;

      function<void(int)> dfs=[&](int src){
        ans+=time[src];
        vis[src]=true;
        for(auto child:g[src]){
          if(!vis[child]){
            dfs(child);
          }
        }

      };


      dfs(n);
      cout << ans <<'\n';

  }
}