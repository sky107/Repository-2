//https://www.geeksforgeeks.org/maximum-number-of-candies-that-can-be-bought/
#include <bits/stdc++.h>

using namespace std;


signed main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int &e:v)cin>>e;
		int counter=v[n-1];
	int fg=true;
	long long ans=counter;
		for(int i=n-2;i>=0;i--){
			if(v[i] < counter)
			ans+=v[i];
			else
			{ans+=(counter-1);

				}
				if(fg)
				counter=v[i];

				if(counter==1){
					counter=1;
					fg=false;
				}
		}

		cout<<ans<<endl;
}