/** Siddharth Kumar Yadav **/
//https://hack.codingblocks.com/app/contests/2303/627/problem

#pragma GCC optimize("-Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include "bits/stdc++.h"

using namespace std;
constexpr int md=(int) 1e9+7;

const int dx[]={-1,0,1,0,1,1,-1,-1};
const int dy[]={0,1,0,-1,1,-1,-1,1};

template<class T> istream& operator >> (istream &is, vector<T>& V){for(auto &e:V)is >> e;return is;}
template<class T> ostream& operator << (ostream &os, vector<T>& V){for(auto e:V)os<<e<<" ";os<<"\n";return os;}
template <typename Head, typename... Tail>inline void dbg_out(Head H, Tail... T) { cout << " " << to_string(H)<<"\n";}
#define dbg(...) cout << "[" << #__VA_ARGS__ << "]:", dbg_out(__VA_ARGS__)

map<int,vector<int>>g;
map<int,bool>vis;

vector<long long >w;
long long counter=0;
long long smcounter=0;

void Dfs(int src){
    // counter++;
    vis[src]=true;
    smcounter++;
    for(int child:g[src]){
      if(!vis[child])
       {Dfs(child);}
    }
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);int t(1);
  // cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
      int x,y;cin>>x>>y;
      g[x].push_back(y);
      g[y].push_back(x);
    }

    for(int i=0;i<n;i++){
      if(!vis[i]){
        counter++;
      Dfs(i);
      w.push_back(smcounter);
      smcounter=0;
      }
    }
    
  int N=w.size();
  long long ans=0;
  for(int i=0;i<N-1;i++){
    for(int j=i+1;j<N;j++){
      ans+=(w[i]*w[j]);
    }
  }
      cout<<ans<<endl;
  }
  return 0;
}
