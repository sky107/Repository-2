#include <iostream>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
typedef long long ll;
typedef unsigned long long us;

int a[100001];
int possible(int n){
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else if(n==2)
    return 2;
    return possible(n-1)+(n-1)*possible(n-2);
}
int main()
{
    fast int n;
    cin >> n;
    cout<<possible(n);
    return 0;
}