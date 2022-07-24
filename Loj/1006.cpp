
#include <bits/stdc++.h>
using namespace std;


typedef long long ll;



#define mod 10000007
ll a, b, c, d, e, f, n;
ll dp[10007];
ll fn( ll n ) {
    dp[0] = a; 
    dp[1] = b; 
    dp[2] = c; 
    dp[3] = d; 
    dp[4] = e; 
    dp[5] = f;
    for(ll i=6; i<=n; i++){
        dp[i] = ( dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4] + dp[i-5] + dp[i-6] );
        dp[i] = dp[i]%mod;
    }
    return dp[n];
}         

int main()
{
    
    ll t, i;
    cin >> t;
    for(i=1; i<=t; i++){
        cin >> a >> b >> c >> d >> e >> f >> n;
        ll ans;
        ans = fn(n);
        ans = ans%mod;
        cout << "Case " << i << ": "<< ans << endl; 
    }


    return 0;
}

/*
******SAMPLE I/O******
in:

out:

*/
