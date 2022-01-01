//Siddharth Kumar Yadav
#include <bits/stdc++.h>
using namespace std;

signed main(){
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  vector<string>f(n);
  vector<pair<int,int>>p;
  for(int i=0;i<n;i++){
    cin>>f[i];
    for(int j=0;j<n;j++){
      if(f[i][j]=='*'){
        p.push_back({i,j});
      }
    }
  }


  p.push_back(p[0]);
  p.push_back(p[1]);

  if(p[0].first==p[1].first){
    p[2].first=(p[2].first+1)%n; //bas hota hai
    p[3].first=(p[3].first+1)%n;
  }else if(p[0].second==p[1].second){
    p[2].second=(p[2].second+1)%n;
    p[3].second=(p[3].second+1)%n;
  }else{
    swap(p[2].first,p[3].first); //comon sense
  }

  f[p[2].first][p[2].second]='*';
  f[p[3].first][p[3].second]='*';
  for(int i=0;i<n;i++){
    cout<<f[i]<<endl;
  }

}
}
