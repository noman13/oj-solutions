#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t, n, i, j, sum, xr, pivot;
    vector<int> v;
    cin >> t;
    while(t--){
        v.clear();
        cin >> n;
        sum=0;
        xr=0;
        for(i=0; i<n; i++){
            cin >> pivot;
            v.pb(pivot);
            sum+=pivot;
            xr^=pivot;
        }
        if(sum==2*xr){
            cout << 0 << "\n\n";
        }
        else{
            cout << 2 << "\n";
            cout << xr << " " << sum+xr << "\n";
        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
