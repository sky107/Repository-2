/** Siddharth Kumar Yadav **/
#include <iostream>
#include <vector>

using namespace std;

signed main(){
  ios::sync_with_stdio(false);
  cin.tie(0);int t(1);
  // cin>>t;
  while(t--){
    string s;
    cin >> s;

    int n=s.length();
    int i=n;

vector<int>caps;
int cnt=0;
    for(int i=0;i<n;i++){
        if(isupper(s[i]))
        caps.push_back(i);
    }
    while(i>0){
            i--;
        if(isupper(s[i]))break;
    }

    for(auto j:caps){
        if ( j < i)cnt++;
    }

   cout << min(i-cnt , (int)caps.size()) <<endl;


  }
}