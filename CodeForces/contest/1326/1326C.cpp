#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1)
#define mod 998244353
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n, k, i, j, pivot, mn=0, sz;
    ll mx=0, ans=1;
    vector<ll> p, a, in;
    cin >> n >> k;
    for(i=0; i<n; i++){
        cin >> pivot;
        p.pb(pivot);
    }
    a = p;
    sort(p.begin(), p.end(), greater<int>());
    for(i=0; i<k; i++){
        mx+=p[i];
    }
    mx%=mod;
    mn = p[k-1];
    //cout << mx;
    for(i=0; i<n; i++){
        if(a[i]>=mn){
            in.pb(i);
        }
    }
    sz = in.size();
    for(i=1; i<sz; i++){
        ans*=(in[i]-in[i-1]);
        ans%=mod;
    }

    cout << mx << " " << ans << "\n";
    return 0;
}


/*
SAMPLE I/O

*/
