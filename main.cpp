/**
 * Creator: Siddharth Kumar Yadav
**/

#pragma GCC optimize("-Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include <iostream>
#include <algorithm>
#include <functional>
#include <bitset>
#include <climits>
#include <cassert>
#include <numeric>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <vector>
#include <stack>
#include <queue>

// #include "bits/stdc++.h"
// #define int  long  long

using namespace std;

typedef vector<int> vi;
typedef priority_queue<int> PQ;
typedef priority_queue<int,vector<int>,greater<int>> PQmin;

constexpr int md = (int) 1e9 + 7;
const int dx[] = {-1, 0, 1, 0, 1, 1, -1, -1};
const int dy[] = {0, 1, 0, -1, 1, -1, -1, 1};
vi dx_knight = { 2, 1, -1, -2, -2, -1, 1, 2 };
vi dy_knight = { 1, 2, 2, 1, -1, -2, -2, -1 };

template<class T> istream& operator >> (istream &is, vector<T>& V){
for(auto &e:V)is >> e;return is;}
template<class T> ostream& operator << (ostream &os, vector<T>& V){
for(auto e:V)os<<e<<" ";os<<"\n";return os;}

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) {
return os << '(' << p.first << ", " << p.second << ')'; }

template<typename A,typename B> ostream& operator << (ostream &os, map<A,B> M)
{for(auto e:M)os<<e.first<<" => "<<e.second<<"\n";return os;}

template<typename B>void db(string s,B b){cerr << s <<" :=> "<< b <<'\n';}

function<void(bool)> ps=[=](bool args){cout << ( args ? "YES\n":"NO\n");};
function<bool(int,int,int,int)> iv=[=](int x,int y,int r,int c)
{return (x>=0 && y>=0 && x<r and y<c);};

long long power(int a,int n){long long ans=1;while(n>0){
int last_bit=(n&1);if(last_bit){ ans=ans*a;}
a*=a; n=n>>1;} return ans;}


void print(int a[3][3],int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] <<" ";
        }
        cout <<'\n';
    }
}

void print2(int a[3][3],int n){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << a[j][i] <<" ";
        }
        cout <<'\n';
    }
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);int tst(1);
  cin>>tst;
  while(tst--){
    int a[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];
        }
    }

    int n=3;
    print(a,n);
    cout <<"------------------\n";
    print2(a,n);





  }
}