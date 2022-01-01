#include <bits/stdc++.h>
using namespace std;

//Fibonci me recursion se complexity O(2^n)


int dp[100001];

int fib(int n){

  if(n==0 || n==1)return n;
  
  if(dp[n]!=0) // if precalculated
  return dp[n];
  
  return dp[n]=fib(n-1)+fib(n-2);

}
// By this method we have reduced complexity to o(n)

signed main(){
memset(dp,0,sizeof(dp));
int n;
cin>>n;
cout<<fib(n);
}
