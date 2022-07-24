#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    double t, n , d, x, total;
    int flag;
    cin >> t;
    while(t--){
        flag = 0;
        cin >> n >> d;
        if(n>=d){
            cout << "YES" << "\n";
        }
        else{
            for(x=1; x<n; x++){
                total = ceil(d/(x+1)) + x;
                if(total <= n){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                cout << "YES" << "\n";
            }
            else if(flag == 0){
                cout << "NO" << "\n";
            }

        }

    }
    return 0;
}


/*
SAMPLE I/O


*/

