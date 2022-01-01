/*
** Siddharth Kumar Yadav
** https://www.geeksforgeeks.org/check-if-a-queen-can-attack-a-given-cell-on-chessboard/
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
            int x,y;
            cin >> x >> y;

            int q_x, q_y;
            cin >> q_x >> q_y;

            if(x==q_x){
                cout<<"YES\n";
            }

            else if(y==q_y){
                cout << "YES\n";
            }

            else if ( abs( y - q_y) == abs ( x- q_x))
                cout << "YES\n";

            else
                cout<<"NO \n ";
    }
}
