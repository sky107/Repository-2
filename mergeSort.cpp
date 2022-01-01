/* 
Coded by Siddharth Kumar Yadav
Email: siddharthsk101@gmail.com
*/


#include "bits/stdc++.h"

using namespace std;

void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1],b[n2];
    
    for(int i=0;i<n1;i++)
    a[i]=arr[l+i];
    
    for(int i=0;i<n2;i++)
    b[i]=arr[mid+i+1];
    
    
    int i(0),j(0),k(l);
    while(i<n1 and j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;i++;
        }
        else{
            arr[k]=b[j];
            k++;j++;
        }
    }
    while(i<n1){arr[k]=a[i];k++;i++;}
    while(j<n2){arr[k]=b[j];k++;j++;}
}

void mergesort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
signed main(){
    int arr[]={5,4,3,2,1};
    mergesort(arr,0,4);
    for(auto e:arr)cout<<e<<" ";
}
