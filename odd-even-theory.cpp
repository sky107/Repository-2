//Adjacency Hatred
#pragma GCC optimize("-Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include <iostream>
#include <algorithm>
#include <functional>
#include <cmath>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <unordered_map>

// #include "bits/stdc++.h"
// #define int  long  long

using namespace std;
constexpr int md=(int) 1e9+7;
typedef vector<int> vi;
typedef priority_queue<int> PQ;
typedef priority_queue<int,vector<int>,greater<int>> PQmin;

const int dx[]={-1,0,1,0,1,1,-1,-1};
const int dy[]={0,1,0,-1,1,-1,-1,1};

template<class T> istream& operator >> (istream &is, vector<T>& V){
for(auto &e:V)is >> e;return is;}
template<class T> ostream& operator << (ostream &os, vector<T>& V){
for(auto e:V)os<<e<<" ";return os;}

function<void(bool)> ps=[=](bool args){cout << ( args ? "YES\n":"NO\n");};
function<bool(int,int,int,int)> iv=[=](int x,int y,int r,int c)
{return (x>=0 && y>=0 && x<r and y<c);};


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cin.tie(0);int tst(1);
  cin>>tst;
  while(tst--){
    // odd +_ odd =even
    // even +_ even =even
    // odd +_ even =odd
    // alteast one odd and one even
    // case 1 : all even 
    // case 2: all odd
    // case 3 : both odd and even

    int n;
    cin >> n;

    vector<int> odd,even;
    int x;

    for(int i=0;i<n;i++){

      cin>>x ;

      if(x&1)
      odd.push_back(x);
      else
      even.push_back(x);

    }
    if(odd.size()==0 or even.size()==0){
      cout << -1 <<"\n";
      continue;
    }

    cout << odd << even ;
    cout <<"\n";

  }
}