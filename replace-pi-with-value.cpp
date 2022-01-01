//abcpisdfpi ==>abc3.14sdf3.14
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef unsigned long long us;

char a[100001];
// char b[10001];

void rp(int i){
    if(a[i]=='\0' or a[i+1]=='\0') return ;
    //look for pi at current loation
    if(a[i]=='p' and a[i+1]=='i'){
        //shifing + replacement with 3.14
        int j=i+2;
        while(a[j]!='\0')j++;
        //shifing right to left order
        while(j>=i+2){
            a[j+2]=a[j];
            j--;
        }
        //replacement + recursive call 
        a[i]='3';
        a[i+1]='.';
        a[i+2]='1';
        a[i+3]='4';
        rp(i+4);//recursive 

    }
    else{
        //go to the next positon
        rp(i+1);
    }
    return ;
}
int main(){ fast
    gets(a);
    rp(0);
    puts(a);
  return 0;
}