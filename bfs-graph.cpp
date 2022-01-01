#include <bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<int,vector<int>>g;
    int n;
    cin>>n;
    int x,y;
    while(n--){
        cin>>x>>y;
        x--,y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    vector<bool>vis;
    queue<int>q;
    q.push(x);
    while(q.empty()==false){
        int s=q.front();
        cout<<s<<" ";
        q.pop();

        for(auto child  :g[s]){
            if(!vis[child]){
                vis[child]=true;
                q.push(child);
            }
        }
    }
    



    return 0;
}