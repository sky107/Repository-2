https://www.geeksforgeeks.org/find-the-maximum-possible-value-of-ai-aj-over-all-pairs-of-i-and-j/

#include <bits/stdc++.h>

using namespace std;


signed main(){
	int n;
	cin>>n;
	vector<int>v(n);
	int first(INT_MIN);
	int second(INT_MIN);

	for(auto &e:v)cin>>e;

		for(int i=0;i<n;i++){

			//when we encounter element greater than v[i]
			if(v[i] > first){
				second=first;
				first=v[i];
			}

			//when we encounter between greatest and second greatest
			else if (v[i] >second and v[i]!=first){
				second=v[i];
			}
		}

		//when all the elements are same
		if(second==INT_MIN){
			cout<<0;
		}
		else
		cout<<second;

}