// har question dp ka nhi hota

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
for(auto e:V)os<<e<<" ";os<<"\n";return os;}

function<void(bool)> ps=[=](bool args){cout << ( args ? "YES\n":"NO\n");};
function<bool(int,int,int,int)> iv=[=](int x,int y,int r,int c)
{return (x>=0 && y>=0 && x<r and y<c);};


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cin.tie(0);int tst(1);
  cin>>tst;
  while(tst--){
    int n,k;
    cin >> n >>k;
    string s;
    cin >> s;

    int alt=0;
    int ans=0;
    for(int i=1;i<n;i++){
      if(s[i]!=s[i-1])alt++;
    }

    if(alt>=k){

      if(k%2==0){

        if(s[0]=='1'){
          for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
              cout << i+1 <<"\n";
              break;
            }
          }
        }else{

           for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
              cout << i+1 <<"\n";
              break;
            }
          }
        }


      }else{

        if(s[0]=='1'){
           for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
              cout << i+1 <<"\n";
              break;
            }
          }

        }else{


           for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
              cout << i+1 <<"\n";
              break;
            }
          }

        }

      }

    }else{
      cout << -1 <<"\n";
    }


  }
}




