// //https://www.geeksforgeeks.org/merge-two-sorted-arrays/

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
//   cin>>tst;
//   while(tst--){
//       vector<int>a={2,3,5,7,8,9,9};
//       vector<int>b={1,3,6,4,5,7,8,88};
//       int i(0),j(0);

//       int n=a.size();
//       int m=b.size();

      // O(n+m)
      // O(n+m);



//       vector<int>ans;
//       while(i<n and j<m){

//         if(a[i] <= b[j]){
//           ans.push_back(a[i]);
//           i++;
//         }
//         else{
//           ans.push_back(b[j]);
//           j++;
//         }

//       }

//       while(j<m)
//         ans.push_back(b[j++]);
      

//       while(i<n)
//         ans.push_back(a[i++]);

//       cout << ans ;



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
    //using maps 

   // O(nlongn + mlogm)
  //Space O(n);

    vector<int>a={2,3,5,7,8,9,9};
      vector<int>b={1,3,6,4,5,7,8,88};


      map<int,int>mp;

      for(auto x:a)mp[x]++;

      for(auto x:b)mp[x]++;

        for(auto x:mp){
            while(x.second--)cout << x.first << " ";
        }

  }
}