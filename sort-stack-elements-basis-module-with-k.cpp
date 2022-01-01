//https://www.geeksforgeeks.org/sort-the-given-stack-elements-based-on-their-modulo-with-k/

#include <bits/stdc++.h>
using namespace std;



signed main(){
	stack<int>s;
	s.push(10);
	s.push(3);
	s.push(2);
	s.push(6);
	s.push(12);
	int k=4;
	
	stack<int>st;

	while(s.empty()==false){
		int temp=s.top();
		s.pop();

		while(st.empty()==false){
            if(((temp%k >  st.top()%k)) or (temp%k==st.top()%k and temp > st.top()))
		{	s.push(st.top());
			st.pop();}else
			break;
		}
		st.push(temp);
	}

	while(st.empty()==false){
		cout<<st.top()<<" ";
		st.pop();
	}

}