/*
** Siddharth Kumar Yadav
*/

#include "bits/stdc++.h"

using namespace std;

const int mx=100001;
const int md=(int)10e9+7;

vector<int> dx_knight = { 2, 1, -1, -2, -2, -1, 1, 2 };
vector<int> dy_knight = { 1, 2, 2, 1, -1, -2, -2, -1 };



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); int t(1);
    // cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	function <void(int x)> solve = [&](const int x){
    		cout << n;
    	};
    	solve(1);
    }

}
