#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <cmath>

using namespace std;

long long fact(int n){
  if(n==0)return 1;
  return n*fact(n-1);
}
signed main(){
  ios_base::sync_with_stdio(false);int tt(1);
  cin.tie(nullptr);cout.tie(nullptr);
  // cin >> tt;
  while(tt--){
    string s;
    cin >> s;
    int n=s.size();
    map<int,int>mp;
    for(auto e:s)mp[e]++;
      int p=1;
    for(auto e:mp){
      p*=fact(e.second);
    } 
    cout << fact(n)/p;
  }
}