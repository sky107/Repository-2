/*
Coded by: Siddharth Kumar Yadav
Email:siddharthksk101@gmail.com
*/

#include <iostream>
//Exponentiation using bit-masking
using namespace std;
int power_optimised(int a,int n){
    long long ans=1;
    while(n>0){
        int last_bit=(n&1);
        if(last_bit){
            ans=ans*a;
        }
        a*=a;
        n=n>>1;
    }
    return ans;
}
int main() {
    int a,n;
    cin>>a>>n;
    cout<<power_optimised(a,n);
    //pow(a,5) a^(101)
                //atmost log(n) set bits
    //suppose x=3 and y=5
    //if bit is 1-> mutliply by x (current)
    //if bit is 0 -> do nothing

    //2^6 -> a =2 | 6 =110 


}
