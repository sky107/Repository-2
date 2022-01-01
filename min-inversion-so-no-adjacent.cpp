// https://www.geeksforgeeks.org/minimum-inversions-required-so-that-no-two-adjacent-elements-are-same/
// since no two should be same so either possibility is 
// 0 1 0 1 0 1 ...  or 1 0 1 0 1 0 1 0 ..
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int a1(0),b1(0);
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[i]==0){
                a1++;
            }else 
            b1++;
        }else{
            if(a[i]==0){
                b1++;
            }else
            a1++;
        }
    }
    cout<<min(a1,b1)<<endl;

    return 0;
}




// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     vector<int>b;
//     vector<int>c;
//     int a1(0),a2(0);
//     for(int i=0;i<n;i++)
//    { cin>>a[i];
//     if(i&1)
//   {  b.push_back(1);c.push_back(0);}
//     else
//   {  b.push_back(0);c.push_back(1);}
//     if(b.back()!=a[i])a1++;
//     if(c.back()!=a[i])a2++;
    
//    }
//    cout<<min(a1,a2)<<endl;
//     return 0;
// }