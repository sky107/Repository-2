//Siddharht Kumar Yadav
#include <bits/stdc++.h>
using namespace std;
int fast_power(int a,int n){
  if(n==0) return 1;
  int smaller_ans=fast_power(a,n/2);
  smaller_ans*=smaller_ans;
  if(n&1)return a*smaller_ans;
  return smaller_ans;
}

// O(n+n/2+n/4+n/8+....) Log(n) unlike O(n);

signed main(){
int a,n;
  cin>>a>>n;
  cout<<fast_power(a,n)<<endl;
}
