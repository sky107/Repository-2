/*
Siddharth Kumar Yadav
*/

using namespace std;
#include "bits/stdc++.h"

void print(char a[]){
    if(a[0]=='\0')
    return ;
    
    cout<<a[0];
    print(a+1);
    
}

void rprint(char a[]){
    if(a[0]=='\0')
    return ;
    
    rprint(a+1);
    cout<<a[0];
}

int len(char a[]){
    if(a[0]=='\0')
    return 0;
    return 1+len(a+1);
}

void rawithb(char a[]){
    if(a[0]=='\0')
    return ;
    if(a[0]=='a')
    a[0]=='b';
    rawithb(a+1);
    
}


int sstoi(char c[],int n){
    if(n==0){
        return 0;
    }
    int ans=sstoi(c,n-1);
    return ans*10 + c[n-1]-'0';
}

void ra(char a[]){  //removing all a
    if(a[0]=='\0')
    return ;
    
    if(a[0]=='a'){
        for(int i=0;a[i];i++){
           a[i]=a[i+1]; 
        }
        ra(a);
    }else
    ra(a+1);
}

void rcdup(char a[]){
    if(a[0]=='\0')
    return;
    
    if(a[0]==a[1]){
        for(int i=0;a[i];i++)
        a[i]=a[i+1];
        rcdup(a);
    }else{
        rcdup(a+1);
    }
}

int main(){
    
    char a[100001];
    cin>>a;
    // print(a);
    // rprint(a);
    // cout<<len(a);
    // rawithb(a);
    rcdup(a);
    
    puts(a);


	 char c[100001];
    int n;
    cin>>n;
    cin>>c;
    cout<<sstoi(c,n);
    return 0;
}