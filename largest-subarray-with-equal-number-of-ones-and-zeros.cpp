//https://www.geeksforgeeks.org/largest-subarray-with-equal-number-of-0s-and-1s/

// // #include "bits/stdc++.h"
// // using namespace std;

// // signed main(){
// //   int n;
// //   cin>>n;
// //   vector<int>v(n);
// //   for(auto&e :v)cin>>e;

// //     int maxi=INT_MIN;

// //     vector<pair<int,int>>w;
// //   for(int i=0;i<n-1;i++){

// //     for(int j=i+1;j<n;j++){
// //       map<int,int>mp;
// //         for(int k=i;k<=j;k++){
// //           mp[v[k]]++;
// //         }
// //         if(mp[0]==mp[1]){
// //           if((j-i)>=maxi)
// //           w.push_back({i,j});
// //         }
// //     }

// //     for(auto x:w){
// //       cout<<x.first<<" "<<x.second<<endl;
// //     }
// //   }
// // }




// // --- brute force ----




// #include "bits/stdc++.h"

// using namespace std;


// signed main(){
//   int n;
//   cin>>n;
//   vector<int>v(n);
//   for(int & x:v)cin>>x;
//   int sum=0;
// int maxsize=-1, startindex;

// for(int i=0;i<n-1;i++){
// sum=(v[0]==0)?-1:1;

// for(int j=i+1;j<n;j++){

//   v[j]==0 ? sum += -1 : sum += 1;

//   if(sum == 0 and maxsize < j-i+1){
//     maxsize=j-i+1;
//     startindex=i;
//   }
// }
// }

// if(maxsize==-1){
//   cout<<"No such subarray exist";
// }
// else{
//   cout<<startindex<< " to "<< startindex+maxsize-1;
// }
// }




// OPTIMISED HASHED MAP
#include "bits/stdc++.h"
using namespace std;

signed main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(int &e :v)cin>>e;

    int max_len=0;
    int last_idx=0;
    int sum=0;

    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
      v[i]=(v[i]==0?-1:1);
    }

    for(int i=0;i<n;i++){
      sum+=v[i];

      if(sum==0){
        last_idx=i;
        max_len=last_idx+1;
      }

      if(mp.find(sum)!=mp.end()){
        if(max_len< i- mp[sum]){
          max_len=i-mp[sum];
          last_idx=i;
        }
      else{
        mp[sum]=i;
      }
}
    }

    cout<<last_idx-max_len+1<<" to "<<last_idx<<endl;
  }


