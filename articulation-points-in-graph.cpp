#include <bits/stdc++.h>
using namespace std;
// A vertex in an undirected connected graph is an articulation point (or cut vertex) if removing it (and edges through it) disconnects the graph.

// It repersents vulnerabilites where damagin wil disrupt the google servers xD!

// -----------------------
// Approach1=> remove one be one and check if disconnect componetns increased or not by dfs/bfs
// Time Complexity will be : V*(V+E) using adjacency list

int cnt=0;
map<int,bool>vis;
  map<int,set<int>>g;


void Dfs(int src){

  vis[src]=true;

  for(auto child:g[src]){
    if(vis[child])continue;

    if( vis[child]==false){
      vis[child]=true;
      Dfs(child);
    }
  }

  cnt++;

}

signed main(){
  int  n;
  cin >>n;


  for(int i(0);i<n-1;i++){

    int u,v;
    cin >> u >> v;

    g[u].insert(v);
    g[v].insert(u);
  }

 Dfs(0);
 int icnt=cnt;

 cnt=0;

 vector<pair<int,int>>ans;

 for(auto x:g){

  for(auto y:x.second){

      g[y].erase(x.first);
      g[x.first].erase(y);
      cnt=0;
      for(int i=0;i<7;i++)
      {
      Dfs(i);
      }
      if(cnt > icnt) {ans.push_back({y,x.first});




      g[y].insert(x.first);
      g[x.first].insert(y);
  }

  }
 }

 for(auto e:ans){
  cout << e.first <<" "<< e.second <<endl;
 }

// for(auto x:g){
//   cout << x .first <<"=> ";
//   for(auto y:x.second)cout << y <<" ";
//     cout <<'\n';
// }

  

}