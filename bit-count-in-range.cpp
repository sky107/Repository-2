#include <bits/stdc++.h>
using namespace std;

int dp[10001];

int kernighan(int n){
  int cnt=0;
  while(n){
int rsbm=n&(-n);
cnt++;
n-=rsbm;
  }
  return cnt;
}

signed main(){


cout<<bitset<60>(30);
cout<<log2(30&(-30))+1;
  int t;
  cin>>t;
  dp[0]=0;
    for(int i=1;i<10001;i++){
      dp[i]=dp[i-1]+kernighan(i);
    }
  while(t--){
    int a,b;
    cin>>a>>b;
    cout<<dp[b]-dp[a-1]<<endl;
  }
}
