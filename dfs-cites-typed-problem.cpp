//https://atcoder.jp/contests/abc213/tasks/abc213_d

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef unsigned long long us;

int a[100001];

int main(){ fast
    int n;
    cin>>n;
    map<int,set<int>>g;
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        g[a].insert(b);
        g[b].insert(a);
        int r=0;
        vector<bool>u(n);
        function<void(int)>dfs=[&](int v){
            u[v]=true;
            cout<<v+1<<" ";
            for(auto w:g[v]){
                if(!u[w])
                dfs(w);
                cout<<v+1<<" ";
            }
        };
        dfs(r);
        cout<<"\n";
    }
  return 0;
}