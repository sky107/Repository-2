/* Siddharth Kumar Yadav
Subsequences without recursion
*/

using namespace std;
#include "bits/stdc++.h"

signed main(){

	string s;
	cin>>s;
	const int n=s.length();
	for(int i=0;i<(1<<n);i++){
		bitset<60>b(i);
		int j=0;
		while(j<n){
			if(b[j]){
				cout<<s[j];
			}
			j++;
		}
		cout<<endl;
	}
}