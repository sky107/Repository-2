//Finding distinct eleemnts in set of d and retreriving minimum of all 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long  n,k,d;
        cin>>n>>k>>d;
        vector<long>v(n);
        for(auto &e:v)cin>>e;
        map<long,long>mp;
        for(int i=0;i<d;i++){
            mp[v[i]]=i; //this will assign the last to vertex
        }
       
       long mn(mp.size());

       for(long i=d;i<n;i++){
           long rem=v[i-d];
           long nxt=v[i];
           if(mp[rem]==i-d){mp.erase(rem);}
           mp[nxt]=i;
           mn=(mn<mp.size())?mn:mp.size();
       }
       cout<<mn<<endl;
    }



    return 0;
}