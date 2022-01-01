#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <cmath>

using namespace std;

map<int,set<int>>g;

signed main(){
  ios_base::sync_with_stdio(false);int tt(1);
  cin.tie(nullptr);cout.tie(nullptr);
  cin >> tt;
  int n=tt;
  tt--;
  while(tt--){
    int u,v;
    cin >> u >> v;
    g[u].insert(v);
    g[v].insert(u);
  }
  bool ok=false;
  int cnt=0;
  for(auto e:g){
    if( e.second.size()==1)cnt++;
    else if (e.second.size()==(n-1))ok=true;
  }

  cout<<((ok && (cnt==(n-1)))?"Yes":"No");


}