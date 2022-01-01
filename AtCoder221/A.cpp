#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <cmath>

#define int long long 
using namespace std;


signed main(){
  ios_base::sync_with_stdio(false);int tt(1);
  cin.tie(nullptr);cout.tie(nullptr);
  // cin >> tt;
  while(tt--){
    int a,b ;
    cin >> a >> b;
    int s=a-b;
    int ans=1;
    while(s--){
      ans*=32;
    }
    cout << ans <<'\n';

      }
}