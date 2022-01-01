/*
Coded by: Siddharth Kumar Yadav
Email: siddharthsk101@gmail.com
*/

#include <iostream>
#include<bits/stdc++.h>
#include <list>
using namespace std;
int main() {
    list<int>l{1,2,3,4,6,7,7};
    //list acts as a doubly linked list to be accesed via pointers
    
    l.push_back(6);
    l.push_front(99);
    vector<int>v(5,5);
    l.sort();
    l.reverse();
    for_each(l.begin(),l.end(),[](int i){cout<<i<<" ";});
    l.pop_back();
    l.pop_front();
    l.remove(7);
    cout<<"FRONT"<<l.front()<<endl;
    //you cannot use l[<index>] bcz douly liked list is scattered
    
}

