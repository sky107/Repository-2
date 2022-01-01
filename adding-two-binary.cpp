#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
       string a="1101";
       string b="100";
       string result="";
       int s=0;
       int i=a.size()-1;
       int j=b.size()-1;

       while(i>=0 or j>=0 or s==1){ //s==1 implies we will handle last case when we have carry
           s+= (i>=0) ? a[i]-'0':0;
           s+= (j>=0) ? b[j]-'0':0;
           result=char(s%2 + '0')+ result; // add each infront of string 
           s/=2; // 1+1 => carry equals 1 
           i--;j--;
       }
       cout<<result<<"\n";
    return 0;
}