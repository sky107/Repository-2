//https://www.geeksforgeeks.org/find-distinct-elements-common-rows-matrix/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 5;
    int a[][100] = {{12, 1, 14, 3, 16},
                    {14, 2, 1, 3, 35},
                    {14, 1, 14, 3, 11},
                    {14, 25, 3, 2, 1},
                    {1, 18, 3, 21, 14}};

    for (int i = 0; i < 5; i++)
        sort(a[i], a[i] + 5);

    int idx[n] = {0};
    int f = true;
    for (int j = 0; j < n; j++)
    {

        int value = a[0][j];
        bool present = true;
        for (int i = 1; i < n; i++)
        {

            while (idx[i] < n and a[i][idx[i]] <= value)
                idx[i]++;
            if (a[i][idx[i] - 1] != value)
                present = false;
            if (idx[i] == n)
            {
                f = 1;
                break;
            }

            if (present)
                cout << value << " ";
            if (f == 1)
            {
                break; // breaking means incrementing the first element of first row
            }
        }
    }

    return 0;
}