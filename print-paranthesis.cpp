//https://www.geeksforgeeks.org/print-the-balanced-bracket-expression-using-given-brackets/
#include <bits/stdc++.h>

using namespace std;

signed main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;

	if( (a==d and a!=0) or (a==0 and c==0 and d==0)){
		cout<<"Yes\n";
	}	else
	cout<<"No\n";
}