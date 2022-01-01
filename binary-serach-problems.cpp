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


int a[100001]={0};
int l=0;
int r=0;
int n;
void countPairs(){
    
    sort(a,a+n);
    int ans=0;
    for(int i=0;i<n;i++){
        auto itr1=upper_bound(a+i+1,a+n,r/a[i])-a; // ele is less than or equal to r/a[i];
        auto itr2=lower_bound(a+i+1,a+n,l/a[i])-a;// ele is greater than of equal to l/a[i];
        ans+=itr1-itr2; 
    }
    cout<<ans<<endl;
}
int main(){
//   cout<<setprecision(9)<<fixed;  
  ios::sync_with_stdio(false);
  cin.tie(0);int t(1);
  cin>>t;
  while(t--){
      cin>>n;
      cin>>l>>r;
    for(int i=0;i<n;i++)cin>>a[i];
    countPairs();
  }
  return 0;
}