/*
Coded by Siddharth Kumar Yadav
Email:siddharthsk101@gmail.com
Title:Shortest possible implementation of binary search 
*/

#include<bits/stdc++.h>
using namespace std;
int bsearch(vector<int>&v,int n,int find){
  int i(0),j(n-1),m(i+(j-i)/2); /* to prevent integer overflow */
  while(i<=j){
    if(v[m]==find)return m;
    (v[m]<find)?i=++m:j=--m;
  }
  return -1;
}
int main(){
  int n,find;
  cin>>n>>find;
  vector<int>v(n);
  for(auto &e:v)cin>>e;
  sort(v.begin(),v.end());
  cout<<"SORTED ORDER";
  for(auto x:v)cout<<x<<" ";
  cout<<endl<<"FOUND AT INDEX "<<bsearch(v,n,find);
  return 0;
}
