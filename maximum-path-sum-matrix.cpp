//https://www.geeksforgeeks.org/maximum-path-sum-matrix/
//Similar to gold mine problem
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n(4), m(6);
    int a[n][m] = {{10, 10, 2, 0, 20, 4},
                   {1, 0, 0, 30, 2, 5},
                   {0, 10, 4, 0, 2, 0},
                   {1, 0, 2, 20, 0, 4}};

    int res = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (j > 0 and j < (m - 1))
                a[i][j] += max({a[i - 1][j], a[i - 1][j - 1], a[i - 1][j + 1]});
            else if (j > 0)
                a[i][j] += max({a[i - 1][j], a[i - 1][j - 1]});
            else if (j < m - 1)
                a[i][j] += max({a[i - 1][j], a[i - 1][j + 1]});
        }
    }

    for (int i = 0; i < m; i++)
        res = max(a[n - 1][i], res);
    cout << res <<" "<< endl;

    return 0;
}