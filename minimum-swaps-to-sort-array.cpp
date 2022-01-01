#include <iostream>
#include <algorithm>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef unsigned long long us;

int a[100001];

int main(){ fast
  int n;
  cin>>n;
  pair<int,int>p[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    p[i].first=a[i];
    p[i].second=i;
  }
  sort(p,p+n);
  bool vis[n]={false};
  int ans=0;
  for(int i=0;i<n;i++){
    if(p[i].second==i) //in coreect position
    continue;
    else{
      ans++;
      swap(p[i], p[p[i].second]);
      i--;
    }
    
  }
  cout<<ans<<"\n";  
  return 0;
}