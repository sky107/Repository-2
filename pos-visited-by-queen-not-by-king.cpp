/*
** Siddharth Kumar Yadav
** https://www.geeksforgeeks.org/count-positions-in-a-chessboard-that-can-be-visited-by-the-queen-which-are-not-visited-by-the-king/
*/

#include "bits/stdc++.h"

using namespace std;

const int mx=100001;
const int md=(int)10e9+7;

vector<int> dx_knight = { 2, 1, -1, -2, -2, -1, 1, 2 };
vector<int> dy_knight = { 1, 2, 2, 1, -1, -2, -2, -1 };

int row=8;
int col=8;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); int t(1);
    // cin >> t;
    while(t--){
        int n , m ; 
        cin >> n >> m;
        int x,y;
        cin >> x >> y;

        // chessboard is 1 based
        
        int ans = 0;

        if( ( row - x) > 0 and ( col -y ) > 0 )
            ans += min ( row-x, col - y);

        if ( (y-1) > 0 and (x-1) > 0 )
            ans += min(y-1,x-1);

        if((x-1)>0 and (col-y)>0)
            ans += min((x-1),(col-y));

        if((row-x)>0 and (y-1)>0)
            ans += min((row-x),(y-1));

        if(row-x >0 and (y-1)>0)
            ans+=min((row-x),(y-1));

        ans += (row-1)+(col-1);




        int king_moves=0;


        if( (x+1) <= row){
            king_moves+=1;
        }

        if(x-1>0){
            king_moves+=1; 
        }

        if(y+1 <=col)
            king_moves+=1;

        if(y-1>0)
            king_moves+=1;

        if(x+1 <=row and y+1 <=col)
            king_moves+=1;

        if(x+1 <=row and y-1 >0)
            king_moves+=1;

        if(x-1>0 and y-1>0)
            king_moves+=1;

        if(x-1>0 and y+1 <=col)
            king_moves+=1;

        cout << ans- king_moves;

    }
}
