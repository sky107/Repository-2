/** Siddharth Kumar Yadav **/
#include <iostream>
#include <algorithm>
using namespace std;

signed main(){
  ios::sync_with_stdio(false);
  cin.tie(0);int t(1);
  // cin>>t;
  while(t--){
      int n;
      cin>>n;

      vector<int>v(n);
      cin>>v[0];
      bool fg=false;
      vector<int>csum(n,v[0]);
      long long sum=v[0];
      for(int i=1;i<n;i++){
          cin>>v[i];
          sum+=v[i];
          csum[i]=csum[i-1]+v[i];
      }

      for(auto x:csum){
        cout<<x<<" ";
      }cout<<endl;

    for(int i=0;i<n;i++){
      if(sum-csum[i]==csum[i])
        {fg=!fg;break;}
    }
    cout<<(fg?"Yes\n":"No\n");
  }
}