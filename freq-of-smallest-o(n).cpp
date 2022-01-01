/** Siddharth Kumar Yadav **/
//https://www.geeksforgeeks.org/find-frequency-of-smallest-value-in-an-array/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

signed main(){
  ios::sync_with_stdio(false);
  cin.tie(0);int t(1);
  // cin>>t;
  while(t--){
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto &e:a)cin >> e;
        
        int mini=INT_MAX;
        int freq=0;
        for(int i=0;i<n;i++){

            if(a[i] < mini){
                mini=a[i];
                freq=1;
            }else if(a[i]==mini){
                freq++;
            }
        }

        cout << freq <<"\n";
  }
}