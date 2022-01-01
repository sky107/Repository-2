//https://www.geeksforgeeks.org/divide-a-number-into-two-parts/

#include <bits/stdc++.h>

using namespace std;

signed main(){
	string n;
	cin>>n;
	string second="";
	int fg=0;
	//it is given that n has '4' alteast once
	for(int i=0;i<n.size();i++){
		if(n[i]=='4'){
			n[i]='3';
			fg=1;
			second+="1";
		}else if(fg==1){
			second+="0";
		}
	}

	cout<<n<<" "<<second<<endl;

}
