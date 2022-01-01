//https://www.geeksforgeeks.org/find-the-row-with-maximum-number-1s/
//O(mlog(n))
//using binary search in each row for traversing
#include <iostream>
using namespace std;

int main(){
    bool mat[4][4]={{0,0,0,1},
                    {0,1,1,1},
                    {1,1,1,1},
                    {0,0,0,0}};
    int ans=INT_MIN;
    int index=-1;
    for(int i=0;i<4;i++){
        int frstOne=-1;
        for(int j=0;j<4;j++){
            if(mat[i][j]==1)
            frstOne=j;
            break;
        }
        if(frstOne!=-1)
        {
            if(ans < (4-frstOne+1))
            {
                ans=5-frstOne;
                index=i;
            }
        }
    }

    cout<<((index==-1)?-1:index);
    return 0;
}