    //https://atcoder.jp/contests/abc212/editorial/2369
    
    #pragma GCC optimize("-Ofast,unroll-loops")
    #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
    
    #include "bits/stdc++.h"

    using namespace std;
    typedef long long ll;
    typedef unsigned long long us;

    constexpr int md=(int) 1e9+7;
    
    const int dx[]={-1,0,1,0,1,1,-1,-1};
    const int dy[]={0,1,0,-1,1,-1,-1,1};
    
    class Point {public:int x,y;};

    template<class T> istream& operator >> (istream &is, vector<T>& V){
    for(auto &e:V)is >> e;return is;}

    template<class T> ostream& operator << (ostream &os, vector<T>& V){
    for(auto e:V)os<<e<<" ";return os;}
    
    int a[100001],b[100001];

    int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);int t(1);
    //   cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<m;i++)cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        int x=0;
        int y=0;
        while(x<n and y<m){
            ans=min(ans,abs(a[x]-b[y]));
            if(a[x]>b[y])y++;
            else x++;
        }
        cout<<ans<<"\n";
    }
    return 0;
    }