/*
** Siddharth Kumar Yadav
*/

#include "bits/stdc++.h"

using namespace std;

const int mx=100001;
const int md=(int)10e9+7;


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); int t(1);
    // cin >> t;
    while(t--){     
    int n, m;
    cin >> n >> m;
    char s[101][101];
    int i_min=n,i_max=-1,j_min=m,j_max=-1;


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>s[i][j];

            if(s[i][j]=='*'){

                i_min=min(i_min,i);
                i_max=max(i,i_max);
                j_min=min(j_min,j);
                j_max=max(j_max,j);

            }

        }
    }
    // cout<<"\n";

    for(int i=i_min;i<=i_max;i++){

        for(int j=j_min;j<=j_max;j++){

            cout<<s[i][j];
        }

        cout<<"\n";
    }


  }
}
