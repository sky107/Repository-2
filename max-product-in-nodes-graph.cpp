//https://www.geeksforgeeks.org/maximum-product-of-a-pair-of-nodes-from-largest-connected-component-in-a-graph/
#include <bits/stdc++.h>
using namespace std;
int max, sMax;
int cnt = 0;
bool vis[100001] = {0};
int main()
{
    int m;
    cin >> m;
    vector<int> w = {1, 1, 1, 1, 2, 2, 2}; //weights of ith node
    vector<pair<int, int>> Edges = {{1, 2},
                                    {2, 5},
                                    {3, 5},
                                    {4, 5}};

    unordered_map<int, vector<pair<int, int>>> g;
    for (int i = 0; i < m; i++)
        g[w[i]].push_back(Edges[i]);

    int res=0;
    for(auto i:g){
        vector<vector<int> > adj(9+1);
        vector<pair<int,int>>v=i.second;
        for(int j=0;j<v.size();j++){
            int u=v[j].first;
            int w=v[j].second;

            adj[u].push_back(w);
            adj[w].push_back(u);
        }
        vector<bool>vi(9+1,0);
        //To be completed

    }
    return 0;
}