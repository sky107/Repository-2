/*
Coded by: Siddharth Kumar Yadav
Email:siddharthksk101@gmail.com
*/
#include <iostream>
#include <algorithm>
#include <vector>
#define int long long
using namespace std;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);cout.tie(nullptr);
  int tt=1;
  // cin >> tt;
  while(tt--){
    int n;cin >> n;
    vector<pair<int,int>>a(n);

    for(int i=0;i<n;i++){
      cin >> a[i].first;
      cin >> a[i].second;
    }


    int ans=0;

    for(int i=0;i<(n-2);i++){
      for(int j=i+1;j<(n-1);j++){
        for(int k=j+1;k<n;k++){


          pair<int,int>p1=a[i];
          pair<int,int>p2=a[j];
          pair<int,int>p3=a[k];


          double m1=(double)(p3.second-p2.second)*1.0/(p3.first-p2.first)*1.0;
          double m2=(double)(p2.second-p1.second)*1.0/(p2.first-p1.first)*1.0;

          if((abs(p3.first-p2.first)==0 && abs(p2.first-p1.first)==0))continue;
          if( m1!=m2){ans++;}
          // cout << m1 << " "<< m2 <<"\n";

        }
      }
    }

    cout << ans <<'\n';








  } 
}