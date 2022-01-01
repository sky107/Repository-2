// #include <iostream>
// #include <algorithm>
// using namespace std;

// int a[100001];
// int main(){
//     int n;cin>>n;
//     int k;cin>>k;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     sort(a,a+n);
//     int firstOcc=-1;
//     int lastOcc=n;
//     while(++firstOcc<n){
//         if(a[firstOcc]==k)break;
//     }
//     while(--lastOcc){
//         if(a[lastOcc]==k)break;
//     }

//     cout<<lastOcc-firstOcc+1<<endl;
//     return 0;
// }


//finding second smallest number in array efficiently



#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int a[100001];
int main(){
    int n;cin>>n;
    priority_queue<int,vector<int>,greater<int>>q;
    for(int i=0;i<n;i++){
        cin>>a[i];
        q.push(a[i]);
    }
    q.pop();
    cout<<q.top()<<endl;
    
    return 0;
}
