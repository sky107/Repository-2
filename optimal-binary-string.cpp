//For Given n , output string with none of consecutive ones
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef unsigned long long us;
//fn denotes valid stirng
//fn-1 will give valid stirng of length n-1

int possible(int n){
    //fn=fn-1+fn-2
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else if(n==2)
    return 2;
    else return possible(n-2)+possible(n-1);
}
int a[100001];

int main(){ fast
    int n;
    cin>>n;
    cout<<possible(n);  
  return 0;
}