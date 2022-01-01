/*
** Siddharth Kumar Yadav
*/
//https://www.codechef.com/COUPSYS

#include "bits/stdc++.h"

using namespace std;

const int mx=100001;
const int md=(int)10e9+7;

vector<int> dx_knight = { 2, 1, -1, -2, -2, -1, 1, 2 };
vector<int> dy_knight = { 1, 2, 2, 1, -1, -2, -2, -1 };



class node{

public:
    int l[3]={0};
};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); int t(1);
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<node>a;

        for(int i=0;i<n;i++){
            int x,y,z;
            cin >> x >> y >> z;

            node temp;
            temp.l[0]=x;
            temp.l[1]=y;
            temp.l[2]=z;
            a.push_back(temp);
        }

        pair<int,int>a1,a2,a3;

        a1={0,101};
        a2={0,101};
        a3={0,101};

        for(auto x:a){




            if(x.l[1]==1 and x.l[2] >= a1.first){

                if(x.l[0] > a1.second and x.l[2]==a1.first){
                    continue;
                }else{
                a1={x.l[2],x.l[0]};
                }
                
            }



            if(x.l[1]==2 and x.l[2] >= a2.first){

                if(x.l[0] > a2.second and x.l[2]==a2.first){
                    continue;
                }else{
                a2={x.l[2],x.l[0]};
                }
                
            }


            if(x.l[1]==3 and x.l[2] >= a3.first){

                if(x.l[0] > a3.second and x.l[2]==a3.first){
                    continue;
                }else{
                a3={x.l[2],x.l[0]};
                }
                
            }





        }

        cout << a1.first << " " << a1.second <<"\n";
        cout << a2.first << " " << a2.second <<"\n";
        cout << a3.first << " " << a3.second <<"\n";




    }
}
