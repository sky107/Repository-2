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


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cin.tie(0);int tst(1);
  cin>>tst;
  while(tst--){
  	int n;
  	cin >> n;
  	vector<int> a(n);
  	cin >> a;

  	long long ans=0;

  	for(int i=(n-1);i>=0;i--){

  		// for(int j=i+1;j<n;j++){
  		// 	if(a[j] < a[i]){
  		// 		ans++;        we need to optimise it 
  		// 	}
  		// }
  	}

  	cout << ans <<"\n";
  }
}