#include <bits/stdc++.h>
using namespace std;

//Top down approach
//Probelm: given n, reduce to   1 if your are allowed to perform few operations n to (n-1) (no condition), n/=2 if (n%2==0), if(n%3==0) n/3;

int minSteps(int n,int dp[]){
    //Base Case
    if(n==1){
        return 0;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    //Recursive Case
    int op1,op2,op3;
    op1=op2=op3=INT_MAX;
    if(n%3==0){
        op1=minSteps(n/3,dp)+1;
    }
    if(n%2==0){
        op2=minSteps(n/2,dp)+1;
    }
    op3=minSteps(n-1,dp)+1;
    int ans=min({op1,op2,op3});
    return dp[n]=ans;
}

int main() {
    int n;
    cin>>n;
    int dp[100]={0};
    cout<<minSteps(n,dp)<<"\n";
    return 0;
}
