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
        string s;
        cin >> s;
        map <char,int> mp;
        for(auto x:s){
            mp[x]++;
        }
        long long ans=0;
        int nn=3;
        bool fg=false;
        while(mp['n']>=nn and mp['i']>=1 and mp['e']>=3 and mp['t']>=1){
            mp['n']-=nn;
            mp['i']-=1;
            mp['e']-=3;
            mp['t']-=1;
            if(fg==false){
                nn=2;
                fg=true;
            }
            ans++;
        }

        cout<< ans <<" \n";

    }
}
