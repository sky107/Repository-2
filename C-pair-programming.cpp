//Solve Pair Programming first

#pragma GCC optimize("-Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include "bits/stdc++.h"

using namespace std;
constexpr int md=(int) 1e9+7;

const int dx[]={-1,0,1,0,1,1,-1,-1};
const int dy[]={0,1,0,-1,1,-1,-1,1};

template<class T> istream& operator >> (istream &is, vector<T>& V){
for(auto &e:V)is >> e;return is;}
template<class T> ostream& operator << (ostream &os, vector<T>& V){
for(auto e:V)os<<e<<" ";return os;}
template <typename Head, typename... Tail>
inline void dbg_out(Head H, Tail... T) { cout << " " << to_string(H)<<"\n";}
#define dbg(...) cout << "[" << #__VA_ARGS__ << "]:", dbg_out(__VA_ARGS__)


signed main(){
  ios::sync_with_stdio(false);
  cin.tie(0);int t(1);
  cin>>t;
  while(t--){
  	int k,n,m;
  	cin>>k>>n>>m;
  	vector<int>a,b,d;
  	int zero=0;
  	for(int i=0;i<n;i++){
  		int x;cin>>x;
  		a.push_back(x);
  		if(x==0){
  			zero++;
  		}else{
  			d.push_back(x);
  		}
  	}
  	for(int i=0;i<m;i++){
  		int x;cin>>x;
  		b.push_back(x);
  		if(x==0){
  			zero++;
  		}else{
  			d.push_back(x);
  		}
  	}

  	vector<int>c;
  	for(int i=0;i<zero;i++){
  		c.push_back(0);
  	}



  	int temp2=k+c.size();

  	bool fg=true;
  	for(auto x:d){
  		if(x>temp2){
  			fg=false;
  			break;
  		}
  	}

  	if(fg){
  		cout<<c<<d<<endl;
  	}else
  	cout<<-1<<endl;





  }
}