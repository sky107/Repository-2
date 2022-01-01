//https://www.geeksforgeeks.org/find-the-kth-position-element-of-the-given-sequence/
#include <iostream>
#include <vector>
#include <stack>
#include <list>
#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n,k;
//     cin>>n>>k;
//     list<int>v;
//     stack<int>s;
//     for(int i=1;i<=n;i++){
//         if(i&1)s.push(i);
//         else
//         v.push_back(i);
//     }
//     while(s.empty()==false){v.push_front(s.top());s.pop();}
//     int c=0;
//     for(auto x:v){
//         c++;
//         if(c==k){
//             cout<<x<<" ";
//             break;
//         }

//     }

//     return 0;
// }

int main(){
    auto get=[&](int n,int k){
        int a=(n+1)/2;
        if(k>a){
            return 2*(k-a); // if the number is even 
        }
        return 2*k-1; //if the unumber is odd as usual
    }; 
    int n,k;
    cin>>n>>k;
    cout<<get(n,k)<<endl;




    return 0;
}