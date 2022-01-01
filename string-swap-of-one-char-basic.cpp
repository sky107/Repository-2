//https://www.geeksforgeeks.org/check-if-two-strings-can-be-made-equal-by-swapping-one-character-among-each-other/

#include <bits/stdc++.h>
using namespace std;

signed main(){
  int n;
  cin>>n;
  string a,b;
  cin>>a>>b;
  vector<char>A,B;
  for(int i=0;i<n;++i){
    if(a[i]!=b[i]){
        A.push_back(a[i]);
        B.push_back(b[i]);
    }
  }

  if(A.size()==B.size() and B.size()==0){
    cout<<"YES\n";
  }

  if(A.size()==B.size() and B.size()==2){
    cout<<"YES\n";
  }
  else
    cout<<"False\n";
}