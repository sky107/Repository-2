/*
** Siddharth Kumar Yadav
** https://www.geeksforgeeks.org/count-knights-that-can-attack-a-given-pawn-in-an-n-n-board/
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

        int n; cin >> n;
        vector <pair<int,int>> a(n);
        for(auto &e :a){
            cin>>e.first;
            cin>>e.second;
        }

        int pawn_x,pawn_y;

        cin >> pawn_x >> pawn_y;

        int ans=0;

        for(int i=0; i < n; i++){

            int x=abs(a[i].first - pawn_x);

            int y=abs(a[i].second - pawn_y);

            if((x==1 and y==2) or (x==2 and y==1)){
                ans++ ;
            }

        }

        cout << ans << "\n";


    }
}
