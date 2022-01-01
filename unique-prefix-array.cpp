//Siddharth Kumar Yadav

//Brute Force 

#include <bits/stdc++.h>
using namespace std;



void print_prefix(char* w,vector<vector<string>>& mega){
    
    vector<string>mini;
    string str="";
    for(int i=0;w[i]!='\0';i++){
       str+=w[i];
 
       mini.push_back(str);
    }
  
    mega.push_back(mini);
}


signed main(){
    char arr[][10]={"zebra","dog","duck","dove"};
    vector<vector<string>>mega;
    for(int i=0;i<4;i++){
     print_prefix(arr[i],mega);
    }
 
    unordered_map<string,int>mp;
    
    for(int i=0;i<mega.size();i++){
        for(int j=0;j<mega[i].size();j++){
            if(mp.count(mega[i][j])==0){
                mp[mega[i][j]]++;
                break;
            }
        }
    }
    for(auto x:mp){cout<<x.first<<endl;}
    
    
    
}
