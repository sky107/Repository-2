//https://www.geeksforgeeks.org/find-next-greater-number-set-digits/
#include <iostream>
#include <algorithm>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef unsigned long long us;

int a[100001];

int main(){ fast
    string s="218765";
    const int n= s.size();  
    int i;//dont allocated separate for couting
    for( i=n-1;i>0;i--){
        if(s[i]>s[i-1])
        break;
    }

    if(i==0){
        cout<<"Not Possible";
        return 0;
    }

    int x=s[i-1],smallest=i;

    for(int j=i+1;j<n;j++){
        if(s[j]>x and s[j]<s[smallest])
        smallest=j;
    }

    swap(s[smallest],s[i-1]);
    sort(s.begin()+i,s.begin()+n);
    cout<<"Next number with same set of digits "<<s;

  return 0;
}