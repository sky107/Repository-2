#include <iostream>
using namespace std;

typedef long long ll;
typedef unsigned long long us;

int a[100001];
int steps(int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
    {
        return 0;
    }
    else
        return steps(n - 1) + steps(n - 3) + steps(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << steps(n);
    return 0;
}