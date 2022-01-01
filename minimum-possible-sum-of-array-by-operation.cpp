//https://www.geeksforgeeks.org/minimum-possible-sum-of-array-elements-after-performing-the-given-operation/
//Note perform the operation once
#include <bits/stdc++.h>
using namespace std;
signed main(){
	int n,x;
	cin>>n>>x;
	vector<int>v(n);
	for(int &e:v)cin>>e;

	int sum=0;
	int ld=-1,minimum=v[0];

	for(int i=0;i<n;i++){
		sum+=v[i];

		if(v[i]%x==0 and ld< v[i]){
			ld=v[i];
		}
		if(v[i]<minimum){
			minimum=v[i];
		}
	}


	if(ld==-1){
		cout<<sum<<endl;
	}else{
		const int temp=sum-minimum-ld+(x*minimum)+(ld/x);
		cout<<min(sum,temp)<<endl;
	}



}