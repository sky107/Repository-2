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
        int x,y,m,n,z,j,count=0,i;
        int a[100]={};
        cin >> n;
        cin >> x >> y;
        for(int i=1;i<n;i++){
            cin >> m >> z;
            for(int j=m;j<=z-1;j++){
                a[j]=1;
            }
        }

        for(int i=x;i<=y-1;i++){
            if(a[i]==0)count++;
        }

        cout << count;
    }
}
