// #include <iostream>

// using namespace std;

// int a[100001];
// int b[100001];

// int main(){
//     int n;cin>>n;
//     for(int i=0;i<n;i++)cin>>a[i];
//     //Brute force 
//     b[0]=-1;
//     for(int i=1;i<n;i++){
//         bool fg=false;
//         for(int j=i-1;j>=0;j--){
//             if(a[i] < a[j])
//             {   fg=true;
//                 b[i]=a[j];
//             }
//         }
//         if(fg==false){
//             b[i]=-1;
//         }
//     }

//     for(int i=0;i<n;i++)cout<<b[i]<<" ";
//     return 0;
// }


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a[100001];
int b[100001];

int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    //stack approach

    stack<int>s1,s2;
    s1.push(a[0]);
    b[0]=-1;
    for(int i=1;i<n;i++){
        if(s1.top() > a[i])
        b[i]=s1.top();
        else
        {
            while(s1.empty()==false and s1.top() < a[i]){
                s2.push(s1.top());
                s1.pop();
            }

            if(s1.empty()==false){
                b[i]=s1.top();
            }
            else
            b[i]=-1;
            
            while(s2.empty()==false){
                s1.push(s2.top());
                s2.pop();
            }
        }
        s1.push(a[i]);
    }

    for(int i=0;i<n;i++)cout<<b[i]<<" ";
    
    return 0;
}