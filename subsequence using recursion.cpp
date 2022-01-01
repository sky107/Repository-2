#include <bits/stdc++.h>
using namespace std;
void ans(char *in,char *out,int i,int j){
    if(in[i]=='\0')
   { out[j]='\0';
    cout<<out<<endl;
    return ;}
    out[j]=in[i];
    ans(in,out,i+1,j+1);
    ans(in,out,i+1,j);
}
int main() {
    char in[]="abc";
    char out[10];
    ans(in,out,0,0);
return 0;
}
