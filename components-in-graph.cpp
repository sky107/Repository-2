#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <map>
#include <set>
#include <cmath>

using namespace std;

signed main(){
  ios_base::sync_with_stdio(false);int tt(1);
  cin.tie(nullptr);cout.tie(nullptr);
  cin >> tt;
  while(tt--){
    int n;
    cin >> n;

    map<int,vector<int>> g;

    for(int i=0;i<n;i++){
      int u,v;
      cin >> u >> v;
      g[u].push_back(v);
      g[v].push_back(u);
    }

    map<int,bool>vis;
    
    function<void(int)> dfs=[&](int src){
      cout << src <<" ";
      vis[src]=true;
      for(auto child:g[src]){
        if(!vis[child]){
          dfs(child);
        }
      }
    };
    int cnt=0;
    for(int i=1;i<=10;i++)
    {
      if(vis[i]==false){
        dfs(i);
        cout <<'\n';
        cnt++;
      }
    }

    cout << "total components => "<<cnt <<"\n";









  }
}