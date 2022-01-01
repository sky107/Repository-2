#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    vector<char>w;
    int n=str.size();
    for(int i=0;i<n;i++){
        if(i==0){
            w.push_back(str[i]);
            continue;
        }
        if(i==(n-1)){
            w.push_back(str[i]);
            continue;
        }
        if(str[i]==' ')
        w.push_back(str[i+1]);
    }
    for(auto x:w)cout<<x;
    
	
	return 0;
}
