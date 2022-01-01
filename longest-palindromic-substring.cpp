// #pragma GCC optimize("-Ofast,unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

// #include "bits/stdc++.h"

// using namespace std;
// constexpr int md=(int) 1e9+7;

// const int dx[]={-1,0,1,0,1,1,-1,-1};
// const int dy[]={0,1,0,-1,1,-1,-1,1};

// template<class T> istream& operator >> (istream &is, vector<T>& V){
// for(auto &e:V)is >> e;return is;}
// template<class T> ostream& operator << (ostream &os, vector<T>& V){
// for(auto e:V)os<<e<<" ";os<<"\n";return os;}

// function<void(bool)> ps=[=](bool b){cout << ( b? "YES\n":"NO\n");};


// signed main(){
//   ios_base::sync_with_stdio(false);
//   cin.tie(0);cin.tie(0);int tst(1);
//   // cin>>tst;
//   while(tst--){
//       string s;
//       cin >>s;
//       int n=s.length();

//         int maxi=1;
//         int start=0;

//         for(int i=0;i<n;i++){

//           for(int j=i;j<n;j++){
//             int fg=1;

//             for(int k=0;k<(j-i+1)/2;k++){
//               if(s[i+k]!=s[j-k])
//                 fg=0;
//             }


//             if(fg && (j-i+1) > maxi){
//               start=i;
//               maxi=j-i+1;
//             }
//           }
//         }


//         cout << "Longest Palindrom Substring is : = > ";

//         // O ( n3) 
//         cout << s.substr(start,maxi) <<"\n";

//   }
// }



#pragma GCC optimize("-Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include "bits/stdc++.h"

using namespace std;
constexpr int md=(int) 1e9+7;

const int dx[]={-1,0,1,0,1,1,-1,-1};
const int dy[]={0,1,0,-1,1,-1,-1,1};

template<class T> istream& operator >> (istream &is, vector<T>& V){
for(auto &e:V)is >> e;return is;}
template<class T> ostream& operator << (ostream &os, vector<T>& V){
for(auto e:V)os<<e<<" ";os<<"\n";return os;}

function<void(bool)> ps=[=](bool b){cout << ( b? "YES\n":"NO\n");};


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cin.tie(0);int tst(1);
  cin>>tst;
  while(tst--){

    string s;
    cin >> s;

    int n=s.size();

    bool table[n][n];

    memset(table,0,sizeof(table));

    int maxi=1;

    for(int i=0;i<n;i++){
      table[i][j]=true;
    }

    int start=0;

    for(int i=0;i<n;i++){

      if(s[i]==s[i+1]){
        table[i][i+1]=true;
        start=i;
        maxi=2;
      }
    }


  }
}