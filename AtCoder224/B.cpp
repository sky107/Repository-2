/*
Coded by: Siddharth Kumar Yadav
Email:siddharthksk101@gmail.com
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);cout.tie(nullptr);
  int tt;
  // cin >> tt;
  while(tt--){
     int n,m;
    cin >> n >> m;
    int A[n+1][m+1];
    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        cin >> A[i][j];
      }
    }


   
    for(int a=1;a<=(n-1);a++){
      for(int b=a+1;b<=n;b++){
          for(int c=1;c<=(m-1);c++){
            for(int d=c+1;d<=m;d++){
                  int left=A[a][c]+A[b][d];
                  int right=A[b][c]+A[a][d];

                  if(left > right){

                    cout <<"No\n";
                    exit(0);
                  }
                  // cnt++;
            }
          }
      }
    }

    cout<<"Yes\n";
  }
}