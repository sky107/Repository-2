//{ Driver Code Starts
//https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int>ans(2);
    ans[0]=-1;
    ans[1]=-1;
    
    int l=0,h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==x){
            ans[0]=mid;
            h=mid-1;
        }else if(arr[mid]>x){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    
    l=0,h=n-1;
    
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==x){
            ans[1]=mid;
            l=mid+1;
        }else if(arr[mid]>x){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    return ans;
    
    
    
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
