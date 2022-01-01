#include <bits/stdc++.h>
using namespace std;
int fx(string str){
  int p=31,m=1e9+7;
  int p_powr=1;
  int hash=0;
  
  for(int i=0;i<str.size();i++){
    hash+=(p_powr*(str[i]-'a'+1)); //we should no use 0 as 'aaaa' and 'a' hash values will become same
    p_powr*=p;
    p_powr%=m;
    hash%=m;
  }
  return hash;
}
signed main(){
string str;
cin>>str;
cout<<fx(str);
}
