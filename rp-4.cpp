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
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> a(n);
        for(auto &e : a) cin >> e;
            sort(a.begin(),a.end(),greater<int>());
        int j=0;
        while(a[j]>=j+1 and j<n){
            j++;
        }

        cout << min(a[j-1],j) << "\n";
    }

}
