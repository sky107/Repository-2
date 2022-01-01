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
function<bool(int,int,int,int)> iv=[=](int x,int y,int r,int c)
{return (x>=0 && y>=0 && x<r and y<c);};

int a[10000];
int bit[10000]={0};
// bit always indexing from 1

void update(int i,int inc,int N){

  while(i<=N){
    bit[i]+=inc;
    i += (i&(-i));
  }


}


//sum till ith index
int query(int i){
  int ans=0;
  while(i>0){
    ans += bit[i];
    i-=(i&(-i));
  }

  return ans;
}


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cin.tie(0);int tst(1);
  // cin>>tst;
  while(tst--){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
      cin >> a[i];
      update(i,a[i],n);
    }

    // exit(0);

    update(2,34,n);

    
    int q;
    cin >> q;
    while(q--){
      int l,r;
      cin >> l >> r;
      cout << query(r)-query(l-1) <<"\n";
    }
  }
}