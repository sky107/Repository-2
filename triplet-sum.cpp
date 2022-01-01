#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &e:v)cin>>e;
    sort(v.begin(),v.end());
    int a,b,c;
    cin>>a>>b>>c;
    // Brute force O(n2);
    // two pointer approach
    int i=0,j=n-1;
    bool fg=false;
    while(i<j){
        if(v[i]+v[j]==c){
            if(v[i]==a or v[j]==a)
          {  fg=true;}
          break;
        }else if(( v[i]+v[j] )< c){
            i++;
        }else
            j--;
    }

    cout<<(fg?"Yes\n":"No\n");


    

    return 0;
}