#pragma GCC optimize("-Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include "bits/stdc++.h"

using namespace std;
constexpr int md=(int) 1e9+7;
typedef priority_queue<int> PQ;
typedef priority_queue<int,vector<int>,greater<int>> PQmin;

const int dx[]={-1,0,1,0,1,1,-1,-1};
const int dy[]={0,1,0,-1,1,-1,-1,1};

template<class T> istream& operator >> (istream &is, vector<T>& V){
for(auto &e:V)is >> e;return is;}
template<class T> ostream& operator << (ostream &os, vector<T>& V){
for(auto e:V)os<<e<<" ";os<<"\n";return os;}

function<void(bool)> ps=[=](bool args){cout << ( args ? "YES\n":"NO\n");};


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cin.tie(0);int tst(1);
  cin>>tst;
  while(tst--){
    int n;
    cin >> n;
    vector<int>a(n);
    cin >> a;

    int m;
    cin >> m;
    vector<int>b(m);
    cin >> b;

    partial_sum(a.begin(),a.end(),a.begin());
    partial_sum(b.begin(),b.end(),b.begin());

    cout << max(0,*max_element(a.begin(),a.end()))+max(0,*max_element(b.begin(),b.end())) <<"\n";
    




  }
}