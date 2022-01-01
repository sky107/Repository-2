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

typedef vector<int> vi;
signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cin.tie(0);int tst(1);
  cin>>tst;
  while(tst--){
    int n;
    cin >> n;
    vi a(n);
    cin >> a;

  function<int()> sk=[&](){
  int i=0,j=n-1;
    while(i<=j){

      int mid=(i+j)>>1;

      if(mid >0 and mid < (n-1)){

        if(a[mid] > a[mid-1]  && a[mid] > a[mid+1]){
          return mid;
        }

        else if (a[mid-1] > a[mid])
          j=mid-1;

        else
          i=mid+1;
      }  //sab baad me lagana hai agar nhi milta upar

      else if (mid ==0){

        if(a[0] > a[1]){
          return 0;
        }
        return 1;
      }

      else if (mid==(n-1)){
        if(a[n-1] > a[n-2]){
          return n-1;
        }
        else
          return n-2;
      }




    }
    return -1;
  };

  cout  << sk() <<endl;

  }
}

// Once we find the peak element we will proceed in each sorted part 
// with separate functions of binary search to get the element of search
//https://www.youtube.com/watch?v=OINnBJTRrMU