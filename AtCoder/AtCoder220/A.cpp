#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <cmath>

#define int unsigned long long
using namespace std;

signed main(){
  ios_base::sync_with_stdio(false);int tt(1);
  cin.tie(nullptr);cout.tie(nullptr);
  // cin >> tt;
  while(tt--){
    int n;
    cin >> n;
    int sum=0;
    int a[n];
   vector<int>csum(n,0);
    for(int i=0;i<n;i++){
      int u;cin >> u;
      a[i]=u;
      sum+=u;
      if(i==0)csum[i]=a[i];
      else
        csum[i]=csum[i-1]+a[i];
    }
    int x;
    cin >>x;
    int k=x/sum;
    int sumb=k*sum;

    int ans=k*n;
    for(auto val:a){
      sumb+=val;
      ans++;
      if(sumb >x ){
        cout<< ans <<'\n';
        exit(0);
      }
    }
    

    

  }
}