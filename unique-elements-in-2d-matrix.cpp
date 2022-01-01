//https://www.geeksforgeeks.org/find-unique-elements-matrix/
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int mat[4][4] = {{1, 2, 3, 20},
                     {5, 6, 20, 25},
                     {1, 3, 5, 6},
                     {6, 7, 8, 15}};
    int mx = 0, flag = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (mx < mat[i][j])
                mx = mat[i][j];
        }
    }

    int b[mx + 1] = {0};
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            b[mat[i][j]]++;
    int fg = 0;
    for (int i = 1; i <= mx; i++)
    {
        if (b[i] == 1)
        {
            cout << i << " ";
            fg = 1;
        }
    }
    if (!fg)
        cout << "No unique element exists\n";

    return 0;
}
