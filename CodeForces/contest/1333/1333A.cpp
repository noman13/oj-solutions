#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, m, i, j, pivot;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                if(j==0 && i==0){
                    cout << "W";
                }
                else{
                    cout << "B";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
