#pragma GCC optimize("-Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include <iostream>
#include <algorithm>
#include <functional>
#include <cmath>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <unordered_map>

// #include "bits/stdc++.h"
// #define int  long  long

using namespace std;
constexpr int md=(int) 1e9+7;
typedef vector<int> vi;
typedef priority_queue<int> PQ;
typedef priority_queue<int,vector<int>,greater<int>> PQmin;

const int dx[]={-1,0,1,0,1,1,-1,-1};
const int dy[]={0,1,0,-1,1,-1,-1,1};

template<class T> istream& operator >> (istream &is, vector<T>& V){
for(auto &e:V)is >> e;return is;}
template<class T> ostream& operator << (ostream &os, vector<T>& V){
for(auto e:V)os<<e<<" ";os<<"\n";return os;}

function<void(bool)> ps=[=](bool args){cout << ( args ? "YES\n":"NO\n");};
function<bool(int,int,int,int)> iv=[=](int x,int y,int r,int c)
{return (x>=0 && y>=0 && x<r and y<c);};


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cin.tie(0);int tst(1);
  cin>>tst;
  while(tst--){
        int n;
        cin >> n;
        vector<pair<int,int>>a(n);
        for(auto &e:a){
            cin >> e.first;
            cin >> e.second;
        }

        sort(a.begin(),a.end(),[&](const pair<int,int>a,const pair<int,int>b){
           if(  a.first <= b.first){
            if(a.first==b.first){
                if(a.second < b.second){
                    return true;
                }else
                return false;
            }
            return true;
           }
           return false;
        });

        string ans;

        bool f=true;
        for(int i=0;i<n-1;i++){


            for(int j=i+1;j<n;j++){

                if(a[j].second < a[i].second){

                    cout <<"NO\n";
                    f=false;break;
                }

            }
            if(f==false){
break;
            }
        }

        if(f==true){


        bool fright=true;

        for(int i=0;i<a.size();i++){
            pair<int,int>x=a[i];

            if(i==0)
            {
                    if( x.first==0 && x.second >0){
                        fright=false;

                    int ty=x.second;
                    while(ty--)ans.push_back('U');
                    }else{
                        int tx=a[i].first;
                        int ty=a[i].second;
                        while(tx--)ans.push_back('R');
                while(ty--)ans.push_back('U');
                    }

                continue;
            }

            if(x.second == a[i-1].second){
                fright=false;
            }

            else if( x.first==a[i-1].first){
                fright=true;
            }else{
                fright=true;
            }




            if(fright){

                int tx=abs(x.first-a[i-1].first);
                int ty=abs(x.second-a[i-1].second);
                while(tx--)ans.push_back('R');
                while(ty--)ans.push_back('U');

            }else{


                 int tx=abs(x.first-a[i-1].first);
                int ty=abs(x.second-a[i-1].second);
                while(ty--)ans.push_back('U');
                while(tx--)ans.push_back('R');
            }

          












        }
        cout <<"YES\n";
        cout << ans <<"\n";

}

  }
}