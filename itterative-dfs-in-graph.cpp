#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);cout.tie(nullptr);
  int tt;
  cin >> tt;
  while(tt--){

    int  n;
    cin >>n;


    map<int,vector<int>>g;

    map<int,bool>vis;


    for(int i=0;i<n;i++){
      int u,v;
      cin >> u >> v;
      g[u].push_back(v);
      g[v].push_back(u);
    }

    

    stack<int>s;

    s.push(0);

    while(!s.empty()){
      int tmp=s.top();
      s.pop();

      if(!vis[tmp]){
        cout << tmp <<" ";
        vis[tmp]=true;
      }

      for(auto child:g[tmp]){
        if(!vis[child]){
          s.push(child);
        }
      }
    }

  }
}