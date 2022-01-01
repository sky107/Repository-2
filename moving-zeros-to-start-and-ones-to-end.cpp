#include <bits/stdc++.h>
using namespace std;
int main() {
   int a[]={1,12,32,4,6,7,0,0,1,0};
   int n=sizeof(a)/sizeof(int);
   int j=0;
   for(int i=0;i<n;i++){
       if(a[i]!=1){
           a[j++]=a[i];
       }
   }
   int las_pos_of_one=j;

   while(j<n)a[j++]=1;
    
    int lastNonOne=0;
    
    for(int i=(n-1);i>=0;i--){

        if(a[i]==1)
        continue;

        if(!lastNonOne){
            lastNonOne=i;
            continue;
        }
        if(a[i]!=0){
            a[lastNonOne--]=a[i];
            continue;
        }

      
    }

      while(lastNonOne>=0){
            a[lastNonOne--]=0;
        }
   for(auto x:a)cout<<x<<" ";
   return 0;
}
