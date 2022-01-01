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
    int k,a,b;
    cin >> k;
    cin >>  a >> b;
    // from base k to base 10
    string s=to_string(a);
    string t=to_string(b);
    int n=s.size(),m=t.size();
    int power=1;
    long long a1=0,a2=0;
    int ans=0;
    for(int i=n-1;i>=0;i--){

      a1+= (int)(s[i]-'0')*power;
      power*=k;
    }
    power=1;

     for(int i=m-1;i>=0;i--){

      a2+= (int)(t[i]-'0')*power;
      power*=k;
    }

    cout<< a1*1ll*a2 <<'\n';


  }
}