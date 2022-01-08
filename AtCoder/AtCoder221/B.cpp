#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <cmath>

using namespace std;

signed main(){
  ios_base::sync_with_stdio(false);int tt(1);
  cin.tie(nullptr);cout.tie(nullptr);
  // cin >> tt;
  while(tt--){
    string s,t;
    cin >> s >> t;
    int n=s.size();
    string ans="No";
    for(int i=0;i<n;i++){
      if( s[i]!=t[i]){
        if( 0 < i){
          swap(s[i-1],s[i]);
          if( s==t){
            ans="Yes";
          }
          swap(s[i-1],s[i]);
        }

        if( (i+1) <n){
          swap(s[i],s[i+1]);
          if(s==t)ans="Yes";
          swap(s[i],s[i+1]);
        }
        break;
      }
    }

    cout << ans <<'\n';
  }
}