//https://www.geeksforgeeks.org/minimum-increment-decrement-to-make-array-elements-equal/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        int tt(1);
        // cin>>tt;
        while(tt--){
            int n;
            cin>>n;
            vector<int>v(n);
            for(int &e:v)cin>>e;
            sort(v.begin(),v.end());
            int k=v[n/2];
            int cost=0;
            for(int i=0;i<n;i++){
                cost+=abs(v[i]-k);
            }

            if(n%2==0){
                int tempcost=0;
                k=v[(n/2)-1];
                for(int i=0;i<n;i++){
                    tempcost+=abs(v[i]-k);
                }
                cost=min(cost,tempcost);
            }
        cout<<cost<<endl;

        }   
    return 0;
}
