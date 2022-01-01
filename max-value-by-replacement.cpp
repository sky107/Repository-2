/** Siddharth Kumar Yadav **/
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

signed main(){
  ios::sync_with_stdio(false);
  cin.tie(0);int t(1);
  // cin>>t;
  while(t--){
  	string s1,s2;
  	cin>>s1>>s2;
  	stack<char>s;
  	sort(s2.begin(),s2.end());

  	for(auto x:s2){
  		s.push(x);
  	}
    
  	for(int i=0;i<s1.size();i++){
  		char x=s1[i];
  		if(((int)s1[i] < (int) s.top() )and s.empty()==false)
  			{s1[i]=s.top();s.pop();}
  	}

  	cout<<s1<<endl;
  }
}