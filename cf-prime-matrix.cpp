#pragma GCC optimize("-Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include <iostream>
#include <algorithm>
#include <functional>
#include <bitset>
#include <climits>
#include <cassert>
#include <numeric>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <vector>
#include <stack>
#include <queue>

// #include "bits/stdc++.h"
// #define int  long  long

using namespace std;

typedef vector<int> vi;
typedef priority_queue<int> PQ;
typedef priority_queue<int,vector<int>,greater<int>> PQmin;

constexpr int md=(int) 1e9+7;
const int dx[]={-1,0,1,0,1,1,-1,-1};
const int dy[]={0,1,0,-1,1,-1,-1,1};

template<class T> istream& operator >> (istream &is, vector<T>& V){
for(auto &e:V)is >> e;return is;}
template<class T> ostream& operator << (ostream &os, vector<T>& V){
for(auto e:V)os<<e<<" ";os<<"\n";return os;}

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) {
return os << '(' << p.first << ", " << p.second << ')'; }

template<typename A,typename B> ostream& operator << (ostream &os, map<A,B> M)
{for(auto e:M)os<<e.first<<" => "<<e.second<<"\n";return os;}

function<void(bool)> ps=[=](bool args){cout << ( args ? "YES\n":"NO\n");};
function<bool(int,int,int,int)> iv=[=](int x,int y,int r,int c)
{return (x>=0 && y>=0 && x<r and y<c);};

long long power(int a,int n){long long ans=1;while(n>0){
int last_bit=(n&1);if(last_bit){ ans=ans*a;}
a*=a; n=n>>1;} return ans;}


 long long ar[100001]={};
bool is_prime(long long n){
    // if(n==1) return false;
    long long k=sqrt(n);
    for(long long i=2;i<=k;i++){

        if(n%i==0)
            return false;
    }

    return true;
}

long long fn(long long n){
    long long i=n;
    if(ar[n]!=0) return ar[n];
    while(!is_prime(i))i++;
    ar[n]=i-n;
    return ar[n];
}


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cin.tie(0);int tst(1);
  // cin>>tst;
  while(tst--){
    long long n,m,i,j,temp,count;
    ar[1]=1;
    cin >> n >> m;
    long long a[n][m];
    for(i=0;i<n;i++){
        for( j=0;j<m;j++){
            cin >> a[i][j];
            temp=fn(a[i][j]);
            a[i][j]=temp;
        }
    }
    temp=10e8;
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<m;j++){
            count+=a[i][j];
        }
        temp=min(temp,count);
    }
    for(i=0;i<m;i++){
        count=0;
        for(j=0;j<n;j++){
            count+=a[j][i];
        }
        temp=min(temp,count);
    }

    cout << temp;


  }
}