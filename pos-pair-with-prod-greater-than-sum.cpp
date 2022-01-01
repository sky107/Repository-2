/** Siddharth Kumar Yadav **/
//https://www.geeksforgeeks.org/count-number-of-pairs-i-j-such-that-arri-arrj-arri-arrj/



#include <iostream>
#include <vector>

using namespace std;

signed main(){
  ios::sync_with_stdio(false);
  cin.tie(0);int t(1);
  // cin>>t;
  while(t--){

    int n;
    cin >> n;
    vector<int>a(n);


        // Jitne bhi two hai unke corrsponding two se bada wala case 
        // c_2 * c_o

        // nc2 else 

    int cnt2(0),cnto(0);


        for(int i=0;i<n;i++){

            cin >> a[i];

            if(a[i]==2)
                cnt2++;
            else if(a[i] > 2)
                cnto++;

        }


        long long ans= (cnt2* cnto)+ (cnto*(cnto-1)/2);

        cout << ans << "\n";




  }
}