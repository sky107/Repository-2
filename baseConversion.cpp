//https://www.geeksforgeeks.org/given-a-number-n-in-decimal-base-find-the-sum-of-digits-in-any-base-b/?ref=rp

#pragma GCC optimize("-Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include <iost
#include <algorithm>
#include <functional>
#include <cmath>
#include <set>
#include <map>
#include <vector>
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
for(auto e:V)os<<e<<" ";os<<"\n";return os;}

function<void(bool)> ps=[=](bool args){cout << ( args ? "YES\n":"NO\n");};

function<bool(int,int,int,int)> iv=[=](int x,int y,int r,int c)
{return (x>=0 && y>=0 && x<r and y<c);};

function<int(int,int)> pw=[=](int a,int n){
if(n==0) return 1;int p=pw(a,n/2);
return ((n&1)?a*p*p:p*p);};



signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cin.tie(0);int tst(1);
  // cin>>tst;
  while(tst--){
    int N;
    cin >> N;
    int sum=0;
    for(int i=2;i<=(N-1);i++){
      int base=i;
      int n=N;
      while(n>0){
        int rem=n%base;
        sum+=rem;
        n/=base;
      }

    }

    // cout << (sum/(a-2)) <<"\n";
    int n=sum;
    int d=(N-2);
    // cout << "SUM=>" << sum <<"\n";

    for(int i=1000;i>=2;i--)
    {
      if( n%i==0 and d%i==0){
        n/=i;
        d/=i;
      }
    }
    cout << n <<"/" <<d <<"\n";

  }
}