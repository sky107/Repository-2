 //https://www.geeksforgeeks.org/find-if-it-is-possible-to-make-a-binary-string-which-contanins-given-number-of-0-1-01-and-10-as-sub-sequences/

#include <bits/stdc++.h>

using namespace std;


signed main(){
	int zero=3,ones=2;
	int zeroOnes=4,oneZeros=2;
	bool ok= zero*ones==(zeroOnes+oneZeros);
	cout<<(ok?"Yes\n":"No\n");
}