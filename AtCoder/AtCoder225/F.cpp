#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <cmath>

using namespace std;

signed main(){
  ios_base::sync_with_stdio(false);int tt(1);
  cin.tie(nullptr);cout.tie(nullptr);
  // cin >> tt;
  while(tt--){
  	int n,k;
  	cin >> n >> k;
  	string a[n];
  	for(int i=0;i<n;i++){
  		cin >> a[i];
  	}
  	sort(a,a+n);
  	for(int i=0;i<n;i++){
  		cout << a[i] <<"\n";
  	}
  }
}	