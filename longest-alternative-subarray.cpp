//https://www.geeksforgeeks.org/length-of-the-longest-alternating-subarray/
#include <bits/stdc++.h>

using namespace std;

signed main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &e:v)cin>>e;
	int longest=-1;
	int cnt=1;
	for(int i=1;i<n;i++){
		if(((v[i]*v[i-1])<0))
		{cnt++;
		longest=max(longest,cnt);}
		else{
			cnt=1;
		}
	}
	cout<<longest<<endl;
}

// if binary string
// 	for(int i=1;i<n;i++){
// 		if(v[i]!=v[i-1]){
// 			cnt++;
// 			longest=max(longest,cnt);
// 		}else
// 		cnt=1;
// 	}