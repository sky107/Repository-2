//https://www.geeksforgeeks.org/form-n-by-adding-1-or-2-in-minimum-number-of-operations-x-where-x-is-divisible-by-m/
#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int num=0;
    int cnt(n/2);
    num=(n/2)*2;
    cout<<num<<endl;
    while(num!=n){num++;cnt++;} //n/2 wwill lead to decreast if n is odd else eqal to n/2
    while(cnt%m!=0){cnt++;}
    cout<<cnt<<endl;
    return 0;
}