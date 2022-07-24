#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t, g, b, n, half_n, b_days, ans;
    cin >> t;
    while(t--){
        ans=0;
        cin >> n >> g >> b;
        half_n = (n+1)/2;
        if(n<=g){
            cout << n << "\n";
        }

        else{
            b_days = (half_n-1)/g;
            b_days *=b;
            ans = b_days+half_n;
            cout << max(ans, n) << "\n";
        }
    }
    return 0;
}


/*
SAMPLE I/O

*/
