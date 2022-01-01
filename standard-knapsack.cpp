/*
Siddharth Kumar Yadav
*/
#include <iostream>
using namespace std;

int profit(int n,int C,int *wt,int *prices){
	if(n==0 || C==0){return 0;}

	//recusive cases
	int ans=0;
	int inc,exc;
	inc=exc=INT_MIN; //assuing -ve profit
	
	if(wt[n-1]<=C)
	inc=prices[n-1]+profit(n-1,C-wt[n-1],wt,prices);

	exc=profit(n-1,C,wt,prices);

	ans=max(exc,inc);
	return ans;


}

signed main(){
	int weights[]={1,2,3,5};
	int prices[]={40,20,30,100};
	int N=4;
	int C=7;
	cout<<profit(N,C,weights,prices);
}