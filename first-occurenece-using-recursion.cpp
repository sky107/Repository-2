//Siddharth Kumar Yadav

#include <bits/stdc++.h>
using namespace std;

int getOccu(int* arr,int n,int key){
  if(n==0) return -1;
  if(arr[0]==key) return 0;
  
  int i=getOccu(arr+1,n-1,key);
  if(i==-1)return -1;
  
  return i+1;
}

int linearSearchusingRecurstion(int* arr,int i,int n,int key){
  if(i==n)
  return -1;
  
  if(arr[i]==key)
    return i;
  
 linearSearchusingRecurstion(arr,i+1,n,key);
}

signed main(){
  int arr[]={2,3,4,5,3,4,5,77,7};
  int n=sizeof(arr)/sizeof(int);
  int key=4;
  cout<<getOccu(arr,n,key)<<endl;
  cout<< linearSearchusingRecurstion(arr,0,n,key);
}

// #include <iostream>
// using namespace std;
// int key=0;
// int ans(int* arr,int i,int n){
//         if(i==n)
//         {
//             return -1;
//         }
        
//         if(arr[i]==key){
//             return i;
//             // exit(0);
//         }
//         cout<<"CALLED"<<endl;
//         ans(arr+1,i+1,n);
    
// }
// int main() {
// 	int arr[]={2,3,4,5,53,4,5,6,6};
// 	int n=sizeof(arr)/sizeof(int);
// 	key=5;
// 	cout<<ans(arr,0,n);
// 	return 0;
// }



// To get all occurences
// #include <iostream>
// using namespace std;

// void getOccur(int* arr, int i,int n,int key){
//     if(i==n){
//         return ;
//     }
//     if(arr[i]==key){
//         cout<<i<<" ";
//     }
//     getOccur(arr,i+1,n,key);
// }
// int main() {
    
//     int a[]={2,32,4,4,2,33,2,3,32,23};
//     int n=sizeof(a)/sizeof(int);
//     getOccur(a,0,n,4);
// 	// your code goes here
// 	return 0;
// }
