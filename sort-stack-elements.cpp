//https://www.geeksforgeeks.org/sort-stack-using-temporary-stack/
//https://www.youtube.com/watch?v=933UoS5iZPQ

#include <bits/stdc++.h>

using namespace std;

signed main(){
	stack<int>s;
	s.push(34);
    s.push(3);
    s.push(31);
    s.push(98);
    s.push(92);
    s.push(23);

    stack<int>st;
    
    while(s.empty()==false){
    	int temp=s.top();
    	s.pop();

    	while(!st.empty() and st.top() > temp){
    			s.push(st.top());
    			st.pop();
    	}

    	st.push(temp);
    }

    while(!st.empty()){
    	cout<<st.top()<<" ";
    	st.pop();
    }
}

