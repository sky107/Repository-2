#include <iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long us;

int a[100001];
int p[100001]={0};

void prime(){
    //first mark all odd number as prime
    for(int i=3;i<=10000;i+=2){
        p[i]=1;
    }
    for(int i=3;i<=10000;i+=2){
        //if current number is not marked it means it has prime

        if(p[i]==1){
            //mark all number multiple of i as not prime

            for(int j=i*i;j<=10000;j+i){
                p[j]=0;
            }
        }
    }
    //special caes
    p[2]=1;
    p[1]=p[0]=0;

}
int main(){ 
    int n;
    cin>>n;
    //lets all all as preime
    //from 2 to multiple of 2 mark
    //from 3 to mulitple of 
    //from 5 to multiple of 5 mark
    //nloglogn
    //for 10e18 approx O(n);
    for(int i=1;i<=78;i++){
        if(p[i]==1){
            cout<<i<<" ";
        }
    }
    
  return 0;
}