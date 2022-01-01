//https://codeforces.com/contest/208/problem/A

#pragma GCC optimize("-Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
 
#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef unsigned long long us;

constexpr int md=(int) 1e9+7;
 
const int dx[]={-1,0,1,0,1,1,-1,-1};
const int dy[]={0,1,0,-1,1,-1,-1,1};
 
class Point {public:int x,y;};

template<class T> istream& operator >> (istream &is, vector<T>& V){
for(auto &e:V)is >> e;return is;}

template<class T> ostream& operator << (ostream &os, vector<T>& V){
for(auto e:V)os<<e<<" ";return os;}




int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);int t(1);
  // cin>>t;
  while(t--){
    char a[202];
    gets(a);
    int flag=0;
    for(int i=0;i<strlen(a);i++){
      if(a[i]=='W' && a[i+1]=='U' and a[i+2]=='B' and i<=strlen(a)-3){
        if(i==0 or flag==2)flag=2;
        else flag=1;
        i+=2;}
        else
        {
          if(flag==1)cout<<" ";
          cout<<a[i];
          flag=0;
        }
      
    }
  }
  return 0;
}